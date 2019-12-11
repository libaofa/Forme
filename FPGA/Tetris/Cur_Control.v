`timescale 1ns / 1ps
module Cur_Control(							//��Ϸ����ģ��
	 input					Clk			, 	//65MHZʱ��
    input 	            Rst			,	//��λ�ź�
    input	            Game_Clk		,	//��Ϸʱ��
    input 	            Left_en		,	//����ʹ��
    input 	            Right_en		,	//����ʹ��
    input 	            Rotate_en	,	//��תʹ��
    input 	            Down_en		,	//�½�ʹ��
	 input 		[7:0] 	Cur_1			,	//ͼ�η���1λ��
	 input 		[7:0] 	Cur_2			,	//ͼ�η���2λ��
	 input 		[7:0] 	Cur_3			,	//ͼ�η���3λ��
	 input 		[7:0] 	Cur_4			,	//ͼ�η���4λ��
	 input 		[2:0] 	Cur_Width	,	//ͼ�ο�
	 input 		[2:0] 	Cur_Height	,	//ͼ�θ�
	 output		[251:0] 	Game			,	//һά����
	 output 	   [3:0] 	Pos_X			,	//ͼ�δ����ں�����
    output	   [4:0] 	Pos_Y			,	//ͼ�δ�����������
	 output 	 	[1:0]   	Cur_Rot		,	//ͼ����ת
	 output		[2:0]		Type				//ͼ��ѡ��
    );

reg 		[251:0] 	Game					;	
reg 		[2:0] 	Type					;	
reg 		[3:0] 	Pos_X					;
reg 		[4:0] 	Pos_Y					;
reg 		[1:0] 	Cur_Rot				;

reg 		[2:0] 	Random				;	//α�����

initial begin								 //��ʼ��
	Type =  Random;					
	Pos_X = 6;
	Pos_Y = 0;
	Cur_Rot = 0;
	Game    = 0;
	Random  = 1;							
	end
							
always @ (posedge Clk) begin
	if (Random == 7) begin				//���������7
		Random <= 1;						//��1
      end 
	else begin								//������7
      Random <= Random + 1;			//�������һ
      end
   end


	
reg		[3:0]		Test_Pos_X			;	//������һ״̬���������
reg		[4:0]		Test_Pos_Y			;	//������һ״̬����������
reg		[1:0] 	Test_Cur_Rot		;	//������һ״̬������ת

reg		[31:0]	New_Cur				;	//�·����ĸ������λ��
reg 		[2:0] 	New_Width			;	//�·���Ŀ�
reg		[2:0] 	New_Height			;	//�·���ĸ�	
reg					Over					;	//��Ϸ����

always @ (posedge Clk or posedge Rst) begin
	if(Rst) begin						//��λ�ź�Ϊ1
		Pos_X = 6;
		Pos_Y = 0;
		Cur_Rot = 0;
		Game = 0;
		end
	else begin							//��λ�ź�Ϊ0
		if(&Game[251:238]) begin			//��λ���1������
			Game = {Game[237:0],14'b0};		//����
			end
		if(&Game[237:224]) begin			//��λ���2������
			Game = {Game[251:238],Game[223:0],14'b0};	//����
			end
		if(&Game[223:210]) begin			//��λ���3������
			Game = {Game[251:224],Game[209:0],14'b0};	//����
			end
		if(&Game[209:196]) begin			//��λ���4������
			Game = {Game[251:210],Game[195:0],14'b0};	//����
			end
		if(&Game[195:182]) begin			//��λ���5������
			Game = {Game[251:196],Game[181:0],14'b0};	//����
			end
		if(&Game[181:168]) begin			//��λ���6������
			Game = {Game[251:182],Game[167:0],14'b0};	//����
			end
		if(&Game[167:154]) begin			//��λ���7������
			Game = {Game[251:168],Game[153:0],14'b0};	//����
			end
		if(&Game[153:140]) begin			//��λ���8������
			Game = {Game[251:154],Game[139:0],14'b0};	//����
			end
		if(&Game[139:126]) begin			//��λ���9������
			Game = {Game[251:140],Game[125:0],14'b0};	//����
			end
		if(&Game[125: 112]) begin			//��λ���10������
			Game = {14'b0,Game[251:126],Game[111:0]};	//����
			end
		if(&Game[111: 98]) begin			//��λ���11������
			Game = {Game[251:112],Game[97:0],14'b0};	//����
			end
		if(&Game[97 : 84]) begin			//��λ���12������
			Game = {Game[251:98],Game[83:0],14'b0};	//����
			end
		if(&Game[83:70]) begin			//��λ���13������
			Game = {Game[251:84],Game[69:0],14'b0};	//����
			end
		if(&Game[69:56]) begin			//��λ���14������
			Game = {Game[251:70],Game[55:0],14'b0};	//����
			end
		if(&Game[55:42]) begin			//��λ���15������
			Game = {Game[251:56],Game[41:0],14'b0};	//����
			end
		if(&Game[41:28]) begin			//��λ���16������
			Game = {Game[251:42],Game[27:0],14'b0};	//����
			end
		if(&Game[27:14]) begin			//��λ���17������
			Game = {Game[251:28],Game[13:0],14'b0};	//����
			end
		if(&Game[13:0]) begin			//��λ���18������
			Game = {Game[251:14],14'b0};					//����
			end
		Over = |Game[13:0];						//��18���з�����Ϸ����
		if(Over) begin
			Game = { 14'b011111_11_111110,//17		//������ʾλ��
						14'b000000_00_000000,//16
						14'b000000_00_000000,//15		//  O V
						14'b011001_00_111110,//14		//	 E R
						14'b000101_00_000010,//13
						14'b001111_00_011110,//12
						14'b010001_00_000010,//11
						14'b001111_00_111110,//10
						
						14'b000000_00_000000,//9
						14'b000000_00_000000,//8
						
						14'b000100_00_011100,//7
						14'b001010_00_100010,//6
						14'b001010_00_100010,//5
						14'b010001_00_100010,//4
						14'b010001_00_011100,//3
						
						14'b000000_00_000000,//2
						14'b000000_00_000000,//1
						14'b011111_11_111110	//0
						};
			Type = 0;							//������ͼ��ѡ��
			end
		else begin										//��Ϸδ����
			if(Game_Clk || Down_en) begin			//ͼ���������������ʹ��
				Test_Pos_X = Pos_X;			//��һ״̬������
				Test_Pos_Y = Pos_Y + 1; 	//��һ״̬������
				Test_Cur_Rot = Cur_Rot; 	//��һ״̬��ת
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);//����Test_Cur����
				if(Pos_Y + New_Height < 18 &&		//ͼ������Ϸ������	
						!(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 	//�ж��Ƿ���ײ
							Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin		
					Pos_Y = Test_Pos_Y;				//�ƶ�
					end
				else begin									
					Game[Cur_1] = 1;					//��ͼ���ڷ�������λ��
					Game[Cur_2] = 1;					//����������Ϊ1
					Game[Cur_3] = 1;
					Game[Cur_4] = 1;
					Type = Random;						//ѡ����ͼ��
					Pos_X = 6;							
					Pos_Y = 0;
					Cur_Rot = 0;
					end
				end
			else if (Left_en) begin					//����ʹ����Ч
				Test_Pos_X = Pos_X - 1;		//��һ״̬������										
				Test_Pos_Y = Pos_Y; 			//��һ״̬������
				Test_Cur_Rot = Cur_Rot; 	//��һ״̬��ת
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);	//����Test_Cur����
				if(Pos_X > 0 &&				//ͼ������Ϸ������	
						!(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 		//�ж��Ƿ�����ײ
							Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin		
					Pos_X = Test_Pos_X;				//�ƶ�
					end
				end 
			else if (Right_en) begin				//����ʹ����Ч
				Test_Pos_X = Pos_X + 1;		//��һ״̬������
				Test_Pos_Y = Pos_Y; 			//��һ״̬������
				Test_Cur_Rot = Cur_Rot; 	//��һ״̬��ת
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);	//����Test_Cur����
				if(Pos_X + New_Width < 14 &&		//ͼ������Ϸ������
						!(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 		//�ж��Ƿ�����ײ
							Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin     
					Pos_X = Test_Pos_X;
					end
				end 
			else if (Rotate_en) begin				//��תʹ����Ч
				Test_Pos_X = Pos_X;				//��һ״̬������
				Test_Pos_Y = Pos_Y; 				//��һ״̬������
				Test_Cur_Rot = Cur_Rot + 1; 	//��һ״̬��ת
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);					//��ת����״̬
				if (Pos_X + New_Width <= 14 &&		//ͼ������Ϸ������
						Pos_Y + New_Height <= 18 &&
							 !(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 	//�ж��Ƿ�����ײ
									Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin
					Cur_Rot = Test_Cur_Rot;		//��ת
					end
				end
			end
		end
   end 
	                                                                                 
task	Test_Cur;														//Test_Cur
	input 	[3:0] 	Test_Pos_X			;					//��һ״̬������
   input	   [4:0] 	Test_Pos_Y			;					//��һ״̬������
	input		[1:0]		Test_Cur_Rot		;				 	//��һ״̬��ת
	input		[2:0]		Test_Type			;					//ͼ��ѡ��												
   begin
		case (Test_Type)
		3'b000: begin												//����״̬
			New_Cur[7:0] = 8'b11111111;
         New_Cur[15:8] = 8'b11111111;
         New_Cur[23:16] = 8'b11111111;
         New_Cur[31:24] = 8'b11111111;
         New_Width = 0;
         New_Height = 0;
			end
      3'b001: begin//����
         if (Test_Cur_Rot == 0 || Test_Cur_Rot == 2) begin						
				New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
            New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
            New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X;
            New_Cur[31:24] = ((Test_Pos_Y + 3) * 14) + Test_Pos_X;
            New_Width = 1;
            New_Height = 4;
            end 
			else begin
            New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
            New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
            New_Cur[23:16] = (Test_Pos_Y * 14) + Test_Pos_X + 2;
            New_Cur[31:24] = (Test_Pos_Y * 14) + Test_Pos_X + 3;
            New_Width = 4;
            New_Height = 1;
            end
         end
      3'b010: begin//������
         New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
         New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
         New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
         New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
         New_Width = 2;
         New_Height = 2;
         end
      3'b011: begin				//Ʒ��
         case (Test_Cur_Rot)
				0: begin
					New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
               New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
               New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
               New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 2;
               New_Width = 3;
               New_Height = 2;
               end
            1: begin
               New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
               New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
               New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X;
               New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
               New_Width = 2;
               New_Height = 3;
               end
            2: begin
               New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
               New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
               New_Cur[23:16] = (Test_Pos_Y * 14) + Test_Pos_X + 2;
               New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
               New_Width = 3;
               New_Height = 2;
               end
            3: begin
               New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
               New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
               New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X + 1;
               New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
               New_Width = 2;
               New_Height = 3;
               end
            endcase
         end
		3'b100: begin			//Z��
			if (Test_Cur_Rot == 0 || Test_Cur_Rot == 2) begin
				New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
            New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X + 2;
            New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
            New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
            New_Width = 3;
            New_Height = 2;
				end 
			else begin
            New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
            New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
            New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
            New_Cur[31:24] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X + 1;
            New_Width = 2;
            New_Height = 3;
            end
			end
      3'b101: begin																//��Z
			if (Test_Cur_Rot == 0 || Test_Cur_Rot == 2) begin
				New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
            New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
            New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
            New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 2;
            New_Width = 3;
            New_Height = 2;
            end 
			else begin
            New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
            New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
            New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X;
            New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
            New_Width = 2;
            New_Height = 3;
            end
         end
      3'b110: begin			//L
			case (Test_Cur_Rot)
				0: begin
						New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
						New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
						New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X + 1;
						New_Cur[31:24] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X;
						New_Width = 2;
						New_Height = 3;
						end
            1: begin
						New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
						New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
						New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
						New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 2;
						New_Width = 3;
						New_Height = 2;
						end
            2: begin
                  New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
                  New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
                  New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X;
                  New_Cur[31:24] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
                  New_Width = 2;
                  New_Height = 3;
                  end
            3: begin
                  New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
                  New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
                  New_Cur[23:16] = (Test_Pos_Y * 14) + Test_Pos_X + 2;
                  New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 2;
                  New_Width = 3;
                  New_Height = 2;
                  end
             endcase
          end
		3'b111: begin		//��L
			case (Test_Cur_Rot)
				0: begin
						New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
                  New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
                  New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X;
                  New_Cur[31:24] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X + 1;
                  New_Width = 2;
                  New_Height = 3;
                  end
            1: begin
                  New_Cur[7:0] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
                  New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X;
                  New_Cur[23:16] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
                  New_Cur[31:24] = (Test_Pos_Y * 14) + Test_Pos_X + 2;
                  New_Width = 3;
                  New_Height = 2;
                  end
            2: begin
                  New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
                  New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
                  New_Cur[23:16] = ((Test_Pos_Y + 2) * 14) + Test_Pos_X + 1;
                  New_Cur[31:24] = (Test_Pos_Y * 14) + Test_Pos_X;
                  New_Width = 2;
                  New_Height = 3;
                  end
            3: begin
                  New_Cur[7:0] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
                  New_Cur[15:8] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
                  New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 2;
                  New_Cur[31:24] = (Test_Pos_Y * 14) + Test_Pos_X + 2;
                  New_Width = 3;
                  New_Height = 2;
                  end
					endcase
				end
			endcase
      end
	endtask

endmodule
