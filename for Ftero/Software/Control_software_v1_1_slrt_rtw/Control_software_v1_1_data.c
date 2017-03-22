/*
 * Control_software_v1_1_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Control_software_v1_1".
 *
 * Model version              : 1.1536
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Mar 21 15:25:08 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Control_software_v1_1.h"
#include "Control_software_v1_1_private.h"

/* Block parameters (auto storage) */
P_Control_software_v1_1_T Control_software_v1_1_P = {
  {
    {
      15.496665511579286,
      9.2,
      21.966015833899831,
      2.0941439880512549,
      418.82879761025094,
      1.2564863928307526,
      1.0,
      300.0
    },

    {
      10.0,
      1500.0,
      -20.0,
      120.0,
      -10.0,
      1.2,
      10.0,
      -70.0,
      60.0,
      -60.0,
      0.05,
      0.1,
      0.1,
      0.22,
      0.15,
      0.025,
      0.27,
      0.08,
      6.9999999999999991,
      -30.0,
      0.0,
      -100.0,
      20.0,
      -60.0,
      30.0,
      0.4,
      30.0,
      -0.3,
      2.0,
      -15.0,
      -20.0
    }
  },                                   /* Variable: HLC_Param
                                        * Referenced by:
                                        *   '<S7>/Constant1'
                                        *   '<S7>/Constant11'
                                        *   '<S7>/Constant12'
                                        *   '<S7>/Constant13'
                                        *   '<S7>/Constant14'
                                        *   '<S7>/Constant15'
                                        *   '<S7>/Constant16'
                                        *   '<S7>/Constant17'
                                        *   '<S7>/Constant18'
                                        *   '<S7>/Constant19'
                                        *   '<S7>/Constant2'
                                        *   '<S7>/Constant20'
                                        *   '<S7>/Constant21'
                                        *   '<S7>/Constant22'
                                        *   '<S7>/Constant23'
                                        *   '<S7>/Constant24'
                                        *   '<S7>/Constant25'
                                        *   '<S7>/Constant26'
                                        *   '<S7>/Constant28'
                                        *   '<S7>/Constant29'
                                        *   '<S7>/Constant3'
                                        *   '<S7>/Constant30'
                                        *   '<S7>/Constant31'
                                        *   '<S7>/Constant32'
                                        *   '<S7>/Constant33'
                                        *   '<S7>/Constant34'
                                        *   '<S7>/Constant35'
                                        *   '<S7>/Constant36'
                                        *   '<S7>/Constant37'
                                        *   '<S7>/Constant38'
                                        *   '<S7>/Constant39'
                                        *   '<S7>/Constant4'
                                        *   '<S7>/Constant40'
                                        *   '<S7>/Constant41'
                                        *   '<S7>/Constant42'
                                        *   '<S7>/Constant5'
                                        *   '<S7>/Constant6'
                                        *   '<S7>/Constant7'
                                        *   '<S7>/Constant8'
                                        */
  10.0,                                /* Variable: AOsat
                                        * Referenced by:
                                        *   '<S6>/Saturation'
                                        *   '<S6>/Saturation1'
                                        */

  /*  Variable: Afilt_Sl
   * Referenced by: '<S20>/Discrete State-Space'
   */
  { 0.95073289902280134, -0.563892189837562, 0.001, 0.99926710097719873 },

  /*  Variable: Afilt_Winch
   * Referenced by: '<S21>/Discrete State-Space'
   */
  { 0.95046440677966115, -0.57699533467394193, 0.001, 0.999535593220339 },

  /*  Variable: Bfilt_Sl
   * Referenced by: '<S20>/Discrete State-Space'
   */
  { 0.049267100977198663, 0.563892189837562, 0.0, 0.010857763300760043 },

  /*  Variable: Bfilt_Winch
   * Referenced by: '<S21>/Discrete State-Space'
   */
  { 0.049535593220338847, 0.57699533467394193, 0.0, 0.011299435028248589 },

  /*  Variable: Cfilt_Sl
   * Referenced by: '<S20>/Discrete State-Space'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /*  Variable: Cfilt_Winch
   * Referenced by: '<S21>/Discrete State-Space'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /*  Variable: Dfilt_Sl
   * Referenced by: '<S20>/Discrete State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /*  Variable: Dfilt_Winch
   * Referenced by: '<S21>/Discrete State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /*  Variable: JoyFiltDen
   * Referenced by:
   *   '<S9>/Discrete Transfer Fcn'
   *   '<S9>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.878163888194315, 0.88187489772929684 },

  /*  Variable: JoyFiltNum
   * Referenced by:
   *   '<S9>/Discrete Transfer Fcn'
   *   '<S9>/Discrete Transfer Fcn1'
   */
  { 0.00092775238374545924, 0.0018555047674909185, 0.00092775238374545924 },
  5.0,                                 /* Variable: JoyS_gain
                                        * Referenced by: '<S9>/Gain'
                                        */
  -2.5,                                /* Variable: JoyS_ofst
                                        * Referenced by: '<S9>/Constant'
                                        */
  9.2,                                 /* Variable: JoyS_sat
                                        * Referenced by: '<S9>/Saturation'
                                        */
  -5.0,                                /* Variable: JoyW_gain
                                        * Referenced by: '<S9>/Gain1'
                                        */
  -2.5,                                /* Variable: JoyW_ofst
                                        * Referenced by: '<S9>/Constant1'
                                        */
  14.0,                                /* Variable: Kpos
                                        * Referenced by: '<S20>/Gain3'
                                        */
  2.5,                                 /* Variable: Kspd
                                        * Referenced by: '<S20>/Gain4'
                                        */
  1.0,                                 /* Variable: KspdWinch
                                        * Referenced by: '<S21>/Gain1'
                                        */
  3.0,                                 /* Variable: NPotSpdEst
                                        * Referenced by: '<S11>/Gain1'
                                        */

  /*  Variable: PotPosFiltDen
   * Referenced by: '<S11>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.2, 0.36 },

  /*  Variable: PotPosFiltNum
   * Referenced by: '<S11>/Discrete Transfer Fcn1'
   */
  { 0.04, 0.08, 0.04 },
  0.08,                                /* Variable: Pot_gain
                                        * Referenced by: '<S11>/Gain'
                                        */
  0.4,                                 /* Variable: Pot_max
                                        * Referenced by: '<S11>/Saturation'
                                        */
  0.0,                                 /* Variable: Pot_min
                                        * Referenced by: '<S11>/Saturation'
                                        */
  -0.0558,                             /* Variable: Pot_ofst
                                        * Referenced by: '<S11>/Constant'
                                        */
  2.3876104167282426,                  /* Variable: SlMotPosAIgain
                                        * Referenced by:
                                        *   '<S20>/Gain'
                                        *   '<S20>/Gain1'
                                        *   '<S20>/Gain2'
                                        */
  26.0,                                /* Variable: SlideMotTorqueMax
                                        * Referenced by: '<S20>/Saturation'
                                        */

  /*  Variable: SlidePosFiltDen
   * Referenced by: '<S10>/Discrete Transfer Fcn2'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: SlidePosFiltNum
   * Referenced by: '<S10>/Discrete Transfer Fcn2'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },

  /*  Variable: SlideSpdEstFiltDen
   * Referenced by: '<S20>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: SlideSpdEstFiltNum
   * Referenced by: '<S20>/Discrete Transfer Fcn1'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  0.001,                               /* Variable: Ts_1ms
                                        * Referenced by:
                                        *   '<S2>/Constant2'
                                        *   '<S11>/Gain1'
                                        */
  1.0,                                 /* Variable: Ts_1s
                                        * Referenced by:
                                        *   '<S1>/Constat'
                                        *   '<S91>/Switch'
                                        *   '<S91>/Switch1'
                                        */
  0.1,                                 /* Variable: WinchDrumRad
                                        * Referenced by:
                                        *   '<S19>/Constant1'
                                        *   '<S21>/Constant1'
                                        */
  76.0,                                /* Variable: WinchMotPosAIgain
                                        * Referenced by:
                                        *   '<S19>/Gain'
                                        *   '<S21>/Gain'
                                        */
  13.0,                                /* Variable: WinchMotTorqueMax
                                        * Referenced by: '<S21>/Saturation'
                                        */

  /*  Variable: WinchPosFiltDen
   * Referenced by: '<S19>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: WinchPosFiltNum
   * Referenced by: '<S19>/Discrete Transfer Fcn1'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  150.0,                               /* Variable: WinchRefSpdSup
                                        * Referenced by:
                                        *   '<S6>/Gain'
                                        *   '<S21>/Saturation1'
                                        */

  /*  Variable: WinchSpdEstFiltDen
   * Referenced by: '<S21>/Discrete Transfer Fcn'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: WinchSpdEstFiltNum
   * Referenced by: '<S21>/Discrete Transfer Fcn'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  -2.0,                                /* Variable: WinchTravelMin_m
                                        * Referenced by:
                                        *   '<S19>/Constant1'
                                        *   '<S21>/Constant1'
                                        */
  10.0,                                /* Variable: WinchVoltMax
                                        * Referenced by:
                                        *   '<S6>/Gain'
                                        *   '<S19>/Constant'
                                        *   '<S21>/Constant'
                                        */

  /*  Variable: x0_Sl
   * Referenced by: '<S20>/Discrete State-Space'
   */
  { 0.0, 0.0 },

  /*  Variable: x0_Winch
   * Referenced by: '<S21>/Discrete State-Space'
   */
  { 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Constant2'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S9>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Switch'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S16>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Constant2'
                                        */
  0.0,                                 /* Computed Parameter: IMU_data_valid_Y0
                                        * Referenced by: '<S32>/IMU_data_valid'
                                        */

  /*  Computed Parameter: ReadIntStatus1_P1_Size
   * Referenced by: '<S86>/Read Int Status1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Read Int Status1'
                                        */

  /*  Computed Parameter: ReadIntStatus1_P2_Size
   * Referenced by: '<S86>/Read Int Status1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Read Int Status1'
                                        */

  /*  Computed Parameter: FilterIntReason5_P1_Size
   * Referenced by: '<S86>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FilterIntReason5_P2_Size
   * Referenced by: '<S86>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FilterIntReason5_P3_Size
   * Referenced by: '<S86>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FIFOread1_P1_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P2_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P3_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P4_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P5_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P6_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P7_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P8_Size
   * Referenced by: '<S86>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S86>/FIFO read 1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P1_Size
   * Referenced by: '<S86>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P2_Size
   * Referenced by: '<S86>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P3_Size
   * Referenced by: '<S86>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P4_Size
   * Referenced by: '<S86>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S86>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: FilterIntReason6_P1_Size
   * Referenced by: '<S86>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FilterIntReason6_P2_Size
   * Referenced by: '<S86>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FilterIntReason6_P3_Size
   * Referenced by: '<S86>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FIFOread2_P1_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P2_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P3_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P4_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P5_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P6_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P7_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P8_Size
   * Referenced by: '<S86>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S86>/FIFO read 2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P1_Size
   * Referenced by: '<S86>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P2_Size
   * Referenced by: '<S86>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P3_Size
   * Referenced by: '<S86>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P4_Size
   * Referenced by: '<S86>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S86>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: FilterIntReason7_P1_Size
   * Referenced by: '<S86>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FilterIntReason7_P2_Size
   * Referenced by: '<S86>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FilterIntReason7_P3_Size
   * Referenced by: '<S86>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FIFOread3_P1_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P2_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P3_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P4_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P5_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P6_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P7_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P8_Size
   * Referenced by: '<S86>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S86>/FIFO read 3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P1_Size
   * Referenced by: '<S86>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P2_Size
   * Referenced by: '<S86>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P3_Size
   * Referenced by: '<S86>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P4_Size
   * Referenced by: '<S86>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S86>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: FilterIntReason8_P1_Size
   * Referenced by: '<S86>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FilterIntReason8_P2_Size
   * Referenced by: '<S86>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FilterIntReason8_P3_Size
   * Referenced by: '<S86>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FIFOread4_P1_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P2_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P3_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P4_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P5_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P6_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P7_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P8_Size
   * Referenced by: '<S86>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S86>/FIFO read 4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P1_Size
   * Referenced by: '<S86>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P2_Size
   * Referenced by: '<S86>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P3_Size
   * Referenced by: '<S86>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P4_Size
   * Referenced by: '<S86>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S86>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: FilterIntReason1_P1_Size
   * Referenced by: '<S86>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: FilterIntReason1_P2_Size
   * Referenced by: '<S86>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: FilterIntReason1_P3_Size
   * Referenced by: '<S86>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P1_Size
   * Referenced by: '<S86>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P2_Size
   * Referenced by: '<S86>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P3_Size
   * Referenced by: '<S86>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P4_Size
   * Referenced by: '<S86>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S86>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P1_Size
   * Referenced by: '<S86>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S86>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P2_Size
   * Referenced by: '<S86>/FIFO write 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S86>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P3_Size
   * Referenced by: '<S86>/FIFO write 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P4_Size
   * Referenced by: '<S86>/FIFO write 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S86>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P5_Size
   * Referenced by: '<S86>/FIFO write 1'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite1_P5
   * Referenced by: '<S86>/FIFO write 1'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    49.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason2_P1_Size
   * Referenced by: '<S86>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: FilterIntReason2_P2_Size
   * Referenced by: '<S86>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: FilterIntReason2_P3_Size
   * Referenced by: '<S86>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P1_Size
   * Referenced by: '<S86>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P2_Size
   * Referenced by: '<S86>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P3_Size
   * Referenced by: '<S86>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P4_Size
   * Referenced by: '<S86>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S86>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P1_Size
   * Referenced by: '<S86>/FIFO write 2'
   */
  { 1.0, 1.0 },
  512.0,                               /* Expression: size
                                        * Referenced by: '<S86>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P2_Size
   * Referenced by: '<S86>/FIFO write 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S86>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P3_Size
   * Referenced by: '<S86>/FIFO write 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P4_Size
   * Referenced by: '<S86>/FIFO write 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S86>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P5_Size
   * Referenced by: '<S86>/FIFO write 2'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite2_P5
   * Referenced by: '<S86>/FIFO write 2'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    50.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason3_P1_Size
   * Referenced by: '<S86>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: FilterIntReason3_P2_Size
   * Referenced by: '<S86>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: FilterIntReason3_P3_Size
   * Referenced by: '<S86>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P1_Size
   * Referenced by: '<S86>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P2_Size
   * Referenced by: '<S86>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P3_Size
   * Referenced by: '<S86>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P4_Size
   * Referenced by: '<S86>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S86>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P1_Size
   * Referenced by: '<S86>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S86>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P2_Size
   * Referenced by: '<S86>/FIFO write 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S86>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P3_Size
   * Referenced by: '<S86>/FIFO write 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P4_Size
   * Referenced by: '<S86>/FIFO write 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S86>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P5_Size
   * Referenced by: '<S86>/FIFO write 3'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite3_P5
   * Referenced by: '<S86>/FIFO write 3'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    51.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason4_P1_Size
   * Referenced by: '<S86>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: FilterIntReason4_P2_Size
   * Referenced by: '<S86>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: FilterIntReason4_P3_Size
   * Referenced by: '<S86>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S86>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P1_Size
   * Referenced by: '<S86>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S86>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P2_Size
   * Referenced by: '<S86>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S86>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P3_Size
   * Referenced by: '<S86>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S86>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P4_Size
   * Referenced by: '<S86>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S86>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P1_Size
   * Referenced by: '<S86>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S86>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P2_Size
   * Referenced by: '<S86>/FIFO write 4'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S86>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P3_Size
   * Referenced by: '<S86>/FIFO write 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S86>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P4_Size
   * Referenced by: '<S86>/FIFO write 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S86>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P5_Size
   * Referenced by: '<S86>/FIFO write 4'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite4_P5
   * Referenced by: '<S86>/FIFO write 4'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    52.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S91>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S91>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S91>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */

  /*  Computed Parameter: PCI6221AD_P1_Size
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: channel
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 2.0, 4.0, 5.0, 6.0 },

  /*  Computed Parameter: PCI6221AD_P2_Size
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: range
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 1.0, 0.0, 0.0, 1.0 },

  /*  Computed Parameter: PCI6221AD_P3_Size
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: coupling
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 3.0, 3.0, 1.0, 1.0, 3.0 },

  /*  Computed Parameter: PCI6221AD_P4_Size
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  5.0E-6,                              /* Expression: scantime
                                        * Referenced by: '<S22>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P5_Size
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S22>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P6_Size
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P7_Size
   * Referenced by: '<S22>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S22>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221DI_P1_Size
   * Referenced by: '<S23>/PCI-6221 DI'
   */
  { 1.0, 7.0 },

  /*  Expression: channel
   * Referenced by: '<S23>/PCI-6221 DI'
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 7.0, 8.0 },

  /*  Computed Parameter: PCI6221DI_P2_Size
   * Referenced by: '<S23>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S23>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P3_Size
   * Referenced by: '<S23>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S23>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P4_Size
   * Referenced by: '<S23>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  32.0,                                /* Expression: control
                                        * Referenced by: '<S23>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P5_Size
   * Referenced by: '<S23>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S23>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P1_Size
   * Referenced by: '<S23>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: device
                                        * Referenced by: '<S23>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P2_Size
   * Referenced by: '<S23>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<S23>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P3_Size
   * Referenced by: '<S23>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: outmask
                                        * Referenced by: '<S23>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P4_Size
   * Referenced by: '<S23>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampleTime
                                        * Referenced by: '<S23>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P5_Size
   * Referenced by: '<S23>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S23>/PCI 6221 PFI DI '
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Discrete Transfer Fcn'
                                        */
  0.0025,                              /* Expression: 0.0025
                                        * Referenced by: '<S16>/Beschleunigung'
                                        */
  0.0025,                              /* Expression: 0.0025
                                        * Referenced by: '<S12>/Beschleunigung'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Discrete Transfer Fcn1'
                                        */
  10.0,                                /* Expression: JoyW_sat
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  -10.0,                               /* Expression: -JoyW_sat
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S12>/untere Kraftsensor Grenze'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/obere Kraftsensor Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Discrete Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Discrete Transfer Fcn2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S19>/Discrete Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/Discrete Transfer Fcn'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Discrete Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S11>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay8'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S20>/Switch'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S21>/Switch'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Switch'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Switch1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P1_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  40.0,                                /* Expression: maxsize
                                        * Referenced by: '<S25>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P2_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S25>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P3_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sampletime
                                        * Referenced by: '<S25>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P4_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread1_P4
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 36.0, 67.0 },

  /*  Computed Parameter: FIFOASCIIread1_P5_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S25>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P6_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  42.0,                                /* Computed Parameter: FIFOASCIIread1_P6
                                        * Referenced by: '<S25>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P7_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: hold
                                        * Referenced by: '<S25>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P8_Size
   * Referenced by: '<S25>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S25>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P1_Size_c
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  90.0,                                /* Expression: maxsize
                                        * Referenced by: '<S26>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P2_Size_c
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S26>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P3_Size_j
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sampletime
                                        * Referenced by: '<S26>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P4_Size_c
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 6.0 },

  /*  Computed Parameter: FIFOASCIIread1_P4_e
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 36.0, 71.0, 80.0, 71.0, 71.0, 65.0 },

  /*  Computed Parameter: FIFOASCIIread1_P5_Size_o
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S26>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P6_Size_n
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread1_P6_i
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 13.0, 10.0 },

  /*  Computed Parameter: FIFOASCIIread1_P7_Size_c
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: hold
                                        * Referenced by: '<S26>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P8_Size_l
   * Referenced by: '<S26>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S26>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread_P1_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: maxsize
                                        * Referenced by: '<S27>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P2_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S27>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P3_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  0.02,                                /* Expression: sampletime
                                        * Referenced by: '<S27>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P4_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 4.0 },

  /*  Computed Parameter: FIFOASCIIread_P4
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 2.0, 144.0, 0.0, 140.0 },

  /*  Computed Parameter: FIFOASCIIread_P5_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S27>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P6_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread_P6
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 3.0, 255.0 },

  /*  Computed Parameter: FIFOASCIIread_P7_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: hold
                                        * Referenced by: '<S27>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P8_Size
   * Referenced by: '<S27>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S27>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOwrite1_P1_Size_m
   * Referenced by: '<S28>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S28>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P2_Size_e
   * Referenced by: '<S28>/FIFO write 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S28>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P3_Size_g
   * Referenced by: '<S28>/FIFO write 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S28>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P4_Size_m
   * Referenced by: '<S28>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S28>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P5_Size_a
   * Referenced by: '<S28>/FIFO write 1'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite1_P5_o
   * Referenced by: '<S28>/FIFO write 1'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    49.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX1_P1_Size
   * Referenced by: '<S28>/Enable TX 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Enable TX 1'
                                        */

  /*  Computed Parameter: EnableTX1_P2_Size
   * Referenced by: '<S28>/Enable TX 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Enable TX 1'
                                        */

  /*  Computed Parameter: EnableTX1_P3_Size
   * Referenced by: '<S28>/Enable TX 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Enable TX 1'
                                        */

  /*  Computed Parameter: FIFOwrite2_P1_Size_i
   * Referenced by: '<S28>/FIFO write 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S28>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P2_Size_l
   * Referenced by: '<S28>/FIFO write 2'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S28>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P3_Size_j
   * Referenced by: '<S28>/FIFO write 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S28>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P4_Size_k
   * Referenced by: '<S28>/FIFO write 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S28>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P5_Size_g
   * Referenced by: '<S28>/FIFO write 2'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite2_P5_g
   * Referenced by: '<S28>/FIFO write 2'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    50.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX2_P1_Size
   * Referenced by: '<S28>/Enable TX 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Enable TX 2'
                                        */

  /*  Computed Parameter: EnableTX2_P2_Size
   * Referenced by: '<S28>/Enable TX 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Enable TX 2'
                                        */

  /*  Computed Parameter: EnableTX2_P3_Size
   * Referenced by: '<S28>/Enable TX 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Enable TX 2'
                                        */

  /*  Computed Parameter: FIFOwrite3_P1_Size_m
   * Referenced by: '<S28>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S28>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P2_Size_f
   * Referenced by: '<S28>/FIFO write 3'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S28>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P3_Size_j
   * Referenced by: '<S28>/FIFO write 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S28>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P4_Size_e
   * Referenced by: '<S28>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S28>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P5_Size_i
   * Referenced by: '<S28>/FIFO write 3'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite3_P5_a
   * Referenced by: '<S28>/FIFO write 3'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    51.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX3_P1_Size
   * Referenced by: '<S28>/Enable TX 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Enable TX 3'
                                        */

  /*  Computed Parameter: EnableTX3_P2_Size
   * Referenced by: '<S28>/Enable TX 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Enable TX 3'
                                        */

  /*  Computed Parameter: EnableTX3_P3_Size
   * Referenced by: '<S28>/Enable TX 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Enable TX 3'
                                        */

  /*  Computed Parameter: FIFOwrite4_P1_Size_f
   * Referenced by: '<S28>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S28>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P2_Size_b
   * Referenced by: '<S28>/FIFO write 4'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S28>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P3_Size_g
   * Referenced by: '<S28>/FIFO write 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S28>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P4_Size_j
   * Referenced by: '<S28>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S28>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P5_Size_h
   * Referenced by: '<S28>/FIFO write 4'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite4_P5_e
   * Referenced by: '<S28>/FIFO write 4'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    52.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX4_P1_Size
   * Referenced by: '<S28>/Enable TX 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Enable TX 4'
                                        */

  /*  Computed Parameter: EnableTX4_P2_Size
   * Referenced by: '<S28>/Enable TX 4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Enable TX 4'
                                        */

  /*  Computed Parameter: EnableTX4_P3_Size
   * Referenced by: '<S28>/Enable TX 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Enable TX 4'
                                        */

  /*  Computed Parameter: Setup1_P1_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P2_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P3_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P4_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: baud
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P5_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P6_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P7_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P8_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P9_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P10_Size
   * Referenced by: '<S28>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S28>/Setup1'
                                        */

  /*  Computed Parameter: Setup2_P1_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P2_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P3_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P4_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  9.0,                                 /* Expression: baud
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P5_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P6_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P7_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P8_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P9_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P10_Size
   * Referenced by: '<S28>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S28>/Setup2'
                                        */

  /*  Computed Parameter: Setup3_P1_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P2_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P3_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P4_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: baud
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P5_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P6_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P7_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P8_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P9_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P10_Size
   * Referenced by: '<S28>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S28>/Setup3'
                                        */

  /*  Computed Parameter: Setup4_P1_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P2_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P3_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P4_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: baud
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P5_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P6_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P7_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P8_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P9_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S28>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P10_Size
   * Referenced by: '<S28>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S28>/Setup4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant3'
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P1_Size
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: device
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P2_Size
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 3.0 },

  /*  Expression: channel
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 0.0, 2.0, 3.0 },

  /*  Computed Parameter: PCI6221PFIDO_P3_Size
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: outmask
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P4_Size
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 3.0 },

  /*  Expression: reset1
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCI6221PFIDO_P5_Size
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 3.0 },

  /*  Expression: initial1
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0, 0.0 },

  /*  Computed Parameter: PCI6221PFIDO_P6_Size
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampleTime
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P7_Size
   * Referenced by: '<S6>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221DA_P1_Size
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: channel
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: PCI6221DA_P2_Size
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: range
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DA_P3_Size
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: reset
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 1.0 },

  /*  Computed Parameter: PCI6221DA_P4_Size
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: initValue
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DA_P5_Size
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */

  /*  Computed Parameter: PCI6221DA_P6_Size
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */

  /*  Computed Parameter: PCI6221DA_P7_Size
   * Referenced by: '<S6>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */

  /*  Computed Parameter: PCI6221DO_P1_Size
   * Referenced by: '<S6>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: channel
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P2_Size
   * Referenced by: '<S6>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: reset
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P3_Size
   * Referenced by: '<S6>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initValue
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P4_Size
   * Referenced by: '<S6>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P5_Size
   * Referenced by: '<S6>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P6_Size
   * Referenced by: '<S6>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  32.0,                                /* Expression: control
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P7_Size
   * Referenced by: '<S6>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  1U,                                  /* Computed Parameter: Constant1_Value_be
                                        * Referenced by: '<S86>/Constant1'
                                        */
  1U,                                  /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S86>/Constant2'
                                        */
  1U,                                  /* Computed Parameter: Constant3_Value_d
                                        * Referenced by: '<S86>/Constant3'
                                        */
  1U,                                  /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S86>/Constant4'
                                        */
  255U,                                /* Expression: BitMask
                                        * Referenced by: '<S86>/Bitwise Logical Operator'
                                        */
  0U,                                  /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S86>/Constant9'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S9>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_f
                                        * Referenced by: '<S16>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S16>/Delay1'
                                        */
  3U,                                  /* Computed Parameter: Delay_DelayLength_n
                                        * Referenced by: '<S11>/Delay'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S24>/Constant'
                                        */
  0U,                                  /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S24>/Constant1'
                                        */
  0U,                                  /* Computed Parameter: Constant2_Value_jf
                                        * Referenced by: '<S24>/Constant2'
                                        */
  0U                                   /* Computed Parameter: Constant3_Value_d2
                                        * Referenced by: '<S24>/Constant3'
                                        */
};
