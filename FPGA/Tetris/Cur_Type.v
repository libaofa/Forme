`timescale 1ns / 1ps
module Cur_Type(									//图形选择模块
    input		[2:0] 		Type		,		//图形选择
    input 		[3:0] 		Pos_X		,		//图形横坐标
    input		[4:0] 		Pos_Y		,		//图形纵坐标
    input 		[1:0] 		Cur_Rot	,		//图形旋转
    output reg [7:0] 		Cur_1		,		//图形方块1位置
    output reg [7:0] 		Cur_2		,		//图形方块2位置
    output reg [7:0] 		Cur_3		,		//图形方块3位置
    output reg [7:0] 		Cur_4		,		//图形方块4位置
    output reg [2:0] 		Width		,		//图形宽
    output reg [2:0] 		Height			//图形高
    );
	 
parameter					BLOCKS_WIDE = 14			;//定义参数行数
    
always @ (*) begin
	case (Type)
		3'b000: begin		//无图形
			Cur_1 = 8'b11111111;//清零状态
         Cur_2 = 8'b11111111;
         Cur_3 = 8'b11111111;
         Cur_4 = 8'b11111111;
         Width = 0;
         Height = 0;
         end
      3'b001: begin		//长条
         if (Cur_Rot == 0 || Cur_Rot == 2) begin
				Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
            Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
            Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X;
            Cur_4 = ((Pos_Y + 3) * BLOCKS_WIDE) + Pos_X;
            Width = 1;
            Height = 4;
            end 
			else begin
            Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
            Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
            Cur_3 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 2;
            Cur_4 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 3;
            Width = 4;
            Height = 1;
            end
         end
      3'b010: begin		//正方形
         Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
         Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
         Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
         Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
         Width = 2;
         Height = 2;
         end
      3'b011: begin		//品形
         case (Cur_Rot)
				0: begin
					Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
               Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
               Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
               Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 2;
               Width = 3;
               Height = 2;
               end
            1: begin
               Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
               Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
               Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X;
               Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
               Width = 2;
               Height = 3;
               end
            2: begin
               Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
               Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
               Cur_3 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 2;
               Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
               Width = 3;
               Height = 2;
               end
            3: begin
               Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
               Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
               Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X + 1;
               Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
               Width = 2;
               Height = 3;
               end
            endcase
         end
		3'b100: begin	//Z形
			if (Cur_Rot == 0 || Cur_Rot == 2) begin
				Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
            Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 2;
            Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
            Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
            Width = 3;
            Height = 2;
				end 
			else begin
            Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
            Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
            Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
            Cur_4 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X + 1;
            Width = 2;
            Height = 3;
            end
			end
      3'b101: begin	//反Z
			if (Cur_Rot == 0 || Cur_Rot == 2) begin
				Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
            Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
            Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
            Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 2;
            Width = 3;
            Height = 2;
            end 
			else begin
            Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
            Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
            Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X;
            Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
            Width = 2;
            Height = 3;
            end
         end
      3'b110: begin	//L形
			case (Cur_Rot)
				0: begin
						Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
						Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
						Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X + 1;
						Cur_4 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X;
						Width = 2;
						Height = 3;
						end
            1: begin
						Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
						Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
						Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
						Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 2;
						Width = 3;
						Height = 2;
						end
            2: begin
                  Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
                  Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
                  Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X;
                  Cur_4 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
                  Width = 2;
                  Height = 3;
                  end
            3: begin
                  Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
                  Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
                  Cur_3 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 2;
                  Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 2;
                  Width = 3;
                  Height = 2;
                  end
             endcase
          end
		3'b111: begin	//反L
			case (Cur_Rot)
				0: begin
						Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
                  Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
                  Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X;
                  Cur_4 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X + 1;
                  Width = 2;
                  Height = 3;
                  end
            1: begin
                  Cur_1 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
                  Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
                  Cur_3 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
                  Cur_4 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 2;
                  Width = 3;
                  Height = 2;
                  end
            2: begin
                  Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
                  Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
                  Cur_3 = ((Pos_Y + 2) * BLOCKS_WIDE) + Pos_X + 1;
                  Cur_4 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
                  Width = 2;
                  Height = 3;
                  end
            3: begin
                  Cur_1 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
                  Cur_2 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
                  Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 2;
                  Cur_4 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 2;
                  Width = 3;
                  Height = 2;
                  end
					endcase
				end
			endcase
		end

endmodule
