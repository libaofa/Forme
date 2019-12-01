`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:03 05/07/2019 
// Design Name: 
// Module Name:    counter 
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
module counter (cntr, rst, clk, time_en);
// input and output
input   				rst		; 
input   				clk		; 
input   				time_en	; 
output  	[15:0] 	cntr		;

reg 		[3:0] 	cnt0,cnt1,cnt2,cnt3		;

wire 					cnt1_en,cnt2_en,cnt3_en	;

//计数
always @(posedge clk or posedge rst)
	if (rst == 1'b1)
		begin
			cnt0<= 4'b0; 
		end
	else begin
	   if(time_en == 1'b1) begin
         if(cnt0 == 4'b1001) begin
            cnt0 <= 4'b0000;
            end
         else begin
            cnt0 <= cnt0 + 1'b1;
            end
	 	end
	end
	
always @(posedge clk or posedge rst) begin
	if (rst == 1'b1)
		begin
			cnt1<= {4{1'b0}}; 
		end
	else begin
	   if (cnt1_en == 1'b1) begin
         if (cnt1 == 4'b0101) begin
            cnt1 <= 4'b0000;
            end
         else begin
            cnt1 <= cnt1 + 1'b1;
            end
			end
		end
	end
	
always @(posedge clk or posedge rst) begin
	if (rst == 1'b1) begin
		cnt2<= {4{1'b0}}; 
      end
	else begin
	   if(cnt2_en == 1'b1)begin
         if (cnt2 == 4'b1001)begin
				cnt2 <= 4'b0000;
            end
         else begin
            cnt2 <= cnt2 + 1'b1;
            end
			end
      end
	end
	
always @(posedge clk or posedge rst) begin
	if (rst == 1'b1)
		begin
			cnt3<= {4{1'b0}}; 
    	end
	else begin
	   if(cnt3_en == 1'b1) begin
         if(cnt3 == 4'b0101) begin
            cnt3 <= 4'b0000;
             end
         else begin
            cnt3 <= cnt3 + 1'b1;
         	end
			end
		end
	end
//使能		//5959
assign cnt1_en=time_en&cnt0[3] & ~cnt0[2]& ~cnt0[1]& cnt0[0];	//1001
assign cnt2_en=cnt1_en&cnt1[3] & ~cnt1[2]& ~cnt1[1]& cnt1[0];	//0101
assign cnt3_en=cnt2_en&cnt2[3] & ~cnt2[2]& ~cnt2[1]& cnt2[0];	//1001
//输出
assign cntr={cnt3,cnt2,cnt1,cnt0};
endmodule