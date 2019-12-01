`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:52:00 04/03/2019 
// Design Name: 
// Module Name:    register_8 
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
module register_8  (CLK_MUX, RST_N, LOUT);  
input  			CLK_MUX	;
input  			RST_N		;       	//高电平异步复位
output  	[7:0] LOUT		;  		//复位值 LD<=8'b0000_0001;
reg		[7:0]	LOUT		;

always @(posedge CLK_MUX or posedge RST_N) begin
	if(RST_N) begin
		LOUT <= 8'b1;
		end
	else begin
		LOUT <= {LOUT[6:0],LOUT[7]};
		end
	end
	
endmodule