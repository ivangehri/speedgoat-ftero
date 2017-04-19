/*
 * speedgoat_test_SN2593_R2016b_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "speedgoat_test_SN2593_R2016b".
 *
 * Model version              : 1.49
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Apr 10 16:16:46 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "speedgoat_test_SN2593_R2016b.h"
#include "speedgoat_test_SN2593_R2016b_private.h"

/* Block parameters (auto storage) */
P_speedgoat_test_SN2593_R2016b_T speedgoat_test_SN2593_R2016b_P = {
  255U,                                /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S8>/FixPt Switch'
                                        */
  255U,                                /* Mask Parameter: WrapToZero_Threshold_c
                                        * Referenced by: '<S10>/FixPt Switch'
                                        */

  /*  Computed Parameter: PNMSetup1_P1_Size
   * Referenced by: '<S1>/PNM Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: id
                                        * Referenced by: '<S1>/PNM Setup1'
                                        */

  /*  Computed Parameter: PNMSetup1_P2_Size
   * Referenced by: '<S1>/PNM Setup1'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: driveLetter
                                        * Referenced by: '<S1>/PNM Setup1'
                                        */

  /*  Computed Parameter: PNMSetup1_P3_Size
   * Referenced by: '<S1>/PNM Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: configurationMode
                                        * Referenced by: '<S1>/PNM Setup1'
                                        */

  /*  Computed Parameter: PNMSetup1_P4_Size
   * Referenced by: '<S1>/PNM Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: mode
                                        * Referenced by: '<S1>/PNM Setup1'
                                        */

  /*  Computed Parameter: PNMSetup1_P5_Size
   * Referenced by: '<S1>/PNM Setup1'
   */
  { 1.0, 1.0 },
  0.01,                                /* Expression: sampleTime
                                        * Referenced by: '<S1>/PNM Setup1'
                                        */

  /*  Computed Parameter: PNMSetup1_P6_Size
   * Referenced by: '<S1>/PNM Setup1'
   */
  { 1.0, 2.0 },

  /*  Expression: pciSlot
   * Referenced by: '<S1>/PNM Setup1'
   */
  { -1.0, -1.0 },

  /*  Computed Parameter: PNMSetup1_P7_Size
   * Referenced by: '<S1>/PNM Setup1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: quantityOfAcyclicObjects
                                        * Referenced by: '<S1>/PNM Setup1'
                                        */

  /*  Computed Parameter: PNMSend1_P1_Size
   * Referenced by: '<S1>/PNM Send1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: id
                                        * Referenced by: '<S1>/PNM Send1'
                                        */

  /*  Computed Parameter: PNMSend1_P2_Size
   * Referenced by: '<S1>/PNM Send1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: portType
                                        * Referenced by: '<S1>/PNM Send1'
                                        */

  /*  Computed Parameter: PNMSend1_P3_Size
   * Referenced by: '<S1>/PNM Send1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: inputOutput
                                        * Referenced by: '<S1>/PNM Send1'
                                        */

  /*  Computed Parameter: PNMSend1_P4_Size
   * Referenced by: '<S1>/PNM Send1'
   */
  { 1.0, 1.0 },
  0.01,                                /* Expression: sampleTime
                                        * Referenced by: '<S1>/PNM Send1'
                                        */

  /*  Computed Parameter: PNMReceive_P1_Size
   * Referenced by: '<S1>/PNM Receive'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: id
                                        * Referenced by: '<S1>/PNM Receive'
                                        */

  /*  Computed Parameter: PNMReceive_P2_Size
   * Referenced by: '<S1>/PNM Receive'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: portType
                                        * Referenced by: '<S1>/PNM Receive'
                                        */

  /*  Computed Parameter: PNMReceive_P3_Size
   * Referenced by: '<S1>/PNM Receive'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: inputOutput
                                        * Referenced by: '<S1>/PNM Receive'
                                        */

  /*  Computed Parameter: PNMReceive_P4_Size
   * Referenced by: '<S1>/PNM Receive'
   */
  { 1.0, 1.0 },
  0.01,                                /* Expression: sampleTime
                                        * Referenced by: '<S1>/PNM Receive'
                                        */
  0U,                                  /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S3>/Output'
                                        */
  0U,                                  /* Computed Parameter: Output_InitialCondition_n
                                        * Referenced by: '<S4>/Output'
                                        */
  5U,                                  /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S1>/Constant1'
                                        */
  7U,                                  /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S7>/FixPt Constant'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S8>/Constant'
                                        */
  1U,                                  /* Computed Parameter: FixPtConstant_Value_k
                                        * Referenced by: '<S9>/FixPt Constant'
                                        */
  0U                                   /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S10>/Constant'
                                        */
};
