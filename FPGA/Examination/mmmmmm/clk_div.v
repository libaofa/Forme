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

module clk_div(
    clk_100M,
    rst  ,
    //其他信号,举例dout
    clk_1K
    );

    //参数定义
    parameter      TIME=16'd50000;

    //输入信号定义
    input               clk_100M    ;
    input               rst         ;

    //输出信号定义
    output              clk_1K      ;

    //输出信号reg定义
    reg                 clk_1K      ;

    //中间信号定义
    reg  [15:0]         cnt         ;

   
    //计数
    always@(posedge clk_100M or posedge rst)begin
        if(rst==1'b1)begin
            cnt<=16'b0;
        end
        else if(cnt==TIME-1)begin
            cnt<=16'b0;
        end
        else
                cnt <= cnt + 1'b1;
    end
 
    //在计数一半时进行翻转，得到分频时钟
 always@(posedge clk_100M or posedge rst)begin
        if(rst==1'b1)begin
           clk_1K<=1'b0;
        end
        else if(cnt==TIME-1)begin
           clk_1K<= ~clk_1K;
        end
        else
            clk_1K<= clk_1K;
    end
   
  endmodule

  

   


