////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: clk_div_synthesis.v
// /___/   /\     Timestamp: Tue May 07 16:39:32 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim clk_div.ngc clk_div_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: clk_div.ngc
// Output file	: F:\git\FPGA\Examination\mb\netgen\synthesis\clk_div_synthesis.v
// # of Modules	: 1
// Design Name	: clk_div
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

module clk_div (
  clk_100M, rst, clk_1s
);
  input clk_100M;
  input rst;
  output clk_1s;
  wire clk_100M_BUFGP_0;
  wire rst_IBUF_1;
  wire clk_1s_OBUF_21;
  wire N0;
  wire Mcount_cnt_eqn_0;
  wire Mcount_cnt_eqn_1;
  wire Mcount_cnt_eqn_2;
  wire Mcount_cnt_eqn_3;
  wire Mcount_cnt_eqn_4;
  wire Mcount_cnt_eqn_5;
  wire Mcount_cnt_eqn_6;
  wire Mcount_cnt_eqn_7;
  wire Mcount_cnt_eqn_8;
  wire Mcount_cnt_eqn_9;
  wire Mcount_cnt_eqn_10;
  wire Mcount_cnt_eqn_11;
  wire Mcount_cnt_eqn_12;
  wire Mcount_cnt_eqn_13;
  wire Mcount_cnt_eqn_14;
  wire Mcount_cnt_eqn_15;
  wire Mcount_cnt_eqn_16;
  wire Mcount_cnt_eqn_17;
  wire \GND_1_o_GND_1_o_equal_5_o<18>1_78 ;
  wire \GND_1_o_GND_1_o_equal_5_o<18>2_79 ;
  wire \Mcount_cnt_cy<1>_rt_83 ;
  wire \Mcount_cnt_cy<2>_rt_84 ;
  wire \Mcount_cnt_cy<3>_rt_85 ;
  wire \Mcount_cnt_cy<4>_rt_86 ;
  wire \Mcount_cnt_cy<5>_rt_87 ;
  wire \Mcount_cnt_cy<6>_rt_88 ;
  wire \Mcount_cnt_cy<7>_rt_89 ;
  wire \Mcount_cnt_cy<8>_rt_90 ;
  wire \Mcount_cnt_cy<9>_rt_91 ;
  wire \Mcount_cnt_cy<10>_rt_92 ;
  wire \Mcount_cnt_cy<11>_rt_93 ;
  wire \Mcount_cnt_cy<12>_rt_94 ;
  wire \Mcount_cnt_cy<13>_rt_95 ;
  wire \Mcount_cnt_cy<14>_rt_96 ;
  wire \Mcount_cnt_cy<15>_rt_97 ;
  wire \Mcount_cnt_cy<16>_rt_98 ;
  wire \Mcount_cnt_xor<17>_rt_99 ;
  wire clk_1s_dpot_100;
  wire [18 : 0] cnt;
  wire [17 : 0] Result;
  wire [0 : 0] Mcount_cnt_lut;
  wire [16 : 0] Mcount_cnt_cy;
  wire [18 : 18] GND_1_o_GND_1_o_equal_5_o;
  VCC   XST_VCC (
    .P(N0)
  );
  GND   XST_GND (
    .G(cnt[18])
  );
  FDCE   clk_1s_3 (
    .C(clk_100M_BUFGP_0),
    .CE(GND_1_o_GND_1_o_equal_5_o[18]),
    .CLR(rst_IBUF_1),
    .D(clk_1s_dpot_100),
    .Q(clk_1s_OBUF_21)
  );
  FDC   cnt_0 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_0),
    .Q(cnt[0])
  );
  FDC   cnt_1 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_1),
    .Q(cnt[1])
  );
  FDC   cnt_2 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_2),
    .Q(cnt[2])
  );
  FDC   cnt_3 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_3),
    .Q(cnt[3])
  );
  FDC   cnt_4 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_4),
    .Q(cnt[4])
  );
  FDC   cnt_5 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_5),
    .Q(cnt[5])
  );
  FDC   cnt_6 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_6),
    .Q(cnt[6])
  );
  FDC   cnt_7 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_7),
    .Q(cnt[7])
  );
  FDC   cnt_8 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_8),
    .Q(cnt[8])
  );
  FDC   cnt_9 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_9),
    .Q(cnt[9])
  );
  FDC   cnt_10 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_10),
    .Q(cnt[10])
  );
  FDC   cnt_11 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_11),
    .Q(cnt[11])
  );
  FDC   cnt_12 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_12),
    .Q(cnt[12])
  );
  FDC   cnt_13 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_13),
    .Q(cnt[13])
  );
  FDC   cnt_14 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_14),
    .Q(cnt[14])
  );
  FDC   cnt_15 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_15),
    .Q(cnt[15])
  );
  FDC   cnt_16 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_16),
    .Q(cnt[16])
  );
  FDC   cnt_17 (
    .C(clk_100M_BUFGP_0),
    .CLR(rst_IBUF_1),
    .D(Mcount_cnt_eqn_17),
    .Q(cnt[17])
  );
  MUXCY   \Mcount_cnt_cy<0>  (
    .CI(cnt[18]),
    .DI(N0),
    .S(Mcount_cnt_lut[0]),
    .O(Mcount_cnt_cy[0])
  );
  XORCY   \Mcount_cnt_xor<0>  (
    .CI(cnt[18]),
    .LI(Mcount_cnt_lut[0]),
    .O(Result[0])
  );
  MUXCY   \Mcount_cnt_cy<1>  (
    .CI(Mcount_cnt_cy[0]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<1>_rt_83 ),
    .O(Mcount_cnt_cy[1])
  );
  XORCY   \Mcount_cnt_xor<1>  (
    .CI(Mcount_cnt_cy[0]),
    .LI(\Mcount_cnt_cy<1>_rt_83 ),
    .O(Result[1])
  );
  MUXCY   \Mcount_cnt_cy<2>  (
    .CI(Mcount_cnt_cy[1]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<2>_rt_84 ),
    .O(Mcount_cnt_cy[2])
  );
  XORCY   \Mcount_cnt_xor<2>  (
    .CI(Mcount_cnt_cy[1]),
    .LI(\Mcount_cnt_cy<2>_rt_84 ),
    .O(Result[2])
  );
  MUXCY   \Mcount_cnt_cy<3>  (
    .CI(Mcount_cnt_cy[2]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<3>_rt_85 ),
    .O(Mcount_cnt_cy[3])
  );
  XORCY   \Mcount_cnt_xor<3>  (
    .CI(Mcount_cnt_cy[2]),
    .LI(\Mcount_cnt_cy<3>_rt_85 ),
    .O(Result[3])
  );
  MUXCY   \Mcount_cnt_cy<4>  (
    .CI(Mcount_cnt_cy[3]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<4>_rt_86 ),
    .O(Mcount_cnt_cy[4])
  );
  XORCY   \Mcount_cnt_xor<4>  (
    .CI(Mcount_cnt_cy[3]),
    .LI(\Mcount_cnt_cy<4>_rt_86 ),
    .O(Result[4])
  );
  MUXCY   \Mcount_cnt_cy<5>  (
    .CI(Mcount_cnt_cy[4]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<5>_rt_87 ),
    .O(Mcount_cnt_cy[5])
  );
  XORCY   \Mcount_cnt_xor<5>  (
    .CI(Mcount_cnt_cy[4]),
    .LI(\Mcount_cnt_cy<5>_rt_87 ),
    .O(Result[5])
  );
  MUXCY   \Mcount_cnt_cy<6>  (
    .CI(Mcount_cnt_cy[5]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<6>_rt_88 ),
    .O(Mcount_cnt_cy[6])
  );
  XORCY   \Mcount_cnt_xor<6>  (
    .CI(Mcount_cnt_cy[5]),
    .LI(\Mcount_cnt_cy<6>_rt_88 ),
    .O(Result[6])
  );
  MUXCY   \Mcount_cnt_cy<7>  (
    .CI(Mcount_cnt_cy[6]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<7>_rt_89 ),
    .O(Mcount_cnt_cy[7])
  );
  XORCY   \Mcount_cnt_xor<7>  (
    .CI(Mcount_cnt_cy[6]),
    .LI(\Mcount_cnt_cy<7>_rt_89 ),
    .O(Result[7])
  );
  MUXCY   \Mcount_cnt_cy<8>  (
    .CI(Mcount_cnt_cy[7]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<8>_rt_90 ),
    .O(Mcount_cnt_cy[8])
  );
  XORCY   \Mcount_cnt_xor<8>  (
    .CI(Mcount_cnt_cy[7]),
    .LI(\Mcount_cnt_cy<8>_rt_90 ),
    .O(Result[8])
  );
  MUXCY   \Mcount_cnt_cy<9>  (
    .CI(Mcount_cnt_cy[8]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<9>_rt_91 ),
    .O(Mcount_cnt_cy[9])
  );
  XORCY   \Mcount_cnt_xor<9>  (
    .CI(Mcount_cnt_cy[8]),
    .LI(\Mcount_cnt_cy<9>_rt_91 ),
    .O(Result[9])
  );
  MUXCY   \Mcount_cnt_cy<10>  (
    .CI(Mcount_cnt_cy[9]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<10>_rt_92 ),
    .O(Mcount_cnt_cy[10])
  );
  XORCY   \Mcount_cnt_xor<10>  (
    .CI(Mcount_cnt_cy[9]),
    .LI(\Mcount_cnt_cy<10>_rt_92 ),
    .O(Result[10])
  );
  MUXCY   \Mcount_cnt_cy<11>  (
    .CI(Mcount_cnt_cy[10]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<11>_rt_93 ),
    .O(Mcount_cnt_cy[11])
  );
  XORCY   \Mcount_cnt_xor<11>  (
    .CI(Mcount_cnt_cy[10]),
    .LI(\Mcount_cnt_cy<11>_rt_93 ),
    .O(Result[11])
  );
  MUXCY   \Mcount_cnt_cy<12>  (
    .CI(Mcount_cnt_cy[11]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<12>_rt_94 ),
    .O(Mcount_cnt_cy[12])
  );
  XORCY   \Mcount_cnt_xor<12>  (
    .CI(Mcount_cnt_cy[11]),
    .LI(\Mcount_cnt_cy<12>_rt_94 ),
    .O(Result[12])
  );
  MUXCY   \Mcount_cnt_cy<13>  (
    .CI(Mcount_cnt_cy[12]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<13>_rt_95 ),
    .O(Mcount_cnt_cy[13])
  );
  XORCY   \Mcount_cnt_xor<13>  (
    .CI(Mcount_cnt_cy[12]),
    .LI(\Mcount_cnt_cy<13>_rt_95 ),
    .O(Result[13])
  );
  MUXCY   \Mcount_cnt_cy<14>  (
    .CI(Mcount_cnt_cy[13]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<14>_rt_96 ),
    .O(Mcount_cnt_cy[14])
  );
  XORCY   \Mcount_cnt_xor<14>  (
    .CI(Mcount_cnt_cy[13]),
    .LI(\Mcount_cnt_cy<14>_rt_96 ),
    .O(Result[14])
  );
  MUXCY   \Mcount_cnt_cy<15>  (
    .CI(Mcount_cnt_cy[14]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<15>_rt_97 ),
    .O(Mcount_cnt_cy[15])
  );
  XORCY   \Mcount_cnt_xor<15>  (
    .CI(Mcount_cnt_cy[14]),
    .LI(\Mcount_cnt_cy<15>_rt_97 ),
    .O(Result[15])
  );
  MUXCY   \Mcount_cnt_cy<16>  (
    .CI(Mcount_cnt_cy[15]),
    .DI(cnt[18]),
    .S(\Mcount_cnt_cy<16>_rt_98 ),
    .O(Mcount_cnt_cy[16])
  );
  XORCY   \Mcount_cnt_xor<16>  (
    .CI(Mcount_cnt_cy[15]),
    .LI(\Mcount_cnt_cy<16>_rt_98 ),
    .O(Result[16])
  );
  XORCY   \Mcount_cnt_xor<17>  (
    .CI(Mcount_cnt_cy[16]),
    .LI(\Mcount_cnt_xor<17>_rt_99 ),
    .O(Result[17])
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \GND_1_o_GND_1_o_equal_5_o<18>1  (
    .I0(cnt[12]),
    .I1(cnt[6]),
    .I2(cnt[14]),
    .I3(cnt[13]),
    .I4(cnt[17]),
    .I5(cnt[15]),
    .O(GND_1_o_GND_1_o_equal_5_o[18])
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \GND_1_o_GND_1_o_equal_5_o<18>2  (
    .I0(cnt[1]),
    .I1(cnt[0]),
    .I2(cnt[3]),
    .I3(cnt[2]),
    .I4(cnt[5]),
    .I5(cnt[4]),
    .O(\GND_1_o_GND_1_o_equal_5_o<18>1_78 )
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \GND_1_o_GND_1_o_equal_5_o<18>3  (
    .I0(cnt[8]),
    .I1(cnt[7]),
    .I2(cnt[9]),
    .I3(cnt[10]),
    .I4(cnt[11]),
    .I5(cnt[16]),
    .O(\GND_1_o_GND_1_o_equal_5_o<18>2_79 )
  );
  IBUF   rst_IBUF (
    .I(rst),
    .O(rst_IBUF_1)
  );
  OBUF   clk_1s_OBUF (
    .I(clk_1s_OBUF_21),
    .O(clk_1s)
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<1>_rt  (
    .I0(cnt[1]),
    .O(\Mcount_cnt_cy<1>_rt_83 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<2>_rt  (
    .I0(cnt[2]),
    .O(\Mcount_cnt_cy<2>_rt_84 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<3>_rt  (
    .I0(cnt[3]),
    .O(\Mcount_cnt_cy<3>_rt_85 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<4>_rt  (
    .I0(cnt[4]),
    .O(\Mcount_cnt_cy<4>_rt_86 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<5>_rt  (
    .I0(cnt[5]),
    .O(\Mcount_cnt_cy<5>_rt_87 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<6>_rt  (
    .I0(cnt[6]),
    .O(\Mcount_cnt_cy<6>_rt_88 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<7>_rt  (
    .I0(cnt[7]),
    .O(\Mcount_cnt_cy<7>_rt_89 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<8>_rt  (
    .I0(cnt[8]),
    .O(\Mcount_cnt_cy<8>_rt_90 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<9>_rt  (
    .I0(cnt[9]),
    .O(\Mcount_cnt_cy<9>_rt_91 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<10>_rt  (
    .I0(cnt[10]),
    .O(\Mcount_cnt_cy<10>_rt_92 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<11>_rt  (
    .I0(cnt[11]),
    .O(\Mcount_cnt_cy<11>_rt_93 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<12>_rt  (
    .I0(cnt[12]),
    .O(\Mcount_cnt_cy<12>_rt_94 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<13>_rt  (
    .I0(cnt[13]),
    .O(\Mcount_cnt_cy<13>_rt_95 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<14>_rt  (
    .I0(cnt[14]),
    .O(\Mcount_cnt_cy<14>_rt_96 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<15>_rt  (
    .I0(cnt[15]),
    .O(\Mcount_cnt_cy<15>_rt_97 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_cy<16>_rt  (
    .I0(cnt[16]),
    .O(\Mcount_cnt_cy<16>_rt_98 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_cnt_xor<17>_rt  (
    .I0(cnt[17]),
    .O(\Mcount_cnt_xor<17>_rt_99 )
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_171 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[17]),
    .O(Mcount_cnt_eqn_17)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_161 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[16]),
    .O(Mcount_cnt_eqn_16)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_151 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[15]),
    .O(Mcount_cnt_eqn_15)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_141 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[14]),
    .O(Mcount_cnt_eqn_14)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_131 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[13]),
    .O(Mcount_cnt_eqn_13)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_121 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[12]),
    .O(Mcount_cnt_eqn_12)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_111 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[11]),
    .O(Mcount_cnt_eqn_11)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_101 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[10]),
    .O(Mcount_cnt_eqn_10)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_91 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[9]),
    .O(Mcount_cnt_eqn_9)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_81 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[8]),
    .O(Mcount_cnt_eqn_8)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_71 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[7]),
    .O(Mcount_cnt_eqn_7)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_61 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[6]),
    .O(Mcount_cnt_eqn_6)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_51 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[5]),
    .O(Mcount_cnt_eqn_5)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_41 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[4]),
    .O(Mcount_cnt_eqn_4)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_31 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[3]),
    .O(Mcount_cnt_eqn_3)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_21 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[2]),
    .O(Mcount_cnt_eqn_2)
  );
  LUT4 #(
    .INIT ( 16'h7F00 ))
  Mcount_cnt_eqn_18 (
    .I0(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(GND_1_o_GND_1_o_equal_5_o[18]),
    .I3(Result[1]),
    .O(Mcount_cnt_eqn_1)
  );
  LUT4 #(
    .INIT ( 16'h2AAA ))
  Mcount_cnt_eqn_01 (
    .I0(Result[0]),
    .I1(GND_1_o_GND_1_o_equal_5_o[18]),
    .I2(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I3(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .O(Mcount_cnt_eqn_0)
  );
  LUT3 #(
    .INIT ( 8'h6A ))
  clk_1s_dpot (
    .I0(clk_1s_OBUF_21),
    .I1(\GND_1_o_GND_1_o_equal_5_o<18>1_78 ),
    .I2(\GND_1_o_GND_1_o_equal_5_o<18>2_79 ),
    .O(clk_1s_dpot_100)
  );
  BUFGP   clk_100M_BUFGP (
    .I(clk_100M),
    .O(clk_100M_BUFGP_0)
  );
  INV   \Mcount_cnt_lut<0>_INV_0  (
    .I(cnt[0]),
    .O(Mcount_cnt_lut[0])
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

