`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:42:05 04/25/2019 
// Design Name: 
// Module Name:    Clk 
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
module Clk(Clk_1hz, Clk_100mhz, Rst_n);

parameter Time_1s = 19'd50000000;

output				Clk_1hz;
input					Clk_100mhz;
input					Rst_n;
reg					Clk_1hz;
reg		[18:0]	Cnt;

always @(posedge Clk_100mhz or negedge Rst_n) begin
	if(!Rst_n) begin
		Cnt = 19'b0;
		end
	else if(Cnt == Time_1s)begin
		Cnt = 19'b0;
		end
	
	end


endmodule
