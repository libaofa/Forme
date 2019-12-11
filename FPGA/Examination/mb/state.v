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
output          	time_en  ;   //����ʹ���ź�
input             clk    	;   //��Ƶʱ�ӣ�1000Hz
input             rst    	;   //ϵͳ��λ
input             start    ;   // ��ʼ����
input             stop    	;   // ֹͣ����
input             inc    	;   // ��"1"����

//����ź�reg����
reg             	time_en  ; 

//״̬����
parameter   IDLE  = 3'b000 ;
parameter   START = 3'b001 ;
parameter   STOP  = 3'b010 ;
parameter   INC   = 3'b011 ;
parameter   TRAP  = 3'b100 ;

//�м��ź�
reg     [2:0]       CS    	;   //��ǰ״̬
reg     [2:0]       NS    	;   //��һ״̬
 
/*****************����ʽ״̬��***********************/
    
//��һ�Σ���ǰ״̬
always@(posedge clk or posedge rst)begin
	if(rst)begin
		CS<= IDLE;
      end
   else begin
      CS<= NS;
      end
   end

//�ڶ��Σ�����߼�alwaysģ�飬����״̬ת�������ж�
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

 //�����Σ����
always  @(*)begin
	if(rst)begin
		time_en<=1'b0;      //��ʼ��
		end
	else if((CS==START)||(CS==INC))begin
      time_en<= 1'b1;
		end
   else begin
      time_en<= 1'b0;
		end
	end

endmodule


