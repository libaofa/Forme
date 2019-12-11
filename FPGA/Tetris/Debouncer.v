`timescale 1ns / 1ps				
module Debouncer(						//����ȥ��ģ��
    input 	  		Raw		,		//�����ź�
    input 	  		Clk		,		//65MHZʱ��
    output wire 	Enabled	 		//ʹ���ź�
    );

reg 			Debouncer		;
reg 			Debouncer_Prev	;
reg [16:0] 	Counter			;

initial begin					 //��ʼ��
	Debouncer = 0;						
   Debouncer_Prev = 0;
   Counter = 0;				 
   end

always @ (posedge Clk) begin			
	if (Counter == 130000) begin		//����Ϊ��
		Counter <= 0;						//��0
      Debouncer <= Raw;					//��������ֵ
      end 
	else begin								//����δ��
      Counter <= Counter + 1;			//������һ
      end
	Debouncer_Prev <= Debouncer;		//��������ֵ
   end

assign Enabled = Debouncer && !Debouncer_Prev;	//ʹ���ź�
endmodule
