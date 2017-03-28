/*
 * Control_software_v1_1_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Control_software_v1_1".
 *
 * Model version              : 1.1620
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Mar 27 17:35:40 2017
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
                                        *   '<S8>/Constant1'
                                        *   '<S8>/Constant11'
                                        *   '<S8>/Constant12'
                                        *   '<S8>/Constant13'
                                        *   '<S8>/Constant14'
                                        *   '<S8>/Constant15'
                                        *   '<S8>/Constant16'
                                        *   '<S8>/Constant17'
                                        *   '<S8>/Constant18'
                                        *   '<S8>/Constant19'
                                        *   '<S8>/Constant2'
                                        *   '<S8>/Constant20'
                                        *   '<S8>/Constant21'
                                        *   '<S8>/Constant22'
                                        *   '<S8>/Constant23'
                                        *   '<S8>/Constant24'
                                        *   '<S8>/Constant25'
                                        *   '<S8>/Constant26'
                                        *   '<S8>/Constant28'
                                        *   '<S8>/Constant29'
                                        *   '<S8>/Constant3'
                                        *   '<S8>/Constant30'
                                        *   '<S8>/Constant31'
                                        *   '<S8>/Constant32'
                                        *   '<S8>/Constant33'
                                        *   '<S8>/Constant34'
                                        *   '<S8>/Constant35'
                                        *   '<S8>/Constant36'
                                        *   '<S8>/Constant37'
                                        *   '<S8>/Constant38'
                                        *   '<S8>/Constant39'
                                        *   '<S8>/Constant4'
                                        *   '<S8>/Constant40'
                                        *   '<S8>/Constant41'
                                        *   '<S8>/Constant42'
                                        *   '<S8>/Constant5'
                                        *   '<S8>/Constant6'
                                        *   '<S8>/Constant7'
                                        *   '<S8>/Constant8'
                                        */
  10.0,                                /* Variable: AOsat
                                        * Referenced by:
                                        *   '<S6>/Saturation'
                                        *   '<S6>/Saturation1'
                                        */

  /*  Variable: Afilt_Sl
   * Referenced by: '<S14>/Discrete State-Space'
   */
  { 0.95073289902280134, -0.563892189837562, 0.001, 0.99926710097719873 },

  /*  Variable: Afilt_Winch
   * Referenced by: '<S15>/Discrete State-Space'
   */
  { 0.95046440677966115, -0.57699533467394193, 0.001, 0.999535593220339 },

  /*  Variable: Bfilt_Sl
   * Referenced by: '<S14>/Discrete State-Space'
   */
  { 0.049267100977198663, 0.563892189837562, 0.0, 0.010857763300760043 },

  /*  Variable: Bfilt_Winch
   * Referenced by: '<S15>/Discrete State-Space'
   */
  { 0.049535593220338847, 0.57699533467394193, 0.0, 0.011299435028248589 },

  /*  Variable: Cfilt_Sl
   * Referenced by: '<S14>/Discrete State-Space'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /*  Variable: Cfilt_Winch
   * Referenced by: '<S15>/Discrete State-Space'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /*  Variable: Dfilt_Sl
   * Referenced by: '<S14>/Discrete State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /*  Variable: Dfilt_Winch
   * Referenced by: '<S15>/Discrete State-Space'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /*  Variable: JoyFiltDen
   * Referenced by:
   *   '<S10>/Discrete Transfer Fcn'
   *   '<S10>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.878163888194315, 0.88187489772929684 },

  /*  Variable: JoyFiltNum
   * Referenced by:
   *   '<S10>/Discrete Transfer Fcn'
   *   '<S10>/Discrete Transfer Fcn1'
   */
  { 0.00092775238374545924, 0.0018555047674909185, 0.00092775238374545924 },
  5.0,                                 /* Variable: JoyS_gain
                                        * Referenced by: '<S10>/Gain'
                                        */
  -2.5,                                /* Variable: JoyS_ofst
                                        * Referenced by: '<S10>/Constant'
                                        */
  9.2,                                 /* Variable: JoyS_sat
                                        * Referenced by: '<S10>/Saturation'
                                        */
  -5.0,                                /* Variable: JoyW_gain
                                        * Referenced by: '<S10>/Gain1'
                                        */
  -2.5,                                /* Variable: JoyW_ofst
                                        * Referenced by: '<S10>/Constant1'
                                        */
  14.0,                                /* Variable: Kpos
                                        * Referenced by: '<S14>/Gain3'
                                        */
  2.5,                                 /* Variable: Kspd
                                        * Referenced by: '<S14>/Gain4'
                                        */
  1.0,                                 /* Variable: KspdWinch
                                        * Referenced by: '<S15>/Gain1'
                                        */
  3.0,                                 /* Variable: NPotSpdEst
                                        * Referenced by: '<S12>/Gain1'
                                        */

  /*  Variable: PotPosFiltDen
   * Referenced by: '<S12>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.2, 0.36 },

  /*  Variable: PotPosFiltNum
   * Referenced by: '<S12>/Discrete Transfer Fcn1'
   */
  { 0.04, 0.08, 0.04 },
  0.08,                                /* Variable: Pot_gain
                                        * Referenced by: '<S12>/Gain'
                                        */
  0.4,                                 /* Variable: Pot_max
                                        * Referenced by: '<S12>/Saturation'
                                        */
  0.0,                                 /* Variable: Pot_min
                                        * Referenced by: '<S12>/Saturation'
                                        */
  -0.0558,                             /* Variable: Pot_ofst
                                        * Referenced by: '<S12>/Constant'
                                        */
  2.3876104167282426,                  /* Variable: SlMotPosAIgain
                                        * Referenced by:
                                        *   '<S14>/Gain'
                                        *   '<S14>/Gain1'
                                        *   '<S14>/Gain2'
                                        */
  26.0,                                /* Variable: SlideMotTorqueMax
                                        * Referenced by: '<S14>/Saturation'
                                        */

  /*  Variable: SlidePosFiltDen
   * Referenced by: '<S11>/Discrete Transfer Fcn2'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: SlidePosFiltNum
   * Referenced by: '<S11>/Discrete Transfer Fcn2'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },

  /*  Variable: SlideSpdEstFiltDen
   * Referenced by: '<S14>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: SlideSpdEstFiltNum
   * Referenced by: '<S14>/Discrete Transfer Fcn1'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  0.001,                               /* Variable: Ts_1ms
                                        * Referenced by:
                                        *   '<S2>/Constant2'
                                        *   '<S12>/Gain1'
                                        */
  1.0,                                 /* Variable: Ts_1s
                                        * Referenced by:
                                        *   '<S1>/Constat'
                                        *   '<S85>/Switch'
                                        *   '<S85>/Switch1'
                                        */
  0.1,                                 /* Variable: WinchDrumRad
                                        * Referenced by:
                                        *   '<S13>/Constant1'
                                        *   '<S15>/Constant1'
                                        */
  76.0,                                /* Variable: WinchMotPosAIgain
                                        * Referenced by:
                                        *   '<S13>/Gain'
                                        *   '<S15>/Gain'
                                        */
  13.0,                                /* Variable: WinchMotTorqueMax
                                        * Referenced by: '<S15>/Saturation'
                                        */

  /*  Variable: WinchPosFiltDen
   * Referenced by: '<S13>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: WinchPosFiltNum
   * Referenced by: '<S13>/Discrete Transfer Fcn1'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  150.0,                               /* Variable: WinchRefSpdSup
                                        * Referenced by:
                                        *   '<S6>/Gain'
                                        *   '<S15>/Saturation1'
                                        */

  /*  Variable: WinchSpdEstFiltDen
   * Referenced by: '<S15>/Discrete Transfer Fcn'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: WinchSpdEstFiltNum
   * Referenced by: '<S15>/Discrete Transfer Fcn'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  -2.0,                                /* Variable: WinchTravelMin_m
                                        * Referenced by:
                                        *   '<S13>/Constant1'
                                        *   '<S15>/Constant1'
                                        */
  10.0,                                /* Variable: WinchVoltMax
                                        * Referenced by:
                                        *   '<S6>/Gain'
                                        *   '<S13>/Constant'
                                        *   '<S15>/Constant'
                                        */

  /*  Variable: x0_Sl
   * Referenced by: '<S14>/Discrete State-Space'
   */
  { 0.0, 0.0 },

  /*  Variable: x0_Winch
   * Referenced by: '<S15>/Discrete State-Space'
   */
  { 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Constant2'
                                        */
  0.0,                                 /* Computed Parameter: IMU_data_valid_Y0
                                        * Referenced by: '<S26>/IMU_data_valid'
                                        */

  /*  Computed Parameter: ReadIntStatus1_P1_Size
   * Referenced by: '<S80>/Read Int Status1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Read Int Status1'
                                        */

  /*  Computed Parameter: ReadIntStatus1_P2_Size
   * Referenced by: '<S80>/Read Int Status1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Read Int Status1'
                                        */

  /*  Computed Parameter: FilterIntReason5_P1_Size
   * Referenced by: '<S80>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FilterIntReason5_P2_Size
   * Referenced by: '<S80>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FilterIntReason5_P3_Size
   * Referenced by: '<S80>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FIFOread1_P1_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P2_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P3_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P4_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P5_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P6_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P7_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P8_Size
   * Referenced by: '<S80>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P1_Size
   * Referenced by: '<S80>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P2_Size
   * Referenced by: '<S80>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P3_Size
   * Referenced by: '<S80>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P4_Size
   * Referenced by: '<S80>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: FilterIntReason6_P1_Size
   * Referenced by: '<S80>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FilterIntReason6_P2_Size
   * Referenced by: '<S80>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FilterIntReason6_P3_Size
   * Referenced by: '<S80>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FIFOread2_P1_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P2_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P3_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P4_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P5_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P6_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P7_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P8_Size
   * Referenced by: '<S80>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P1_Size
   * Referenced by: '<S80>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P2_Size
   * Referenced by: '<S80>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P3_Size
   * Referenced by: '<S80>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P4_Size
   * Referenced by: '<S80>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: FilterIntReason7_P1_Size
   * Referenced by: '<S80>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FilterIntReason7_P2_Size
   * Referenced by: '<S80>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FilterIntReason7_P3_Size
   * Referenced by: '<S80>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FIFOread3_P1_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P2_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P3_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P4_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P5_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P6_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P7_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P8_Size
   * Referenced by: '<S80>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P1_Size
   * Referenced by: '<S80>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P2_Size
   * Referenced by: '<S80>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P3_Size
   * Referenced by: '<S80>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P4_Size
   * Referenced by: '<S80>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: FilterIntReason8_P1_Size
   * Referenced by: '<S80>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FilterIntReason8_P2_Size
   * Referenced by: '<S80>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FilterIntReason8_P3_Size
   * Referenced by: '<S80>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FIFOread4_P1_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P2_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P3_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P4_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P5_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P6_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P7_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P8_Size
   * Referenced by: '<S80>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P1_Size
   * Referenced by: '<S80>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P2_Size
   * Referenced by: '<S80>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P3_Size
   * Referenced by: '<S80>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P4_Size
   * Referenced by: '<S80>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: FilterIntReason1_P1_Size
   * Referenced by: '<S80>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: FilterIntReason1_P2_Size
   * Referenced by: '<S80>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: FilterIntReason1_P3_Size
   * Referenced by: '<S80>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P1_Size
   * Referenced by: '<S80>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P2_Size
   * Referenced by: '<S80>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P3_Size
   * Referenced by: '<S80>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P4_Size
   * Referenced by: '<S80>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P1_Size
   * Referenced by: '<S80>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P2_Size
   * Referenced by: '<S80>/FIFO write 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P3_Size
   * Referenced by: '<S80>/FIFO write 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P4_Size
   * Referenced by: '<S80>/FIFO write 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P5_Size
   * Referenced by: '<S80>/FIFO write 1'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite1_P5
   * Referenced by: '<S80>/FIFO write 1'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    49.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason2_P1_Size
   * Referenced by: '<S80>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: FilterIntReason2_P2_Size
   * Referenced by: '<S80>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: FilterIntReason2_P3_Size
   * Referenced by: '<S80>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P1_Size
   * Referenced by: '<S80>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P2_Size
   * Referenced by: '<S80>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P3_Size
   * Referenced by: '<S80>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P4_Size
   * Referenced by: '<S80>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P1_Size
   * Referenced by: '<S80>/FIFO write 2'
   */
  { 1.0, 1.0 },
  512.0,                               /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P2_Size
   * Referenced by: '<S80>/FIFO write 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P3_Size
   * Referenced by: '<S80>/FIFO write 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P4_Size
   * Referenced by: '<S80>/FIFO write 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P5_Size
   * Referenced by: '<S80>/FIFO write 2'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite2_P5
   * Referenced by: '<S80>/FIFO write 2'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    50.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason3_P1_Size
   * Referenced by: '<S80>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: FilterIntReason3_P2_Size
   * Referenced by: '<S80>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: FilterIntReason3_P3_Size
   * Referenced by: '<S80>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P1_Size
   * Referenced by: '<S80>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P2_Size
   * Referenced by: '<S80>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P3_Size
   * Referenced by: '<S80>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P4_Size
   * Referenced by: '<S80>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P1_Size
   * Referenced by: '<S80>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P2_Size
   * Referenced by: '<S80>/FIFO write 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P3_Size
   * Referenced by: '<S80>/FIFO write 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P4_Size
   * Referenced by: '<S80>/FIFO write 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P5_Size
   * Referenced by: '<S80>/FIFO write 3'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite3_P5
   * Referenced by: '<S80>/FIFO write 3'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    51.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason4_P1_Size
   * Referenced by: '<S80>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: FilterIntReason4_P2_Size
   * Referenced by: '<S80>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: FilterIntReason4_P3_Size
   * Referenced by: '<S80>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P1_Size
   * Referenced by: '<S80>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P2_Size
   * Referenced by: '<S80>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P3_Size
   * Referenced by: '<S80>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P4_Size
   * Referenced by: '<S80>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P1_Size
   * Referenced by: '<S80>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P2_Size
   * Referenced by: '<S80>/FIFO write 4'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P3_Size
   * Referenced by: '<S80>/FIFO write 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P4_Size
   * Referenced by: '<S80>/FIFO write 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P5_Size
   * Referenced by: '<S80>/FIFO write 4'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite4_P5
   * Referenced by: '<S80>/FIFO write 4'
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
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S7>/konstante Ausrollgeschw.'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S7>/Constant1'
                                        */
  -0.5,                                /* Expression: -0.5
                                        * Referenced by: '<S7>/konstante Einrollgeschw.'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S7>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Switch'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S88>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S94>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S95>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S98>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S99>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S93>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S85>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S85>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S85>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */

  /*  Computed Parameter: PCI6221AD_P1_Size
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: channel
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 2.0, 4.0, 5.0, 6.0 },

  /*  Computed Parameter: PCI6221AD_P2_Size
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: range
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 1.0, 0.0, 0.0, 1.0 },

  /*  Computed Parameter: PCI6221AD_P3_Size
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: coupling
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 3.0, 3.0, 1.0, 1.0, 3.0 },

  /*  Computed Parameter: PCI6221AD_P4_Size
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  5.0E-6,                              /* Expression: scantime
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P5_Size
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P6_Size
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P7_Size
   * Referenced by: '<S16>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221DI_P1_Size
   * Referenced by: '<S17>/PCI-6221 DI'
   */
  { 1.0, 7.0 },

  /*  Expression: channel
   * Referenced by: '<S17>/PCI-6221 DI'
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 7.0, 8.0 },

  /*  Computed Parameter: PCI6221DI_P2_Size
   * Referenced by: '<S17>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P3_Size
   * Referenced by: '<S17>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P4_Size
   * Referenced by: '<S17>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  32.0,                                /* Expression: control
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P5_Size
   * Referenced by: '<S17>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P1_Size
   * Referenced by: '<S17>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: device
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P2_Size
   * Referenced by: '<S17>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P3_Size
   * Referenced by: '<S17>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: outmask
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P4_Size
   * Referenced by: '<S17>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampleTime
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P5_Size
   * Referenced by: '<S17>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Discrete Transfer Fcn'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S10>/Discrete Transfer Fcn1'
                                        */
  10.0,                                /* Expression: JoyW_sat
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  -10.0,                               /* Expression: -JoyW_sat
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Discrete Transfer Fcn1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Discrete Transfer Fcn2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Discrete Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Discrete Transfer Fcn'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Discrete Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S12>/Delay'
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
                                        * Referenced by: '<S14>/Switch'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  11.0,                                /* Expression: 11
                                        * Referenced by: '<S2>/Constant1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Switch'
                                        */
  0.0025,                              /* Expression: 0.0025
                                        * Referenced by: '<S93>/Beschleunigung'
                                        */
  0.00125,                             /* Expression: 0.00125
                                        * Referenced by: '<S88>/Beschleunigung'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Delay'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S88>/untere Kraftsensor Grenze'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S88>/obere Kraftsensor Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Delay3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Delay4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S90>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Delay5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch7'
                                        */
  0.00125,                             /* Expression: 0.00125
                                        * Referenced by: '<S99>/Beschleunigung'
                                        */
  0.00125,                             /* Expression: 0.00125
                                        * Referenced by: '<S98>/Beschleunigung'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S92>/Delay'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S98>/untere Kraftsensor Grenze'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S98>/obere Kraftsensor Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S99>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S101>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S99>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S99>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Delay2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch4'
                                        */
  0.00125,                             /* Expression: 0.00125
                                        * Referenced by: '<S95>/Beschleunigung'
                                        */
  0.00125,                             /* Expression: 0.00125
                                        * Referenced by: '<S94>/Beschleunigung'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S91>/Delay'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S94>/untere Kraftsensor Grenze'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S94>/obere Kraftsensor Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S97>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S96>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S90>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S93>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S103>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S102>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S93>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S93>/Delay1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S6>/Switch1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P1_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  40.0,                                /* Expression: maxsize
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P2_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P3_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sampletime
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P4_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread1_P4
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 36.0, 67.0 },

  /*  Computed Parameter: FIFOASCIIread1_P5_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P6_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  42.0,                                /* Computed Parameter: FIFOASCIIread1_P6
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P7_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: hold
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P8_Size
   * Referenced by: '<S19>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P1_Size_c
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  90.0,                                /* Expression: maxsize
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P2_Size_c
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P3_Size_j
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sampletime
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P4_Size_c
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 6.0 },

  /*  Computed Parameter: FIFOASCIIread1_P4_e
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 36.0, 71.0, 80.0, 71.0, 71.0, 65.0 },

  /*  Computed Parameter: FIFOASCIIread1_P5_Size_o
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P6_Size_n
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread1_P6_i
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 13.0, 10.0 },

  /*  Computed Parameter: FIFOASCIIread1_P7_Size_c
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: hold
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P8_Size_l
   * Referenced by: '<S20>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread_P1_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: maxsize
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P2_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P3_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  0.02,                                /* Expression: sampletime
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P4_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 4.0 },

  /*  Computed Parameter: FIFOASCIIread_P4
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 2.0, 144.0, 0.0, 140.0 },

  /*  Computed Parameter: FIFOASCIIread_P5_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P6_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread_P6
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 3.0, 255.0 },

  /*  Computed Parameter: FIFOASCIIread_P7_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: hold
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P8_Size
   * Referenced by: '<S21>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOwrite1_P1_Size_m
   * Referenced by: '<S22>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P2_Size_e
   * Referenced by: '<S22>/FIFO write 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P3_Size_g
   * Referenced by: '<S22>/FIFO write 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P4_Size_m
   * Referenced by: '<S22>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P5_Size_a
   * Referenced by: '<S22>/FIFO write 1'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite1_P5_o
   * Referenced by: '<S22>/FIFO write 1'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    49.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX1_P1_Size
   * Referenced by: '<S22>/Enable TX 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */

  /*  Computed Parameter: EnableTX1_P2_Size
   * Referenced by: '<S22>/Enable TX 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */

  /*  Computed Parameter: EnableTX1_P3_Size
   * Referenced by: '<S22>/Enable TX 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */

  /*  Computed Parameter: FIFOwrite2_P1_Size_i
   * Referenced by: '<S22>/FIFO write 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P2_Size_l
   * Referenced by: '<S22>/FIFO write 2'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P3_Size_j
   * Referenced by: '<S22>/FIFO write 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P4_Size_k
   * Referenced by: '<S22>/FIFO write 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P5_Size_g
   * Referenced by: '<S22>/FIFO write 2'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite2_P5_g
   * Referenced by: '<S22>/FIFO write 2'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    50.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX2_P1_Size
   * Referenced by: '<S22>/Enable TX 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */

  /*  Computed Parameter: EnableTX2_P2_Size
   * Referenced by: '<S22>/Enable TX 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */

  /*  Computed Parameter: EnableTX2_P3_Size
   * Referenced by: '<S22>/Enable TX 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */

  /*  Computed Parameter: FIFOwrite3_P1_Size_m
   * Referenced by: '<S22>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P2_Size_f
   * Referenced by: '<S22>/FIFO write 3'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P3_Size_j
   * Referenced by: '<S22>/FIFO write 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P4_Size_e
   * Referenced by: '<S22>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P5_Size_i
   * Referenced by: '<S22>/FIFO write 3'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite3_P5_a
   * Referenced by: '<S22>/FIFO write 3'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    51.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX3_P1_Size
   * Referenced by: '<S22>/Enable TX 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */

  /*  Computed Parameter: EnableTX3_P2_Size
   * Referenced by: '<S22>/Enable TX 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */

  /*  Computed Parameter: EnableTX3_P3_Size
   * Referenced by: '<S22>/Enable TX 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */

  /*  Computed Parameter: FIFOwrite4_P1_Size_f
   * Referenced by: '<S22>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P2_Size_b
   * Referenced by: '<S22>/FIFO write 4'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P3_Size_g
   * Referenced by: '<S22>/FIFO write 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P4_Size_j
   * Referenced by: '<S22>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P5_Size_h
   * Referenced by: '<S22>/FIFO write 4'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite4_P5_e
   * Referenced by: '<S22>/FIFO write 4'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    52.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX4_P1_Size
   * Referenced by: '<S22>/Enable TX 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */

  /*  Computed Parameter: EnableTX4_P2_Size
   * Referenced by: '<S22>/Enable TX 4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */

  /*  Computed Parameter: EnableTX4_P3_Size
   * Referenced by: '<S22>/Enable TX 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */

  /*  Computed Parameter: Setup1_P1_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P2_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P3_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P4_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: baud
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P5_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P6_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P7_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P8_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P9_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P10_Size
   * Referenced by: '<S22>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup1'
                                        */

  /*  Computed Parameter: Setup2_P1_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P2_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P3_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P4_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  9.0,                                 /* Expression: baud
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P5_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P6_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P7_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P8_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P9_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P10_Size
   * Referenced by: '<S22>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup2'
                                        */

  /*  Computed Parameter: Setup3_P1_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P2_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P3_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P4_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: baud
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P5_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P6_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P7_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P8_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P9_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P10_Size
   * Referenced by: '<S22>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup3'
                                        */

  /*  Computed Parameter: Setup4_P1_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P2_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P3_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P4_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: baud
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P5_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P6_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P7_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P8_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P9_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P10_Size
   * Referenced by: '<S22>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup4'
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
                                        * Referenced by: '<S80>/Constant1'
                                        */
  1U,                                  /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S80>/Constant2'
                                        */
  1U,                                  /* Computed Parameter: Constant3_Value_d
                                        * Referenced by: '<S80>/Constant3'
                                        */
  1U,                                  /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S80>/Constant4'
                                        */
  255U,                                /* Expression: BitMask
                                        * Referenced by: '<S80>/Bitwise Logical Operator'
                                        */
  0U,                                  /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S80>/Constant9'
                                        */
  3U,                                  /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S12>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_l
                                        * Referenced by: '<S7>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<S90>/Delay3'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S90>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay4_DelayLength
                                        * Referenced by: '<S90>/Delay4'
                                        */
  1U,                                  /* Computed Parameter: Delay5_DelayLength
                                        * Referenced by: '<S90>/Delay5'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_lc
                                        * Referenced by: '<S92>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_l4
                                        * Referenced by: '<S99>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength_j
                                        * Referenced by: '<S99>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S90>/Delay2'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_f
                                        * Referenced by: '<S91>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_p
                                        * Referenced by: '<S95>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength_g
                                        * Referenced by: '<S95>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_n
                                        * Referenced by: '<S93>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength_i
                                        * Referenced by: '<S93>/Delay1'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value_bd
                                        * Referenced by: '<S18>/Constant'
                                        */
  0U,                                  /* Computed Parameter: Constant1_Value_ce
                                        * Referenced by: '<S18>/Constant1'
                                        */
  0U,                                  /* Computed Parameter: Constant2_Value_jf
                                        * Referenced by: '<S18>/Constant2'
                                        */
  0U                                   /* Computed Parameter: Constant3_Value_d2
                                        * Referenced by: '<S18>/Constant3'
                                        */
};
