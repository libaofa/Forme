`timescale 1ns / 1ps
module Game_Clock(						//��Ϸʱ��ģ��
    input wire Clk		,				//65MHZʱ��
	 input wire	Rst		,				//��λ�ź�
    input wire Pause		,				//��ͣ
    output reg Game_Clk					//���
    );

reg [24:0] Counter;						//����λ��
always @ (posedge Clk) begin
	if (!Pause) begin						//����ͣʱ
		if (Rst) begin
			Counter <= 0;					//����Ϊ0
			Game_Clk <= 0;
         end 
		else begin		//1HZ
			if (Counter == 32500000) begin //����
				Counter <= 0;			
            Game_Clk <= 1;
            end 
			else begin							//δ����
            Counter <= Counter + 1;		//������һ
            Game_Clk <= 0;
            end
         end
      end
  end

endmodule

