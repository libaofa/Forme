module Tetris(									//输入输出
    input wire        		Clk_In	,		//100MHZ时钟
    input wire        		Rotate	,		//旋转
    input wire        		Left		,		//左移
    input wire        		Right		,		//右移
    input wire        		Down		,		//下降
    input wire        		Pause		,		//暂停
    input wire        		Rst		,		//复位
    output wire [7:0] 		RGB		,		//RGB332颜色
    output wire       		Hsync		,		//行同步信号
    output wire       		Vsync				//场同步信号
    );

wire		 	Clk	;											
Clk_65M		Clk_65M_  ( .Clk_IN(Clk_In)	,	//65MHZ时钟模块
								.Clk_65M(Clk)
									);
							
wire 		Rotate_En		;//旋转使能
wire 		Left_En			;//左移使能
wire 		Right_En			;//右移使能
wire 		Down_En			;//下落使能
wire 		Count				;//计数
/************旋转去抖********************/									
Debouncer De_Rotate (.Raw(Rotate)			,	
						   .Clk(Clk)				,
						   .Enabled(Rotate_En)
								);
/************左移去抖********************/								
Debouncer De_Left   (.Raw(Left)				,
					      .Clk(Clk)				,
					      .Enabled(Left_En)
								);
/************右移去抖********************/								
Debouncer De_Right  (.Raw(Right)				,
						   .Clk(Clk)				,
							.Enabled(Right_En)
								);
/************下降去抖********************/								
Debouncer De_Down  ( .Raw(Down)				,
						   .Clk(Clk)				,
						   .Enabled(Down_En)
								);
								

wire [7:0] 		Cur_1			;		//图形方块1位置
wire [7:0] 		Cur_2			;		//图形方块2位置
wire [7:0] 		Cur_3			;		//图形方块3位置
wire [7:0] 		Cur_4			;		//图形方块4位置
wire [2:0] 		Cur_Width	;		//图形宽
wire [2:0] 		Cur_Height	;		//图形高
wire [3:0] 		Pos_X			;		//图形横坐标
wire [4:0] 		Pos_Y			;		//图形纵坐标
wire [1:0] 		Cur_Rot		;		//图形旋转
wire [2:0] 		Type			;		//图形选择
wire [251:0]	Game;					//一维数组

/************图形选择********************/	
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
/************游戏时钟********************/	
Game_Clock 	g1  (.Clk(Clk)				,//游戏时钟
					  .Pause(Pause)		,
					  .Rst(Rst)				,
					  .Game_Clk(Game_Clk)
						);
/************游戏控制********************/	
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
/************VGA显示********************/	
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