////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: top_register_8_synthesis.v
// /___/   /\     Timestamp: Tue May 07 15:58:40 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim top_register_8.ngc top_register_8_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: top_register_8.ngc
// Output file	: F:\git\FPGA\Examination\bit_26\netgen\synthesis\top_register_8_synthesis.v
// # of Modules	: 1
// Design Name	: top_register_8
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

module top_register_8 (
  CLK_TOP, RST_TOP, S_TOP, LOUT_TOP
);
  input CLK_TOP;
  input RST_TOP;
  input [2 : 0] S_TOP;
  output [7 : 0] LOUT_TOP;
  wire S_TOP_2_IBUF_0;
  wire S_TOP_1_IBUF_1;
  wire S_TOP_0_IBUF_2;
  wire CLK_TOP_BUFGP_3;
  wire RST_TOP_IBUF_4;
  wire Mux;
  wire N0;
  wire N1;
  wire \t1/Cnt[17]_GND_2_o_equal_1_o ;
  wire \t1/_n0029_inv ;
  wire \t1/Mcount_Clk_Div_eqn_0 ;
  wire \t1/Mcount_Clk_Div_eqn_1 ;
  wire \t1/Mcount_Clk_Div_eqn_2 ;
  wire \t1/Mcount_Clk_Div_eqn_3 ;
  wire \t1/Mcount_Clk_Div_eqn_4 ;
  wire \t1/Mcount_Clk_Div_eqn_5 ;
  wire \t1/Mcount_Clk_Div_eqn_6 ;
  wire \t1/Mcount_Clk_Div_eqn_7 ;
  wire \Result<0>1 ;
  wire \Result<1>1 ;
  wire \Result<2>1 ;
  wire \Result<3>1 ;
  wire \Result<4>1 ;
  wire \Result<5>1 ;
  wire \Result<6>1 ;
  wire \Result<7>1 ;
  wire \t2/Mmux_MUX_OUT_4_94 ;
  wire \t2/Mmux_MUX_OUT_3_95 ;
  wire \t1/Cnt[17]_GND_2_o_equal_1_o<17> ;
  wire \t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ;
  wire \t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ;
  wire \t1/_n0029_inv1_133 ;
  wire \t1/_n0029_inv2_134 ;
  wire \t1/_n0029_inv3_135 ;
  wire \t1/_n0029_inv4_136 ;
  wire \t1/_n0029_inv5_137 ;
  wire \t1/_n0029_inv6_138 ;
  wire \t1/Mcount_Clk_Div_cy<1>_rt_152 ;
  wire \t1/Mcount_Clk_Div_cy<2>_rt_153 ;
  wire \t1/Mcount_Clk_Div_cy<3>_rt_154 ;
  wire \t1/Mcount_Clk_Div_cy<4>_rt_155 ;
  wire \t1/Mcount_Clk_Div_cy<5>_rt_156 ;
  wire \t1/Mcount_Clk_Div_cy<6>_rt_157 ;
  wire \t1/Mcount_Cnt_cy<1>_rt_158 ;
  wire \t1/Mcount_Cnt_cy<2>_rt_159 ;
  wire \t1/Mcount_Cnt_cy<3>_rt_160 ;
  wire \t1/Mcount_Cnt_cy<4>_rt_161 ;
  wire \t1/Mcount_Cnt_cy<5>_rt_162 ;
  wire \t1/Mcount_Cnt_cy<6>_rt_163 ;
  wire \t1/Mcount_Cnt_cy<7>_rt_164 ;
  wire \t1/Mcount_Cnt_cy<8>_rt_165 ;
  wire \t1/Mcount_Cnt_cy<9>_rt_166 ;
  wire \t1/Mcount_Cnt_cy<10>_rt_167 ;
  wire \t1/Mcount_Cnt_cy<11>_rt_168 ;
  wire \t1/Mcount_Cnt_cy<12>_rt_169 ;
  wire \t1/Mcount_Cnt_cy<13>_rt_170 ;
  wire \t1/Mcount_Cnt_cy<14>_rt_171 ;
  wire \t1/Mcount_Cnt_cy<15>_rt_172 ;
  wire \t1/Mcount_Cnt_cy<16>_rt_173 ;
  wire \t1/Mcount_Cnt_cy<17>_rt_174 ;
  wire \t1/Mcount_Cnt_cy<18>_rt_175 ;
  wire \t1/Mcount_Cnt_cy<19>_rt_176 ;
  wire \t1/Mcount_Cnt_cy<20>_rt_177 ;
  wire \t1/Mcount_Cnt_cy<21>_rt_178 ;
  wire \t1/Mcount_Cnt_cy<22>_rt_179 ;
  wire \t1/Mcount_Cnt_cy<23>_rt_180 ;
  wire \t1/Mcount_Cnt_cy<24>_rt_181 ;
  wire \t1/Mcount_Clk_Div_xor<7>_rt_182 ;
  wire \t1/Mcount_Cnt_xor<25>_rt_183 ;
  wire [7 : 0] \t1/Clk_Div ;
  wire [7 : 0] \t3/LOUT ;
  wire [25 : 0] \t1/Cnt ;
  wire [25 : 0] Result;
  wire [0 : 0] \t1/Mcount_Clk_Div_lut ;
  wire [6 : 0] \t1/Mcount_Clk_Div_cy ;
  wire [0 : 0] \t1/Mcount_Cnt_lut ;
  wire [24 : 0] \t1/Mcount_Cnt_cy ;
  GND   XST_GND (
    .G(N0)
  );
  VCC   XST_VCC (
    .P(N1)
  );
  FDC   \t1/Cnt_0  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<0>1 ),
    .Q(\t1/Cnt [0])
  );
  FDC   \t1/Cnt_1  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<1>1 ),
    .Q(\t1/Cnt [1])
  );
  FDC   \t1/Cnt_2  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<2>1 ),
    .Q(\t1/Cnt [2])
  );
  FDC   \t1/Cnt_3  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<3>1 ),
    .Q(\t1/Cnt [3])
  );
  FDC   \t1/Cnt_4  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<4>1 ),
    .Q(\t1/Cnt [4])
  );
  FDC   \t1/Cnt_5  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<5>1 ),
    .Q(\t1/Cnt [5])
  );
  FDC   \t1/Cnt_6  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<6>1 ),
    .Q(\t1/Cnt [6])
  );
  FDC   \t1/Cnt_7  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(\Result<7>1 ),
    .Q(\t1/Cnt [7])
  );
  FDC   \t1/Cnt_8  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[8]),
    .Q(\t1/Cnt [8])
  );
  FDC   \t1/Cnt_9  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[9]),
    .Q(\t1/Cnt [9])
  );
  FDC   \t1/Cnt_10  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[10]),
    .Q(\t1/Cnt [10])
  );
  FDC   \t1/Cnt_11  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[11]),
    .Q(\t1/Cnt [11])
  );
  FDC   \t1/Cnt_12  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[12]),
    .Q(\t1/Cnt [12])
  );
  FDC   \t1/Cnt_13  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[13]),
    .Q(\t1/Cnt [13])
  );
  FDC   \t1/Cnt_14  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[14]),
    .Q(\t1/Cnt [14])
  );
  FDC   \t1/Cnt_15  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[15]),
    .Q(\t1/Cnt [15])
  );
  FDC   \t1/Cnt_16  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[16]),
    .Q(\t1/Cnt [16])
  );
  FDC   \t1/Cnt_17  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[17]),
    .Q(\t1/Cnt [17])
  );
  FDC   \t1/Cnt_18  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[18]),
    .Q(\t1/Cnt [18])
  );
  FDC   \t1/Cnt_19  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[19]),
    .Q(\t1/Cnt [19])
  );
  FDC   \t1/Cnt_20  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[20]),
    .Q(\t1/Cnt [20])
  );
  FDC   \t1/Cnt_21  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[21]),
    .Q(\t1/Cnt [21])
  );
  FDC   \t1/Cnt_22  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[22]),
    .Q(\t1/Cnt [22])
  );
  FDC   \t1/Cnt_23  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[23]),
    .Q(\t1/Cnt [23])
  );
  FDC   \t1/Cnt_24  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[24]),
    .Q(\t1/Cnt [24])
  );
  FDC   \t1/Cnt_25  (
    .C(CLK_TOP_BUFGP_3),
    .CLR(RST_TOP_IBUF_4),
    .D(Result[25]),
    .Q(\t1/Cnt [25])
  );
  FDCE   \t1/Clk_Div_0  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_0 ),
    .Q(\t1/Clk_Div [0])
  );
  FDCE   \t1/Clk_Div_1  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_1 ),
    .Q(\t1/Clk_Div [1])
  );
  FDCE   \t1/Clk_Div_2  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_2 ),
    .Q(\t1/Clk_Div [2])
  );
  FDCE   \t1/Clk_Div_3  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_3 ),
    .Q(\t1/Clk_Div [3])
  );
  FDCE   \t1/Clk_Div_4  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_4 ),
    .Q(\t1/Clk_Div [4])
  );
  FDCE   \t1/Clk_Div_5  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_5 ),
    .Q(\t1/Clk_Div [5])
  );
  FDCE   \t1/Clk_Div_6  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_6 ),
    .Q(\t1/Clk_Div [6])
  );
  FDCE   \t1/Clk_Div_7  (
    .C(CLK_TOP_BUFGP_3),
    .CE(\t1/_n0029_inv ),
    .CLR(RST_TOP_IBUF_4),
    .D(\t1/Mcount_Clk_Div_eqn_7 ),
    .Q(\t1/Clk_Div [7])
  );
  MUXF7   \t2/Mmux_MUX_OUT_2_f7  (
    .I0(\t2/Mmux_MUX_OUT_4_94 ),
    .I1(\t2/Mmux_MUX_OUT_3_95 ),
    .S(S_TOP_2_IBUF_0),
    .O(Mux)
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \t2/Mmux_MUX_OUT_4  (
    .I0(S_TOP_1_IBUF_1),
    .I1(S_TOP_0_IBUF_2),
    .I2(\t1/Clk_Div [2]),
    .I3(\t1/Clk_Div [3]),
    .I4(\t1/Clk_Div [1]),
    .I5(\t1/Clk_Div [0]),
    .O(\t2/Mmux_MUX_OUT_4_94 )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \t2/Mmux_MUX_OUT_3  (
    .I0(S_TOP_1_IBUF_1),
    .I1(S_TOP_0_IBUF_2),
    .I2(\t1/Clk_Div [6]),
    .I3(\t1/Clk_Div [7]),
    .I4(\t1/Clk_Div [5]),
    .I5(\t1/Clk_Div [4]),
    .O(\t2/Mmux_MUX_OUT_3_95 )
  );
  MUXCY   \t1/Mcount_Clk_Div_cy<0>  (
    .CI(N0),
    .DI(N1),
    .S(\t1/Mcount_Clk_Div_lut [0]),
    .O(\t1/Mcount_Clk_Div_cy [0])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<0>  (
    .CI(N0),
    .LI(\t1/Mcount_Clk_Div_lut [0]),
    .O(Result[0])
  );
  MUXCY   \t1/Mcount_Clk_Div_cy<1>  (
    .CI(\t1/Mcount_Clk_Div_cy [0]),
    .DI(N0),
    .S(\t1/Mcount_Clk_Div_cy<1>_rt_152 ),
    .O(\t1/Mcount_Clk_Div_cy [1])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<1>  (
    .CI(\t1/Mcount_Clk_Div_cy [0]),
    .LI(\t1/Mcount_Clk_Div_cy<1>_rt_152 ),
    .O(Result[1])
  );
  MUXCY   \t1/Mcount_Clk_Div_cy<2>  (
    .CI(\t1/Mcount_Clk_Div_cy [1]),
    .DI(N0),
    .S(\t1/Mcount_Clk_Div_cy<2>_rt_153 ),
    .O(\t1/Mcount_Clk_Div_cy [2])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<2>  (
    .CI(\t1/Mcount_Clk_Div_cy [1]),
    .LI(\t1/Mcount_Clk_Div_cy<2>_rt_153 ),
    .O(Result[2])
  );
  MUXCY   \t1/Mcount_Clk_Div_cy<3>  (
    .CI(\t1/Mcount_Clk_Div_cy [2]),
    .DI(N0),
    .S(\t1/Mcount_Clk_Div_cy<3>_rt_154 ),
    .O(\t1/Mcount_Clk_Div_cy [3])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<3>  (
    .CI(\t1/Mcount_Clk_Div_cy [2]),
    .LI(\t1/Mcount_Clk_Div_cy<3>_rt_154 ),
    .O(Result[3])
  );
  MUXCY   \t1/Mcount_Clk_Div_cy<4>  (
    .CI(\t1/Mcount_Clk_Div_cy [3]),
    .DI(N0),
    .S(\t1/Mcount_Clk_Div_cy<4>_rt_155 ),
    .O(\t1/Mcount_Clk_Div_cy [4])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<4>  (
    .CI(\t1/Mcount_Clk_Div_cy [3]),
    .LI(\t1/Mcount_Clk_Div_cy<4>_rt_155 ),
    .O(Result[4])
  );
  MUXCY   \t1/Mcount_Clk_Div_cy<5>  (
    .CI(\t1/Mcount_Clk_Div_cy [4]),
    .DI(N0),
    .S(\t1/Mcount_Clk_Div_cy<5>_rt_156 ),
    .O(\t1/Mcount_Clk_Div_cy [5])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<5>  (
    .CI(\t1/Mcount_Clk_Div_cy [4]),
    .LI(\t1/Mcount_Clk_Div_cy<5>_rt_156 ),
    .O(Result[5])
  );
  MUXCY   \t1/Mcount_Clk_Div_cy<6>  (
    .CI(\t1/Mcount_Clk_Div_cy [5]),
    .DI(N0),
    .S(\t1/Mcount_Clk_Div_cy<6>_rt_157 ),
    .O(\t1/Mcount_Clk_Div_cy [6])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<6>  (
    .CI(\t1/Mcount_Clk_Div_cy [5]),
    .LI(\t1/Mcount_Clk_Div_cy<6>_rt_157 ),
    .O(Result[6])
  );
  XORCY   \t1/Mcount_Clk_Div_xor<7>  (
    .CI(\t1/Mcount_Clk_Div_cy [6]),
    .LI(\t1/Mcount_Clk_Div_xor<7>_rt_182 ),
    .O(Result[7])
  );
  MUXCY   \t1/Mcount_Cnt_cy<0>  (
    .CI(N0),
    .DI(N1),
    .S(\t1/Mcount_Cnt_lut [0]),
    .O(\t1/Mcount_Cnt_cy [0])
  );
  XORCY   \t1/Mcount_Cnt_xor<0>  (
    .CI(N0),
    .LI(\t1/Mcount_Cnt_lut [0]),
    .O(\Result<0>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<1>  (
    .CI(\t1/Mcount_Cnt_cy [0]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<1>_rt_158 ),
    .O(\t1/Mcount_Cnt_cy [1])
  );
  XORCY   \t1/Mcount_Cnt_xor<1>  (
    .CI(\t1/Mcount_Cnt_cy [0]),
    .LI(\t1/Mcount_Cnt_cy<1>_rt_158 ),
    .O(\Result<1>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<2>  (
    .CI(\t1/Mcount_Cnt_cy [1]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<2>_rt_159 ),
    .O(\t1/Mcount_Cnt_cy [2])
  );
  XORCY   \t1/Mcount_Cnt_xor<2>  (
    .CI(\t1/Mcount_Cnt_cy [1]),
    .LI(\t1/Mcount_Cnt_cy<2>_rt_159 ),
    .O(\Result<2>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<3>  (
    .CI(\t1/Mcount_Cnt_cy [2]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<3>_rt_160 ),
    .O(\t1/Mcount_Cnt_cy [3])
  );
  XORCY   \t1/Mcount_Cnt_xor<3>  (
    .CI(\t1/Mcount_Cnt_cy [2]),
    .LI(\t1/Mcount_Cnt_cy<3>_rt_160 ),
    .O(\Result<3>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<4>  (
    .CI(\t1/Mcount_Cnt_cy [3]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<4>_rt_161 ),
    .O(\t1/Mcount_Cnt_cy [4])
  );
  XORCY   \t1/Mcount_Cnt_xor<4>  (
    .CI(\t1/Mcount_Cnt_cy [3]),
    .LI(\t1/Mcount_Cnt_cy<4>_rt_161 ),
    .O(\Result<4>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<5>  (
    .CI(\t1/Mcount_Cnt_cy [4]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<5>_rt_162 ),
    .O(\t1/Mcount_Cnt_cy [5])
  );
  XORCY   \t1/Mcount_Cnt_xor<5>  (
    .CI(\t1/Mcount_Cnt_cy [4]),
    .LI(\t1/Mcount_Cnt_cy<5>_rt_162 ),
    .O(\Result<5>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<6>  (
    .CI(\t1/Mcount_Cnt_cy [5]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<6>_rt_163 ),
    .O(\t1/Mcount_Cnt_cy [6])
  );
  XORCY   \t1/Mcount_Cnt_xor<6>  (
    .CI(\t1/Mcount_Cnt_cy [5]),
    .LI(\t1/Mcount_Cnt_cy<6>_rt_163 ),
    .O(\Result<6>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<7>  (
    .CI(\t1/Mcount_Cnt_cy [6]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<7>_rt_164 ),
    .O(\t1/Mcount_Cnt_cy [7])
  );
  XORCY   \t1/Mcount_Cnt_xor<7>  (
    .CI(\t1/Mcount_Cnt_cy [6]),
    .LI(\t1/Mcount_Cnt_cy<7>_rt_164 ),
    .O(\Result<7>1 )
  );
  MUXCY   \t1/Mcount_Cnt_cy<8>  (
    .CI(\t1/Mcount_Cnt_cy [7]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<8>_rt_165 ),
    .O(\t1/Mcount_Cnt_cy [8])
  );
  XORCY   \t1/Mcount_Cnt_xor<8>  (
    .CI(\t1/Mcount_Cnt_cy [7]),
    .LI(\t1/Mcount_Cnt_cy<8>_rt_165 ),
    .O(Result[8])
  );
  MUXCY   \t1/Mcount_Cnt_cy<9>  (
    .CI(\t1/Mcount_Cnt_cy [8]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<9>_rt_166 ),
    .O(\t1/Mcount_Cnt_cy [9])
  );
  XORCY   \t1/Mcount_Cnt_xor<9>  (
    .CI(\t1/Mcount_Cnt_cy [8]),
    .LI(\t1/Mcount_Cnt_cy<9>_rt_166 ),
    .O(Result[9])
  );
  MUXCY   \t1/Mcount_Cnt_cy<10>  (
    .CI(\t1/Mcount_Cnt_cy [9]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<10>_rt_167 ),
    .O(\t1/Mcount_Cnt_cy [10])
  );
  XORCY   \t1/Mcount_Cnt_xor<10>  (
    .CI(\t1/Mcount_Cnt_cy [9]),
    .LI(\t1/Mcount_Cnt_cy<10>_rt_167 ),
    .O(Result[10])
  );
  MUXCY   \t1/Mcount_Cnt_cy<11>  (
    .CI(\t1/Mcount_Cnt_cy [10]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<11>_rt_168 ),
    .O(\t1/Mcount_Cnt_cy [11])
  );
  XORCY   \t1/Mcount_Cnt_xor<11>  (
    .CI(\t1/Mcount_Cnt_cy [10]),
    .LI(\t1/Mcount_Cnt_cy<11>_rt_168 ),
    .O(Result[11])
  );
  MUXCY   \t1/Mcount_Cnt_cy<12>  (
    .CI(\t1/Mcount_Cnt_cy [11]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<12>_rt_169 ),
    .O(\t1/Mcount_Cnt_cy [12])
  );
  XORCY   \t1/Mcount_Cnt_xor<12>  (
    .CI(\t1/Mcount_Cnt_cy [11]),
    .LI(\t1/Mcount_Cnt_cy<12>_rt_169 ),
    .O(Result[12])
  );
  MUXCY   \t1/Mcount_Cnt_cy<13>  (
    .CI(\t1/Mcount_Cnt_cy [12]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<13>_rt_170 ),
    .O(\t1/Mcount_Cnt_cy [13])
  );
  XORCY   \t1/Mcount_Cnt_xor<13>  (
    .CI(\t1/Mcount_Cnt_cy [12]),
    .LI(\t1/Mcount_Cnt_cy<13>_rt_170 ),
    .O(Result[13])
  );
  MUXCY   \t1/Mcount_Cnt_cy<14>  (
    .CI(\t1/Mcount_Cnt_cy [13]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<14>_rt_171 ),
    .O(\t1/Mcount_Cnt_cy [14])
  );
  XORCY   \t1/Mcount_Cnt_xor<14>  (
    .CI(\t1/Mcount_Cnt_cy [13]),
    .LI(\t1/Mcount_Cnt_cy<14>_rt_171 ),
    .O(Result[14])
  );
  MUXCY   \t1/Mcount_Cnt_cy<15>  (
    .CI(\t1/Mcount_Cnt_cy [14]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<15>_rt_172 ),
    .O(\t1/Mcount_Cnt_cy [15])
  );
  XORCY   \t1/Mcount_Cnt_xor<15>  (
    .CI(\t1/Mcount_Cnt_cy [14]),
    .LI(\t1/Mcount_Cnt_cy<15>_rt_172 ),
    .O(Result[15])
  );
  MUXCY   \t1/Mcount_Cnt_cy<16>  (
    .CI(\t1/Mcount_Cnt_cy [15]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<16>_rt_173 ),
    .O(\t1/Mcount_Cnt_cy [16])
  );
  XORCY   \t1/Mcount_Cnt_xor<16>  (
    .CI(\t1/Mcount_Cnt_cy [15]),
    .LI(\t1/Mcount_Cnt_cy<16>_rt_173 ),
    .O(Result[16])
  );
  MUXCY   \t1/Mcount_Cnt_cy<17>  (
    .CI(\t1/Mcount_Cnt_cy [16]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<17>_rt_174 ),
    .O(\t1/Mcount_Cnt_cy [17])
  );
  XORCY   \t1/Mcount_Cnt_xor<17>  (
    .CI(\t1/Mcount_Cnt_cy [16]),
    .LI(\t1/Mcount_Cnt_cy<17>_rt_174 ),
    .O(Result[17])
  );
  MUXCY   \t1/Mcount_Cnt_cy<18>  (
    .CI(\t1/Mcount_Cnt_cy [17]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<18>_rt_175 ),
    .O(\t1/Mcount_Cnt_cy [18])
  );
  XORCY   \t1/Mcount_Cnt_xor<18>  (
    .CI(\t1/Mcount_Cnt_cy [17]),
    .LI(\t1/Mcount_Cnt_cy<18>_rt_175 ),
    .O(Result[18])
  );
  MUXCY   \t1/Mcount_Cnt_cy<19>  (
    .CI(\t1/Mcount_Cnt_cy [18]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<19>_rt_176 ),
    .O(\t1/Mcount_Cnt_cy [19])
  );
  XORCY   \t1/Mcount_Cnt_xor<19>  (
    .CI(\t1/Mcount_Cnt_cy [18]),
    .LI(\t1/Mcount_Cnt_cy<19>_rt_176 ),
    .O(Result[19])
  );
  MUXCY   \t1/Mcount_Cnt_cy<20>  (
    .CI(\t1/Mcount_Cnt_cy [19]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<20>_rt_177 ),
    .O(\t1/Mcount_Cnt_cy [20])
  );
  XORCY   \t1/Mcount_Cnt_xor<20>  (
    .CI(\t1/Mcount_Cnt_cy [19]),
    .LI(\t1/Mcount_Cnt_cy<20>_rt_177 ),
    .O(Result[20])
  );
  MUXCY   \t1/Mcount_Cnt_cy<21>  (
    .CI(\t1/Mcount_Cnt_cy [20]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<21>_rt_178 ),
    .O(\t1/Mcount_Cnt_cy [21])
  );
  XORCY   \t1/Mcount_Cnt_xor<21>  (
    .CI(\t1/Mcount_Cnt_cy [20]),
    .LI(\t1/Mcount_Cnt_cy<21>_rt_178 ),
    .O(Result[21])
  );
  MUXCY   \t1/Mcount_Cnt_cy<22>  (
    .CI(\t1/Mcount_Cnt_cy [21]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<22>_rt_179 ),
    .O(\t1/Mcount_Cnt_cy [22])
  );
  XORCY   \t1/Mcount_Cnt_xor<22>  (
    .CI(\t1/Mcount_Cnt_cy [21]),
    .LI(\t1/Mcount_Cnt_cy<22>_rt_179 ),
    .O(Result[22])
  );
  MUXCY   \t1/Mcount_Cnt_cy<23>  (
    .CI(\t1/Mcount_Cnt_cy [22]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<23>_rt_180 ),
    .O(\t1/Mcount_Cnt_cy [23])
  );
  XORCY   \t1/Mcount_Cnt_xor<23>  (
    .CI(\t1/Mcount_Cnt_cy [22]),
    .LI(\t1/Mcount_Cnt_cy<23>_rt_180 ),
    .O(Result[23])
  );
  MUXCY   \t1/Mcount_Cnt_cy<24>  (
    .CI(\t1/Mcount_Cnt_cy [23]),
    .DI(N0),
    .S(\t1/Mcount_Cnt_cy<24>_rt_181 ),
    .O(\t1/Mcount_Cnt_cy [24])
  );
  XORCY   \t1/Mcount_Cnt_xor<24>  (
    .CI(\t1/Mcount_Cnt_cy [23]),
    .LI(\t1/Mcount_Cnt_cy<24>_rt_181 ),
    .O(Result[24])
  );
  XORCY   \t1/Mcount_Cnt_xor<25>  (
    .CI(\t1/Mcount_Cnt_cy [24]),
    .LI(\t1/Mcount_Cnt_xor<25>_rt_183 ),
    .O(Result[25])
  );
  FDC   \t3/LOUT_7  (
    .C(Mux),
    .CLR(RST_TOP_IBUF_4),
    .D(\t3/LOUT [6]),
    .Q(\t3/LOUT [7])
  );
  FDC   \t3/LOUT_6  (
    .C(Mux),
    .CLR(RST_TOP_IBUF_4),
    .D(\t3/LOUT [5]),
    .Q(\t3/LOUT [6])
  );
  FDC   \t3/LOUT_5  (
    .C(Mux),
    .CLR(RST_TOP_IBUF_4),
    .D(\t3/LOUT [4]),
    .Q(\t3/LOUT [5])
  );
  FDC   \t3/LOUT_4  (
    .C(Mux),
    .CLR(RST_TOP_IBUF_4),
    .D(\t3/LOUT [3]),
    .Q(\t3/LOUT [4])
  );
  FDC   \t3/LOUT_3  (
    .C(Mux),
    .CLR(RST_TOP_IBUF_4),
    .D(\t3/LOUT [2]),
    .Q(\t3/LOUT [3])
  );
  FDC   \t3/LOUT_2  (
    .C(Mux),
    .CLR(RST_TOP_IBUF_4),
    .D(\t3/LOUT [1]),
    .Q(\t3/LOUT [2])
  );
  FDC   \t3/LOUT_1  (
    .C(Mux),
    .CLR(RST_TOP_IBUF_4),
    .D(\t3/LOUT [0]),
    .Q(\t3/LOUT [1])
  );
  FDP   \t3/LOUT_0  (
    .C(Mux),
    .D(\t3/LOUT [7]),
    .PRE(RST_TOP_IBUF_4),
    .Q(\t3/LOUT [0])
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \t1/Cnt[17]_GND_2_o_equal_1_o<17>1  (
    .I0(\t1/Cnt [1]),
    .I1(\t1/Cnt [0]),
    .I2(\t1/Cnt [2]),
    .I3(\t1/Cnt [3]),
    .I4(\t1/Cnt [4]),
    .I5(\t1/Cnt [5]),
    .O(\t1/Cnt[17]_GND_2_o_equal_1_o<17> )
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \t1/Cnt[17]_GND_2_o_equal_1_o<17>2  (
    .I0(\t1/Cnt [7]),
    .I1(\t1/Cnt [6]),
    .I2(\t1/Cnt [8]),
    .I3(\t1/Cnt [9]),
    .I4(\t1/Cnt [10]),
    .I5(\t1/Cnt [11]),
    .O(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 )
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \t1/Cnt[17]_GND_2_o_equal_1_o<17>3  (
    .I0(\t1/Cnt [13]),
    .I1(\t1/Cnt [12]),
    .I2(\t1/Cnt [14]),
    .I3(\t1/Cnt [15]),
    .I4(\t1/Cnt [16]),
    .I5(\t1/Cnt [17]),
    .O(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 )
  );
  LUT3 #(
    .INIT ( 8'h80 ))
  \t1/Cnt[17]_GND_2_o_equal_1_o<17>4  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .O(\t1/Cnt[17]_GND_2_o_equal_1_o )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \t1/_n0029_inv1  (
    .I0(\t1/Cnt [4]),
    .I1(\t1/Cnt [5]),
    .I2(\t1/Cnt [2]),
    .I3(\t1/Cnt [3]),
    .I4(\t1/Cnt [24]),
    .I5(\t1/Cnt [25]),
    .O(\t1/_n0029_inv1_133 )
  );
  LUT5 #(
    .INIT ( 32'h80000000 ))
  \t1/_n0029_inv2  (
    .I0(\t1/Cnt [8]),
    .I1(\t1/Cnt [9]),
    .I2(\t1/Cnt [6]),
    .I3(\t1/Cnt [7]),
    .I4(\t1/_n0029_inv1_133 ),
    .O(\t1/_n0029_inv2_134 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \t1/_n0029_inv3  (
    .I0(\t1/Cnt [17]),
    .I1(\t1/Cnt [18]),
    .I2(\t1/Cnt [15]),
    .I3(\t1/Cnt [16]),
    .I4(\t1/Cnt [13]),
    .I5(\t1/Cnt [14]),
    .O(\t1/_n0029_inv3_135 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \t1/_n0029_inv4  (
    .I0(\t1/Cnt [22]),
    .I1(\t1/Cnt [23]),
    .I2(\t1/Cnt [20]),
    .I3(\t1/Cnt [21]),
    .I4(\t1/Cnt [19]),
    .I5(\t1/Cnt [1]),
    .O(\t1/_n0029_inv4_136 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \t1/_n0029_inv5  (
    .I0(\t1/Clk_Div [4]),
    .I1(\t1/Clk_Div [5]),
    .I2(\t1/Clk_Div [2]),
    .I3(\t1/Clk_Div [3]),
    .I4(\t1/Clk_Div [0]),
    .I5(\t1/Clk_Div [1]),
    .O(\t1/_n0029_inv5_137 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \t1/_n0029_inv6  (
    .I0(\t1/Cnt [11]),
    .I1(\t1/Cnt [12]),
    .I2(\t1/Cnt [0]),
    .I3(\t1/Cnt [10]),
    .I4(\t1/Clk_Div [6]),
    .I5(\t1/Clk_Div [7]),
    .O(\t1/_n0029_inv6_138 )
  );
  LUT6 #(
    .INIT ( 64'hFFFFFFFF80000000 ))
  \t1/_n0029_inv7  (
    .I0(\t1/_n0029_inv4_136 ),
    .I1(\t1/_n0029_inv6_138 ),
    .I2(\t1/_n0029_inv5_137 ),
    .I3(\t1/_n0029_inv3_135 ),
    .I4(\t1/_n0029_inv2_134 ),
    .I5(\t1/Cnt[17]_GND_2_o_equal_1_o ),
    .O(\t1/_n0029_inv )
  );
  IBUF   S_TOP_2_IBUF (
    .I(S_TOP[2]),
    .O(S_TOP_2_IBUF_0)
  );
  IBUF   S_TOP_1_IBUF (
    .I(S_TOP[1]),
    .O(S_TOP_1_IBUF_1)
  );
  IBUF   S_TOP_0_IBUF (
    .I(S_TOP[0]),
    .O(S_TOP_0_IBUF_2)
  );
  IBUF   RST_TOP_IBUF (
    .I(RST_TOP),
    .O(RST_TOP_IBUF_4)
  );
  OBUF   LOUT_TOP_7_OBUF (
    .I(\t3/LOUT [7]),
    .O(LOUT_TOP[7])
  );
  OBUF   LOUT_TOP_6_OBUF (
    .I(\t3/LOUT [6]),
    .O(LOUT_TOP[6])
  );
  OBUF   LOUT_TOP_5_OBUF (
    .I(\t3/LOUT [5]),
    .O(LOUT_TOP[5])
  );
  OBUF   LOUT_TOP_4_OBUF (
    .I(\t3/LOUT [4]),
    .O(LOUT_TOP[4])
  );
  OBUF   LOUT_TOP_3_OBUF (
    .I(\t3/LOUT [3]),
    .O(LOUT_TOP[3])
  );
  OBUF   LOUT_TOP_2_OBUF (
    .I(\t3/LOUT [2]),
    .O(LOUT_TOP[2])
  );
  OBUF   LOUT_TOP_1_OBUF (
    .I(\t3/LOUT [1]),
    .O(LOUT_TOP[1])
  );
  OBUF   LOUT_TOP_0_OBUF (
    .I(\t3/LOUT [0]),
    .O(LOUT_TOP[0])
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Clk_Div_cy<1>_rt  (
    .I0(\t1/Clk_Div [1]),
    .O(\t1/Mcount_Clk_Div_cy<1>_rt_152 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Clk_Div_cy<2>_rt  (
    .I0(\t1/Clk_Div [2]),
    .O(\t1/Mcount_Clk_Div_cy<2>_rt_153 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Clk_Div_cy<3>_rt  (
    .I0(\t1/Clk_Div [3]),
    .O(\t1/Mcount_Clk_Div_cy<3>_rt_154 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Clk_Div_cy<4>_rt  (
    .I0(\t1/Clk_Div [4]),
    .O(\t1/Mcount_Clk_Div_cy<4>_rt_155 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Clk_Div_cy<5>_rt  (
    .I0(\t1/Clk_Div [5]),
    .O(\t1/Mcount_Clk_Div_cy<5>_rt_156 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Clk_Div_cy<6>_rt  (
    .I0(\t1/Clk_Div [6]),
    .O(\t1/Mcount_Clk_Div_cy<6>_rt_157 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<1>_rt  (
    .I0(\t1/Cnt [1]),
    .O(\t1/Mcount_Cnt_cy<1>_rt_158 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<2>_rt  (
    .I0(\t1/Cnt [2]),
    .O(\t1/Mcount_Cnt_cy<2>_rt_159 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<3>_rt  (
    .I0(\t1/Cnt [3]),
    .O(\t1/Mcount_Cnt_cy<3>_rt_160 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<4>_rt  (
    .I0(\t1/Cnt [4]),
    .O(\t1/Mcount_Cnt_cy<4>_rt_161 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<5>_rt  (
    .I0(\t1/Cnt [5]),
    .O(\t1/Mcount_Cnt_cy<5>_rt_162 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<6>_rt  (
    .I0(\t1/Cnt [6]),
    .O(\t1/Mcount_Cnt_cy<6>_rt_163 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<7>_rt  (
    .I0(\t1/Cnt [7]),
    .O(\t1/Mcount_Cnt_cy<7>_rt_164 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<8>_rt  (
    .I0(\t1/Cnt [8]),
    .O(\t1/Mcount_Cnt_cy<8>_rt_165 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<9>_rt  (
    .I0(\t1/Cnt [9]),
    .O(\t1/Mcount_Cnt_cy<9>_rt_166 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<10>_rt  (
    .I0(\t1/Cnt [10]),
    .O(\t1/Mcount_Cnt_cy<10>_rt_167 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<11>_rt  (
    .I0(\t1/Cnt [11]),
    .O(\t1/Mcount_Cnt_cy<11>_rt_168 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<12>_rt  (
    .I0(\t1/Cnt [12]),
    .O(\t1/Mcount_Cnt_cy<12>_rt_169 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<13>_rt  (
    .I0(\t1/Cnt [13]),
    .O(\t1/Mcount_Cnt_cy<13>_rt_170 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<14>_rt  (
    .I0(\t1/Cnt [14]),
    .O(\t1/Mcount_Cnt_cy<14>_rt_171 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<15>_rt  (
    .I0(\t1/Cnt [15]),
    .O(\t1/Mcount_Cnt_cy<15>_rt_172 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<16>_rt  (
    .I0(\t1/Cnt [16]),
    .O(\t1/Mcount_Cnt_cy<16>_rt_173 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<17>_rt  (
    .I0(\t1/Cnt [17]),
    .O(\t1/Mcount_Cnt_cy<17>_rt_174 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<18>_rt  (
    .I0(\t1/Cnt [18]),
    .O(\t1/Mcount_Cnt_cy<18>_rt_175 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<19>_rt  (
    .I0(\t1/Cnt [19]),
    .O(\t1/Mcount_Cnt_cy<19>_rt_176 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<20>_rt  (
    .I0(\t1/Cnt [20]),
    .O(\t1/Mcount_Cnt_cy<20>_rt_177 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<21>_rt  (
    .I0(\t1/Cnt [21]),
    .O(\t1/Mcount_Cnt_cy<21>_rt_178 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<22>_rt  (
    .I0(\t1/Cnt [22]),
    .O(\t1/Mcount_Cnt_cy<22>_rt_179 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<23>_rt  (
    .I0(\t1/Cnt [23]),
    .O(\t1/Mcount_Cnt_cy<23>_rt_180 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_cy<24>_rt  (
    .I0(\t1/Cnt [24]),
    .O(\t1/Mcount_Cnt_cy<24>_rt_181 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Clk_Div_xor<7>_rt  (
    .I0(\t1/Clk_Div [7]),
    .O(\t1/Mcount_Clk_Div_xor<7>_rt_182 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \t1/Mcount_Cnt_xor<25>_rt  (
    .I0(\t1/Cnt [25]),
    .O(\t1/Mcount_Cnt_xor<25>_rt_183 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_71  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[7]),
    .O(\t1/Mcount_Clk_Div_eqn_7 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_61  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[6]),
    .O(\t1/Mcount_Clk_Div_eqn_6 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_51  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[5]),
    .O(\t1/Mcount_Clk_Div_eqn_5 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_41  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[4]),
    .O(\t1/Mcount_Clk_Div_eqn_4 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_31  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[3]),
    .O(\t1/Mcount_Clk_Div_eqn_3 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_21  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[2]),
    .O(\t1/Mcount_Clk_Div_eqn_2 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_11  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[1]),
    .O(\t1/Mcount_Clk_Div_eqn_1 )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \t1/Mcount_Clk_Div_eqn_01  (
    .I0(\t1/Cnt[17]_GND_2_o_equal_1_o<17>1_131 ),
    .I1(\t1/Cnt[17]_GND_2_o_equal_1_o<17>2_132 ),
    .I2(\t1/Cnt[17]_GND_2_o_equal_1_o<17> ),
    .I3(Result[0]),
    .O(\t1/Mcount_Clk_Div_eqn_0 )
  );
  BUFGP   CLK_TOP_BUFGP (
    .I(CLK_TOP),
    .O(CLK_TOP_BUFGP_3)
  );
  INV   \t1/Mcount_Clk_Div_lut<0>_INV_0  (
    .I(\t1/Clk_Div [0]),
    .O(\t1/Mcount_Clk_Div_lut [0])
  );
  INV   \t1/Mcount_Cnt_lut<0>_INV_0  (
    .I(\t1/Cnt [0]),
    .O(\t1/Mcount_Cnt_lut [0])
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

