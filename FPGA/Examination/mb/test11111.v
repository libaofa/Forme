`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:29:41 05/07/2019
// Design Name:   main
// Module Name:   F:/git/FPGA/Examination/mb/test11111.v
// Project Name:  mb
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test11111;

	// Inputs
	reg clk;
	reg rst;
	reg start;
	reg stop;
	reg inc;
	reg dispen;

	// Outputs
	wire [3:0] an;
	wire [7:0] seg;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.an(an), 
		.seg(seg), 
		.clk(clk), 
		.rst(rst), 
		.start(start), 
		.stop(stop), 
		.inc(inc), 
		.dispen(dispen)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		rst = 1;
		start = 1;
		stop = 0;
		inc = 0;
		dispen = 1;

		// Wait 100 ns for global reset to finish
		#10;
      rst = 0; 
		forever begin
			#10
			clk = ~clk;
			end
		// Add stimulus here

	end
      
endmodule

