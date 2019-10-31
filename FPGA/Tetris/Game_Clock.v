`timescale 1ns / 1ps
module Game_Clock(						//游戏时钟模块
    input wire Clk		,				//65MHZ时钟
	 input wire	Rst		,				//复位信号
    input wire Pause		,				//暂停
    output reg Game_Clk					//输出
    );

reg [24:0] Counter;						//计数位数
always @ (posedge Clk) begin
	if (!Pause) begin						//非暂停时
		if (Rst) begin
			Counter <= 0;					//计数为0
			Game_Clk <= 0;
         end 
		else begin		//1HZ
			if (Counter == 32500000) begin //计满
				Counter <= 0;			
            Game_Clk <= 1;
            end 
			else begin							//未计满
            Counter <= Counter + 1;		//计数加一
            Game_Clk <= 0;
            end
         end
      end
  end

endmodule

