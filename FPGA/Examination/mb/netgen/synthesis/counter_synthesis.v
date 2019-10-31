////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: counter_synthesis.v
// /___/   /\     Timestamp: Tue May 07 17:08:21 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim counter.ngc counter_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: counter.ngc
// Output file	: F:\git\FPGA\Examination\mb\netgen\synthesis\counter_synthesis.v
// # of Modules	: 1
// Design Name	: counter
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

module counter (
  rst, clk, time_en, cntr
);
  input rst;
  input clk;
  input time_en;
  output [15 : 0] cntr;
  wire rst_IBUF_0;
  wire clk_BUFGP_1;
  wire time_en_IBUF_2;
  wire cnt1_en;
  wire Mcount_cnt0;
  wire Mcount_cnt01;
  wire Mcount_cnt02;
  wire Mcount_cnt03;
  wire \cnt2_en<0>1_rstpot_43 ;
  wire cnt2_1_dpot_44;
  wire cnt2_2_dpot_45;
  wire cnt2_3_dpot_46;
  wire \cnt3_en<0>1_rstpot_47 ;
  wire \cnt1_en<0>1_rstpot_48 ;
  wire cnt1_0_dpot_49;
  wire cnt1_1_dpot_50;
  wire cnt1_2_dpot_51;
  wire cnt1_3_dpot_52;
  wire cnt2_0_dpot1_53;
  wire cnt3_0_dpot1_54;
  wire N2;
  wire N4;
  wire \cnt2_en<0>1_rstpot1_57 ;
  wire cnt3_2_dpot1_58;
  wire cnt3_3_dpot1_59;
  wire \cnt2_en<0>1_rstpot2_60 ;
  wire cnt3_1_dpot1_61;
  wire [3 : 0] cnt1;
  wire [3 : 0] cnt2;
  wire [3 : 0] cnt3;
  wire [3 : 0] cnt0;
  FDCE   cnt1_0 (
    .C(clk_BUFGP_1),
    .CE(cnt0[0]),
    .CLR(rst_IBUF_0),
    .D(cnt1_0_dpot_49),
    .Q(cnt1[0])
  );
  FDCE   cnt1_1 (
    .C(clk_BUFGP_1),
    .CE(cnt0[0]),
    .CLR(rst_IBUF_0),
    .D(cnt1_1_dpot_50),
    .Q(cnt1[1])
  );
  FDCE   cnt1_2 (
    .C(clk_BUFGP_1),
    .CE(cnt0[0]),
    .CLR(rst_IBUF_0),
    .D(cnt1_2_dpot_51),
    .Q(cnt1[2])
  );
  FDCE   cnt1_3 (
    .C(clk_BUFGP_1),
    .CE(cnt0[0]),
    .CLR(rst_IBUF_0),
    .D(cnt1_3_dpot_52),
    .Q(cnt1[3])
  );
  FDCE   cnt2_0 (
    .C(clk_BUFGP_1),
    .CE(cnt0[0]),
    .CLR(rst_IBUF_0),
    .D(cnt2_0_dpot1_53),
    .Q(cnt2[0])
  );
  FDCE   cnt2_1 (
    .C(clk_BUFGP_1),
    .CE(cnt1_en),
    .CLR(rst_IBUF_0),
    .D(cnt2_1_dpot_44),
    .Q(cnt2[1])
  );
  FDCE   cnt2_2 (
    .C(clk_BUFGP_1),
    .CE(cnt1_en),
    .CLR(rst_IBUF_0),
    .D(cnt2_2_dpot_45),
    .Q(cnt2[2])
  );
  FDCE   cnt2_3 (
    .C(clk_BUFGP_1),
    .CE(cnt1_en),
    .CLR(rst_IBUF_0),
    .D(cnt2_3_dpot_46),
    .Q(cnt2[3])
  );
  FDCE   cnt0_0 (
    .C(clk_BUFGP_1),
    .CE(time_en_IBUF_2),
    .CLR(rst_IBUF_0),
    .D(Mcount_cnt0),
    .Q(cnt0[0])
  );
  FDCE   cnt0_1 (
    .C(clk_BUFGP_1),
    .CE(time_en_IBUF_2),
    .CLR(rst_IBUF_0),
    .D(Mcount_cnt01),
    .Q(cnt0[1])
  );
  FDCE   cnt0_2 (
    .C(clk_BUFGP_1),
    .CE(time_en_IBUF_2),
    .CLR(rst_IBUF_0),
    .D(Mcount_cnt02),
    .Q(cnt0[2])
  );
  FDCE   cnt0_3 (
    .C(clk_BUFGP_1),
    .CE(time_en_IBUF_2),
    .CLR(rst_IBUF_0),
    .D(Mcount_cnt03),
    .Q(cnt0[3])
  );
  FDCE   cnt3_0 (
    .C(clk_BUFGP_1),
    .CE(cnt1_en),
    .CLR(rst_IBUF_0),
    .D(cnt3_0_dpot1_54),
    .Q(cnt3[0])
  );
  FDCE   cnt3_1 (
    .C(clk_BUFGP_1),
    .CE(cnt1_en),
    .CLR(rst_IBUF_0),
    .D(cnt3_1_dpot1_61),
    .Q(cnt3[1])
  );
  FDCE   cnt3_2 (
    .C(clk_BUFGP_1),
    .CE(cnt1_en),
    .CLR(rst_IBUF_0),
    .D(cnt3_2_dpot1_58),
    .Q(cnt3[2])
  );
  FDCE   cnt3_3 (
    .C(clk_BUFGP_1),
    .CE(cnt1_en),
    .CLR(rst_IBUF_0),
    .D(cnt3_3_dpot1_59),
    .Q(cnt3[3])
  );
  LUT5 #(
    .INIT ( 32'h00000080 ))
  \cnt1_en<0>1  (
    .I0(time_en_IBUF_2),
    .I1(cnt0[0]),
    .I2(cnt0[3]),
    .I3(cnt0[2]),
    .I4(cnt0[1]),
    .O(cnt1_en)
  );
  LUT4 #(
    .INIT ( 16'h6466 ))
  \Mcount_cnt0_xor<1>11  (
    .I0(cnt0[0]),
    .I1(cnt0[1]),
    .I2(cnt0[2]),
    .I3(cnt0[3]),
    .O(Mcount_cnt01)
  );
  LUT3 #(
    .INIT ( 8'h6A ))
  \Mcount_cnt0_xor<2>11  (
    .I0(cnt0[2]),
    .I1(cnt0[0]),
    .I2(cnt0[1]),
    .O(Mcount_cnt02)
  );
  LUT4 #(
    .INIT ( 16'h6AA2 ))
  \Mcount_cnt0_xor<3>11  (
    .I0(cnt0[3]),
    .I1(cnt0[0]),
    .I2(cnt0[1]),
    .I3(cnt0[2]),
    .O(Mcount_cnt03)
  );
  IBUF   rst_IBUF (
    .I(rst),
    .O(rst_IBUF_0)
  );
  IBUF   time_en_IBUF (
    .I(time_en),
    .O(time_en_IBUF_2)
  );
  OBUF   cntr_15_OBUF (
    .I(cnt3[3]),
    .O(cntr[15])
  );
  OBUF   cntr_14_OBUF (
    .I(cnt3[2]),
    .O(cntr[14])
  );
  OBUF   cntr_13_OBUF (
    .I(cnt3[1]),
    .O(cntr[13])
  );
  OBUF   cntr_12_OBUF (
    .I(cnt3[0]),
    .O(cntr[12])
  );
  OBUF   cntr_11_OBUF (
    .I(cnt2[3]),
    .O(cntr[11])
  );
  OBUF   cntr_10_OBUF (
    .I(cnt2[2]),
    .O(cntr[10])
  );
  OBUF   cntr_9_OBUF (
    .I(cnt2[1]),
    .O(cntr[9])
  );
  OBUF   cntr_8_OBUF (
    .I(cnt2[0]),
    .O(cntr[8])
  );
  OBUF   cntr_7_OBUF (
    .I(cnt1[3]),
    .O(cntr[7])
  );
  OBUF   cntr_6_OBUF (
    .I(cnt1[2]),
    .O(cntr[6])
  );
  OBUF   cntr_5_OBUF (
    .I(cnt1[1]),
    .O(cntr[5])
  );
  OBUF   cntr_4_OBUF (
    .I(cnt1[0]),
    .O(cntr[4])
  );
  OBUF   cntr_3_OBUF (
    .I(cnt0[3]),
    .O(cntr[3])
  );
  OBUF   cntr_2_OBUF (
    .I(cnt0[2]),
    .O(cntr[2])
  );
  OBUF   cntr_1_OBUF (
    .I(cnt0[1]),
    .O(cntr[1])
  );
  OBUF   cntr_0_OBUF (
    .I(cnt0[0]),
    .O(cntr[0])
  );
  LUT4 #(
    .INIT ( 16'h0008 ))
  \cnt2_en<0>1_rstpot  (
    .I0(cnt1[0]),
    .I1(cnt1[3]),
    .I2(cnt1[2]),
    .I3(cnt1[1]),
    .O(\cnt2_en<0>1_rstpot_43 )
  );
  LUT4 #(
    .INIT ( 16'h0008 ))
  \cnt3_en<0>1_rstpot  (
    .I0(cnt2[0]),
    .I1(cnt2[3]),
    .I2(cnt2[1]),
    .I3(cnt2[2]),
    .O(\cnt3_en<0>1_rstpot_47 )
  );
  LUT5 #(
    .INIT ( 32'h0DF0F0F0 ))
  cnt2_1_dpot (
    .I0(cnt2[3]),
    .I1(cnt2[2]),
    .I2(cnt2[1]),
    .I3(cnt2[0]),
    .I4(\cnt2_en<0>1_rstpot_43 ),
    .O(cnt2_1_dpot_44)
  );
  LUT4 #(
    .INIT ( 16'h6CCC ))
  cnt2_2_dpot (
    .I0(cnt2[1]),
    .I1(cnt2[2]),
    .I2(cnt2[0]),
    .I3(\cnt2_en<0>1_rstpot_43 ),
    .O(cnt2_2_dpot_45)
  );
  LUT5 #(
    .INIT ( 32'h68AAAAAA ))
  cnt2_3_dpot (
    .I0(cnt2[3]),
    .I1(cnt2[2]),
    .I2(cnt2[1]),
    .I3(cnt2[0]),
    .I4(\cnt2_en<0>1_rstpot_43 ),
    .O(cnt2_3_dpot_46)
  );
  LUT4 #(
    .INIT ( 16'h0008 ))
  \cnt1_en<0>1_rstpot  (
    .I0(time_en_IBUF_2),
    .I1(cnt0[3]),
    .I2(cnt0[2]),
    .I3(cnt0[1]),
    .O(\cnt1_en<0>1_rstpot_48 )
  );
  LUT5 #(
    .INIT ( 32'hAAA6AAAA ))
  cnt1_0_dpot (
    .I0(cnt1[0]),
    .I1(cnt0[3]),
    .I2(cnt0[2]),
    .I3(cnt0[1]),
    .I4(time_en_IBUF_2),
    .O(cnt1_0_dpot_49)
  );
  LUT5 #(
    .INIT ( 32'h0DF0F0F0 ))
  cnt1_1_dpot (
    .I0(cnt1[3]),
    .I1(cnt1[2]),
    .I2(cnt1[1]),
    .I3(cnt1[0]),
    .I4(\cnt1_en<0>1_rstpot_48 ),
    .O(cnt1_1_dpot_50)
  );
  LUT4 #(
    .INIT ( 16'h6CCC ))
  cnt1_2_dpot (
    .I0(cnt1[1]),
    .I1(cnt1[2]),
    .I2(cnt1[0]),
    .I3(\cnt1_en<0>1_rstpot_48 ),
    .O(cnt1_2_dpot_51)
  );
  LUT5 #(
    .INIT ( 32'h68AAAAAA ))
  cnt1_3_dpot (
    .I0(cnt1[3]),
    .I1(cnt1[2]),
    .I2(cnt1[1]),
    .I3(cnt1[0]),
    .I4(\cnt1_en<0>1_rstpot_48 ),
    .O(cnt1_3_dpot_52)
  );
  LUT4 #(
    .INIT ( 16'hFDFF ))
  cnt2_0_dpot1_SW0 (
    .I0(time_en_IBUF_2),
    .I1(cnt1[1]),
    .I2(cnt1[2]),
    .I3(cnt1[0]),
    .O(N2)
  );
  LUT6 #(
    .INIT ( 64'hAAAAAAAAAA9AAAAA ))
  cnt2_0_dpot1 (
    .I0(cnt2[0]),
    .I1(cnt0[2]),
    .I2(cnt0[3]),
    .I3(cnt0[1]),
    .I4(cnt1[3]),
    .I5(N2),
    .O(cnt2_0_dpot1_53)
  );
  LUT4 #(
    .INIT ( 16'hFFBF ))
  cnt3_0_dpot1_SW0 (
    .I0(cnt1[1]),
    .I1(cnt1[3]),
    .I2(cnt1[0]),
    .I3(cnt1[2]),
    .O(N4)
  );
  LUT6 #(
    .INIT ( 64'hAAAAAAAAAA9AAAAA ))
  cnt3_0_dpot1 (
    .I0(cnt3[0]),
    .I1(cnt2[2]),
    .I2(cnt2[3]),
    .I3(cnt2[1]),
    .I4(cnt2[0]),
    .I5(N4),
    .O(cnt3_0_dpot1_54)
  );
  LUT4 #(
    .INIT ( 16'h0008 ))
  \cnt2_en<0>1_rstpot1  (
    .I0(cnt1[0]),
    .I1(cnt1[3]),
    .I2(cnt1[2]),
    .I3(cnt1[1]),
    .O(\cnt2_en<0>1_rstpot1_57 )
  );
  LUT5 #(
    .INIT ( 32'h6AAAAAAA ))
  cnt3_2_dpot1 (
    .I0(cnt3[2]),
    .I1(cnt3[1]),
    .I2(cnt3[0]),
    .I3(\cnt3_en<0>1_rstpot_47 ),
    .I4(\cnt2_en<0>1_rstpot1_57 ),
    .O(cnt3_2_dpot1_58)
  );
  LUT6 #(
    .INIT ( 64'h6A8AAAAAAAAAAAAA ))
  cnt3_3_dpot1 (
    .I0(cnt3[3]),
    .I1(cnt3[2]),
    .I2(cnt3[0]),
    .I3(cnt3[1]),
    .I4(\cnt3_en<0>1_rstpot_47 ),
    .I5(\cnt2_en<0>1_rstpot1_57 ),
    .O(cnt3_3_dpot1_59)
  );
  LUT4 #(
    .INIT ( 16'h0008 ))
  \cnt2_en<0>1_rstpot2  (
    .I0(cnt1[0]),
    .I1(cnt1[3]),
    .I2(cnt1[2]),
    .I3(cnt1[1]),
    .O(\cnt2_en<0>1_rstpot2_60 )
  );
  LUT6 #(
    .INIT ( 64'h0DF0F0F0F0F0F0F0 ))
  cnt3_1_dpot1 (
    .I0(cnt3[3]),
    .I1(cnt3[2]),
    .I2(cnt3[1]),
    .I3(cnt3[0]),
    .I4(\cnt3_en<0>1_rstpot_47 ),
    .I5(\cnt2_en<0>1_rstpot2_60 ),
    .O(cnt3_1_dpot1_61)
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_1)
  );
  INV   \Mcount_cnt0_xor<0>11_INV_0  (
    .I(cnt0[0]),
    .O(Mcount_cnt0)
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

