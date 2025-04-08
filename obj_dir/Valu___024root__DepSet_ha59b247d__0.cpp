// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "Valu__pch.h"
#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ alu__DOT__adder_result;
    alu__DOT__adder_result = 0;
    CData/*0:0*/ alu__DOT____VdfgTmp_h7ce82fcd__0;
    alu__DOT____VdfgTmp_h7ce82fcd__0 = 0;
    IData/*31:0*/ alu__DOT__u_adder__DOT__b_invert;
    alu__DOT__u_adder__DOT__b_invert = 0;
    // Body
    alu__DOT____VdfgTmp_h7ce82fcd__0 = ((0U == (IData)(vlSelf->alu_control)) 
                                        | (1U == (IData)(vlSelf->alu_control)));
    alu__DOT__u_adder__DOT__b_invert = ((1U == (IData)(vlSelf->alu_control))
                                         ? (~ vlSelf->operand_b)
                                         : vlSelf->operand_b);
    vlSelf->carry_out = ((IData)(alu__DOT____VdfgTmp_h7ce82fcd__0) 
                         & (IData)((1ULL & (((QData)((IData)(vlSelf->operand_a)) 
                                             + ((QData)((IData)(alu__DOT__u_adder__DOT__b_invert)) 
                                                + (QData)((IData)(
                                                                  (1U 
                                                                   == (IData)(vlSelf->alu_control)))))) 
                                            >> 0x20U))));
    alu__DOT__adder_result = (vlSelf->operand_a + (alu__DOT__u_adder__DOT__b_invert 
                                                   + 
                                                   (1U 
                                                    == (IData)(vlSelf->alu_control))));
    vlSelf->overflow = ((IData)(alu__DOT____VdfgTmp_h7ce82fcd__0) 
                        & (((vlSelf->operand_a >> 0x1fU) 
                            == (alu__DOT__u_adder__DOT__b_invert 
                                >> 0x1fU)) & ((alu__DOT__adder_result 
                                               >> 0x1fU) 
                                              != (vlSelf->operand_a 
                                                  >> 0x1fU))));
    vlSelf->alu_result = ((8U & (IData)(vlSelf->alu_control))
                           ? 0xdeadbeefU : ((4U & (IData)(vlSelf->alu_control))
                                             ? ((2U 
                                                 & (IData)(vlSelf->alu_control))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->alu_control))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->operand_a 
                                                   | vlSelf->operand_b))
                                                  : 
                                                 (vlSelf->operand_a 
                                                  ^ vlSelf->operand_b))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->alu_control))
                                                  ? 
                                                 (vlSelf->operand_a 
                                                  | vlSelf->operand_b)
                                                  : 
                                                 (vlSelf->operand_a 
                                                  & vlSelf->operand_b)))
                                             : ((2U 
                                                 & (IData)(vlSelf->alu_control))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->alu_control))
                                                  ? 0xdeadbeefU
                                                  : 
                                                 (vlSelf->operand_a 
                                                  * vlSelf->operand_b))
                                                 : alu__DOT__adder_result)));
    vlSelf->zero = (0U == vlSelf->alu_result);
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Valu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Valu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
}

void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);

bool Valu___024root___eval_phase__act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Valu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu___024root___eval_phase__nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("alu.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Valu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("alu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("alu.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Valu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Valu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_control & 0xf0U))) {
        Verilated::overWidthError("alu_control");}
}
#endif  // VL_DEBUG
