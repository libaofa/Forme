`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:41:27 06/09/2019
// Design Name:   Tetris
// Module Name:   F:/git/FPGA/Tetris/Test.v
// Project Name:  Tetris
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Tetris
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test;

	// Inputs
	reg Clk_In;
	reg Rotate;
	reg Left;
	reg Right;
	reg Down;
	reg Pause;
	reg Rst;

	// Outputs
	wire [7:0] RGB;
	wire Hsync;
	wire Vsync;

	// Instantiate the Unit Under Test (UUT)
	Tetris uut (
		.Clk_In(Clk_In), 
		.Rotate(Rotate), 
		.Left(Left), 
		.Right(Right), 
		.Down(Down), 
		.Pause(Pause), 
		.Rst(Rst), 
		.RGB(RGB), 
		.Hsync(Hsync), 
		.Vsync(Vsync)
	);

	initial begin
		Clk_In = 1;	
		Rotate = 0;
		Left = 0;
		Right = 0;
		Down = 0;
		Pause = 0;
		Rst = 0;
		forever begin
			#5
			Clk_In = ~Clk_In;	//每隔5ns翻转一次
			end
		end
	initial begin
		forever begin
			#100000
			Down = ~Down;		//每隔100000ns翻转一次
			end
		end

      
endmodule

