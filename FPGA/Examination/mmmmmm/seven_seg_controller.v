`timescale 1 ns / 1 ns // timescale for following modules

// ----------------------------------------------------------------------
//      Main.v -- Simple stopwatch demo for Nexys3
// ----------------------------------------------------------------------
//  Author:  nie yang
//           www.jntc.nm.cn 
// ----------------------------------------------------------------------
//  This is the top module of stopwatch demo on Nexys3.
//  It was developed using the Xilinx WebPack tools.
// 
// ----------------------------------------------------------------------
//  Revision History:
//   4/43/2019(HC): Created by nie yang
// ----------------------------------------------------------------------

module seven_seg_controller (
   rst,
   clk,
   dispen,
   cntr,
   seg,
   an);
   
input   rst; 
input   clk; 
input   dispen; 
input   [15:0] cntr; 
output   [7:0] seg; 
output   [3:0] an;


reg [3:0] an;
reg  [7:0] seg;
reg [1:0] sel;
reg  [3:0] seg_dig;

//模4计数器
always @(posedge clk or posedge rst)
   begin 
   if (rst == 1'b1)
      begin
      sel <= 2'b 00;   
      end
   else if (dispen == 1'b1 )
      begin
      sel <= sel + 1'b1;   
      end
   end

//2-4译码器
always@(*)begin
 if(dispen== 1'b1)
	case(sel)
	2'b00:  an=4'b1110;
    2'b01:  an=4'b1101;
    2'b10:  an=4'b1011;
    2'b11:  an=4'b0111;
	default: an=4'b1111;
	endcase
else
   an=4'b1111;
end
//计数信号分配
always@(*)begin
 	case(sel)
	2'b00:  seg_dig=cntr[3:0];
    2'b01:  seg_dig=cntr[7:4];
    2'b10:  seg_dig=cntr[11:8];
    2'b11:  seg_dig=cntr[15:12];
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
 	if( sel == 2'b11)
	  seg[7]=1'b0;
	else
	  seg[7]=1'b1;
end

endmodule
