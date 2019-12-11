`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:14:00 05/31/2019
// Design Name:   door
// Module Name:   F:/git/FPGA/Examination/door/t1.v
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

module t1;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg		 CIN;

	// Outputs
	wire  COUT;

	// Instantiate the Unit Under Test (UUT)
	door uut (
		.COUT(COUT), 
		.CIN(CIN),
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		CIN = 1;
		A = 4'b0000;
		B = 4'b0000;
		#20;
		A = 4'b0000;
		B = 4'b0001;
		#20;
		A = 4'b0000;
		B = 4'b0010;
		#20;
		A = 4'b0000;
		B = 4'b0100;
		#20;
		A = 4'b0000;
		B = 4'b1000;
		#20;
		A = 4'b0001;
		B = 4'b0000;
		#20;
		A = 4'b0010;
		B = 4'b0001;
		#20;
		A = 4'b0100;
		B = 4'b0010;
		#20;
		A = 4'b1000;
		B = 4'b0100;
		#20;
		A = 4'b0001;
		B = 4'b1000;
        
		// Add stimulus here

	end
      
endmodule

