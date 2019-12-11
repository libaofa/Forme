`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:44:47 05/07/2019
// Design Name:   add_1bit
// Module Name:   F:/git/FPGA/Examination/add_1bit/test.v
// Project Name:  add_1bit
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: add_1bit
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
	reg A1;
	reg B1;
	reg Cin;

	// Outputs
	wire S1;
	wire Cout1;

	// Instantiate the Unit Under Test (UUT)
	add_1bit uut (
		.S1(S1), 
		.Cout1(Cout1), 
		.A1(A1), 
		.B1(B1), 
		.Cin(Cin)
	);

	initial begin
		// Initialize Inputs
		A1 = 0;
		B1 = 0;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A1 = 0;
		B1 = 1;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A1 = 1;
		B1 = 0;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A1 = 1;
		B1 = 1;
		Cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A1 = 0;
		B1 = 0;
		Cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
		A1 = 0;
		B1 = 1;
		Cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
		A1 = 1;
		B1 = 0;
		Cin = 1;

		// Wait 100 ns for global reset to finish
		#100;A1 = 1;
		B1 = 1;
		Cin = 1;

        
		// Add stimulus here

	end
      
endmodule

