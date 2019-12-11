`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:21:37 05/07/2019
// Design Name:   set_7
// Module Name:   F:/git/FPGA/Examination/set_7/test.v
// Project Name:  set_7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: set_7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [3:0] A;
	reg Rst_n;

	// Outputs
	wire [6:0] S;

	// Instantiate the Unit Under Test (UUT)
	set_7 uut (
		.S(S), 
		.A(A), 
		.Rst_n(Rst_n)
	);

	initial begin
		// Initialize Inputs
		Rst_n = 1'b0;
		// Wait 100 ns for global reset to finish
		#50;
		Rst_n = 1'b1;
      A = 4'b0000;
		#50;
      A = 4'b0001;
		#50;
      A = 4'b0010;
		#50;
      A = 4'b0011;
		#50;
      A = 4'b0100;
		#50;
      A = 4'b0101;
		#50;
      A = 4'b0110;
		#50
      A = 4'b0111;
		#50;
      A = 4'b1000;
		#50;
      A = 4'b1001;
		#50;
		// Add stimulus here

	end
      
endmodule

