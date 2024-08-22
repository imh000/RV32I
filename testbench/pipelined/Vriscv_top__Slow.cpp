// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top.h"
#include "Vriscv_top__Syms.h"

//==========
CData/*1:0*/ Vriscv_top::__Vtable1_riscv_top__DOT__id_ctrl_result_src[128];
CData/*2:0*/ Vriscv_top::__Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[128];
CData/*0:0*/ Vriscv_top::__Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[16];

VL_CTOR_IMP(Vriscv_top) {
    Vriscv_top__Syms* __restrict vlSymsp = __VlSymsp = new Vriscv_top__Syms(this, name());
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_top::__Vconfigure(Vriscv_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vriscv_top::~Vriscv_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vriscv_top::_initial__TOP__1(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_initial__TOP__1\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*95:0*/ __Vtemp2[3];
    // Body
    __Vtemp1[0U] = 0x663d2573U;
    __Vtemp1[1U] = 0x745f6d69U;
    __Vtemp1[2U] = 0x746578U;
    (void)VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(3, __Vtemp1),
                               vlTOPp->riscv_top__DOT__u_riscv_if__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF);VL_READMEM_N(true
                                                                                , 32
                                                                                , 16384
                                                                                , 0
                                                                                , 
                                                                                VL_CVT_PACK_STR_NW(32, vlTOPp->riscv_top__DOT__u_riscv_if__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF)
                                                                                , vlTOPp->riscv_top__DOT__u_riscv_if__DOT__u_riscv_imem__DOT__imem_arr
                                                                                , 0
                                                                                , ~0ULL);
    vlTOPp->riscv_top__DOT__u_riscv_id__DOT__u_riscv_register_file__DOT__registers[0U] = 0U;
    __Vtemp2[0U] = 0x663d2573U;
    __Vtemp2[1U] = 0x615f6d69U;
    __Vtemp2[2U] = 0x646174U;
    (void)VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(3, __Vtemp2),
                               vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF);VL_READMEM_N(true
                                                                                , 32
                                                                                , 16384
                                                                                , 0
                                                                                , 
                                                                                VL_CVT_PACK_STR_NW(32, vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF)
                                                                                , vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem__DOT__dmem_arr
                                                                                , 0
                                                                                , ~0ULL);
}

void Vriscv_top::_settle__TOP__5(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_settle__TOP__5\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_riscv_dmem_wr_data = vlTOPp->riscv_top__DOT__mem_write_data;
    vlTOPp->o_riscv_imem_pc = vlTOPp->riscv_top__DOT__u_riscv_if__DOT__current_pc;
    vlTOPp->riscv_top__DOT__u_riscv_wb__DOT__mux_concat_rd 
        = (((QData)((IData)(vlTOPp->riscv_top__DOT__wb_rd_result)) 
            << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__wb_read_data)));
    vlTOPp->o_riscv_dmem_wr_en = vlTOPp->riscv_top__DOT__mem_ctrl_mem_write;
    vlTOPp->o_riscv_dmem_addr = vlTOPp->riscv_top__DOT__mem_alu_result;
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__dmem_wr_data 
        = ((0x1fU >= (0x18U & (vlTOPp->riscv_top__DOT__mem_alu_result 
                               << 3U))) ? (vlTOPp->riscv_top__DOT__mem_write_data 
                                           << (0x18U 
                                               & (vlTOPp->riscv_top__DOT__mem_alu_result 
                                                  << 3U)))
            : 0U);
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__dmem_byte_sel 
        = ((3U >= (3U & vlTOPp->riscv_top__DOT__mem_alu_result))
            ? (0xfU & ((IData)(vlTOPp->riscv_top__DOT__mem_ctrl_byte_sel) 
                       << (3U & vlTOPp->riscv_top__DOT__mem_alu_result)))
            : 0U);
    vlTOPp->riscv_top__DOT__ex_pc_plus_imm = (vlTOPp->riscv_top__DOT__ex_pc 
                                              + vlTOPp->riscv_top__DOT__ex_imm);
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[0U] 
        = vlTOPp->riscv_top__DOT__mem_alu_result;
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[1U] 
        = vlTOPp->riscv_top__DOT__mem_imm;
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[2U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__mem_pc_plus_4)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__mem_pc_plus_imm))));
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__mem_pc_plus_4)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__mem_pc_plus_imm))) 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__forwardAE = ((((IData)(vlTOPp->riscv_top__DOT__mem_ctrl_reg_write) 
                                           & (0U != (IData)(vlTOPp->riscv_top__DOT__mem_rd_addr))) 
                                          & ((IData)(vlTOPp->riscv_top__DOT__ex_rs1_addr) 
                                             == (IData)(vlTOPp->riscv_top__DOT__mem_rd_addr)))
                                          ? 2U : ((
                                                   ((IData)(vlTOPp->riscv_top__DOT__wb_ctrl_reg_write) 
                                                    & (0U 
                                                       != (IData)(vlTOPp->riscv_top__DOT__wb_rd_addr))) 
                                                   & ((IData)(vlTOPp->riscv_top__DOT__ex_rs1_addr) 
                                                      == (IData)(vlTOPp->riscv_top__DOT__wb_rd_addr)))
                                                   ? 1U
                                                   : 0U));
    vlTOPp->riscv_top__DOT__forwardBE = ((((IData)(vlTOPp->riscv_top__DOT__mem_ctrl_reg_write) 
                                           & (0U != (IData)(vlTOPp->riscv_top__DOT__mem_rd_addr))) 
                                          & ((IData)(vlTOPp->riscv_top__DOT__ex_rs2_addr) 
                                             == (IData)(vlTOPp->riscv_top__DOT__mem_rd_addr)))
                                          ? 2U : ((
                                                   ((IData)(vlTOPp->riscv_top__DOT__wb_ctrl_reg_write) 
                                                    & (0U 
                                                       != (IData)(vlTOPp->riscv_top__DOT__wb_rd_addr))) 
                                                   & ((IData)(vlTOPp->riscv_top__DOT__ex_rs2_addr) 
                                                      == (IData)(vlTOPp->riscv_top__DOT__wb_rd_addr)))
                                                   ? 1U
                                                   : 0U));
    vlTOPp->riscv_top__DOT__id_ctrl_alu_control = (
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->riscv_top__DOT__id_instr)) 
                                                    | (0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->riscv_top__DOT__id_instr)))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlTOPp->riscv_top__DOT__id_instr)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlTOPp->riscv_top__DOT__id_instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlTOPp->riscv_top__DOT__id_instr)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->riscv_top__DOT__id_instr)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlTOPp->riscv_top__DOT__id_instr)
                                                        ? 0xdU
                                                        : 5U)
                                                       : 4U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlTOPp->riscv_top__DOT__id_instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlTOPp->riscv_top__DOT__id_instr)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->riscv_top__DOT__id_instr)
                                                       ? 1U
                                                       : 
                                                      (((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->riscv_top__DOT__id_instr)) 
                                                        & (vlTOPp->riscv_top__DOT__id_instr 
                                                           >> 0x1eU))
                                                        ? 8U
                                                        : 0U))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->riscv_top__DOT__id_instr))
                                                     ? 
                                                    ((0x4000U 
                                                      & vlTOPp->riscv_top__DOT__id_instr)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlTOPp->riscv_top__DOT__id_instr)
                                                       ? 3U
                                                       : 2U)
                                                      : 
                                                     ((0x2000U 
                                                       & vlTOPp->riscv_top__DOT__id_instr)
                                                       ? 0xfU
                                                       : 8U))
                                                     : 0U));
    vlTOPp->riscv_top__DOT__id_stall = ((((0x1fU & 
                                           (vlTOPp->riscv_top__DOT__id_instr 
                                            >> 0xfU)) 
                                          == (IData)(vlTOPp->riscv_top__DOT__ex_rd_addr)) 
                                         | ((0x1fU 
                                             & (vlTOPp->riscv_top__DOT__id_instr 
                                                >> 0x14U)) 
                                            == (IData)(vlTOPp->riscv_top__DOT__ex_rd_addr))) 
                                        & (~ (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_rd_src)));
    vlTOPp->__Vtableidx1 = (0x7fU & vlTOPp->riscv_top__DOT__id_instr);
    vlTOPp->riscv_top__DOT__id_ctrl_result_src = vlTOPp->__Vtable1_riscv_top__DOT__id_ctrl_result_src
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (0x7fU & vlTOPp->riscv_top__DOT__id_instr);
    vlTOPp->riscv_top__DOT__u_riscv_id__DOT__id_imm_src 
        = vlTOPp->__Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src
        [vlTOPp->__Vtableidx2];
    vlTOPp->o_riscv_imem_instr = vlTOPp->riscv_top__DOT__u_riscv_if__DOT__u_riscv_imem__DOT__imem_arr
        [(0x3fffU & (vlTOPp->riscv_top__DOT__u_riscv_if__DOT__current_pc 
                     >> 2U))];
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
        = ((0x1fU >= (0x18U & (vlTOPp->riscv_top__DOT__mem_alu_result 
                               << 3U))) ? (vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem__DOT__dmem_arr
                                           [(0x3fffU 
                                             & (vlTOPp->riscv_top__DOT__mem_alu_result 
                                                >> 2U))] 
                                           >> (0x18U 
                                               & (vlTOPp->riscv_top__DOT__mem_alu_result 
                                                  << 3U)))
            : 0U);
    vlTOPp->riscv_top__DOT__u_riscv_wb__DOT__u_riscv_mux_wb__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->riscv_top__DOT__u_riscv_wb__DOT__mux_concat_rd);
    vlTOPp->riscv_top__DOT__u_riscv_wb__DOT__u_riscv_mux_wb__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->riscv_top__DOT__u_riscv_wb__DOT__mux_concat_rd 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_mux_rd__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[0U];
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_mux_rd__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[1U];
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_mux_rd__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[2U];
    vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_mux_rd__DOT__mux_input_arr[3U] 
        = vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result[3U];
    vlTOPp->riscv_top__DOT__id_imm = ((4U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_id__DOT__id_imm_src))
                                       ? ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_id__DOT__id_imm_src))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlTOPp->riscv_top__DOT__u_riscv_id__DOT__id_imm_src))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlTOPp->riscv_top__DOT__id_instr)
                                                    : 
                                                   ((0xfff00000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlTOPp->riscv_top__DOT__id_instr 
                                                                       >> 0x1fU)))) 
                                                        << 0x14U)) 
                                                    | ((0xff000U 
                                                        & vlTOPp->riscv_top__DOT__id_instr) 
                                                       | ((0x800U 
                                                           & (vlTOPp->riscv_top__DOT__id_instr 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlTOPp->riscv_top__DOT__id_instr 
                                                                >> 0x14U)))))))
                                       : ((2U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_id__DOT__id_imm_src))
                                           ? ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_id__DOT__id_imm_src))
                                               ? ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__id_instr 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & (vlTOPp->riscv_top__DOT__id_instr 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlTOPp->riscv_top__DOT__id_instr 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlTOPp->riscv_top__DOT__id_instr 
                                                              >> 7U)))))
                                               : ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__id_instr 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->riscv_top__DOT__id_instr 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->riscv_top__DOT__id_instr 
                                                           >> 7U)))))
                                           : ((1U & (IData)(vlTOPp->riscv_top__DOT__u_riscv_id__DOT__id_imm_src))
                                               ? ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->riscv_top__DOT__id_instr 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->riscv_top__DOT__id_instr 
                                                        >> 0x14U)))
                                               : 0U)));
    vlTOPp->riscv_top__DOT__mem_read_data = ((4U & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                   ? 
                                                  (0xffffU 
                                                   & vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)
                                                   : 
                                                  (0xffU 
                                                   & vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)))
                                              : ((2U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                   ? 0U
                                                   : vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->riscv_top__DOT__mem_funct3))
                                                   ? 
                                                  ((0xffff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
                                                                      >> 0xfU)))) 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data))
                                                   : 
                                                  ((0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data)))));
    vlTOPp->riscv_top__DOT__wb_rd_data = vlTOPp->riscv_top__DOT__u_riscv_wb__DOT__u_riscv_mux_wb__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__wb_ctrl_rd_src];
    vlTOPp->riscv_top__DOT__mem_rd_result = vlTOPp->riscv_top__DOT__u_riscv_mem__DOT__u_riscv_mux_rd__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__mem_ctrl_result_src];
    vlTOPp->o_riscv_dmem_rd_data = vlTOPp->riscv_top__DOT__mem_read_data;
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs1[0U] 
        = vlTOPp->riscv_top__DOT__ex_rs1_data;
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs1[1U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__mem_rd_result)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__wb_rd_data))));
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs1[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__mem_rd_result)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__wb_rd_data))) 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs2[0U] 
        = vlTOPp->riscv_top__DOT__ex_rs2_data;
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs2[1U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__mem_rd_result)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__wb_rd_data))));
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs2[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__mem_rd_result)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__wb_rd_data))) 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs1__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs1[0U];
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs1__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs1[1U];
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs1__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs1[2U];
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs2__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs2[0U];
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs2__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs2[1U];
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs2__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs2[2U];
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
        = ((2U >= (IData)(vlTOPp->riscv_top__DOT__forwardAE))
            ? vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs1__DOT__mux_input_arr
           [vlTOPp->riscv_top__DOT__forwardAE] : 0U);
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__src_rs2_data 
        = ((2U >= (IData)(vlTOPp->riscv_top__DOT__forwardBE))
            ? vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs2__DOT__mux_input_arr
           [vlTOPp->riscv_top__DOT__forwardBE] : 0U);
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_alu_b 
        = (((QData)((IData)(vlTOPp->riscv_top__DOT__ex_imm)) 
            << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__src_rs2_data)));
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_alu_b);
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__mux_concat_alu_b 
                   >> 0x20U));
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b 
        = vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr
        [vlTOPp->riscv_top__DOT__ex_ctrl_alu_b_src];
    vlTOPp->riscv_top__DOT__ex_alu_result = ((8U & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                              ? ((4U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a, 
                                                                  (0x1fU 
                                                                   & vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b))
                                                    : 0U))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                    - vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b))))
                                              : ((4U 
                                                  & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                    ? 
                                                   (vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                    & vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b)
                                                    : 
                                                   (vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                    | vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                    ? 
                                                   (vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b))
                                                    : 
                                                   (vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                    ^ vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                    ? 
                                                   ((vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                     < vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(1,32,32, vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a, vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_alu_control))
                                                    ? 
                                                   (vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b))
                                                    : 
                                                   (vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_a 
                                                    + vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__alu_b)))));
    vlTOPp->riscv_top__DOT__u_riscv_if__DOT__mux_concat_pc[0U] 
        = ((IData)(4U) + vlTOPp->riscv_top__DOT__u_riscv_if__DOT__current_pc);
    vlTOPp->riscv_top__DOT__u_riscv_if__DOT__mux_concat_pc[1U] 
        = (IData)((((QData)((IData)(vlTOPp->riscv_top__DOT__ex_alu_result)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__ex_pc_plus_imm))));
    vlTOPp->riscv_top__DOT__u_riscv_if__DOT__mux_concat_pc[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->riscv_top__DOT__ex_alu_result)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->riscv_top__DOT__ex_pc_plus_imm))) 
                   >> 0x20U));
    vlTOPp->__Vtableidx3 = (((0U == vlTOPp->riscv_top__DOT__ex_alu_result) 
                             << 3U) | (IData)(vlTOPp->riscv_top__DOT__ex_funct3));
    vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__take_branch 
        = vlTOPp->__Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch
        [vlTOPp->__Vtableidx3];
    vlTOPp->riscv_top__DOT__u_riscv_if__DOT__u_riscv_mux_pc__DOT__mux_input_arr[0U] 
        = vlTOPp->riscv_top__DOT__u_riscv_if__DOT__mux_concat_pc[0U];
    vlTOPp->riscv_top__DOT__u_riscv_if__DOT__u_riscv_mux_pc__DOT__mux_input_arr[1U] 
        = vlTOPp->riscv_top__DOT__u_riscv_if__DOT__mux_concat_pc[1U];
    vlTOPp->riscv_top__DOT__u_riscv_if__DOT__u_riscv_mux_pc__DOT__mux_input_arr[2U] 
        = vlTOPp->riscv_top__DOT__u_riscv_if__DOT__mux_concat_pc[2U];
    vlTOPp->riscv_top__DOT__ex_src_pc = ((((IData)(vlTOPp->riscv_top__DOT__ex_ctrl_branch) 
                                           & (IData)(vlTOPp->riscv_top__DOT__u_riscv_ex__DOT__take_branch)) 
                                          | (1U == (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_jump)))
                                          ? 1U : ((2U 
                                                   == (IData)(vlTOPp->riscv_top__DOT__ex_ctrl_jump))
                                                   ? 2U
                                                   : 0U));
    vlTOPp->riscv_top__DOT__id_flush = ((1U == (IData)(vlTOPp->riscv_top__DOT__ex_src_pc)) 
                                        | (2U == (IData)(vlTOPp->riscv_top__DOT__ex_src_pc)));
    vlTOPp->riscv_top__DOT__ex_flush = ((1U == (IData)(vlTOPp->riscv_top__DOT__ex_src_pc)) 
                                        | (2U == (IData)(vlTOPp->riscv_top__DOT__ex_src_pc)));
}

void Vriscv_top::_eval_initial(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_eval_initial\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_rstn = vlTOPp->i_rstn;
}

void Vriscv_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::final\n"); );
    // Variables
    Vriscv_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vriscv_top::_eval_settle(Vriscv_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_eval_settle\n"); );
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vriscv_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_rstn = VL_RAND_RESET_I(1);
    o_riscv_dmem_wr_en = VL_RAND_RESET_I(1);
    o_riscv_imem_pc = VL_RAND_RESET_I(32);
    o_riscv_imem_instr = VL_RAND_RESET_I(32);
    o_riscv_dmem_addr = VL_RAND_RESET_I(32);
    o_riscv_dmem_wr_data = VL_RAND_RESET_I(32);
    o_riscv_dmem_rd_data = VL_RAND_RESET_I(32);
    o_riscv_dmem_byte_sel = VL_RAND_RESET_I(4);
    riscv_top__DOT__id_stall = VL_RAND_RESET_I(1);
    riscv_top__DOT__id_flush = VL_RAND_RESET_I(1);
    riscv_top__DOT__id_pc = VL_RAND_RESET_I(32);
    riscv_top__DOT__id_pc_plus_4 = VL_RAND_RESET_I(32);
    riscv_top__DOT__id_instr = VL_RAND_RESET_I(32);
    riscv_top__DOT__id_rd_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__id_imm = VL_RAND_RESET_I(32);
    riscv_top__DOT__id_ctrl_result_src = VL_RAND_RESET_I(2);
    riscv_top__DOT__id_ctrl_alu_control = VL_RAND_RESET_I(4);
    riscv_top__DOT__ex_flush = VL_RAND_RESET_I(1);
    riscv_top__DOT__ex_ctrl_reg_write = VL_RAND_RESET_I(1);
    riscv_top__DOT__ex_ctrl_result_src = VL_RAND_RESET_I(2);
    riscv_top__DOT__ex_ctrl_mem_write = VL_RAND_RESET_I(1);
    riscv_top__DOT__ex_ctrl_jump = VL_RAND_RESET_I(2);
    riscv_top__DOT__ex_ctrl_branch = VL_RAND_RESET_I(1);
    riscv_top__DOT__ex_ctrl_byte_sel = VL_RAND_RESET_I(4);
    riscv_top__DOT__ex_ctrl_alu_control = VL_RAND_RESET_I(4);
    riscv_top__DOT__ex_ctrl_alu_b_src = VL_RAND_RESET_I(1);
    riscv_top__DOT__ex_ctrl_rd_src = VL_RAND_RESET_I(1);
    riscv_top__DOT__ex_rs1_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_rs2_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_rs1_addr = VL_RAND_RESET_I(5);
    riscv_top__DOT__ex_rs2_addr = VL_RAND_RESET_I(5);
    riscv_top__DOT__ex_rd_addr = VL_RAND_RESET_I(5);
    riscv_top__DOT__ex_pc = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_pc_plus_4 = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_imm = VL_RAND_RESET_I(32);
    riscv_top__DOT__forwardAE = VL_RAND_RESET_I(2);
    riscv_top__DOT__forwardBE = VL_RAND_RESET_I(2);
    riscv_top__DOT__ex_forward_rd_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_forward_alu_result = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_src_pc = VL_RAND_RESET_I(2);
    riscv_top__DOT__ex_alu_result = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_pc_plus_imm = VL_RAND_RESET_I(32);
    riscv_top__DOT__mem_ctrl_rd_src = VL_RAND_RESET_I(1);
    riscv_top__DOT__mem_ctrl_reg_write = VL_RAND_RESET_I(1);
    riscv_top__DOT__mem_ctrl_mem_write = VL_RAND_RESET_I(1);
    riscv_top__DOT__mem_ctrl_result_src = VL_RAND_RESET_I(2);
    riscv_top__DOT__mem_ctrl_byte_sel = VL_RAND_RESET_I(4);
    riscv_top__DOT__mem_rd_addr = VL_RAND_RESET_I(5);
    riscv_top__DOT__mem_imm = VL_RAND_RESET_I(32);
    riscv_top__DOT__mem_alu_result = VL_RAND_RESET_I(32);
    riscv_top__DOT__mem_pc_plus_4 = VL_RAND_RESET_I(32);
    riscv_top__DOT__mem_pc_plus_imm = VL_RAND_RESET_I(32);
    riscv_top__DOT__mem_write_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__mem_rd_result = VL_RAND_RESET_I(32);
    riscv_top__DOT__mem_read_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__wb_ctrl_reg_write = VL_RAND_RESET_I(1);
    riscv_top__DOT__wb_ctrl_result_src = VL_RAND_RESET_I(2);
    riscv_top__DOT__wb_rd_addr = VL_RAND_RESET_I(5);
    riscv_top__DOT__wb_imm = VL_RAND_RESET_I(32);
    riscv_top__DOT__wb_pc_plus_4 = VL_RAND_RESET_I(32);
    riscv_top__DOT__wb_alu_result = VL_RAND_RESET_I(32);
    riscv_top__DOT__wb_read_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__wb_rd_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__ex_funct3 = VL_RAND_RESET_I(3);
    riscv_top__DOT__mem_funct3 = VL_RAND_RESET_I(3);
    riscv_top__DOT__wb_ctrl_rd_src = VL_RAND_RESET_I(1);
    riscv_top__DOT__wb_rd_result = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, riscv_top__DOT__u_riscv_if__DOT__mux_concat_pc);
    riscv_top__DOT__u_riscv_if__DOT__current_pc = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            riscv_top__DOT__u_riscv_if__DOT__u_riscv_mux_pc__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            riscv_top__DOT__u_riscv_if__DOT__u_riscv_imem__DOT__imem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(1024, riscv_top__DOT__u_riscv_if__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF);
    riscv_top__DOT__u_riscv_id__DOT__id_imm_src = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            riscv_top__DOT__u_riscv_id__DOT__u_riscv_register_file__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(96, riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs1);
    VL_RAND_RESET_W(96, riscv_top__DOT__u_riscv_ex__DOT__mux_concat_src_rs2);
    riscv_top__DOT__u_riscv_ex__DOT__mux_concat_alu_b = VL_RAND_RESET_Q(64);
    riscv_top__DOT__u_riscv_ex__DOT__src_rs2_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_ex__DOT__alu_a = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_ex__DOT__alu_b = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_ex__DOT__take_branch = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs1__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_rs2__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            riscv_top__DOT__u_riscv_ex__DOT__u_riscv_mux_alu_b__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    riscv_top__DOT__u_riscv_mem__DOT__dmem_wr_data = VL_RAND_RESET_I(32);
    riscv_top__DOT__u_riscv_mem__DOT__dmem_byte_sel = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, riscv_top__DOT__u_riscv_mem__DOT__mux_concat_src_result);
    riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem_interface__DOT__byte_aligned_dmem_rd_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem__DOT__dmem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(1024, riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF);
    riscv_top__DOT__u_riscv_mem__DOT__u_riscv_dmem__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            riscv_top__DOT__u_riscv_mem__DOT__u_riscv_mux_rd__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    riscv_top__DOT__u_riscv_wb__DOT__mux_concat_rd = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            riscv_top__DOT__u_riscv_wb__DOT__u_riscv_mux_wb__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[0] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[1] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[2] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[3] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[4] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[5] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[6] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[7] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[8] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[9] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[10] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[11] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[12] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[13] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[14] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[15] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[16] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[17] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[18] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[19] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[20] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[21] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[22] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[23] = 2U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[24] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[25] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[26] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[27] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[28] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[29] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[30] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[31] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[32] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[33] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[34] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[35] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[36] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[37] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[38] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[39] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[40] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[41] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[42] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[43] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[44] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[45] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[46] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[47] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[48] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[49] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[50] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[51] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[52] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[53] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[54] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[55] = 1U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[56] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[57] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[58] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[59] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[60] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[61] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[62] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[63] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[64] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[65] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[66] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[67] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[68] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[69] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[70] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[71] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[72] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[73] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[74] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[75] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[76] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[77] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[78] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[79] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[80] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[81] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[82] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[83] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[84] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[85] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[86] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[87] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[88] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[89] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[90] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[91] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[92] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[93] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[94] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[95] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[96] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[97] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[98] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[99] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[100] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[101] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[102] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[103] = 3U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[104] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[105] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[106] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[107] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[108] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[109] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[110] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[111] = 3U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[112] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[113] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[114] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[115] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[116] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[117] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[118] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[119] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[120] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[121] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[122] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[123] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[124] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[125] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[126] = 0U;
    __Vtable1_riscv_top__DOT__id_ctrl_result_src[127] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[0] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[1] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[2] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[3] = 1U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[4] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[5] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[6] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[7] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[8] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[9] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[10] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[11] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[12] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[13] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[14] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[15] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[16] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[17] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[18] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[19] = 1U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[20] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[21] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[22] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[23] = 5U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[24] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[25] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[26] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[27] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[28] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[29] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[30] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[31] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[32] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[33] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[34] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[35] = 2U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[36] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[37] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[38] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[39] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[40] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[41] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[42] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[43] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[44] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[45] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[46] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[47] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[48] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[49] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[50] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[51] = 0U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[52] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[53] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[54] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[55] = 5U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[56] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[57] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[58] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[59] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[60] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[61] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[62] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[63] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[64] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[65] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[66] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[67] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[68] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[69] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[70] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[71] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[72] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[73] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[74] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[75] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[76] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[77] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[78] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[79] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[80] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[81] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[82] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[83] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[84] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[85] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[86] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[87] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[88] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[89] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[90] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[91] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[92] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[93] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[94] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[95] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[96] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[97] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[98] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[99] = 3U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[100] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[101] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[102] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[103] = 1U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[104] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[105] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[106] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[107] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[108] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[109] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[110] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[111] = 4U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[112] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[113] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[114] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[115] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[116] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[117] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[118] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[119] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[120] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[121] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[122] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[123] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[124] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[125] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[126] = 7U;
    __Vtable2_riscv_top__DOT__u_riscv_id__DOT__id_imm_src[127] = 7U;
    __Vtableidx3 = 0;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[0] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[1] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[2] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[3] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[4] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[5] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[6] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[7] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[8] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[9] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[10] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[11] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[12] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[13] = 1U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[14] = 0U;
    __Vtable3_riscv_top__DOT__u_riscv_ex__DOT__take_branch[15] = 1U;
    __Vdly__riscv_top__DOT__id_instr = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
