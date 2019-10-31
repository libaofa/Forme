`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:45:55 06/02/2019
// Design Name:   door
// Module Name:   F:/git/FPGA/Examination/door/ssss.v
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

module ssss;

	// Inputs
	reg [3:0] A;

	// Outputs
	wire [7:0] S;

	// Instantiate the Unit Under Test (UUT)
	door uut (
		.S(S), 
		.A(A)
	);

	initial begin
		// Initialize Inputs
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
		#50;
		A = 4'b0111;
		#50;
		A = 4'b1000;
        
		// Add stimulus here

	end
      
endmodule

