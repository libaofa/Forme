`timescale 1ns / 1ps

module Vga_Display(										//VGA显示模块
    input 		                  Clk		,		//65MHZ时钟
    input [2:0]               	Type		,		//图形选择
    input [7:0]    					Cur_1		,		//图形1方块位置
    input [7:0]               	Cur_2		,		//图形2方块位置
    input [7:0]               	Cur_3		,		//图形3方块位置
    input [7:0]               	Cur_4		,		//图形4方块位置
    input [251:0]						Game		,		//一维数组
    output reg [7:0]             RGB		,		//RGB332输出
    output wire                  Hsync		,		//行同步信号
    output wire                  Vsync				//场同步信号
    );

reg [10:0] H_Cnt = 0;			//行计数
reg [9:0] V_Cnt = 0;				//场计数

parameter 		WINDOW_WIDTH = 1024;			//行有效
parameter 		WINDOW_HEIGHT = 768;			//场有效
parameter 		HSYNC_PULSE_WIDTH = 136;	//行同步
parameter 		HSYNC_BACK_PORCH = 160;		//行后沿
parameter 		HSYNC_FRONT_PORCH = 24;		//行前沿
parameter 		VSYNC_PULSE_WIDTH = 6;		//场同步
parameter 		VSYNC_BACK_PORCH = 29;		//场后沿
parameter 		VSYNC_FRONT_PORCH = 3;		//场前沿
parameter		GREEN  = 8'b00_111_000;		//绿色
parameter		WHITE  = 8'b11_111_111;		//白色
parameter		BLACK  = 8'b00_000_000;		//黑色
parameter		BROWN  = 8'b01_000_010;		//棕色
parameter		YELLOW = 8'b10_111_111;		//黄色
parameter		PINK   = 8'b10_001_111;		//粉色
parameter		BULE   = 8'b11_110_000;		//蓝色
parameter		RED    = 8'b00_000_111;		//红色
parameter		GREY   = 8'b11_101_101;		//灰色
parameter		ORANGE = 8'b00_101_111;		//橙色
parameter		D_BLUE = 8'b11_000_000;		//深蓝色
parameter		BLOCK  = 8'b00_101_111;		//方块颜色（橙）
parameter		BLOCK_X_SIZE = 32;			//方块宽	
parameter		BLOCK_Y_SIZE = 40;			//方块高
parameter		BLOCKS_WIDE  = 14;			//游戏窗口列数
parameter		BLOCKS_HIGH  = 18;			//游戏窗口行数
parameter		BOARD_WIDTH  = (BLOCKS_WIDE * BLOCK_X_SIZE);				//游戏窗口宽
parameter		BOARD_HEIGHT = (BLOCKS_HIGH * BLOCK_Y_SIZE);				//游戏窗口高
parameter		BOARD_X = (((WINDOW_WIDTH - BOARD_WIDTH) / 2) - 1);	//游戏窗口左沿
parameter		BOARD_Y = (((WINDOW_HEIGHT - BOARD_HEIGHT) / 2) - 1);	//游戏窗口上沿
parameter		H_BACK  = HSYNC_PULSE_WIDTH + HSYNC_BACK_PORCH;			//行同步+行后沿
parameter		V_BACK  = VSYNC_PULSE_WIDTH + VSYNC_BACK_PORCH;			//场同步+场后沿
parameter		H_TOTAL = H_BACK + WINDOW_WIDTH + HSYNC_FRONT_PORCH;	//行计数计数范围
parameter		V_TOTAL = V_BACK + WINDOW_HEIGHT + VSYNC_FRONT_PORCH;	//场计数计数范围

assign Hsync = ~(H_Cnt >= (WINDOW_WIDTH + HSYNC_FRONT_PORCH) &&		//判断是否在行同步信号内
                     H_Cnt < (WINDOW_WIDTH + HSYNC_FRONT_PORCH + HSYNC_PULSE_WIDTH));
							
assign Vsync = ~(V_Cnt >= (WINDOW_HEIGHT + VSYNC_FRONT_PORCH) &&		//判断是否在场同步信号内
                     V_Cnt < (WINDOW_HEIGHT + VSYNC_FRONT_PORCH + VSYNC_PULSE_WIDTH));

wire [9:0] Cur_Index = ((H_Cnt-BOARD_X)/BLOCK_X_SIZE) + 
							(((V_Cnt-BOARD_Y)/BLOCK_Y_SIZE)*BLOCKS_WIDE);	//一维数组索引

wire		[679:0]	word_ji;							//存放字模行数据																					

Word	ji		(	.word(word_ji)				,		//字模模块例化
					.choose(V_Cnt-25)		
					); 

always @ (posedge Clk) begin																					
	if (H_Cnt >= BOARD_X && V_Cnt >= BOARD_Y &&			//在游戏窗口范围内
			H_Cnt <= BOARD_X + BOARD_WIDTH && V_Cnt <= BOARD_Y + BOARD_HEIGHT) begin
		if (H_Cnt == BOARD_X || H_Cnt == BOARD_X + BOARD_WIDTH ||		//游戏窗口边框
				V_Cnt == BOARD_Y || V_Cnt == BOARD_Y + BOARD_HEIGHT) begin
			RGB = WHITE;			//边框输出为白色
			end 
		else begin
			if (Cur_Index == Cur_1 ||
					Cur_Index == Cur_2 ||
						Cur_Index == Cur_3 ||
							Cur_Index == Cur_4) begin//图形内四个方块在数组中的索引
				case (Type)									//为图形上色
					3'b000: RGB = BLOCK;
               3'b001: RGB = BROWN;
               3'b010: RGB = PINK;
               3'b011: RGB = BULE;
               3'b100: RGB = RED;
               3'b101: RGB = GREEN;
               3'b110: RGB = D_BLUE;
               3'b111: RGB = GREEN;
               endcase
				end 
			else begin
				if(Game[Cur_Index] == 1) begin		//数组内元素为1
					RGB = ORANGE;							//输出为橙色
					end		
				else begin									//元素为0
					RGB = GREY;								//输出为灰色
					end
				end
			end
		if((H_Cnt-BOARD_X)%BLOCK_X_SIZE == 0 || 
				(V_Cnt-BOARD_Y)%BLOCK_Y_SIZE == 0) begin//网格
			RGB = WHITE;		//网格输出为白色
			end
		end
	else begin
      RGB = BLACK;
		end
	if(H_Cnt >= 172 && H_Cnt <= 679+172 &&						//字模输出位置
			V_Cnt >= 25 && V_Cnt <= 39+25 ) begin
		if(word_ji[679 - H_Cnt + 172] == 1) begin				//取字模行数据为1
			RGB = RED;		//字模输出为红色
			end
		end
   end
//行扫描计数器
always@(posedge Clk)begin
   if (H_Cnt==H_TOTAL-1) begin		//如果行计数记满
      H_Cnt<=11'b0;			//置0
      end
   else begin								//未记满
      H_Cnt<=H_Cnt+1'b1;				//计数加一
      end
   end

//场扫描计数器
always@(posedge Clk)begin		
   if(H_Cnt==H_TOTAL-1) begin				//如果行计数记满
      if(V_Cnt==V_TOTAL-1) begin	//如果场计数记满
			V_Cnt<=10'b0;				//置0
         end           
      else begin
         V_Cnt<=V_Cnt+1'b1; 		//计数加一
         end
      end
	else begin									//行计数未记满
      V_Cnt<=V_Cnt;							//保持
      end
   end
    

endmodule
