`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:44 05/07/2019 
// Design Name: 
// Module Name:    half_add 
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
module half_add(S,Cout,A,B);
output			S		;
output			Cout	;
input				A		;
input				B		;

and			   g1(Cout, A, B);
xor				g2(S, A, B);

endmodule
