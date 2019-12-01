`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:22:42 05/07/2019
// Design Name:   clk_div
// Module Name:   F:/git/FPGA/Examination/mb/test1.v
// Project Name:  mb
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg clk_100M;
	reg rst;

	// Outputs
	wire clk_1s;

	// Instantiate the Unit Under Test (UUT)
	clk_div uut (
		.clk_100M(clk_100M), 
		.rst(rst), 
		.clk_1s(clk_1s)
	);

	initial begin
		// Initialize Inputs
		clk_100M = 1;
		rst = 1;
		// Wait 100 ns for global reset to finish
		#10;
		rst = 0;
		#10;
		clk_100M = 1;
		forever begin
			#10;
			clk_100M = ~clk_100M;
			end
		// Add stimulus here

	end
      
endmodule

