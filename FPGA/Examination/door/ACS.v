`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:49:40 06/02/2019
// Design Name:   door
// Module Name:   F:/git/FPGA/Examination/door/ACS.v
// Project Name:  door
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: door
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ACS;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg [3:0] C;
	reg [3:0] D;

	// Outputs
	wire [7:0] S;

	// Instantiate the Unit Under Test (UUT)
	door uut (
		.S(S), 
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D)
	);

	initial begin
		// Initialize Inputs
		A = 4'b0000;
		B = 4'b0010;
		C = 4'b0100;
		D = 4'b0111;
		#100;
        
		// Add stimulus here

	end
      
endmodule

