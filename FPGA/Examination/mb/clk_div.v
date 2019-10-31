`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:18:01 05/07/2019 
// Design Name: 
// Module Name:    clk_div 
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
module clk_div(clk_1s, clk_100M, rst);

//参数定义
parameter      		TIME=26'd50000000	;

//输出信号定义
output              	clk_1s      		;

//输入信号定义
input               	clk_100M    		;
input               	rst         		;

//输出信号reg定义
reg       	        	clk_1s      		;
//中间信号定义
reg  		[25:0]      cnt         		;

   
    //计数
always@(posedge clk_100M or posedge rst)begin
	if(rst) begin
		cnt<=26'b0;
      end
   else if(cnt==TIME-1) begin
      cnt<=26'b0;
      end
   else begin
      cnt <= cnt + 1'b1;
		end
	end
 
    //在计数一半时进行翻转，得到分频时钟
always@(posedge clk_100M or posedge rst) begin
   if(rst)begin
      clk_1s<=1'b0;
      end
   else if(cnt==TIME-1)begin
      clk_1s<= ~clk_1s;
      end
   else begin
      clk_1s<= clk_1s;
		end
	end
   
endmodule
