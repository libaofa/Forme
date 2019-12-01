////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: set_7_synthesis.v
// /___/   /\     Timestamp: Tue May 07 15:26:56 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim set_7.ngc set_7_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: set_7.ngc
// Output file	: F:\git\FPGA\Examination\set_7\netgen\synthesis\set_7_synthesis.v
// # of Modules	: 1
// Design Name	: set_7
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

module set_7 (
  Rst_n, A, S
);
  input Rst_n;
  input [3 : 0] A;
  output [6 : 0] S;
  wire A_3_IBUF_0;
  wire A_2_IBUF_1;
  wire A_1_IBUF_2;
  wire A_0_IBUF_3;
  wire Rst_n_IBUF_4;
  wire S_6_OBUF_5;
  wire S_5_OBUF_6;
  wire S_4_OBUF_7;
  wire S_3_OBUF_8;
  wire S_2_OBUF_9;
  wire S_1_OBUF_10;
  wire S_0_OBUF_11;
  LUT5 #(
    .INIT ( 32'hAA8880A8 ))
  Mmux_S21 (
    .I0(Rst_n_IBUF_4),
    .I1(A_1_IBUF_2),
    .I2(A_0_IBUF_3),
    .I3(A_2_IBUF_1),
    .I4(A_3_IBUF_0),
    .O(S_1_OBUF_10)
  );
  LUT5 #(
    .INIT ( 32'hAAAAA280 ))
  Mmux_S31 (
    .I0(Rst_n_IBUF_4),
    .I1(A_1_IBUF_2),
    .I2(A_3_IBUF_0),
    .I3(A_2_IBUF_1),
    .I4(A_0_IBUF_3),
    .O(S_2_OBUF_9)
  );
  LUT5 #(
    .INIT ( 32'hE9C9FFFF ))
  Mmux_S11 (
    .I0(A_2_IBUF_1),
    .I1(A_3_IBUF_0),
    .I2(A_1_IBUF_2),
    .I3(A_0_IBUF_3),
    .I4(Rst_n_IBUF_4),
    .O(S_0_OBUF_11)
  );
  LUT5 #(
    .INIT ( 32'hAA880220 ))
  Mmux_S71 (
    .I0(Rst_n_IBUF_4),
    .I1(A_1_IBUF_2),
    .I2(A_0_IBUF_3),
    .I3(A_2_IBUF_1),
    .I4(A_3_IBUF_0),
    .O(S_6_OBUF_5)
  );
  LUT5 #(
    .INIT ( 32'hA882A088 ))
  Mmux_S41 (
    .I0(Rst_n_IBUF_4),
    .I1(A_2_IBUF_1),
    .I2(A_3_IBUF_0),
    .I3(A_1_IBUF_2),
    .I4(A_0_IBUF_3),
    .O(S_3_OBUF_8)
  );
  LUT5 #(
    .INIT ( 32'h888088A0 ))
  Mmux_S51 (
    .I0(Rst_n_IBUF_4),
    .I1(A_3_IBUF_0),
    .I2(A_1_IBUF_2),
    .I3(A_2_IBUF_1),
    .I4(A_0_IBUF_3),
    .O(S_4_OBUF_7)
  );
  LUT5 #(
    .INIT ( 32'hA088A880 ))
  Mmux_S61 (
    .I0(Rst_n_IBUF_4),
    .I1(A_2_IBUF_1),
    .I2(A_3_IBUF_0),
    .I3(A_1_IBUF_2),
    .I4(A_0_IBUF_3),
    .O(S_5_OBUF_6)
  );
  IBUF   A_3_IBUF (
    .I(A[3]),
    .O(A_3_IBUF_0)
  );
  IBUF   A_2_IBUF (
    .I(A[2]),
    .O(A_2_IBUF_1)
  );
  IBUF   A_1_IBUF (
    .I(A[1]),
    .O(A_1_IBUF_2)
  );
  IBUF   A_0_IBUF (
    .I(A[0]),
    .O(A_0_IBUF_3)
  );
  IBUF   Rst_n_IBUF (
    .I(Rst_n),
    .O(Rst_n_IBUF_4)
  );
  OBUF   S_6_OBUF (
    .I(S_6_OBUF_5),
    .O(S[6])
  );
  OBUF   S_5_OBUF (
    .I(S_5_OBUF_6),
    .O(S[5])
  );
  OBUF   S_4_OBUF (
    .I(S_4_OBUF_7),
    .O(S[4])
  );
  OBUF   S_3_OBUF (
    .I(S_3_OBUF_8),
    .O(S[3])
  );
  OBUF   S_2_OBUF (
    .I(S_2_OBUF_9),
    .O(S[2])
  );
  OBUF   S_1_OBUF (
    .I(S_1_OBUF_10),
    .O(S[1])
  );
  OBUF   S_0_OBUF (
    .I(S_0_OBUF_11),
    .O(S[0])
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

