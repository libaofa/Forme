`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:38 04/03/2019 
// Design Name: 
// Module Name:    mux_8_to_1 
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
module mux_8_to_1  (S, I, MUX_OUT);  // 8?1
input  	[2:0]  	S			;
input  	[7:0]  	I			;
output  				MUX_OUT	;
reg					MUX_OUT	;

always @(*) begin
	case(S)
		3'b000:	MUX_OUT = I[0];
		3'b001:	MUX_OUT = I[1];
		3'b010:	MUX_OUT = I[2];
		3'b011:	MUX_OUT = I[3];
		3'b100:	MUX_OUT = I[4];
		3'b101:	MUX_OUT = I[5];
		3'b110:	MUX_OUT = I[6];
		default:	MUX_OUT = I[7];
		endcase
	end
endmodule
