`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:19:28 05/07/2019 
// Design Name: 
// Module Name:    add_1bit 
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
module add_1bit(S1,Cout1,A1,B1,Cin);
output			S1		;
output			Cout1	;
input				A1		;
input				B1		;
input				Cin	;
wire				WS1,WC1,WC2;

half_add			h1(.S(WS1),.Cout(WC1),.A(A1),.B(B1));
half_add			h2(.S(S1),.Cout(WC2),.A(Cin),.B(WS1));
or					c1(Cout1,WC1,WC2);

endmodule
