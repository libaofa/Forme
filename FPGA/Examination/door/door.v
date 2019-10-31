`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:50:13 05/07/2019 
// Design Name: 
// Module Name:    door 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Complete_Row(
    input                                    	Clk		,
    input                                    	Pause		,
    input  		[251:0] 	 								Game		,
    output reg [4:0]                 				Row		,
    output wire                                 Enabled
    );
	 
parameter					BLOCKS_WIDE = 14			;
parameter					BLOCKS_HIGH = 18			;

initial begin
	Row = 0;
   end


assign		Enabled = &Game[Row*14 +: 14];


always @ (posedge Clk) begin
	if (!Pause) begin
		if (Row == BLOCKS_HIGH - 1) begin
			Row <= 0;
         end 
		else begin
         Row <= Row + 1;
         end
      end
   end

endmodule

