////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: ip_ver_synthesis.v
// /___/   /\     Timestamp: Thu May 09 20:27:57 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim ip_ver.ngc ip_ver_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: ip_ver.ngc
// Output file	: F:\git\FPGA\Examination\IPPP\netgen\synthesis\ip_ver_synthesis.v
// # of Modules	: 1
// Design Name	: ip_ver
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

module ip_ver (
  Clk, Clk_25M, Reset, locked
);
  input Clk;
  input Clk_25M;
  output Reset;
  output locked;
  wire N0;
  wire Reset_OBUF_2;
  wire \instance_name/clkfbout_buf ;
  wire \instance_name/clkout0 ;
  wire \instance_name/clkfbout ;
  wire \instance_name/clkin1 ;
  wire \NLW_instance_name/clkout1_buf_O_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT3_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT3B_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKFBSTOPPED_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKFBOUTB_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT1_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT5_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DRDY_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT4_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT1B_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKINSTOPPED_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT0B_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT2_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT2B_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_PSDONE_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_CLKOUT6_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_LOCKED_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<15>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<14>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<13>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<12>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<11>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<10>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<9>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<8>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<7>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<6>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<5>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<4>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<3>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<2>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<1>_UNCONNECTED ;
  wire \NLW_instance_name/mmcm_adv_inst_DO<0>_UNCONNECTED ;
  VCC   XST_VCC (
    .P(N0)
  );
  GND   XST_GND (
    .G(Reset_OBUF_2)
  );
  BUFG   \instance_name/clkout1_buf  (
    .O(\NLW_instance_name/clkout1_buf_O_UNCONNECTED ),
    .I(\instance_name/clkout0 )
  );
  BUFG   \instance_name/clkf_buf  (
    .O(\instance_name/clkfbout_buf ),
    .I(\instance_name/clkfbout )
  );
  MMCME2_ADV #(
    .BANDWIDTH ( "OPTIMIZED" ),
    .CLKFBOUT_USE_FINE_PS ( "FALSE" ),
    .CLKOUT0_USE_FINE_PS ( "FALSE" ),
    .CLKOUT1_USE_FINE_PS ( "FALSE" ),
    .CLKOUT2_USE_FINE_PS ( "FALSE" ),
    .CLKOUT3_USE_FINE_PS ( "FALSE" ),
    .CLKOUT4_CASCADE ( "FALSE" ),
    .CLKOUT4_USE_FINE_PS ( "FALSE" ),
    .CLKOUT5_USE_FINE_PS ( "FALSE" ),
    .CLKOUT6_USE_FINE_PS ( "FALSE" ),
    .COMPENSATION ( "ZHOLD" ),
    .SS_EN ( "FALSE" ),
    .SS_MODE ( "CENTER_HIGH" ),
    .STARTUP_WAIT ( "FALSE" ),
    .CLKOUT1_DIVIDE ( 1 ),
    .CLKOUT2_DIVIDE ( 1 ),
    .CLKOUT3_DIVIDE ( 1 ),
    .CLKOUT4_DIVIDE ( 1 ),
    .CLKOUT5_DIVIDE ( 1 ),
    .CLKOUT6_DIVIDE ( 1 ),
    .DIVCLK_DIVIDE ( 4 ),
    .SS_MOD_PERIOD ( 10000 ),
    .CLKFBOUT_MULT_F ( 36.375000 ),
    .CLKFBOUT_PHASE ( 0.000000 ),
    .CLKIN1_PERIOD ( 10.000000 ),
    .CLKIN2_PERIOD ( 0.000000 ),
    .CLKOUT0_DIVIDE_F ( 36.375000 ),
    .CLKOUT0_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT0_PHASE ( 0.000000 ),
    .CLKOUT1_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT1_PHASE ( 0.000000 ),
    .CLKOUT2_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT2_PHASE ( 0.000000 ),
    .CLKOUT3_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT3_PHASE ( 0.000000 ),
    .CLKOUT4_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT4_PHASE ( 0.000000 ),
    .CLKOUT5_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT5_PHASE ( 0.000000 ),
    .CLKOUT6_DUTY_CYCLE ( 0.500000 ),
    .CLKOUT6_PHASE ( 0.000000 ),
    .REF_JITTER1 ( 0.010000 ),
    .REF_JITTER2 ( 0.010000 ))
  \instance_name/mmcm_adv_inst  (
    .CLKOUT3(\NLW_instance_name/mmcm_adv_inst_CLKOUT3_UNCONNECTED ),
    .CLKFBIN(\instance_name/clkfbout_buf ),
    .PSCLK(Reset_OBUF_2),
    .CLKOUT3B(\NLW_instance_name/mmcm_adv_inst_CLKOUT3B_UNCONNECTED ),
    .PWRDWN(Reset_OBUF_2),
    .DCLK(Reset_OBUF_2),
    .CLKFBOUT(\instance_name/clkfbout ),
    .CLKFBSTOPPED(\NLW_instance_name/mmcm_adv_inst_CLKFBSTOPPED_UNCONNECTED ),
    .CLKFBOUTB(\NLW_instance_name/mmcm_adv_inst_CLKFBOUTB_UNCONNECTED ),
    .CLKOUT1(\NLW_instance_name/mmcm_adv_inst_CLKOUT1_UNCONNECTED ),
    .DEN(Reset_OBUF_2),
    .CLKOUT5(\NLW_instance_name/mmcm_adv_inst_CLKOUT5_UNCONNECTED ),
    .CLKINSEL(N0),
    .CLKIN2(Reset_OBUF_2),
    .DRDY(\NLW_instance_name/mmcm_adv_inst_DRDY_UNCONNECTED ),
    .RST(Reset_OBUF_2),
    .PSINCDEC(Reset_OBUF_2),
    .DWE(Reset_OBUF_2),
    .PSEN(Reset_OBUF_2),
    .CLKOUT0(\instance_name/clkout0 ),
    .CLKOUT4(\NLW_instance_name/mmcm_adv_inst_CLKOUT4_UNCONNECTED ),
    .CLKOUT1B(\NLW_instance_name/mmcm_adv_inst_CLKOUT1B_UNCONNECTED ),
    .CLKINSTOPPED(\NLW_instance_name/mmcm_adv_inst_CLKINSTOPPED_UNCONNECTED ),
    .CLKOUT0B(\NLW_instance_name/mmcm_adv_inst_CLKOUT0B_UNCONNECTED ),
    .CLKIN1(\instance_name/clkin1 ),
    .CLKOUT2(\NLW_instance_name/mmcm_adv_inst_CLKOUT2_UNCONNECTED ),
    .CLKOUT2B(\NLW_instance_name/mmcm_adv_inst_CLKOUT2B_UNCONNECTED ),
    .PSDONE(\NLW_instance_name/mmcm_adv_inst_PSDONE_UNCONNECTED ),
    .CLKOUT6(\NLW_instance_name/mmcm_adv_inst_CLKOUT6_UNCONNECTED ),
    .LOCKED(\NLW_instance_name/mmcm_adv_inst_LOCKED_UNCONNECTED ),
    .DI({Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, 
Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2}),
    .DO({\NLW_instance_name/mmcm_adv_inst_DO<15>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<14>_UNCONNECTED , 
\NLW_instance_name/mmcm_adv_inst_DO<13>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<12>_UNCONNECTED , 
\NLW_instance_name/mmcm_adv_inst_DO<11>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<10>_UNCONNECTED , 
\NLW_instance_name/mmcm_adv_inst_DO<9>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<8>_UNCONNECTED , 
\NLW_instance_name/mmcm_adv_inst_DO<7>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<6>_UNCONNECTED , 
\NLW_instance_name/mmcm_adv_inst_DO<5>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<4>_UNCONNECTED , 
\NLW_instance_name/mmcm_adv_inst_DO<3>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<2>_UNCONNECTED , 
\NLW_instance_name/mmcm_adv_inst_DO<1>_UNCONNECTED , \NLW_instance_name/mmcm_adv_inst_DO<0>_UNCONNECTED }),
    .DADDR({Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2, Reset_OBUF_2})
  );
  IBUFG #(
    .CAPACITANCE ( "DONT_CARE" ),
    .IBUF_DELAY_VALUE ( "0" ),
    .IBUF_LOW_PWR ( "TRUE" ),
    .IOSTANDARD ( "DEFAULT" ))
  \instance_name/clkin1_buf  (
    .I(Clk),
    .O(\instance_name/clkin1 )
  );
  OBUF   Reset_OBUF (
    .I(Reset_OBUF_2),
    .O(Reset)
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

