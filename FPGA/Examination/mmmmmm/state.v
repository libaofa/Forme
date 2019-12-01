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

module state(
    clk    ,
    rst  ,
    start,
    stop,
    inc,
    //其他信号,举例dout
    time_en
    );

       //输入信号定义
    input               clk    ;   //分频时钟，1000Hz
    input               rst    ;   //系统复位
    input             start    ;   // 开始按键
    input              stop    ;   // 停止按键
    input               inc    ;   // 加“1”按键

    //输出信号定义
    output          time_en    ;   //计数使能信号

    //输出信号reg定义
    reg             time_en    ; 

    //状态定义
    parameter   IDLE  = 0      ;
    parameter   START = 1      ;
    parameter   STOP  = 2      ;
    parameter   INC   = 3      ;
    parameter   TRAP  = 4      ;

    //中间信号
    reg     [2:0]        CS    ;   //当前状态
    reg     [2:0]        NS    ;   //下一状态
 
   /*****************三段式状态机***********************/
    
    //第一段，当前状态
    always@(posedge clk or posedge rst)begin
        if(rst==1'b1)begin
            CS<= IDLE;
        end
        else begin
            CS<= NS;
        end
    end

   //第二段：组合逻辑always模块，描述状态转移条件判断
always@(*)begin
    case(CS)
        IDLE:begin
            if(start==1'b1)begin
                NS = START;
            end
            else if(inc==1'b1)begin  
                NS = INC;
            end
            else begin
                NS = CS;
            end
        end
        START:begin
            if(stop==1'b1)begin
                NS = STOP;
            end
            else begin
               NS = CS;
            end
        end
        INC:begin
               NS = TRAP;
        end
        TRAP:begin
            if(inc==1'b0)begin
                NS = STOP;
            end
            else begin
                NS = CS;
            end
        end
        STOP:begin
            if(start==1'b1)begin
                NS = START;
            end
            else if(inc==1'b1)begin  
                NS = INC;
            end
            else begin
                NS = CS;
            end
        end
       default:begin
               NS = IDLE;
        end
    endcase
end

 //第三段，输出

always  @(*)begin
    if(rst)begin
        time_en<=1'b0;      //初始化
	end
	 else if((CS==START)||(CS==INC))begin
        time_en<= 1'b1;
    end
    else begin
        time_en<= 1'b0;
    end
end



endmodule

