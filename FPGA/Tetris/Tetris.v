module Tetris(									//�������
    input wire        		Clk_In	,		//100MHZʱ��
    input wire        		Rotate	,		//��ת
    input wire        		Left		,		//����
    input wire        		Right		,		//����
    input wire        		Down		,		//�½�
    input wire        		Pause		,		//��ͣ
    input wire        		Rst		,		//��λ
    output wire [7:0] 		RGB		,		//RGB332��ɫ
    output wire       		Hsync		,		//��ͬ���ź�
    output wire       		Vsync				//��ͬ���ź�
    );

wire		 	Clk	;											
Clk_65M		Clk_65M_  ( .Clk_IN(Clk_In)	,	//65MHZʱ��ģ��
								.Clk_65M(Clk)
									);
							
wire 		Rotate_En		;//��תʹ��
wire 		Left_En			;//����ʹ��
wire 		Right_En			;//����ʹ��
wire 		Down_En			;//����ʹ��
wire 		Count				;//����
/************��תȥ��********************/									
Debouncer De_Rotate (.Raw(Rotate)			,	
						   .Clk(Clk)				,
						   .Enabled(Rotate_En)
								);
/************����ȥ��********************/								
Debouncer De_Left   (.Raw(Left)				,
					      .Clk(Clk)				,
					      .Enabled(Left_En)
								);
/************����ȥ��********************/								
Debouncer De_Right  (.Raw(Right)				,
						   .Clk(Clk)				,
							.Enabled(Right_En)
								);
/************�½�ȥ��********************/								
Debouncer De_Down  ( .Raw(Down)				,
						   .Clk(Clk)				,
						   .Enabled(Down_En)
								);
								

wire [7:0] 		Cur_1			;		//ͼ�η���1λ��
wire [7:0] 		Cur_2			;		//ͼ�η���2λ��
wire [7:0] 		Cur_3			;		//ͼ�η���3λ��
wire [7:0] 		Cur_4			;		//ͼ�η���4λ��
wire [2:0] 		Cur_Width	;		//ͼ�ο�
wire [2:0] 		Cur_Height	;		//ͼ�θ�
wire [3:0] 		Pos_X			;		//ͼ�κ�����
wire [4:0] 		Pos_Y			;		//ͼ��������
wire [1:0] 		Cur_Rot		;		//ͼ����ת
wire [2:0] 		Type			;		//ͼ��ѡ��
wire [251:0]	Game;					//һά����

/************ͼ��ѡ��********************/	
Cur_Type	   c1 ( .Type(Type)			,
					  .Pos_X(Pos_X)		,
					  .Pos_Y(Pos_Y)		,
					  .Cur_Rot(Cur_Rot)	,
					  .Cur_1(Cur_1)		,
					  .Cur_2(Cur_2)		,
					  .Cur_3(Cur_3)		,
					  .Cur_4(Cur_4)		,
					  .Width(Cur_Width)	,
					  .Height(Cur_Height)
						);
									
wire 		 Game_Clk	;
/************��Ϸʱ��********************/	
Game_Clock 	g1  (.Clk(Clk)				,//��Ϸʱ��
					  .Pause(Pause)		,
					  .Rst(Rst)				,
					  .Game_Clk(Game_Clk)
						);
/************��Ϸ����********************/	
Cur_Control c2 (.Game_Clk(Game_Clk)				,
					 .Clk(Clk)							,
					 .Rst(Rst)							,
					 .Left_en(Left_En)				,
					 .Right_en(Right_En)				,
					 .Rotate_en(Rotate_En)			,
					 .Down_en(Down_En)				,
					 .Cur_1(Cur_1)						,
					 .Cur_2(Cur_2)						,
					 .Cur_3(Cur_3)						,
					 .Cur_4(Cur_4)						,
					 .Cur_Rot(Cur_Rot)				,
					 .Pos_X(Pos_X)						,
					 .Game(Game)						,
					 .Pos_Y(Pos_Y)						,
					 .Type(Type)				
						);
/************VGA��ʾ********************/	
Vga_Display d1 ( .Clk(Clk)				,
					  .Type(Type)			,
					  .Cur_1(Cur_1)		,
					  .Cur_2(Cur_2)		,
					  .Cur_3(Cur_3)		,
					  .Cur_4(Cur_4)		,
					  .Game(Game)			,
					  .RGB(RGB)				,
					  .Hsync(Hsync)		,
					  .Vsync(Vsync)	
						);	

endmodule