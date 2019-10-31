`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:00:58 05/07/2019
// Design Name:   door
// Module Name:   F:/git/FPGA/Examination/door/test.v
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

module test;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire [5:0] Cout;

	// Instantiate the Unit Under Test (UUT)
	door uut (
		.Cout(Cout), 
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 0;
		B = 1;

		// Wait 100 ns for global reset to finish
		#100;
		A = 1;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 1;
		B = 1;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
      
endmodule

