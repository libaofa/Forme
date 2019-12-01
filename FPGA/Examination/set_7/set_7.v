`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:54 05/07/2019 
// Design Name: 
// Module Name:    set_7 
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
module set_7(S,A,Rst_n);
parameter      		DATA_0 = 7'b0000_001;        //a-g顺序，显示数字"0"
parameter      		DATA_1 = 7'b1001_111;        //a-g顺序，显示数字"1"
parameter      		DATA_2 = 7'b0010_010;        //a-g顺序，显示数字"2"
parameter      		DATA_3 = 7'b0000_110;        //a-g顺序，显示数字"3"
parameter      		DATA_4 = 7'b1001_100;        //a-g顺序，显示数字"4"
parameter      		DATA_5 = 7'b0100_100;        //a-g顺序，显示数字"5"
parameter      		DATA_6 = 7'b0100_000;        //a-g顺序，显示数字"6"
parameter      		DATA_7 = 7'b0001_111;        //a-g顺序，显示数字"7"
parameter     			DATA_8 = 7'b0000_000;        //a-g顺序，显示数字"8"
parameter      		DATA_9 = 7'b0000_100;        //a-g顺序，显示数字"9"
output		[6:0]		S		;
input			[3:0]		A		;
input						Rst_n	;
reg			[6:0]		S;

always @(*) begin
	if(!Rst_n)	begin
		S = DATA_0;
		end
	else begin
		case(A)
			4'b0000:		S = DATA_0;
         4'b0001:		S = DATA_1;
         4'b0010:		S = DATA_2;
         4'b0011:		S = DATA_3;
         4'b0100:		S = DATA_4;
         4'b0101:		S = DATA_5;
         4'b0110:		S = DATA_6;
         4'b0111:		S = DATA_7;
         4'b1000:		S = DATA_8;
         4'b1001:		S = DATA_9;
         default:		S = 7'b1111_111;
			endcase
		end
	end

endmodule
