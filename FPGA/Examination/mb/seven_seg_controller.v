`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:44 05/07/2019 
// Design Name: 
// Module Name:    seven_seg_controller 
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
module seven_seg_controller(seg,an, rst,clk,dispen,cntr);  
output   [7:0] 	seg	; 
output   [3:0] 	an		;
input   				rst	; 
input   				clk	; 
input   				dispen; 
input   	[15:0] 	cntr	; 
reg 		[3:0] 	an;
reg  		[7:0] 	seg;
reg 		[1:0] 	sel;
reg  		[3:0] 	seg_dig;

//模4计数器
always @(posedge clk or posedge rst)
   begin 
   if (rst)begin
      sel <= 2'b00;   
      end
   else if (dispen == 1'b1 )begin
      sel <= sel + 1'b1;   
      end
   end

//2-4译码器
always@(*)begin
	if(dispen)begin
		case(sel)
			2'b00:  	an=4'b1110;
			2'b01:  	an=4'b1101;
			2'b10:  	an=4'b1011;
			2'b11:  	an=4'b0111;
			default: an=4'b1111;
			endcase
		end
	else begin
		an=4'b1111;
		end
	end
//计数信号分配
always@(*)begin
 	case(sel)
		2'b00:  	seg_dig=cntr[3:0];
		2'b01:  	seg_dig=cntr[7:4];
		2'b10:  	seg_dig=cntr[11:8];
		2'b11:  	seg_dig=cntr[15:12];
		default: seg_dig=4'bxxxx;
		endcase
	end

//7段数码显示信号
always@(*)begin
 	case(seg_dig)
		4'b0000:  seg[6:0]=7'b1000000;  // 0
		4'b0001:  seg[6:0]=7'b1111001;  // 1
		4'b0010:  seg[6:0]=7'b0100100;  // 2
		4'b0011:  seg[6:0]=7'b0110000;  // 3
		4'b0100:  seg[6:0]=7'b0011001;  // 4
		4'b0101:  seg[6:0]=7'b0010010;  // 5
		4'b0110:  seg[6:0]=7'b0000010;  // 6
		4'b0111:  seg[6:0]=7'b1111000;  // 7
		4'b1000:  seg[6:0]=7'b0000000;  // 8
		4'b1001:  seg[6:0]=7'b0010000;  // 9
		default:  seg[6:0]=7'b1111111; 
		endcase
	end

// dp显示
always@(*)begin
 	if( sel == 2'b10)
		seg[7]=1'b0;
	else
		seg[7]=1'b1;
	end

endmodule

