`timescale 1ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:52:48 05/07/2019 
// Design Name: 
// Module Name:    state 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: // Description: 

//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module state(time_en, clk, rst, start,stop, inc);
output          	time_en  ;   //计数使能信号
input             clk    	;   //分频时钟，1000Hz
input             rst    	;   //系统复位
input             start    ;   // 开始按键
input             stop    	;   // 停止按键
input             inc    	;   // 加"1"按键

//输出信号reg定义
reg             	time_en  ; 

//状态定义
parameter   IDLE  = 3'b000 ;
parameter   START = 3'b001 ;
parameter   STOP  = 3'b010 ;
parameter   INC   = 3'b011 ;
parameter   TRAP  = 3'b100 ;

//中间信号
reg     [2:0]       CS    	;   //当前状态
reg     [2:0]       NS    	;   //下一状态
 
/*****************三段式状态机***********************/
    
//第一段，当前状态
always@(posedge clk or posedge rst)begin
	if(rst)begin
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


