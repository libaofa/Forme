`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:31:55 04/05/2019
// Design Name:   top_register_8
// Module Name:   C:/Users/wlx/Desktop/LBF/top_register_8/TEST.v
// Project Name:  top_register_8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_register_8
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST;

	// Inputs
	reg CLK_TOP;
	reg RST_TOP;
	reg [2:0] S_TOP;
	// Outputs
	wire [7:0] LOUT_TOP;

	// Instantiate the Unit Under Test (UUT)
	top_register_8 uut (
		.CLK_TOP(CLK_TOP), 
		.RST_TOP(RST_TOP), 
		.S_TOP(S_TOP), 
		.LOUT_TOP(LOUT_TOP)
	);
	initial begin
		S_TOP = 3'b001;
		RST_TOP = 1;
		CLK_TOP = 1'b1;
      forever
         #5
         CLK_TOP=~CLK_TOP;
			end
	
	initial begin
		#10;
      RST_TOP = 0;
		CLK_TOP = 1'b1;
		end
      
endmodule

