`timescale 1ns / 1ps
module Cur_Type(									//ͼ��ѡ��ģ��
    input		[2:0] 		Type		,		//ͼ��ѡ��
    input 		[3:0] 		Pos_X		,		//ͼ�κ�����
    input		[4:0] 		Pos_Y		,		//ͼ��������
    input 		[1:0] 		Cur_Rot	,		//ͼ����ת
    output reg [7:0] 		Cur_1		,		//ͼ�η���1λ��
    output reg [7:0] 		Cur_2		,		//ͼ�η���2λ��
    output reg [7:0] 		Cur_3		,		//ͼ�η���3λ��
    output reg [7:0] 		Cur_4		,		//ͼ�η���4λ��
    output reg [2:0] 		Width		,		//ͼ�ο�
    output reg [2:0] 		Height			//ͼ�θ�
    );
	 
parameter					BLOCKS_WIDE = 14			;//�����������
    
always @ (*) begin
	case (Type)
		3'b000: begin		//��ͼ��
			Cur_1 = 8'b11111111;//����״̬
         Cur_2 = 8'b11111111;
         Cur_3 = 8'b11111111;
         Cur_4 = 8'b11111111;
         Width = 0;
         Height = 0;
         end
      3'b001: begin		//����
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
      3'b010: begin		//������
         Cur_1 = (Pos_Y * BLOCKS_WIDE) + Pos_X;
         Cur_2 = (Pos_Y * BLOCKS_WIDE) + Pos_X + 1;
         Cur_3 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X;
         Cur_4 = ((Pos_Y + 1) * BLOCKS_WIDE) + Pos_X + 1;
         Width = 2;
         Height = 2;
         end
      3'b011: begin		//Ʒ��
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
		3'b100: begin	//Z��
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
      3'b101: begin	//��Z
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
      3'b110: begin	//L��
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
		3'b111: begin	//��L
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
