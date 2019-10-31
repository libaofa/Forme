`timescale 1ns / 1ps
module Cur_Control(							//游戏控制模块
	 input					Clk			, 	//65MHZ时钟
    input 	            Rst			,	//复位信号
    input	            Game_Clk		,	//游戏时钟
    input 	            Left_en		,	//左移使能
    input 	            Right_en		,	//右移使能
    input 	            Rotate_en	,	//旋转使能
    input 	            Down_en		,	//下降使能
	 input 		[7:0] 	Cur_1			,	//图形方块1位置
	 input 		[7:0] 	Cur_2			,	//图形方块2位置
	 input 		[7:0] 	Cur_3			,	//图形方块3位置
	 input 		[7:0] 	Cur_4			,	//图形方块4位置
	 input 		[2:0] 	Cur_Width	,	//图形宽
	 input 		[2:0] 	Cur_Height	,	//图形高
	 output		[251:0] 	Game			,	//一维数组
	 output 	   [3:0] 	Pos_X			,	//图形窗口内横坐标
    output	   [4:0] 	Pos_Y			,	//图形窗口内纵坐标
	 output 	 	[1:0]   	Cur_Rot		,	//图形旋转
	 output		[2:0]		Type				//图形选择
    );

reg 		[251:0] 	Game					;	
reg 		[2:0] 	Type					;	
reg 		[3:0] 	Pos_X					;
reg 		[4:0] 	Pos_Y					;
reg 		[1:0] 	Cur_Rot				;

reg 		[2:0] 	Random				;	//伪随机数

initial begin								 //初始化
	Type =  Random;					
	Pos_X = 6;
	Pos_Y = 0;
	Cur_Rot = 0;
	Game    = 0;
	Random  = 1;							
	end
							
always @ (posedge Clk) begin
	if (Random == 7) begin				//随机数等于7
		Random <= 1;						//置1
      end 
	else begin								//不等于7
      Random <= Random + 1;			//随机数加一
      end
   end


	
reg		[3:0]		Test_Pos_X			;	//定义下一状态方块横坐标
reg		[4:0]		Test_Pos_Y			;	//定义下一状态方块纵坐标
reg		[1:0] 	Test_Cur_Rot		;	//定义下一状态方块旋转

reg		[31:0]	New_Cur				;	//新方块四个方块的位置
reg 		[2:0] 	New_Width			;	//新方块的宽
reg		[2:0] 	New_Height			;	//新方块的高	
reg					Over					;	//游戏结束

always @ (posedge Clk or posedge Rst) begin
	if(Rst) begin						//复位信号为1
		Pos_X = 6;
		Pos_Y = 0;
		Cur_Rot = 0;
		Game = 0;
		end
	else begin							//复位信号为0
		if(&Game[251:238]) begin			//按位与第1行行满
			Game = {Game[237:0],14'b0};		//消行
			end
		if(&Game[237:224]) begin			//按位与第2行行满
			Game = {Game[251:238],Game[223:0],14'b0};	//消行
			end
		if(&Game[223:210]) begin			//按位与第3行行满
			Game = {Game[251:224],Game[209:0],14'b0};	//消行
			end
		if(&Game[209:196]) begin			//按位与第4行行满
			Game = {Game[251:210],Game[195:0],14'b0};	//消行
			end
		if(&Game[195:182]) begin			//按位与第5行行满
			Game = {Game[251:196],Game[181:0],14'b0};	//消行
			end
		if(&Game[181:168]) begin			//按位与第6行行满
			Game = {Game[251:182],Game[167:0],14'b0};	//消行
			end
		if(&Game[167:154]) begin			//按位与第7行行满
			Game = {Game[251:168],Game[153:0],14'b0};	//消行
			end
		if(&Game[153:140]) begin			//按位与第8行行满
			Game = {Game[251:154],Game[139:0],14'b0};	//消行
			end
		if(&Game[139:126]) begin			//按位与第9行行满
			Game = {Game[251:140],Game[125:0],14'b0};	//消行
			end
		if(&Game[125: 112]) begin			//按位与第10行行满
			Game = {14'b0,Game[251:126],Game[111:0]};	//消行
			end
		if(&Game[111: 98]) begin			//按位与第11行行满
			Game = {Game[251:112],Game[97:0],14'b0};	//消行
			end
		if(&Game[97 : 84]) begin			//按位与第12行行满
			Game = {Game[251:98],Game[83:0],14'b0};	//消行
			end
		if(&Game[83:70]) begin			//按位与第13行行满
			Game = {Game[251:84],Game[69:0],14'b0};	//消行
			end
		if(&Game[69:56]) begin			//按位与第14行行满
			Game = {Game[251:70],Game[55:0],14'b0};	//消行
			end
		if(&Game[55:42]) begin			//按位与第15行行满
			Game = {Game[251:56],Game[41:0],14'b0};	//消行
			end
		if(&Game[41:28]) begin			//按位与第16行行满
			Game = {Game[251:42],Game[27:0],14'b0};	//消行
			end
		if(&Game[27:14]) begin			//按位与第17行行满
			Game = {Game[251:28],Game[13:0],14'b0};	//消行
			end
		if(&Game[13:0]) begin			//按位与第18行行满
			Game = {Game[251:14],14'b0};					//消行
			end
		Over = |Game[13:0];						//第18行有方块游戏结束
		if(Over) begin
			Game = { 14'b011111_11_111110,//17		//方块显示位置
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
			Type = 0;							//不进行图形选择
			end
		else begin										//游戏未结束
			if(Game_Clk || Down_en) begin			//图形正常降落或下落使能
				Test_Pos_X = Pos_X;			//下一状态横坐标
				Test_Pos_Y = Pos_Y + 1; 	//下一状态纵坐标
				Test_Cur_Rot = Cur_Rot; 	//下一状态旋转
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);//调用Test_Cur任务
				if(Pos_Y + New_Height < 18 &&		//图形在游戏窗口内	
						!(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 	//判断是否碰撞
							Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin		
					Pos_Y = Test_Pos_Y;				//移动
					end
				else begin									
					Game[Cur_1] = 1;					//将图形内方块锁在位置
					Game[Cur_2] = 1;					//在数组内设为1
					Game[Cur_3] = 1;
					Game[Cur_4] = 1;
					Type = Random;						//选择新图形
					Pos_X = 6;							
					Pos_Y = 0;
					Cur_Rot = 0;
					end
				end
			else if (Left_en) begin					//左移使能有效
				Test_Pos_X = Pos_X - 1;		//下一状态横坐标										
				Test_Pos_Y = Pos_Y; 			//下一状态纵坐标
				Test_Cur_Rot = Cur_Rot; 	//下一状态旋转
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);	//调用Test_Cur任务
				if(Pos_X > 0 &&				//图形在游戏窗口内	
						!(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 		//判断是否无碰撞
							Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin		
					Pos_X = Test_Pos_X;				//移动
					end
				end 
			else if (Right_en) begin				//右移使能有效
				Test_Pos_X = Pos_X + 1;		//下一状态横坐标
				Test_Pos_Y = Pos_Y; 			//下一状态纵坐标
				Test_Cur_Rot = Cur_Rot; 	//下一状态旋转
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);	//调用Test_Cur任务
				if(Pos_X + New_Width < 14 &&		//图形在游戏窗口内
						!(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 		//判断是否无碰撞
							Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin     
					Pos_X = Test_Pos_X;
					end
				end 
			else if (Rotate_en) begin				//旋转使能有效
				Test_Pos_X = Pos_X;				//下一状态横坐标
				Test_Pos_Y = Pos_Y; 				//下一状态纵坐标
				Test_Cur_Rot = Cur_Rot + 1; 	//下一状态旋转
				Test_Cur(Test_Pos_X, Test_Pos_Y, Test_Cur_Rot, Type);					//旋转所需状态
				if (Pos_X + New_Width <= 14 &&		//图形在游戏窗口内
						Pos_Y + New_Height <= 18 &&
							 !(Game[New_Cur[7:0]] || Game[New_Cur[15:8]] || 	//判断是否无碰撞
									Game[New_Cur[23:16]]|| Game[New_Cur[31:24]])) begin
					Cur_Rot = Test_Cur_Rot;		//旋转
					end
				end
			end
		end
   end 
	                                                                                 
task	Test_Cur;														//Test_Cur
	input 	[3:0] 	Test_Pos_X			;					//下一状态横坐标
   input	   [4:0] 	Test_Pos_Y			;					//下一状态纵坐标
	input		[1:0]		Test_Cur_Rot		;				 	//下一状态旋转
	input		[2:0]		Test_Type			;					//图形选择												
   begin
		case (Test_Type)
		3'b000: begin												//清零状态
			New_Cur[7:0] = 8'b11111111;
         New_Cur[15:8] = 8'b11111111;
         New_Cur[23:16] = 8'b11111111;
         New_Cur[31:24] = 8'b11111111;
         New_Width = 0;
         New_Height = 0;
			end
      3'b001: begin//长条
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
      3'b010: begin//正方形
         New_Cur[7:0] = (Test_Pos_Y * 14) + Test_Pos_X;
         New_Cur[15:8] = (Test_Pos_Y * 14) + Test_Pos_X + 1;
         New_Cur[23:16] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X;
         New_Cur[31:24] = ((Test_Pos_Y + 1) * 14) + Test_Pos_X + 1;
         New_Width = 2;
         New_Height = 2;
         end
      3'b011: begin				//品型
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
		3'b100: begin			//Z型
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
      3'b101: begin																//反Z
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
		3'b111: begin		//反L
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
