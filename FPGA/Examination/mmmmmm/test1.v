`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:03:52 05/07/2019
// Design Name:   main
// Module Name:   F:/git/FPGA/Examination/mmmmmm/test1.v
// Project Name:  mmmmmm
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

module test1;

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
		.clk(clk), 
		.rst(rst), 
		.start(start), 
		.stop(stop), 
		.inc(inc), 
		.dispen(dispen), 
		.an(an), 
		.seg(seg)
	);

	initial begin
		// Initialize Inputs
		clk = 1'b1;
		rst = 1'b0;
		start = 1'b0;
		stop = 1'b0;
		inc = 1'b0;
		dispen = 1'b1;

		// Wait 100 ns for global reset to finish
		#10;
		rst = 1'b1;
		#10;
		rst = 1'b0;
		forever begin
			#5
			clk = ~clk;
			end
		end
		
		initial begin
			start = 1'b1;
			#50000000;
			inc = 1'b1;
			#50000000;
			inc = 1'b0;
			#50000000;
			start = 1'b0;
			stop = 1'b1;
			#50000000;
			#100000;
			rst = 1'b1;
			#100000;
			rst = 1'b0;
			stop = 1'b0;
			#50000000;
			start = 1'b0;
			inc = 1'b1;
			#50000000;
			inc = 1'b0;
			#50000000;
			stop = 1'b1;
			#50000000;
			#100000;
			rst = 1'b1;
			#100000;
			rst = 1'b0;
			stop = 1'b0;
			start = 1'b1;
			end
		
        
		// Add stimulus here

	
      
endmodule

