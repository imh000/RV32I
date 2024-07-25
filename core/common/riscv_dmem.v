`ifndef		NOINC
`include	"riscv_configs.v"
`endif

module riscv_dmem
(
	input i_clk,
	input i_dmem_wr_en,
	input [`XLEN/8-1:0] i_dmem_byte_sel,
	input [`DMEM_ADDR_BIT-3:0] i_dmem_addr,
	input [`XLEN-1:0] i_dmem_data,
	output [`XLEN-1:0] o_dmem_data
);

	reg [`XLEN-1:0] dmem_arr [0:2**(`DMEM_ADDR_BIT-2)-1];

	`ifdef DMEM_INIT
		initial $readmemh(`DMEM_INIT_FILE, dmem_arr);
	`endif

	// Memory Read (output is not swtiching during write)
	assign o_dmem_data = dmem_arr[i_dmem_addr];

	// Memory write (to distinguish sb, sh, sw)
	integer i;
	always @ (posedge i_clk) begin
		if(i_dmem_wr_en) begin
			for(i=0; i<`XLEN/8; i=i+1) begin
				if(i_dmem_byte_sel[i])
					dmem_arr[i_dmem_addr][8*i+:8] <= i_dmem_data[8*i+:8];
			end
		end	else
			dmem_arr[i_dmem_addr] <= dmem_arr[i_dmem_addr];
	end

endmodule

