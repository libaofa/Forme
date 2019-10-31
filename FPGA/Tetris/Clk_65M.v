`timescale 1ns / 1ps

module Clk_65M(			//65MHZʱ��ģ��
	Clk_IN,					//100MHZʱ��
	Clk_65M					//65MHZʱ��
    );
input		Clk_IN;
output	Clk_65M;

wire	Clk_65M;
  
 Clk_65 instance_name			//IP
   (// Clock in ports
    .CLK_IN(Clk_IN)	,      	// IN
    // Clock out ports
    .CLK(Clk_65M)     			// OUT
);	 

endmodule
