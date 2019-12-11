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
    //�����ź�,����dout
    time_en
    );

       //�����źŶ���
    input               clk    ;   //��Ƶʱ�ӣ�1000Hz
    input               rst    ;   //ϵͳ��λ
    input             start    ;   // ��ʼ����
    input              stop    ;   // ֹͣ����
    input               inc    ;   // �ӡ�1������

    //����źŶ���
    output          time_en    ;   //����ʹ���ź�

    //����ź�reg����
    reg             time_en    ; 

    //״̬����
    parameter   IDLE  = 0      ;
    parameter   START = 1      ;
    parameter   STOP  = 2      ;
    parameter   INC   = 3      ;
    parameter   TRAP  = 4      ;

    //�м��ź�
    reg     [2:0]        CS    ;   //��ǰ״̬
    reg     [2:0]        NS    ;   //��һ״̬
 
   /*****************����ʽ״̬��***********************/
    
    //��һ�Σ���ǰ״̬
    always@(posedge clk or posedge rst)begin
        if(rst==1'b1)begin
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

