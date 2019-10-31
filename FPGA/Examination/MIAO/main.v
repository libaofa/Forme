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

module main (
   clk,
   rst,
   start,
	stop,
	inc,
	dispen,
   an,
   seg);
 
// input and output
input   clk; 
input   rst; 
input   start; 
input   stop; 
input   inc; 
input   dispen;
output   [3:0] an; 
output   [7:0] seg;



// internal signals	
wire    clk_1k; 
wire    clk_1s;


wire    timer_en; 
 
wire    [15:0] cntr; 
wire    [3:0] segdat; 

// ----------------------------------------------------------------------
//  Implementation
// ----------------------------------------------------------------------

clk_div Inst_clock_divider (.rst(rst),
          .clk_1k(clk_1k),
			 .clk_1s(clk_1s),
          .clk_100M(clk));
			 
state   Inst_state_machine (.rst(rst),
          .clk(clk_1k),
          .start(start),
          .stop(stop),
          .inc(inc),
          .time_en(time_en));
			 
			 
counter Inst_counter (.rst(rst),
          .clk(clk_1s),
          .time_en(time_en),
          .cntr(cntr));
			 
			 
seven_seg_controller Inst_seven_seg_controller (.rst(rst),
          .clk(clk_1k),
          .dispen(dispen),
          .cntr(cntr),
          .seg(seg),
          .an(an));


endmodule // module main

