`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:40:22 04/02/2019 
// Design Name: 
// Module Name:    cnt_26bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cnt_26bit(Clk, RST_N, Clk_Div);  // 上升沿有效，低电平异步复位
parameter Count_1s = {1'b1,26'b0};
input  			Clk		;
input  			RST_N		;
output  [7:0]  Clk_Div	;
reg	  [25:0]	Cnt		;///////
reg 	  [7:0]	Clk_Div	;
reg				dout_1s	;
	
always @(posedge Clk or negedge RST_N) begin
	if(!RST_N) begin
		Clk_Div <= 8'b0;
		end
	else if(Cnt[17:0] == 18'b0) begin////////////
		Clk_Div <= Clk_Div + 1'b1;
		end
	else if(Cnt == Count_1s - 1'b1 && Clk_Div == 8'b11111111) begin/////
		Clk_Div <= 8'b0;
		end
	else begin
		Clk_Div <= Clk_Div;
		end
	end

always @(posedge Clk or negedge RST_N) begin
	if(!RST_N) begin
		Cnt <= 26'b0;////////////
		end
	else if(Cnt[17:0] == Count_1s - 1'b1) begin
		Cnt <= 26'b0;/////////////
		end
	else begin
		Cnt <= Cnt + 1'b1;
		end
	end

/*always @(posedge Clk or negedge RST_N) begin
	if(!RST_N) begin
		Cnt <= 26'b0;////////////
		end
	else if(Cnt == Count_1s - 1'b1) begin
		Cnt <= 26'b0;/////////////
		end
	else begin
		Cnt <= Cnt + 1'b1;
		end
	end*/
	
/*always @(posedge Clk or negedge RST_N) begin
	if(!RST_N) begin
		Clk_Div <= 8'b0;
		end
	else  begin
		if(Cnt[25] != Clk_Div[7])begin
			Clk_Div[7] <= ~Clk_Div[7];
			end
		else begin
			Clk_Div[7] <= Clk_Div[7];
			end
		if(Cnt[24] != Clk_Div[6])begin
			Clk_Div[6] <= ~Clk_Div[6];
			end
		else begin
			Clk_Div[6] <= Clk_Div[6];
			end
		if(Cnt[23] != Clk_Div[5])begin
			Clk_Div[5] <= ~Clk_Div[5];
			end
		else begin
			Clk_Div[5] <= Clk_Div[5];
			end
		if(Cnt[22] != Clk_Div[4])begin
			Clk_Div[4] <= ~Clk_Div[4];
			end
		else begin
			Clk_Div[4] <= Clk_Div[4];
			end
		if(Cnt[21] != Clk_Div[3])begin
			Clk_Div[3] <= ~Clk_Div[3];
			end
		else begin
			Clk_Div[3] <= Clk_Div[3];
			end
		if(Cnt[20] != Clk_Div[2])begin
			Clk_Div[2] <= ~Clk_Div[2];
			end
		else begin
			Clk_Div[2] <= Clk_Div[2];
			end
		if(Cnt[19] != Clk_Div[1])begin
			Clk_Div[1] <= ~Clk_Div[1];
			end
		else begin
			Clk_Div[1] <= Clk_Div[1];
			end
		if(Cnt[18] != Clk_Div[0])begin
			Clk_Div[0] <= ~Clk_Div[0];
			end
		else begin
			Clk_Div[0] <= Clk_Div[0];
			end
		end
	end*/


	
/*always @(*) begin
	if(Cnt[17:0] == 18'b1) begin///
		dout_1s <= 1'b1;
		end
	else begin
		dout_1s <= 1'b0;
		end
	end*/
	
endmodule
