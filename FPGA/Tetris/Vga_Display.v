`timescale 1ns / 1ps

module Vga_Display(										//VGA��ʾģ��
    input 		                  Clk		,		//65MHZʱ��
    input [2:0]               	Type		,		//ͼ��ѡ��
    input [7:0]    					Cur_1		,		//ͼ��1����λ��
    input [7:0]               	Cur_2		,		//ͼ��2����λ��
    input [7:0]               	Cur_3		,		//ͼ��3����λ��
    input [7:0]               	Cur_4		,		//ͼ��4����λ��
    input [251:0]						Game		,		//һά����
    output reg [7:0]             RGB		,		//RGB332���
    output wire                  Hsync		,		//��ͬ���ź�
    output wire                  Vsync				//��ͬ���ź�
    );

reg [10:0] H_Cnt = 0;			//�м���
reg [9:0] V_Cnt = 0;				//������

parameter 		WINDOW_WIDTH = 1024;			//����Ч
parameter 		WINDOW_HEIGHT = 768;			//����Ч
parameter 		HSYNC_PULSE_WIDTH = 136;	//��ͬ��
parameter 		HSYNC_BACK_PORCH = 160;		//�к���
parameter 		HSYNC_FRONT_PORCH = 24;		//��ǰ��
parameter 		VSYNC_PULSE_WIDTH = 6;		//��ͬ��
parameter 		VSYNC_BACK_PORCH = 29;		//������
parameter 		VSYNC_FRONT_PORCH = 3;		//��ǰ��
parameter		GREEN  = 8'b00_111_000;		//��ɫ
parameter		WHITE  = 8'b11_111_111;		//��ɫ
parameter		BLACK  = 8'b00_000_000;		//��ɫ
parameter		BROWN  = 8'b01_000_010;		//��ɫ
parameter		YELLOW = 8'b10_111_111;		//��ɫ
parameter		PINK   = 8'b10_001_111;		//��ɫ
parameter		BULE   = 8'b11_110_000;		//��ɫ
parameter		RED    = 8'b00_000_111;		//��ɫ
parameter		GREY   = 8'b11_101_101;		//��ɫ
parameter		ORANGE = 8'b00_101_111;		//��ɫ
parameter		D_BLUE = 8'b11_000_000;		//����ɫ
parameter		BLOCK  = 8'b00_101_111;		//������ɫ���ȣ�
parameter		BLOCK_X_SIZE = 32;			//�����	
parameter		BLOCK_Y_SIZE = 40;			//�����
parameter		BLOCKS_WIDE  = 14;			//��Ϸ��������
parameter		BLOCKS_HIGH  = 18;			//��Ϸ��������
parameter		BOARD_WIDTH  = (BLOCKS_WIDE * BLOCK_X_SIZE);				//��Ϸ���ڿ�
parameter		BOARD_HEIGHT = (BLOCKS_HIGH * BLOCK_Y_SIZE);				//��Ϸ���ڸ�
parameter		BOARD_X = (((WINDOW_WIDTH - BOARD_WIDTH) / 2) - 1);	//��Ϸ��������
parameter		BOARD_Y = (((WINDOW_HEIGHT - BOARD_HEIGHT) / 2) - 1);	//��Ϸ��������
parameter		H_BACK  = HSYNC_PULSE_WIDTH + HSYNC_BACK_PORCH;			//��ͬ��+�к���
parameter		V_BACK  = VSYNC_PULSE_WIDTH + VSYNC_BACK_PORCH;			//��ͬ��+������
parameter		H_TOTAL = H_BACK + WINDOW_WIDTH + HSYNC_FRONT_PORCH;	//�м���������Χ
parameter		V_TOTAL = V_BACK + WINDOW_HEIGHT + VSYNC_FRONT_PORCH;	//������������Χ

assign Hsync = ~(H_Cnt >= (WINDOW_WIDTH + HSYNC_FRONT_PORCH) &&		//�ж��Ƿ�����ͬ���ź���
                     H_Cnt < (WINDOW_WIDTH + HSYNC_FRONT_PORCH + HSYNC_PULSE_WIDTH));
							
assign Vsync = ~(V_Cnt >= (WINDOW_HEIGHT + VSYNC_FRONT_PORCH) &&		//�ж��Ƿ��ڳ�ͬ���ź���
                     V_Cnt < (WINDOW_HEIGHT + VSYNC_FRONT_PORCH + VSYNC_PULSE_WIDTH));

wire [9:0] Cur_Index = ((H_Cnt-BOARD_X)/BLOCK_X_SIZE) + 
							(((V_Cnt-BOARD_Y)/BLOCK_Y_SIZE)*BLOCKS_WIDE);	//һά��������

wire		[679:0]	word_ji;							//�����ģ������																					

Word	ji		(	.word(word_ji)				,		//��ģģ������
					.choose(V_Cnt-25)		
					); 

always @ (posedge Clk) begin																					
	if (H_Cnt >= BOARD_X && V_Cnt >= BOARD_Y &&			//����Ϸ���ڷ�Χ��
			H_Cnt <= BOARD_X + BOARD_WIDTH && V_Cnt <= BOARD_Y + BOARD_HEIGHT) begin
		if (H_Cnt == BOARD_X || H_Cnt == BOARD_X + BOARD_WIDTH ||		//��Ϸ���ڱ߿�
				V_Cnt == BOARD_Y || V_Cnt == BOARD_Y + BOARD_HEIGHT) begin
			RGB = WHITE;			//�߿����Ϊ��ɫ
			end 
		else begin
			if (Cur_Index == Cur_1 ||
					Cur_Index == Cur_2 ||
						Cur_Index == Cur_3 ||
							Cur_Index == Cur_4) begin//ͼ�����ĸ������������е�����
				case (Type)									//Ϊͼ����ɫ
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
				if(Game[Cur_Index] == 1) begin		//������Ԫ��Ϊ1
					RGB = ORANGE;							//���Ϊ��ɫ
					end		
				else begin									//Ԫ��Ϊ0
					RGB = GREY;								//���Ϊ��ɫ
					end
				end
			end
		if((H_Cnt-BOARD_X)%BLOCK_X_SIZE == 0 || 
				(V_Cnt-BOARD_Y)%BLOCK_Y_SIZE == 0) begin//����
			RGB = WHITE;		//�������Ϊ��ɫ
			end
		end
	else begin
      RGB = BLACK;
		end
	if(H_Cnt >= 172 && H_Cnt <= 679+172 &&						//��ģ���λ��
			V_Cnt >= 25 && V_Cnt <= 39+25 ) begin
		if(word_ji[679 - H_Cnt + 172] == 1) begin				//ȡ��ģ������Ϊ1
			RGB = RED;		//��ģ���Ϊ��ɫ
			end
		end
   end
//��ɨ�������
always@(posedge Clk)begin
   if (H_Cnt==H_TOTAL-1) begin		//����м�������
      H_Cnt<=11'b0;			//��0
      end
   else begin								//δ����
      H_Cnt<=H_Cnt+1'b1;				//������һ
      end
   end

//��ɨ�������
always@(posedge Clk)begin		
   if(H_Cnt==H_TOTAL-1) begin				//����м�������
      if(V_Cnt==V_TOTAL-1) begin	//�������������
			V_Cnt<=10'b0;				//��0
         end           
      else begin
         V_Cnt<=V_Cnt+1'b1; 		//������һ
         end
      end
	else begin									//�м���δ����
      V_Cnt<=V_Cnt;							//����
      end
   end
    

endmodule
