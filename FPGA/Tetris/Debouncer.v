`timescale 1ns / 1ps				
module Debouncer(						//按键去抖模块
    input 	  		Raw		,		//按键信号
    input 	  		Clk		,		//65MHZ时钟
    output wire 	Enabled	 		//使能信号
    );

reg 			Debouncer		;
reg 			Debouncer_Prev	;
reg [16:0] 	Counter			;

initial begin					 //初始化
	Debouncer = 0;						
   Debouncer_Prev = 0;
   Counter = 0;				 
   end

always @ (posedge Clk) begin			
	if (Counter == 130000) begin		//计数为满
		Counter <= 0;						//置0
      Debouncer <= Raw;					//非阻塞赋值
      end 
	else begin								//计数未满
      Counter <= Counter + 1;			//计数加一
      end
	Debouncer_Prev <= Debouncer;		//非阻塞赋值
   end

assign Enabled = Debouncer && !Debouncer_Prev;	//使能信号
endmodule
