////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: main_synthesis.v
// /___/   /\     Timestamp: Wed May 29 23:30:19 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim main.ngc main_synthesis.v 
// Device	: xc6slx16-3-csg324
// Input file	: main.ngc
// Output file	: F:\git\FPGA\Examination\MIAO\netgen\synthesis\main_synthesis.v
// # of Modules	: 1
// Design Name	: main
// Xilinx        : G:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module main (
  clk, rst, start, stop, inc, dispen, an, seg
);
  input clk;
  input rst;
  input start;
  input stop;
  input inc;
  input dispen;
  output [3 : 0] an;
  output [7 : 0] seg;
  wire clk_BUFGP_0;
  wire rst_IBUF_1;
  wire start_IBUF_2;
  wire stop_IBUF_3;
  wire inc_IBUF_4;
  wire dispen_IBUF_5;
  wire \a1/clk_1s_6 ;
  wire time_en;
  wire seg_7_OBUF_16;
  wire seg_6_OBUF_17;
  wire seg_5_OBUF_18;
  wire seg_4_OBUF_19;
  wire seg_3_OBUF_20;
  wire seg_2_OBUF_21;
  wire seg_1_OBUF_22;
  wire seg_0_OBUF_23;
  wire an_3_OBUF_24;
  wire an_2_OBUF_25;
  wire an_1_OBUF_26;
  wire an_0_OBUF_27;
  wire N1;
  wire \a1/GND_2_o_GND_2_o_equal_5_o ;
  wire \a1/Mcount_cnt_eqn_0 ;
  wire \a1/Mcount_cnt_eqn_1 ;
  wire \a1/Mcount_cnt_eqn_2 ;
  wire \a1/Mcount_cnt_eqn_3 ;
  wire \a1/Mcount_cnt_eqn_4 ;
  wire \a1/Mcount_cnt_eqn_5 ;
  wire \a1/Mcount_cnt_eqn_6 ;
  wire \a1/Mcount_cnt_eqn_7 ;
  wire \a1/Mcount_cnt_eqn_8 ;
  wire \a1/Mcount_cnt_eqn_9 ;
  wire \a1/Mcount_cnt_eqn_10 ;
  wire \a1/Mcount_cnt_eqn_11 ;
  wire \a1/Mcount_cnt_eqn_12 ;
  wire \a1/Mcount_cnt_eqn_13 ;
  wire \a1/Mcount_cnt_eqn_14 ;
  wire \a1/Mcount_cnt_eqn_15 ;
  wire \a1/Mcount_cnt_eqn_16 ;
  wire \a1/Mcount_cnt_eqn_17 ;
  wire \a1/Mcount_cnt_eqn_18 ;
  wire \a1/Mcount_cnt_eqn_19 ;
  wire \a1/Mcount_cnt_eqn_20 ;
  wire \a1/Mcount_cnt_eqn_21 ;
  wire \a1/Mcount_cnt_eqn_22 ;
  wire \a1/Mcount_cnt_eqn_23 ;
  wire \a1/Mcount_cnt_eqn_24 ;
  wire \a1/Mcount_cnt_eqn_25 ;
  wire \a2/CS_FSM_FFd3-In ;
  wire \a2/CS_FSM_FFd2-In ;
  wire \a2/CS_FSM_FFd1-In ;
  wire \a2/CS_FSM_FFd3_111 ;
  wire \a2/CS_FSM_FFd2_112 ;
  wire \a2/CS_FSM_FFd1_113 ;
  wire \a3/Mcount_cnt03 ;
  wire \a3/Mcount_cnt02 ;
  wire \a3/Mcount_cnt01 ;
  wire \a3/Mcount_cnt0 ;
  wire \a3/Mcount_cnt12 ;
  wire \a3/Mcount_cnt11 ;
  wire \a3/Mcount_cnt1 ;
  wire \a3/cnt1_en ;
  wire \a1/GND_2_o_GND_2_o_equal_5_o<25>1_156 ;
  wire \a1/GND_2_o_GND_2_o_equal_5_o<25>2_157 ;
  wire \a1/GND_2_o_GND_2_o_equal_5_o<25>3_158 ;
  wire \a1/Mcount_cnt_cy<1>_rt_177 ;
  wire \a1/Mcount_cnt_cy<2>_rt_178 ;
  wire \a1/Mcount_cnt_cy<3>_rt_179 ;
  wire \a1/Mcount_cnt_cy<4>_rt_180 ;
  wire \a1/Mcount_cnt_cy<5>_rt_181 ;
  wire \a1/Mcount_cnt_cy<6>_rt_182 ;
  wire \a1/Mcount_cnt_cy<7>_rt_183 ;
  wire \a1/Mcount_cnt_cy<8>_rt_184 ;
  wire \a1/Mcount_cnt_cy<9>_rt_185 ;
  wire \a1/Mcount_cnt_cy<10>_rt_186 ;
  wire \a1/Mcount_cnt_cy<11>_rt_187 ;
  wire \a1/Mcount_cnt_cy<12>_rt_188 ;
  wire \a1/Mcount_cnt_cy<13>_rt_189 ;
  wire \a1/Mcount_cnt_cy<14>_rt_190 ;
  wire \a1/Mcount_cnt_cy<15>_rt_191 ;
  wire \a1/Mcount_cnt_cy<16>_rt_192 ;
  wire \a1/Mcount_cnt_cy<17>_rt_193 ;
  wire \a1/Mcount_cnt_cy<18>_rt_194 ;
  wire \a1/Mcount_cnt_cy<19>_rt_195 ;
  wire \a1/Mcount_cnt_cy<20>_rt_196 ;
  wire \a1/Mcount_cnt_cy<21>_rt_197 ;
  wire \a1/Mcount_cnt_cy<22>_rt_198 ;
  wire \a1/Mcount_cnt_cy<23>_rt_199 ;
  wire \a1/Mcount_cnt_cy<24>_rt_200 ;
  wire \a1/Mcount_cnt_xor<25>_rt_201 ;
  wire \a1/clk_1s_dpot_202 ;
  wire \a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ;
  wire [10 : 10] cntr;
  wire [2 : 0] \a3/cnt1 ;
  wire [3 : 0] \a3/cnt0 ;
  wire [25 : 0] \a1/cnt ;
  wire [25 : 0] Result;
  wire [0 : 0] \a1/Mcount_cnt_lut ;
  wire [24 : 0] \a1/Mcount_cnt_cy ;
  wire [1 : 0] \a4/sel ;
  wire [1 : 0] \a4/Result ;
  wire [2 : 0] \a4/seg_dig ;
  wire [25 : 25] \a1/GND_2_o_GND_2_o_equal_5_o_0 ;
  GND   XST_GND (
    .G(cntr[10])
  );
  VCC   XST_VCC (
    .P(N1)
  );
  FDCE   \a1/clk_1s  (
    .C(clk_BUFGP_0),
    .CE(\a1/GND_2_o_GND_2_o_equal_5_o_0 [25]),
    .CLR(rst_IBUF_1),
    .D(\a1/clk_1s_dpot_202 ),
    .Q(\a1/clk_1s_6 )
  );
  FDC   \a1/cnt_0  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_0 ),
    .Q(\a1/cnt [0])
  );
  FDC   \a1/cnt_1  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_1 ),
    .Q(\a1/cnt [1])
  );
  FDC   \a1/cnt_2  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_2 ),
    .Q(\a1/cnt [2])
  );
  FDC   \a1/cnt_3  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_3 ),
    .Q(\a1/cnt [3])
  );
  FDC   \a1/cnt_4  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_4 ),
    .Q(\a1/cnt [4])
  );
  FDC   \a1/cnt_5  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_5 ),
    .Q(\a1/cnt [5])
  );
  FDC   \a1/cnt_6  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_6 ),
    .Q(\a1/cnt [6])
  );
  FDC   \a1/cnt_7  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_7 ),
    .Q(\a1/cnt [7])
  );
  FDC   \a1/cnt_8  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_8 ),
    .Q(\a1/cnt [8])
  );
  FDC   \a1/cnt_9  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_9 ),
    .Q(\a1/cnt [9])
  );
  FDC   \a1/cnt_10  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_10 ),
    .Q(\a1/cnt [10])
  );
  FDC   \a1/cnt_11  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_11 ),
    .Q(\a1/cnt [11])
  );
  FDC   \a1/cnt_12  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_12 ),
    .Q(\a1/cnt [12])
  );
  FDC   \a1/cnt_13  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_13 ),
    .Q(\a1/cnt [13])
  );
  FDC   \a1/cnt_14  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_14 ),
    .Q(\a1/cnt [14])
  );
  FDC   \a1/cnt_15  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_15 ),
    .Q(\a1/cnt [15])
  );
  FDC   \a1/cnt_16  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_16 ),
    .Q(\a1/cnt [16])
  );
  FDC   \a1/cnt_17  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_17 ),
    .Q(\a1/cnt [17])
  );
  FDC   \a1/cnt_18  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_18 ),
    .Q(\a1/cnt [18])
  );
  FDC   \a1/cnt_19  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_19 ),
    .Q(\a1/cnt [19])
  );
  FDC   \a1/cnt_20  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_20 ),
    .Q(\a1/cnt [20])
  );
  FDC   \a1/cnt_21  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_21 ),
    .Q(\a1/cnt [21])
  );
  FDC   \a1/cnt_22  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_22 ),
    .Q(\a1/cnt [22])
  );
  FDC   \a1/cnt_23  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_23 ),
    .Q(\a1/cnt [23])
  );
  FDC   \a1/cnt_24  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_24 ),
    .Q(\a1/cnt [24])
  );
  FDC   \a1/cnt_25  (
    .C(clk_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(\a1/Mcount_cnt_eqn_25 ),
    .Q(\a1/cnt [25])
  );
  FDC   \a2/CS_FSM_FFd1  (
    .C(\a1/clk_1s_6 ),
    .CLR(rst_IBUF_1),
    .D(\a2/CS_FSM_FFd1-In ),
    .Q(\a2/CS_FSM_FFd1_113 )
  );
  FDC   \a2/CS_FSM_FFd3  (
    .C(\a1/clk_1s_6 ),
    .CLR(rst_IBUF_1),
    .D(\a2/CS_FSM_FFd3-In ),
    .Q(\a2/CS_FSM_FFd3_111 )
  );
  FDC   \a2/CS_FSM_FFd2  (
    .C(\a1/clk_1s_6 ),
    .CLR(rst_IBUF_1),
    .D(\a2/CS_FSM_FFd2-In ),
    .Q(\a2/CS_FSM_FFd2_112 )
  );
  MUXCY   \a1/Mcount_cnt_cy<0>  (
    .CI(cntr[10]),
    .DI(N1),
    .S(\a1/Mcount_cnt_lut [0]),
    .O(\a1/Mcount_cnt_cy [0])
  );
  XORCY   \a1/Mcount_cnt_xor<0>  (
    .CI(cntr[10]),
    .LI(\a1/Mcount_cnt_lut [0]),
    .O(Result[0])
  );
  MUXCY   \a1/Mcount_cnt_cy<1>  (
    .CI(\a1/Mcount_cnt_cy [0]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<1>_rt_177 ),
    .O(\a1/Mcount_cnt_cy [1])
  );
  XORCY   \a1/Mcount_cnt_xor<1>  (
    .CI(\a1/Mcount_cnt_cy [0]),
    .LI(\a1/Mcount_cnt_cy<1>_rt_177 ),
    .O(Result[1])
  );
  MUXCY   \a1/Mcount_cnt_cy<2>  (
    .CI(\a1/Mcount_cnt_cy [1]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<2>_rt_178 ),
    .O(\a1/Mcount_cnt_cy [2])
  );
  XORCY   \a1/Mcount_cnt_xor<2>  (
    .CI(\a1/Mcount_cnt_cy [1]),
    .LI(\a1/Mcount_cnt_cy<2>_rt_178 ),
    .O(Result[2])
  );
  MUXCY   \a1/Mcount_cnt_cy<3>  (
    .CI(\a1/Mcount_cnt_cy [2]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<3>_rt_179 ),
    .O(\a1/Mcount_cnt_cy [3])
  );
  XORCY   \a1/Mcount_cnt_xor<3>  (
    .CI(\a1/Mcount_cnt_cy [2]),
    .LI(\a1/Mcount_cnt_cy<3>_rt_179 ),
    .O(Result[3])
  );
  MUXCY   \a1/Mcount_cnt_cy<4>  (
    .CI(\a1/Mcount_cnt_cy [3]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<4>_rt_180 ),
    .O(\a1/Mcount_cnt_cy [4])
  );
  XORCY   \a1/Mcount_cnt_xor<4>  (
    .CI(\a1/Mcount_cnt_cy [3]),
    .LI(\a1/Mcount_cnt_cy<4>_rt_180 ),
    .O(Result[4])
  );
  MUXCY   \a1/Mcount_cnt_cy<5>  (
    .CI(\a1/Mcount_cnt_cy [4]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<5>_rt_181 ),
    .O(\a1/Mcount_cnt_cy [5])
  );
  XORCY   \a1/Mcount_cnt_xor<5>  (
    .CI(\a1/Mcount_cnt_cy [4]),
    .LI(\a1/Mcount_cnt_cy<5>_rt_181 ),
    .O(Result[5])
  );
  MUXCY   \a1/Mcount_cnt_cy<6>  (
    .CI(\a1/Mcount_cnt_cy [5]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<6>_rt_182 ),
    .O(\a1/Mcount_cnt_cy [6])
  );
  XORCY   \a1/Mcount_cnt_xor<6>  (
    .CI(\a1/Mcount_cnt_cy [5]),
    .LI(\a1/Mcount_cnt_cy<6>_rt_182 ),
    .O(Result[6])
  );
  MUXCY   \a1/Mcount_cnt_cy<7>  (
    .CI(\a1/Mcount_cnt_cy [6]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<7>_rt_183 ),
    .O(\a1/Mcount_cnt_cy [7])
  );
  XORCY   \a1/Mcount_cnt_xor<7>  (
    .CI(\a1/Mcount_cnt_cy [6]),
    .LI(\a1/Mcount_cnt_cy<7>_rt_183 ),
    .O(Result[7])
  );
  MUXCY   \a1/Mcount_cnt_cy<8>  (
    .CI(\a1/Mcount_cnt_cy [7]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<8>_rt_184 ),
    .O(\a1/Mcount_cnt_cy [8])
  );
  XORCY   \a1/Mcount_cnt_xor<8>  (
    .CI(\a1/Mcount_cnt_cy [7]),
    .LI(\a1/Mcount_cnt_cy<8>_rt_184 ),
    .O(Result[8])
  );
  MUXCY   \a1/Mcount_cnt_cy<9>  (
    .CI(\a1/Mcount_cnt_cy [8]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<9>_rt_185 ),
    .O(\a1/Mcount_cnt_cy [9])
  );
  XORCY   \a1/Mcount_cnt_xor<9>  (
    .CI(\a1/Mcount_cnt_cy [8]),
    .LI(\a1/Mcount_cnt_cy<9>_rt_185 ),
    .O(Result[9])
  );
  MUXCY   \a1/Mcount_cnt_cy<10>  (
    .CI(\a1/Mcount_cnt_cy [9]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<10>_rt_186 ),
    .O(\a1/Mcount_cnt_cy [10])
  );
  XORCY   \a1/Mcount_cnt_xor<10>  (
    .CI(\a1/Mcount_cnt_cy [9]),
    .LI(\a1/Mcount_cnt_cy<10>_rt_186 ),
    .O(Result[10])
  );
  MUXCY   \a1/Mcount_cnt_cy<11>  (
    .CI(\a1/Mcount_cnt_cy [10]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<11>_rt_187 ),
    .O(\a1/Mcount_cnt_cy [11])
  );
  XORCY   \a1/Mcount_cnt_xor<11>  (
    .CI(\a1/Mcount_cnt_cy [10]),
    .LI(\a1/Mcount_cnt_cy<11>_rt_187 ),
    .O(Result[11])
  );
  MUXCY   \a1/Mcount_cnt_cy<12>  (
    .CI(\a1/Mcount_cnt_cy [11]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<12>_rt_188 ),
    .O(\a1/Mcount_cnt_cy [12])
  );
  XORCY   \a1/Mcount_cnt_xor<12>  (
    .CI(\a1/Mcount_cnt_cy [11]),
    .LI(\a1/Mcount_cnt_cy<12>_rt_188 ),
    .O(Result[12])
  );
  MUXCY   \a1/Mcount_cnt_cy<13>  (
    .CI(\a1/Mcount_cnt_cy [12]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<13>_rt_189 ),
    .O(\a1/Mcount_cnt_cy [13])
  );
  XORCY   \a1/Mcount_cnt_xor<13>  (
    .CI(\a1/Mcount_cnt_cy [12]),
    .LI(\a1/Mcount_cnt_cy<13>_rt_189 ),
    .O(Result[13])
  );
  MUXCY   \a1/Mcount_cnt_cy<14>  (
    .CI(\a1/Mcount_cnt_cy [13]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<14>_rt_190 ),
    .O(\a1/Mcount_cnt_cy [14])
  );
  XORCY   \a1/Mcount_cnt_xor<14>  (
    .CI(\a1/Mcount_cnt_cy [13]),
    .LI(\a1/Mcount_cnt_cy<14>_rt_190 ),
    .O(Result[14])
  );
  MUXCY   \a1/Mcount_cnt_cy<15>  (
    .CI(\a1/Mcount_cnt_cy [14]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<15>_rt_191 ),
    .O(\a1/Mcount_cnt_cy [15])
  );
  XORCY   \a1/Mcount_cnt_xor<15>  (
    .CI(\a1/Mcount_cnt_cy [14]),
    .LI(\a1/Mcount_cnt_cy<15>_rt_191 ),
    .O(Result[15])
  );
  MUXCY   \a1/Mcount_cnt_cy<16>  (
    .CI(\a1/Mcount_cnt_cy [15]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<16>_rt_192 ),
    .O(\a1/Mcount_cnt_cy [16])
  );
  XORCY   \a1/Mcount_cnt_xor<16>  (
    .CI(\a1/Mcount_cnt_cy [15]),
    .LI(\a1/Mcount_cnt_cy<16>_rt_192 ),
    .O(Result[16])
  );
  MUXCY   \a1/Mcount_cnt_cy<17>  (
    .CI(\a1/Mcount_cnt_cy [16]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<17>_rt_193 ),
    .O(\a1/Mcount_cnt_cy [17])
  );
  XORCY   \a1/Mcount_cnt_xor<17>  (
    .CI(\a1/Mcount_cnt_cy [16]),
    .LI(\a1/Mcount_cnt_cy<17>_rt_193 ),
    .O(Result[17])
  );
  MUXCY   \a1/Mcount_cnt_cy<18>  (
    .CI(\a1/Mcount_cnt_cy [17]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<18>_rt_194 ),
    .O(\a1/Mcount_cnt_cy [18])
  );
  XORCY   \a1/Mcount_cnt_xor<18>  (
    .CI(\a1/Mcount_cnt_cy [17]),
    .LI(\a1/Mcount_cnt_cy<18>_rt_194 ),
    .O(Result[18])
  );
  MUXCY   \a1/Mcount_cnt_cy<19>  (
    .CI(\a1/Mcount_cnt_cy [18]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<19>_rt_195 ),
    .O(\a1/Mcount_cnt_cy [19])
  );
  XORCY   \a1/Mcount_cnt_xor<19>  (
    .CI(\a1/Mcount_cnt_cy [18]),
    .LI(\a1/Mcount_cnt_cy<19>_rt_195 ),
    .O(Result[19])
  );
  MUXCY   \a1/Mcount_cnt_cy<20>  (
    .CI(\a1/Mcount_cnt_cy [19]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<20>_rt_196 ),
    .O(\a1/Mcount_cnt_cy [20])
  );
  XORCY   \a1/Mcount_cnt_xor<20>  (
    .CI(\a1/Mcount_cnt_cy [19]),
    .LI(\a1/Mcount_cnt_cy<20>_rt_196 ),
    .O(Result[20])
  );
  MUXCY   \a1/Mcount_cnt_cy<21>  (
    .CI(\a1/Mcount_cnt_cy [20]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<21>_rt_197 ),
    .O(\a1/Mcount_cnt_cy [21])
  );
  XORCY   \a1/Mcount_cnt_xor<21>  (
    .CI(\a1/Mcount_cnt_cy [20]),
    .LI(\a1/Mcount_cnt_cy<21>_rt_197 ),
    .O(Result[21])
  );
  MUXCY   \a1/Mcount_cnt_cy<22>  (
    .CI(\a1/Mcount_cnt_cy [21]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<22>_rt_198 ),
    .O(\a1/Mcount_cnt_cy [22])
  );
  XORCY   \a1/Mcount_cnt_xor<22>  (
    .CI(\a1/Mcount_cnt_cy [21]),
    .LI(\a1/Mcount_cnt_cy<22>_rt_198 ),
    .O(Result[22])
  );
  MUXCY   \a1/Mcount_cnt_cy<23>  (
    .CI(\a1/Mcount_cnt_cy [22]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<23>_rt_199 ),
    .O(\a1/Mcount_cnt_cy [23])
  );
  XORCY   \a1/Mcount_cnt_xor<23>  (
    .CI(\a1/Mcount_cnt_cy [22]),
    .LI(\a1/Mcount_cnt_cy<23>_rt_199 ),
    .O(Result[23])
  );
  MUXCY   \a1/Mcount_cnt_cy<24>  (
    .CI(\a1/Mcount_cnt_cy [23]),
    .DI(cntr[10]),
    .S(\a1/Mcount_cnt_cy<24>_rt_200 ),
    .O(\a1/Mcount_cnt_cy [24])
  );
  XORCY   \a1/Mcount_cnt_xor<24>  (
    .CI(\a1/Mcount_cnt_cy [23]),
    .LI(\a1/Mcount_cnt_cy<24>_rt_200 ),
    .O(Result[24])
  );
  XORCY   \a1/Mcount_cnt_xor<25>  (
    .CI(\a1/Mcount_cnt_cy [24]),
    .LI(\a1/Mcount_cnt_xor<25>_rt_201 ),
    .O(Result[25])
  );
  FDCE   \a3/cnt0_3  (
    .C(\a1/clk_1s_6 ),
    .CE(time_en),
    .CLR(rst_IBUF_1),
    .D(\a3/Mcount_cnt03 ),
    .Q(\a3/cnt0 [3])
  );
  FDCE   \a3/cnt0_2  (
    .C(\a1/clk_1s_6 ),
    .CE(time_en),
    .CLR(rst_IBUF_1),
    .D(\a3/Mcount_cnt02 ),
    .Q(\a3/cnt0 [2])
  );
  FDCE   \a3/cnt0_1  (
    .C(\a1/clk_1s_6 ),
    .CE(time_en),
    .CLR(rst_IBUF_1),
    .D(\a3/Mcount_cnt01 ),
    .Q(\a3/cnt0 [1])
  );
  FDCE   \a3/cnt0_0  (
    .C(\a1/clk_1s_6 ),
    .CE(time_en),
    .CLR(rst_IBUF_1),
    .D(\a3/Mcount_cnt0 ),
    .Q(\a3/cnt0 [0])
  );
  FDCE   \a3/cnt1_2  (
    .C(\a1/clk_1s_6 ),
    .CE(\a3/cnt1_en ),
    .CLR(rst_IBUF_1),
    .D(\a3/Mcount_cnt12 ),
    .Q(\a3/cnt1 [2])
  );
  FDCE   \a3/cnt1_1  (
    .C(\a1/clk_1s_6 ),
    .CE(\a3/cnt1_en ),
    .CLR(rst_IBUF_1),
    .D(\a3/Mcount_cnt11 ),
    .Q(\a3/cnt1 [1])
  );
  FDCE   \a3/cnt1_0  (
    .C(\a1/clk_1s_6 ),
    .CE(\a3/cnt1_en ),
    .CLR(rst_IBUF_1),
    .D(\a3/Mcount_cnt1 ),
    .Q(\a3/cnt1 [0])
  );
  FDCE   \a4/sel_1  (
    .C(\a1/clk_1s_6 ),
    .CE(dispen_IBUF_5),
    .CLR(rst_IBUF_1),
    .D(\a4/Result [1]),
    .Q(\a4/sel [1])
  );
  FDCE   \a4/sel_0  (
    .C(\a1/clk_1s_6 ),
    .CE(dispen_IBUF_5),
    .CLR(rst_IBUF_1),
    .D(\a4/Result [0]),
    .Q(\a4/sel [0])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_01  (
    .I0(Result[0]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_0 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_110  (
    .I0(Result[1]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_1 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_26  (
    .I0(Result[2]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_2 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_31  (
    .I0(Result[3]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_3 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_41  (
    .I0(Result[4]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_4 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_51  (
    .I0(Result[5]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_5 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_61  (
    .I0(Result[6]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_6 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_71  (
    .I0(Result[7]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_7 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_81  (
    .I0(Result[8]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_8 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_91  (
    .I0(Result[9]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_9 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_101  (
    .I0(Result[10]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_10 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_111  (
    .I0(Result[11]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_11 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_121  (
    .I0(Result[12]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_12 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_131  (
    .I0(Result[13]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o ),
    .O(\a1/Mcount_cnt_eqn_13 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_141  (
    .I0(Result[14]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_14 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_151  (
    .I0(Result[15]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_15 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_161  (
    .I0(Result[16]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_16 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_171  (
    .I0(Result[17]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_17 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_181  (
    .I0(Result[18]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_18 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_191  (
    .I0(Result[19]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_19 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_201  (
    .I0(Result[20]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_20 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_211  (
    .I0(Result[21]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_21 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_221  (
    .I0(Result[22]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_22 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_231  (
    .I0(Result[23]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_23 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_241  (
    .I0(Result[24]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_24 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \a1/Mcount_cnt_eqn_251  (
    .I0(Result[25]),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 ),
    .O(\a1/Mcount_cnt_eqn_25 )
  );
  LUT5 #(
    .INIT ( 32'hFFFFEEFE ))
  \a2/CS_FSM_FFd2-In1  (
    .I0(\a2/CS_FSM_FFd3_111 ),
    .I1(\a2/CS_FSM_FFd1_113 ),
    .I2(\a2/CS_FSM_FFd2_112 ),
    .I3(inc_IBUF_4),
    .I4(start_IBUF_2),
    .O(\a2/CS_FSM_FFd2-In )
  );
  LUT4 #(
    .INIT ( 16'hF222 ))
  \a2/CS_FSM_FFd1-In1  (
    .I0(\a2/CS_FSM_FFd3_111 ),
    .I1(\a2/CS_FSM_FFd2_112 ),
    .I2(\a2/CS_FSM_FFd1_113 ),
    .I3(inc_IBUF_4),
    .O(\a2/CS_FSM_FFd1-In )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \a2/Mmux_time_en11  (
    .I0(rst_IBUF_1),
    .I1(\a2/CS_FSM_FFd3_111 ),
    .O(time_en)
  );
  LUT6 #(
    .INIT ( 64'h191919083B3B3B08 ))
  \a2/CS_FSM_FFd3-In1  (
    .I0(\a2/CS_FSM_FFd2_112 ),
    .I1(\a2/CS_FSM_FFd3_111 ),
    .I2(stop_IBUF_3),
    .I3(inc_IBUF_4),
    .I4(start_IBUF_2),
    .I5(\a2/CS_FSM_FFd1_113 ),
    .O(\a2/CS_FSM_FFd3-In )
  );
  LUT3 #(
    .INIT ( 8'h6A ))
  \a3/Mcount_cnt0_xor<2>11  (
    .I0(\a3/cnt0 [2]),
    .I1(\a3/cnt0 [0]),
    .I2(\a3/cnt0 [1]),
    .O(\a3/Mcount_cnt02 )
  );
  LUT3 #(
    .INIT ( 8'h64 ))
  \a3/Mcount_cnt1_xor<2>11  (
    .I0(\a3/cnt1 [0]),
    .I1(\a3/cnt1 [2]),
    .I2(\a3/cnt1 [1]),
    .O(\a3/Mcount_cnt12 )
  );
  LUT4 #(
    .INIT ( 16'h6466 ))
  \a3/Mcount_cnt0_xor<1>11  (
    .I0(\a3/cnt0 [0]),
    .I1(\a3/cnt0 [1]),
    .I2(\a3/cnt0 [2]),
    .I3(\a3/cnt0 [3]),
    .O(\a3/Mcount_cnt01 )
  );
  LUT3 #(
    .INIT ( 8'h46 ))
  \a3/Mcount_cnt1_xor<1>11  (
    .I0(\a3/cnt1 [0]),
    .I1(\a3/cnt1 [1]),
    .I2(\a3/cnt1 [2]),
    .O(\a3/Mcount_cnt11 )
  );
  LUT4 #(
    .INIT ( 16'h6AA2 ))
  \a3/Mcount_cnt0_xor<3>11  (
    .I0(\a3/cnt0 [3]),
    .I1(\a3/cnt0 [0]),
    .I2(\a3/cnt0 [1]),
    .I3(\a3/cnt0 [2]),
    .O(\a3/Mcount_cnt03 )
  );
  LUT4 #(
    .INIT ( 16'h5410 ))
  \a4/Mmux_seg_dig<2>11  (
    .I0(\a4/sel [1]),
    .I1(\a4/sel [0]),
    .I2(\a3/cnt0 [2]),
    .I3(\a3/cnt1 [2]),
    .O(\a4/seg_dig [2])
  );
  LUT4 #(
    .INIT ( 16'h5410 ))
  \a4/Mmux_seg_dig<1>11  (
    .I0(\a4/sel [1]),
    .I1(\a4/sel [0]),
    .I2(\a3/cnt0 [1]),
    .I3(\a3/cnt1 [1]),
    .O(\a4/seg_dig [1])
  );
  LUT4 #(
    .INIT ( 16'h5410 ))
  \a4/Mmux_seg_dig<0>11  (
    .I0(\a4/sel [1]),
    .I1(\a4/sel [0]),
    .I2(\a3/cnt0 [0]),
    .I3(\a3/cnt1 [0]),
    .O(\a4/seg_dig [0])
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \a4/Mcount_sel_xor<1>11  (
    .I0(\a4/sel [1]),
    .I1(\a4/sel [0]),
    .O(\a4/Result [1])
  );
  LUT3 #(
    .INIT ( 8'hFD ))
  \a4/Mmux_an11  (
    .I0(dispen_IBUF_5),
    .I1(\a4/sel [0]),
    .I2(\a4/sel [1]),
    .O(an_0_OBUF_27)
  );
  LUT3 #(
    .INIT ( 8'hDF ))
  \a4/Mmux_an21  (
    .I0(\a4/sel [0]),
    .I1(\a4/sel [1]),
    .I2(dispen_IBUF_5),
    .O(an_1_OBUF_26)
  );
  LUT3 #(
    .INIT ( 8'h7F ))
  \a4/Mmux_an41  (
    .I0(\a4/sel [1]),
    .I1(dispen_IBUF_5),
    .I2(\a4/sel [0]),
    .O(an_3_OBUF_24)
  );
  LUT2 #(
    .INIT ( 4'hB ))
  \a4/seg<7>1  (
    .I0(\a4/sel [0]),
    .I1(\a4/sel [1]),
    .O(seg_7_OBUF_16)
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \a1/GND_2_o_GND_2_o_equal_5_o<25>1  (
    .I0(\a1/cnt [20]),
    .I1(\a1/cnt [19]),
    .I2(\a1/cnt [22]),
    .I3(\a1/cnt [21]),
    .I4(\a1/cnt [25]),
    .I5(\a1/cnt [23]),
    .O(\a1/GND_2_o_GND_2_o_equal_5_o_0 [25])
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \a1/GND_2_o_GND_2_o_equal_5_o<25>2  (
    .I0(\a1/cnt [12]),
    .I1(\a1/cnt [6]),
    .I2(\a1/cnt [14]),
    .I3(\a1/cnt [13]),
    .I4(\a1/cnt [17]),
    .I5(\a1/cnt [15]),
    .O(\a1/GND_2_o_GND_2_o_equal_5_o<25>1_156 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \a1/GND_2_o_GND_2_o_equal_5_o<25>3  (
    .I0(\a1/cnt [1]),
    .I1(\a1/cnt [0]),
    .I2(\a1/cnt [3]),
    .I3(\a1/cnt [2]),
    .I4(\a1/cnt [5]),
    .I5(\a1/cnt [4]),
    .O(\a1/GND_2_o_GND_2_o_equal_5_o<25>2_157 )
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \a1/GND_2_o_GND_2_o_equal_5_o<25>4  (
    .I0(\a1/cnt [8]),
    .I1(\a1/cnt [7]),
    .I2(\a1/cnt [9]),
    .I3(\a1/cnt [10]),
    .I4(\a1/cnt [11]),
    .I5(\a1/cnt [16]),
    .O(\a1/GND_2_o_GND_2_o_equal_5_o<25>3_158 )
  );
  LUT6 #(
    .INIT ( 64'h1000000000000000 ))
  \a1/GND_2_o_GND_2_o_equal_5_o<25>5  (
    .I0(\a1/cnt [18]),
    .I1(\a1/cnt [24]),
    .I2(\a1/GND_2_o_GND_2_o_equal_5_o<25>3_158 ),
    .I3(\a1/GND_2_o_GND_2_o_equal_5_o<25>2_157 ),
    .I4(\a1/GND_2_o_GND_2_o_equal_5_o<25>1_156 ),
    .I5(\a1/GND_2_o_GND_2_o_equal_5_o_0 [25]),
    .O(\a1/GND_2_o_GND_2_o_equal_5_o )
  );
  IBUF   rst_IBUF (
    .I(rst),
    .O(rst_IBUF_1)
  );
  IBUF   start_IBUF (
    .I(start),
    .O(start_IBUF_2)
  );
  IBUF   stop_IBUF (
    .I(stop),
    .O(stop_IBUF_3)
  );
  IBUF   inc_IBUF (
    .I(inc),
    .O(inc_IBUF_4)
  );
  IBUF   dispen_IBUF (
    .I(dispen),
    .O(dispen_IBUF_5)
  );
  OBUF   an_3_OBUF (
    .I(an_3_OBUF_24),
    .O(an[3])
  );
  OBUF   an_2_OBUF (
    .I(an_2_OBUF_25),
    .O(an[2])
  );
  OBUF   an_1_OBUF (
    .I(an_1_OBUF_26),
    .O(an[1])
  );
  OBUF   an_0_OBUF (
    .I(an_0_OBUF_27),
    .O(an[0])
  );
  OBUF   seg_7_OBUF (
    .I(seg_7_OBUF_16),
    .O(seg[7])
  );
  OBUF   seg_6_OBUF (
    .I(seg_6_OBUF_17),
    .O(seg[6])
  );
  OBUF   seg_5_OBUF (
    .I(seg_5_OBUF_18),
    .O(seg[5])
  );
  OBUF   seg_4_OBUF (
    .I(seg_4_OBUF_19),
    .O(seg[4])
  );
  OBUF   seg_3_OBUF (
    .I(seg_3_OBUF_20),
    .O(seg[3])
  );
  OBUF   seg_2_OBUF (
    .I(seg_2_OBUF_21),
    .O(seg[2])
  );
  OBUF   seg_1_OBUF (
    .I(seg_1_OBUF_22),
    .O(seg[1])
  );
  OBUF   seg_0_OBUF (
    .I(seg_0_OBUF_23),
    .O(seg[0])
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<1>_rt  (
    .I0(\a1/cnt [1]),
    .O(\a1/Mcount_cnt_cy<1>_rt_177 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<2>_rt  (
    .I0(\a1/cnt [2]),
    .O(\a1/Mcount_cnt_cy<2>_rt_178 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<3>_rt  (
    .I0(\a1/cnt [3]),
    .O(\a1/Mcount_cnt_cy<3>_rt_179 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<4>_rt  (
    .I0(\a1/cnt [4]),
    .O(\a1/Mcount_cnt_cy<4>_rt_180 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<5>_rt  (
    .I0(\a1/cnt [5]),
    .O(\a1/Mcount_cnt_cy<5>_rt_181 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<6>_rt  (
    .I0(\a1/cnt [6]),
    .O(\a1/Mcount_cnt_cy<6>_rt_182 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<7>_rt  (
    .I0(\a1/cnt [7]),
    .O(\a1/Mcount_cnt_cy<7>_rt_183 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<8>_rt  (
    .I0(\a1/cnt [8]),
    .O(\a1/Mcount_cnt_cy<8>_rt_184 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<9>_rt  (
    .I0(\a1/cnt [9]),
    .O(\a1/Mcount_cnt_cy<9>_rt_185 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<10>_rt  (
    .I0(\a1/cnt [10]),
    .O(\a1/Mcount_cnt_cy<10>_rt_186 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<11>_rt  (
    .I0(\a1/cnt [11]),
    .O(\a1/Mcount_cnt_cy<11>_rt_187 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<12>_rt  (
    .I0(\a1/cnt [12]),
    .O(\a1/Mcount_cnt_cy<12>_rt_188 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<13>_rt  (
    .I0(\a1/cnt [13]),
    .O(\a1/Mcount_cnt_cy<13>_rt_189 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<14>_rt  (
    .I0(\a1/cnt [14]),
    .O(\a1/Mcount_cnt_cy<14>_rt_190 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<15>_rt  (
    .I0(\a1/cnt [15]),
    .O(\a1/Mcount_cnt_cy<15>_rt_191 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<16>_rt  (
    .I0(\a1/cnt [16]),
    .O(\a1/Mcount_cnt_cy<16>_rt_192 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<17>_rt  (
    .I0(\a1/cnt [17]),
    .O(\a1/Mcount_cnt_cy<17>_rt_193 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<18>_rt  (
    .I0(\a1/cnt [18]),
    .O(\a1/Mcount_cnt_cy<18>_rt_194 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<19>_rt  (
    .I0(\a1/cnt [19]),
    .O(\a1/Mcount_cnt_cy<19>_rt_195 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<20>_rt  (
    .I0(\a1/cnt [20]),
    .O(\a1/Mcount_cnt_cy<20>_rt_196 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<21>_rt  (
    .I0(\a1/cnt [21]),
    .O(\a1/Mcount_cnt_cy<21>_rt_197 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<22>_rt  (
    .I0(\a1/cnt [22]),
    .O(\a1/Mcount_cnt_cy<22>_rt_198 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<23>_rt  (
    .I0(\a1/cnt [23]),
    .O(\a1/Mcount_cnt_cy<23>_rt_199 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_cy<24>_rt  (
    .I0(\a1/cnt [24]),
    .O(\a1/Mcount_cnt_cy<24>_rt_200 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \a1/Mcount_cnt_xor<25>_rt  (
    .I0(\a1/cnt [25]),
    .O(\a1/Mcount_cnt_xor<25>_rt_201 )
  );
  LUT6 #(
    .INIT ( 64'h0000020000000000 ))
  \a3/cnt1_en1  (
    .I0(\a3/cnt0 [0]),
    .I1(\a3/cnt0 [1]),
    .I2(\a3/cnt0 [2]),
    .I3(\a3/cnt0 [3]),
    .I4(rst_IBUF_1),
    .I5(\a2/CS_FSM_FFd3_111 ),
    .O(\a3/cnt1_en )
  );
  LUT6 #(
    .INIT ( 64'h99999E9911111E11 ))
  \a4/Mram__n0048[0:6]61  (
    .I0(\a4/seg_dig [2]),
    .I1(\a4/seg_dig [1]),
    .I2(\a4/sel [0]),
    .I3(\a3/cnt0 [3]),
    .I4(\a4/sel [1]),
    .I5(\a4/seg_dig [0]),
    .O(seg_6_OBUF_17)
  );
  LUT6 #(
    .INIT ( 64'h2828282828EE2828 ))
  \a4/Mram__n0048[0:6]111  (
    .I0(\a4/seg_dig [2]),
    .I1(\a4/seg_dig [1]),
    .I2(\a4/seg_dig [0]),
    .I3(\a4/sel [0]),
    .I4(\a3/cnt0 [3]),
    .I5(\a4/sel [1]),
    .O(seg_1_OBUF_22)
  );
  LUT6 #(
    .INIT ( 64'h040404000404FF00 ))
  \a4/Mram__n0048[0:6]21  (
    .I0(\a4/sel [0]),
    .I1(\a3/cnt0 [3]),
    .I2(\a4/sel [1]),
    .I3(\a4/seg_dig [1]),
    .I4(\a4/seg_dig [2]),
    .I5(\a4/seg_dig [0]),
    .O(seg_2_OBUF_21)
  );
  LUT6 #(
    .INIT ( 64'hBBBBBFBB22222C22 ))
  \a4/Mram__n0048[0:6]51  (
    .I0(\a4/seg_dig [0]),
    .I1(\a4/seg_dig [2]),
    .I2(\a4/sel [0]),
    .I3(\a3/cnt0 [3]),
    .I4(\a4/sel [1]),
    .I5(\a4/seg_dig [1]),
    .O(seg_5_OBUF_18)
  );
  LUT3 #(
    .INIT ( 8'hDF ))
  \a4/Mmux_an31  (
    .I0(\a4/sel [1]),
    .I1(\a4/sel [0]),
    .I2(dispen_IBUF_5),
    .O(an_2_OBUF_25)
  );
  LUT6 #(
    .INIT ( 64'hFFFFFFFF44444E44 ))
  \a4/Mram__n0048[0:6]41  (
    .I0(\a4/seg_dig [1]),
    .I1(\a4/seg_dig [2]),
    .I2(\a4/sel [0]),
    .I3(\a3/cnt0 [3]),
    .I4(\a4/sel [1]),
    .I5(\a4/seg_dig [0]),
    .O(seg_4_OBUF_19)
  );
  LUT6 #(
    .INIT ( 64'h141414141414FA14 ))
  \a4/Mram__n0048[0:6]11  (
    .I0(\a4/seg_dig [1]),
    .I1(\a4/seg_dig [0]),
    .I2(\a4/seg_dig [2]),
    .I3(\a3/cnt0 [3]),
    .I4(\a4/sel [0]),
    .I5(\a4/sel [1]),
    .O(seg_0_OBUF_23)
  );
  LUT6 #(
    .INIT ( 64'h9494949494EE9494 ))
  \a4/Mram__n0048[0:6]31  (
    .I0(\a4/seg_dig [1]),
    .I1(\a4/seg_dig [2]),
    .I2(\a4/seg_dig [0]),
    .I3(\a4/sel [0]),
    .I4(\a3/cnt0 [3]),
    .I5(\a4/sel [1]),
    .O(seg_3_OBUF_20)
  );
  LUT6 #(
    .INIT ( 64'h1000000000000000 ))
  \a1/GND_2_o_GND_2_o_equal_5_o<25>5_1  (
    .I0(\a1/cnt [18]),
    .I1(\a1/cnt [24]),
    .I2(\a1/GND_2_o_GND_2_o_equal_5_o<25>3_158 ),
    .I3(\a1/GND_2_o_GND_2_o_equal_5_o<25>2_157 ),
    .I4(\a1/GND_2_o_GND_2_o_equal_5_o<25>1_156 ),
    .I5(\a1/GND_2_o_GND_2_o_equal_5_o_0 [25]),
    .O(\a1/GND_2_o_GND_2_o_equal_5_o<25>5_203 )
  );
  LUT6 #(
    .INIT ( 64'hAAA6AAAAAAAAAAAA ))
  \a1/clk_1s_dpot  (
    .I0(\a1/clk_1s_6 ),
    .I1(\a1/GND_2_o_GND_2_o_equal_5_o<25>3_158 ),
    .I2(\a1/cnt [24]),
    .I3(\a1/cnt [18]),
    .I4(\a1/GND_2_o_GND_2_o_equal_5_o<25>1_156 ),
    .I5(\a1/GND_2_o_GND_2_o_equal_5_o<25>2_157 ),
    .O(\a1/clk_1s_dpot_202 )
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_0)
  );
  INV   \a1/Mcount_cnt_lut<0>_INV_0  (
    .I(\a1/cnt [0]),
    .O(\a1/Mcount_cnt_lut [0])
  );
  INV   \a3/Mcount_cnt0_xor<0>11_INV_0  (
    .I(\a3/cnt0 [0]),
    .O(\a3/Mcount_cnt0 )
  );
  INV   \a3/Mcount_cnt1_xor<0>11_INV_0  (
    .I(\a3/cnt1 [0]),
    .O(\a3/Mcount_cnt1 )
  );
  INV   \a4/Mcount_sel_xor<0>11_INV_0  (
    .I(\a4/sel [0]),
    .O(\a4/Result [0])
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

