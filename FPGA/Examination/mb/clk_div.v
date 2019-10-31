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

//��������
parameter      		TIME=26'd50000000	;

//����źŶ���
output              	clk_1s      		;

//�����źŶ���
input               	clk_100M    		;
input               	rst         		;

//����ź�reg����
reg       	        	clk_1s      		;
//�м��źŶ���
reg  		[25:0]      cnt         		;

   
    //����
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
 
    //�ڼ���һ��ʱ���з�ת���õ���Ƶʱ��
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
