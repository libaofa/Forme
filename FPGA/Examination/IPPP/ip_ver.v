`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:23 05/09/2019 
// Design Name: 
// Module Name:    ip_ver 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ip_ver(
    input Clk,
    output Reset,
    input Clk_25M,
    output locked
    );
	
ip1 instance_name
   (// Clock in ports
    .Clk(Clk),      // IN
    // Clock out ports
    .Clk_25M(Clk_25M),     // OUT
    // Status and control signals
    .Reset(Reset),// IN
    .Locked(Locked)); 


endmodule
