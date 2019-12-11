////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: door_synthesis.v
// /___/   /\     Timestamp: Sun Jun 02 22:51:21 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim door.ngc door_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: door.ngc
// Output file	: F:\git\FPGA\Examination\door\netgen\synthesis\door_synthesis.v
// # of Modules	: 1
// Design Name	: door
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

module door (
A, B, C, D, S
);
  input [3 : 0] A;
  input [3 : 0] B;
  input [3 : 0] C;
  input [3 : 0] D;
  output [7 : 0] S;
  wire A_2_IBUF_0;
  wire A_1_IBUF_1;
  wire A_0_IBUF_2;
  wire A_3_IBUF_3;
  wire B_2_IBUF_4;
  wire B_1_IBUF_5;
  wire B_0_IBUF_6;
  wire B_3_IBUF_7;
  wire C_2_IBUF_8;
  wire C_1_IBUF_9;
  wire C_0_IBUF_10;
  wire C_3_IBUF_11;
  wire D_2_IBUF_12;
  wire D_1_IBUF_13;
  wire D_0_IBUF_14;
  wire D_3_IBUF_15;
  wire \D[2]_C[2]_OR_3_o ;
  wire \D[2]_C[2]_OR_6_o ;
  wire \D[2]_C[2]_OR_9_o_18 ;
  wire \D[2]_C[2]_OR_12_o ;
  wire \D[2]_C[2]_OR_15_o ;
  wire \D[2]_C[2]_OR_18_o ;
  wire \D[2]_C[2]_OR_21_o_22 ;
  wire \D[2]_C[2]_OR_24_o ;
  wire S_7_24;
  wire S_6_25;
  wire S_5_26;
  wire S_4_27;
  wire S_3_28;
  wire S_2_29;
  wire S_1_30;
  wire S_0_31;
  wire N1;
  wire \D[2]_C[2]_OR_3_o1_33 ;
  wire \D[2]_C[2]_OR_21_o2 ;
  wire \D[2]_C[2]_OR_21_o3 ;
  wire \D[2]_C[2]_OR_21_o4 ;
  wire N2;
  wire \D[2]_C[2]_OR_12_o3_38 ;
  wire \D[2]_C[2]_OR_12_o4_39 ;
  wire \D[2]_C[2]_OR_15_o3_40 ;
  wire \D[2]_C[2]_OR_15_o4_41 ;
  wire \D[2]_C[2]_OR_3_o2_42 ;
  wire \D[2]_C[2]_OR_3_o3_43 ;
  wire \D[2]_C[2]_OR_3_o4_44 ;
  wire \D[2]_C[2]_OR_18_o3_45 ;
  wire \D[2]_C[2]_OR_18_o4_46 ;
  wire \D[2]_C[2]_OR_6_o1_47 ;
  wire \D[2]_C[2]_OR_6_o2_48 ;
  wire \D[2]_C[2]_OR_6_o3_49 ;
  wire \D[2]_C[2]_OR_24_o3_50 ;
  wire \D[2]_C[2]_OR_24_o4_51 ;
  wire N4;
  wire N6;
  wire N8;
  wire N10;
  wire N12;
  GND   XST_GND (
    .G(N1)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_6 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_6_o ),
    .Q(S_6_25)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_7 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_3_o ),
    .Q(S_7_24)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_3 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_15_o ),
    .Q(S_3_28)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_5 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_9_o_18 ),
    .Q(S_5_26)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_4 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_12_o ),
    .Q(S_4_27)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_0 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_24_o ),
    .Q(S_0_31)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_2 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_18_o ),
    .Q(S_2_29)
  );
  LDP #(
    .INIT ( 1'b0 ))
  S_1 (
    .D(N1),
    .G(N1),
    .PRE(\D[2]_C[2]_OR_21_o_22 ),
    .Q(S_1_30)
  );
  LUT3 #(
    .INIT ( 8'h08 ))
  \D[2]_C[2]_OR_3_o11  (
    .I0(A_2_IBUF_0),
    .I1(A_1_IBUF_1),
    .I2(A_3_IBUF_3),
    .O(\D[2]_C[2]_OR_3_o1_33 )
  );
  LUT3 #(
    .INIT ( 8'h02 ))
  \D[2]_C[2]_OR_21_o21  (
    .I0(B_0_IBUF_6),
    .I1(B_1_IBUF_5),
    .I2(B_3_IBUF_7),
    .O(\D[2]_C[2]_OR_21_o2 )
  );
  LUT3 #(
    .INIT ( 8'h02 ))
  \D[2]_C[2]_OR_21_o31  (
    .I0(C_0_IBUF_10),
    .I1(C_1_IBUF_9),
    .I2(C_3_IBUF_11),
    .O(\D[2]_C[2]_OR_21_o3 )
  );
  LUT3 #(
    .INIT ( 8'h02 ))
  \D[2]_C[2]_OR_21_o41  (
    .I0(D_0_IBUF_14),
    .I1(D_1_IBUF_13),
    .I2(D_3_IBUF_15),
    .O(\D[2]_C[2]_OR_21_o4 )
  );
  LUT6 #(
    .INIT ( 64'hFFFF040004000400 ))
  \D[2]_C[2]_OR_9_o_SW0  (
    .I0(A_3_IBUF_3),
    .I1(A_2_IBUF_0),
    .I2(A_1_IBUF_1),
    .I3(A_0_IBUF_2),
    .I4(\D[2]_C[2]_OR_21_o2 ),
    .I5(B_2_IBUF_4),
    .O(N2)
  );
  LUT5 #(
    .INIT ( 32'hFFF8F8F8 ))
  \D[2]_C[2]_OR_9_o  (
    .I0(\D[2]_C[2]_OR_21_o4 ),
    .I1(D_2_IBUF_12),
    .I2(N2),
    .I3(\D[2]_C[2]_OR_21_o3 ),
    .I4(C_2_IBUF_8),
    .O(\D[2]_C[2]_OR_9_o_18 )
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \D[2]_C[2]_OR_12_o3  (
    .I0(A_3_IBUF_3),
    .I1(A_1_IBUF_1),
    .I2(A_2_IBUF_0),
    .I3(A_0_IBUF_2),
    .O(\D[2]_C[2]_OR_12_o3_38 )
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \D[2]_C[2]_OR_12_o4  (
    .I0(D_3_IBUF_15),
    .I1(D_1_IBUF_13),
    .I2(D_2_IBUF_12),
    .I3(D_0_IBUF_14),
    .O(\D[2]_C[2]_OR_12_o4_39 )
  );
  LUT4 #(
    .INIT ( 16'h1000 ))
  \D[2]_C[2]_OR_15_o3  (
    .I0(C_3_IBUF_11),
    .I1(C_2_IBUF_8),
    .I2(C_0_IBUF_10),
    .I3(C_1_IBUF_9),
    .O(\D[2]_C[2]_OR_15_o3_40 )
  );
  LUT4 #(
    .INIT ( 16'h1000 ))
  \D[2]_C[2]_OR_15_o4  (
    .I0(D_3_IBUF_15),
    .I1(D_2_IBUF_12),
    .I2(D_0_IBUF_14),
    .I3(D_1_IBUF_13),
    .O(\D[2]_C[2]_OR_15_o4_41 )
  );
  LUT4 #(
    .INIT ( 16'h4000 ))
  \D[2]_C[2]_OR_3_o1  (
    .I0(B_3_IBUF_7),
    .I1(B_0_IBUF_6),
    .I2(B_1_IBUF_5),
    .I3(B_2_IBUF_4),
    .O(\D[2]_C[2]_OR_3_o2_42 )
  );
  LUT4 #(
    .INIT ( 16'h4000 ))
  \D[2]_C[2]_OR_3_o2  (
    .I0(C_3_IBUF_11),
    .I1(C_0_IBUF_10),
    .I2(C_1_IBUF_9),
    .I3(C_2_IBUF_8),
    .O(\D[2]_C[2]_OR_3_o3_43 )
  );
  LUT4 #(
    .INIT ( 16'h4000 ))
  \D[2]_C[2]_OR_3_o3  (
    .I0(D_3_IBUF_15),
    .I1(D_0_IBUF_14),
    .I2(D_1_IBUF_13),
    .I3(D_2_IBUF_12),
    .O(\D[2]_C[2]_OR_3_o4_44 )
  );
  LUT5 #(
    .INIT ( 32'hFFFEFEFE ))
  \D[2]_C[2]_OR_3_o4  (
    .I0(\D[2]_C[2]_OR_3_o3_43 ),
    .I1(\D[2]_C[2]_OR_3_o4_44 ),
    .I2(\D[2]_C[2]_OR_3_o2_42 ),
    .I3(A_0_IBUF_2),
    .I4(\D[2]_C[2]_OR_3_o1_33 ),
    .O(\D[2]_C[2]_OR_3_o )
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \D[2]_C[2]_OR_18_o3  (
    .I0(C_3_IBUF_11),
    .I1(C_0_IBUF_10),
    .I2(C_1_IBUF_9),
    .I3(C_2_IBUF_8),
    .O(\D[2]_C[2]_OR_18_o3_45 )
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \D[2]_C[2]_OR_18_o4  (
    .I0(D_3_IBUF_15),
    .I1(D_0_IBUF_14),
    .I2(D_1_IBUF_13),
    .I3(D_2_IBUF_12),
    .O(\D[2]_C[2]_OR_18_o4_46 )
  );
  LUT4 #(
    .INIT ( 16'h1000 ))
  \D[2]_C[2]_OR_6_o1  (
    .I0(C_3_IBUF_11),
    .I1(C_0_IBUF_10),
    .I2(C_2_IBUF_8),
    .I3(C_1_IBUF_9),
    .O(\D[2]_C[2]_OR_6_o1_47 )
  );
  LUT4 #(
    .INIT ( 16'h1000 ))
  \D[2]_C[2]_OR_6_o2  (
    .I0(D_3_IBUF_15),
    .I1(D_0_IBUF_14),
    .I2(D_2_IBUF_12),
    .I3(D_1_IBUF_13),
    .O(\D[2]_C[2]_OR_6_o2_48 )
  );
  LUT4 #(
    .INIT ( 16'h1000 ))
  \D[2]_C[2]_OR_6_o3  (
    .I0(B_3_IBUF_7),
    .I1(B_0_IBUF_6),
    .I2(B_2_IBUF_4),
    .I3(B_1_IBUF_5),
    .O(\D[2]_C[2]_OR_6_o3_49 )
  );
  LUT5 #(
    .INIT ( 32'hFEFEFFFE ))
  \D[2]_C[2]_OR_6_o4  (
    .I0(\D[2]_C[2]_OR_6_o2_48 ),
    .I1(\D[2]_C[2]_OR_6_o3_49 ),
    .I2(\D[2]_C[2]_OR_6_o1_47 ),
    .I3(\D[2]_C[2]_OR_3_o1_33 ),
    .I4(A_0_IBUF_2),
    .O(\D[2]_C[2]_OR_6_o )
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \D[2]_C[2]_OR_24_o3  (
    .I0(A_1_IBUF_1),
    .I1(A_3_IBUF_3),
    .I2(A_2_IBUF_0),
    .I3(A_0_IBUF_2),
    .O(\D[2]_C[2]_OR_24_o3_50 )
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \D[2]_C[2]_OR_24_o4  (
    .I0(D_1_IBUF_13),
    .I1(D_3_IBUF_15),
    .I2(D_0_IBUF_14),
    .I3(D_2_IBUF_12),
    .O(\D[2]_C[2]_OR_24_o4_51 )
  );
  LUT6 #(
    .INIT ( 64'hFFFCFFFF55545555 ))
  \D[2]_C[2]_OR_21_o_SW0  (
    .I0(\D[2]_C[2]_OR_21_o2 ),
    .I1(A_3_IBUF_3),
    .I2(A_2_IBUF_0),
    .I3(A_1_IBUF_1),
    .I4(A_0_IBUF_2),
    .I5(B_2_IBUF_4),
    .O(N4)
  );
  LUT5 #(
    .INIT ( 32'h22F2FFFF ))
  \D[2]_C[2]_OR_21_o  (
    .I0(\D[2]_C[2]_OR_21_o3 ),
    .I1(C_2_IBUF_8),
    .I2(\D[2]_C[2]_OR_21_o4 ),
    .I3(D_2_IBUF_12),
    .I4(N4),
    .O(\D[2]_C[2]_OR_21_o_22 )
  );
  IBUF   A_3_IBUF (
    .I(A[3]),
    .O(A_3_IBUF_3)
  );
  IBUF   A_2_IBUF (
    .I(A[2]),
    .O(A_2_IBUF_0)
  );
  IBUF   A_1_IBUF (
    .I(A[1]),
    .O(A_1_IBUF_1)
  );
  IBUF   A_0_IBUF (
    .I(A[0]),
    .O(A_0_IBUF_2)
  );
  IBUF   B_3_IBUF (
    .I(B[3]),
    .O(B_3_IBUF_7)
  );
  IBUF   B_2_IBUF (
    .I(B[2]),
    .O(B_2_IBUF_4)
  );
  IBUF   B_1_IBUF (
    .I(B[1]),
    .O(B_1_IBUF_5)
  );
  IBUF   B_0_IBUF (
    .I(B[0]),
    .O(B_0_IBUF_6)
  );
  IBUF   C_3_IBUF (
    .I(C[3]),
    .O(C_3_IBUF_11)
  );
  IBUF   C_2_IBUF (
    .I(C[2]),
    .O(C_2_IBUF_8)
  );
  IBUF   C_1_IBUF (
    .I(C[1]),
    .O(C_1_IBUF_9)
  );
  IBUF   C_0_IBUF (
    .I(C[0]),
    .O(C_0_IBUF_10)
  );
  IBUF   D_3_IBUF (
    .I(D[3]),
    .O(D_3_IBUF_15)
  );
  IBUF   D_2_IBUF (
    .I(D[2]),
    .O(D_2_IBUF_12)
  );
  IBUF   D_1_IBUF (
    .I(D[1]),
    .O(D_1_IBUF_13)
  );
  IBUF   D_0_IBUF (
    .I(D[0]),
    .O(D_0_IBUF_14)
  );
  OBUF   S_7_OBUF (
    .I(S_7_24),
    .O(S[7])
  );
  OBUF   S_6_OBUF (
    .I(S_6_25),
    .O(S[6])
  );
  OBUF   S_5_OBUF (
    .I(S_5_26),
    .O(S[5])
  );
  OBUF   S_4_OBUF (
    .I(S_4_27),
    .O(S[4])
  );
  OBUF   S_3_OBUF (
    .I(S_3_28),
    .O(S[3])
  );
  OBUF   S_2_OBUF (
    .I(S_2_29),
    .O(S[2])
  );
  OBUF   S_1_OBUF (
    .I(S_1_30),
    .O(S[1])
  );
  OBUF   S_0_OBUF (
    .I(S_0_31),
    .O(S[0])
  );
  LUT5 #(
    .INIT ( 32'hFFFF0010 ))
  \D[2]_C[2]_OR_12_o5_SW0  (
    .I0(C_0_IBUF_10),
    .I1(C_1_IBUF_9),
    .I2(C_2_IBUF_8),
    .I3(C_3_IBUF_11),
    .I4(\D[2]_C[2]_OR_12_o4_39 ),
    .O(N6)
  );
  LUT6 #(
    .INIT ( 64'hFFFFFFFFAAAAABAA ))
  \D[2]_C[2]_OR_12_o5  (
    .I0(N6),
    .I1(B_0_IBUF_6),
    .I2(B_1_IBUF_5),
    .I3(B_2_IBUF_4),
    .I4(B_3_IBUF_7),
    .I5(\D[2]_C[2]_OR_12_o3_38 ),
    .O(\D[2]_C[2]_OR_12_o )
  );
  LUT5 #(
    .INIT ( 32'hFFFF0008 ))
  \D[2]_C[2]_OR_15_o5_SW0  (
    .I0(B_0_IBUF_6),
    .I1(B_1_IBUF_5),
    .I2(B_2_IBUF_4),
    .I3(B_3_IBUF_7),
    .I4(\D[2]_C[2]_OR_15_o4_41 ),
    .O(N8)
  );
  LUT6 #(
    .INIT ( 64'hFFFFFFFFAAAABAAA ))
  \D[2]_C[2]_OR_15_o5  (
    .I0(N8),
    .I1(A_2_IBUF_0),
    .I2(A_1_IBUF_1),
    .I3(A_0_IBUF_2),
    .I4(A_3_IBUF_3),
    .I5(\D[2]_C[2]_OR_15_o3_40 ),
    .O(\D[2]_C[2]_OR_15_o )
  );
  LUT5 #(
    .INIT ( 32'hFFFF0010 ))
  \D[2]_C[2]_OR_18_o5_SW0  (
    .I0(B_0_IBUF_6),
    .I1(B_2_IBUF_4),
    .I2(B_1_IBUF_5),
    .I3(B_3_IBUF_7),
    .I4(\D[2]_C[2]_OR_18_o4_46 ),
    .O(N10)
  );
  LUT6 #(
    .INIT ( 64'hFFFFFFFFAAAAABAA ))
  \D[2]_C[2]_OR_18_o5  (
    .I0(N10),
    .I1(A_0_IBUF_2),
    .I2(A_2_IBUF_0),
    .I3(A_1_IBUF_1),
    .I4(A_3_IBUF_3),
    .I5(\D[2]_C[2]_OR_18_o3_45 ),
    .O(\D[2]_C[2]_OR_18_o )
  );
  LUT5 #(
    .INIT ( 32'hFFFF0001 ))
  \D[2]_C[2]_OR_24_o5_SW0  (
    .I0(C_0_IBUF_10),
    .I1(C_1_IBUF_9),
    .I2(C_2_IBUF_8),
    .I3(C_3_IBUF_11),
    .I4(\D[2]_C[2]_OR_24_o4_51 ),
    .O(N12)
  );
  LUT6 #(
    .INIT ( 64'hFFFFFFFFAAAAAAAB ))
  \D[2]_C[2]_OR_24_o5  (
    .I0(N12),
    .I1(B_0_IBUF_6),
    .I2(B_1_IBUF_5),
    .I3(B_2_IBUF_4),
    .I4(B_3_IBUF_7),
    .I5(\D[2]_C[2]_OR_24_o3_50 ),
    .O(\D[2]_C[2]_OR_24_o )
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

