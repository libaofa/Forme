`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:59 04/04/2019 
// Design Name: 
// Module Name:    top_register_8 
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
module top_register_8  (CLK_TOP, RST_TOP, S_TOP, LOUT_TOP);  
input  				CLK_TOP	;
input  				RST_TOP	;  
input  	[2:0] 	S_TOP		;
output 	[7:0] 	LOUT_TOP	;
wire		[7:0] 	LOUT_TOP	;
wire		[7:0]		Div		;
wire					Mux		;

cnt_26bit 	t1(.Clk(CLK_TOP), .RST_N(~RST_TOP), .Clk_Div(Div));
mux_8_to_1	t2(.S(S_TOP), .I(Div), .MUX_OUT(Mux));
register_8	t3(.CLK_MUX(Mux), .RST_N(RST_TOP), .LOUT(LOUT_TOP));


endmodule