/*
 * Analog_Solution_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Analog_Solution".
 *
 * Model version              : 1.1983
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon May 08 13:42:22 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Analog_Solution.h"
#include "Analog_Solution_private.h"

/* Block parameters (auto storage) */
P_Analog_Solution_T Analog_Solution_P = {
  10.0,                                /* Variable: AOsat
                                        * Referenced by:
                                        *   '<S5>/Saturation1'
                                        *   '<S5>/Saturation2'
                                        */

  /*  Variable: Afilt_Winch
   * Referenced by: '<S13>/Discrete State-Space'
   */
  { 0.95046440677966115, -0.57699533467394193, 0.001, 0.999535593220339 },

  /*  Variable: Bfilt_Winch
   * Referenced by: '<S13>/Discrete State-Space'
   */
  { 0.049535593220338847, 0.57699533467394193, 0.0, 0.011299435028248589 },

  /*  Variable: Cfilt_Winch
   * Referenced by: '<S13>/Discrete State-Space'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /*  Variable: Dfilt_Winch
   * Referenced by: '<S13>/Discrete State-Space'
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
  1.0,                                 /* Variable: KspdWinch
                                        * Referenced by: '<S13>/Gain1'
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
  0.001,                               /* Variable: Ts_1ms
                                        * Referenced by: '<S11>/Gain1'
                                        */
  1.0,                                 /* Variable: Ts_1s
                                        * Referenced by:
                                        *   '<S1>/Constat'
                                        *   '<S83>/Switch'
                                        *   '<S83>/Switch1'
                                        */
  0.1,                                 /* Variable: WinchDrumRad
                                        * Referenced by:
                                        *   '<S12>/Constant1'
                                        *   '<S13>/Constant1'
                                        */
  76.0,                                /* Variable: WinchMotPosAIgain
                                        * Referenced by:
                                        *   '<S12>/Gain'
                                        *   '<S13>/Gain'
                                        */
  13.0,                                /* Variable: WinchMotTorqueMax
                                        * Referenced by: '<S13>/Saturation'
                                        */

  /*  Variable: WinchPosFiltDen
   * Referenced by: '<S12>/Discrete Transfer Fcn1'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: WinchPosFiltNum
   * Referenced by: '<S12>/Discrete Transfer Fcn1'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  150.0,                               /* Variable: WinchRefSpdSup
                                        * Referenced by: '<S13>/Saturation1'
                                        */

  /*  Variable: WinchSpdEstFiltDen
   * Referenced by: '<S13>/Discrete Transfer Fcn'
   */
  { 1.0, -1.8095238095238095, 0.81859410430839008 },

  /*  Variable: WinchSpdEstFiltNum
   * Referenced by: '<S13>/Discrete Transfer Fcn'
   */
  { 0.0022675736961451248, 0.0045351473922902496, 0.0022675736961451248 },
  -2.0,                                /* Variable: WinchTravelMin_m
                                        * Referenced by:
                                        *   '<S12>/Constant1'
                                        *   '<S13>/Constant1'
                                        */
  10.0,                                /* Variable: WinchVoltMax
                                        * Referenced by:
                                        *   '<S12>/Constant'
                                        *   '<S13>/Constant'
                                        */

  /*  Variable: x0_Winch
   * Referenced by: '<S13>/Discrete State-Space'
   */
  { 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Constant2'
                                        */
  5.7,                                 /* Expression: 5.7
                                        * Referenced by: '<S10>/Gain'
                                        */
  0.0,                                 /* Computed Parameter: IMU_data_valid_Y0
                                        * Referenced by: '<S24>/IMU_data_valid'
                                        */

  /*  Computed Parameter: ReadIntStatus1_P1_Size
   * Referenced by: '<S78>/Read Int Status1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Read Int Status1'
                                        */

  /*  Computed Parameter: ReadIntStatus1_P2_Size
   * Referenced by: '<S78>/Read Int Status1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Read Int Status1'
                                        */

  /*  Computed Parameter: FilterIntReason5_P1_Size
   * Referenced by: '<S78>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FilterIntReason5_P2_Size
   * Referenced by: '<S78>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FilterIntReason5_P3_Size
   * Referenced by: '<S78>/Filter Int Reason5'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason5'
                                        */

  /*  Computed Parameter: FIFOread1_P1_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P2_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P3_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P4_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P5_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P6_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P7_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: FIFOread1_P8_Size
   * Referenced by: '<S78>/FIFO read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S78>/FIFO read 1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P1_Size
   * Referenced by: '<S78>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P2_Size
   * Referenced by: '<S78>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P3_Size
   * Referenced by: '<S78>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: WriteHWFIFO1_P4_Size
   * Referenced by: '<S78>/Write HW FIFO1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S78>/Write HW FIFO1'
                                        */

  /*  Computed Parameter: FilterIntReason6_P1_Size
   * Referenced by: '<S78>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FilterIntReason6_P2_Size
   * Referenced by: '<S78>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FilterIntReason6_P3_Size
   * Referenced by: '<S78>/Filter Int Reason6'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason6'
                                        */

  /*  Computed Parameter: FIFOread2_P1_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P2_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P3_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P4_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P5_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P6_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P7_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: FIFOread2_P8_Size
   * Referenced by: '<S78>/FIFO read 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S78>/FIFO read 2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P1_Size
   * Referenced by: '<S78>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P2_Size
   * Referenced by: '<S78>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P3_Size
   * Referenced by: '<S78>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: WriteHWFIFO2_P4_Size
   * Referenced by: '<S78>/Write HW FIFO2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S78>/Write HW FIFO2'
                                        */

  /*  Computed Parameter: FilterIntReason7_P1_Size
   * Referenced by: '<S78>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FilterIntReason7_P2_Size
   * Referenced by: '<S78>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FilterIntReason7_P3_Size
   * Referenced by: '<S78>/Filter Int Reason7'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason7'
                                        */

  /*  Computed Parameter: FIFOread3_P1_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P2_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P3_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P4_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P5_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P6_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P7_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: FIFOread3_P8_Size
   * Referenced by: '<S78>/FIFO read 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S78>/FIFO read 3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P1_Size
   * Referenced by: '<S78>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P2_Size
   * Referenced by: '<S78>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P3_Size
   * Referenced by: '<S78>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: WriteHWFIFO3_P4_Size
   * Referenced by: '<S78>/Write HW FIFO3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S78>/Write HW FIFO3'
                                        */

  /*  Computed Parameter: FilterIntReason8_P1_Size
   * Referenced by: '<S78>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FilterIntReason8_P2_Size
   * Referenced by: '<S78>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FilterIntReason8_P3_Size
   * Referenced by: '<S78>/Filter Int Reason8'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason8'
                                        */

  /*  Computed Parameter: FIFOread4_P1_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  60.0,                                /* Expression: maxsize
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P2_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: minsize
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P3_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: usedelimiter
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P4_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: delimiter
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P5_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P6_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P7_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enable
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: FIFOread4_P8_Size
   * Referenced by: '<S78>/FIFO read 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: enableout
                                        * Referenced by: '<S78>/FIFO read 4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P1_Size
   * Referenced by: '<S78>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P2_Size
   * Referenced by: '<S78>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P3_Size
   * Referenced by: '<S78>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: WriteHWFIFO4_P4_Size
   * Referenced by: '<S78>/Write HW FIFO4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S78>/Write HW FIFO4'
                                        */

  /*  Computed Parameter: FilterIntReason1_P1_Size
   * Referenced by: '<S78>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: FilterIntReason1_P2_Size
   * Referenced by: '<S78>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: FilterIntReason1_P3_Size
   * Referenced by: '<S78>/Filter Int Reason1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P1_Size
   * Referenced by: '<S78>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P2_Size
   * Referenced by: '<S78>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P3_Size
   * Referenced by: '<S78>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: ReadHWFIFO1_P4_Size
   * Referenced by: '<S78>/Read HW FIFO1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S78>/Read HW FIFO1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P1_Size
   * Referenced by: '<S78>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S78>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P2_Size
   * Referenced by: '<S78>/FIFO write 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S78>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P3_Size
   * Referenced by: '<S78>/FIFO write 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P4_Size
   * Referenced by: '<S78>/FIFO write 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S78>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P5_Size
   * Referenced by: '<S78>/FIFO write 1'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite1_P5
   * Referenced by: '<S78>/FIFO write 1'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    49.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason2_P1_Size
   * Referenced by: '<S78>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: FilterIntReason2_P2_Size
   * Referenced by: '<S78>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: FilterIntReason2_P3_Size
   * Referenced by: '<S78>/Filter Int Reason2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P1_Size
   * Referenced by: '<S78>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P2_Size
   * Referenced by: '<S78>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P3_Size
   * Referenced by: '<S78>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: ReadHWFIFO2_P4_Size
   * Referenced by: '<S78>/Read HW FIFO2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S78>/Read HW FIFO2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P1_Size
   * Referenced by: '<S78>/FIFO write 2'
   */
  { 1.0, 1.0 },
  512.0,                               /* Expression: size
                                        * Referenced by: '<S78>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P2_Size
   * Referenced by: '<S78>/FIFO write 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S78>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P3_Size
   * Referenced by: '<S78>/FIFO write 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P4_Size
   * Referenced by: '<S78>/FIFO write 2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S78>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P5_Size
   * Referenced by: '<S78>/FIFO write 2'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite2_P5
   * Referenced by: '<S78>/FIFO write 2'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    50.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason3_P1_Size
   * Referenced by: '<S78>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: FilterIntReason3_P2_Size
   * Referenced by: '<S78>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: FilterIntReason3_P3_Size
   * Referenced by: '<S78>/Filter Int Reason3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P1_Size
   * Referenced by: '<S78>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P2_Size
   * Referenced by: '<S78>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P3_Size
   * Referenced by: '<S78>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: ReadHWFIFO3_P4_Size
   * Referenced by: '<S78>/Read HW FIFO3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S78>/Read HW FIFO3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P1_Size
   * Referenced by: '<S78>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S78>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P2_Size
   * Referenced by: '<S78>/FIFO write 3'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S78>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P3_Size
   * Referenced by: '<S78>/FIFO write 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P4_Size
   * Referenced by: '<S78>/FIFO write 3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S78>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P5_Size
   * Referenced by: '<S78>/FIFO write 3'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite3_P5
   * Referenced by: '<S78>/FIFO write 3'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    51.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: FilterIntReason4_P1_Size
   * Referenced by: '<S78>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: FilterIntReason4_P2_Size
   * Referenced by: '<S78>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: FilterIntReason4_P3_Size
   * Referenced by: '<S78>/Filter Int Reason4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: value
                                        * Referenced by: '<S78>/Filter Int Reason4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P1_Size
   * Referenced by: '<S78>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S78>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P2_Size
   * Referenced by: '<S78>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S78>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P3_Size
   * Referenced by: '<S78>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: ReadHWFIFO4_P4_Size
   * Referenced by: '<S78>/Read HW FIFO4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: flush
                                        * Referenced by: '<S78>/Read HW FIFO4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P1_Size
   * Referenced by: '<S78>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S78>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P2_Size
   * Referenced by: '<S78>/FIFO write 4'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S78>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P3_Size
   * Referenced by: '<S78>/FIFO write 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S78>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P4_Size
   * Referenced by: '<S78>/FIFO write 4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: present
                                        * Referenced by: '<S78>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P5_Size
   * Referenced by: '<S78>/FIFO write 4'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite4_P5
   * Referenced by: '<S78>/FIFO write 4'
   */
  { 82.0, 67.0, 86.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    52.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S88>/Obere Grenze'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S88>/Untere Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S88>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant11'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Switch7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Switch'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S89>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Constant7'
                                        */
  1.0E-5,                              /* Expression: 0.00001
                                        * Referenced by: '<S5>/Constant6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant10'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant9'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Constant8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant13'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Switch2'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/untere Spooling Grenze'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Const.'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S92>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S92>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S92>/Constant'
                                        */
  222.2,                               /* Expression: 222.2
                                        * Referenced by: '<S6>/Umrechnung'
                                        */
  0.001,                               /* Expression: 0.001
                                        * Referenced by: '<S92>/Sample Zeit'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S95>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  1.077,                               /* Expression: 1.077
                                        * Referenced by: '<S8>/konstante Ausrollgeschw.'
                                        */
  -0.213,                              /* Expression: -0.213
                                        * Referenced by: '<S8>/konstante Einrollgeschw.'
                                        */
  -1.29,                               /* Expression: -1.29
                                        * Referenced by: '<S8>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Switch'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S96>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S102>/Gain'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S103>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S101>/Gain'
                                        */

  /*  Computed Parameter: WallTime1_P1_Size
   * Referenced by: '<S4>/Wall Time 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: EpochSource
                                        * Referenced by: '<S4>/Wall Time 1'
                                        */

  /*  Computed Parameter: WallTime1_P2_Size
   * Referenced by: '<S4>/Wall Time 1'
   */
  { 1.0, 6.0 },

  /*  Expression: EpochVector
   * Referenced by: '<S4>/Wall Time 1'
   */
  { 1970.0, 1.0, 1.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: WallTime1_P3_Size
   * Referenced by: '<S4>/Wall Time 1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: TimeFormat
                                        * Referenced by: '<S4>/Wall Time 1'
                                        */

  /*  Computed Parameter: WallTime1_P4_Size
   * Referenced by: '<S4>/Wall Time 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: InputTrigger
                                        * Referenced by: '<S4>/Wall Time 1'
                                        */

  /*  Computed Parameter: WallTime1_P5_Size
   * Referenced by: '<S4>/Wall Time 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: SampleTime
                                        * Referenced by: '<S4>/Wall Time 1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S83>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S83>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S83>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */

  /*  Computed Parameter: PCI6221AD_P1_Size
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: channel
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 2.0, 4.0, 5.0, 6.0 },

  /*  Computed Parameter: PCI6221AD_P2_Size
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: range
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 1.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCI6221AD_P3_Size
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 5.0 },

  /*  Expression: coupling
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 3.0, 3.0, 1.0, 1.0, 1.0 },

  /*  Computed Parameter: PCI6221AD_P4_Size
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  5.0E-6,                              /* Expression: scantime
                                        * Referenced by: '<S14>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P5_Size
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S14>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P6_Size
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S14>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221AD_P7_Size
   * Referenced by: '<S14>/PCI-6221 AD'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S14>/PCI-6221 AD'
                                        */

  /*  Computed Parameter: PCI6221DI_P1_Size
   * Referenced by: '<S15>/PCI-6221 DI'
   */
  { 1.0, 7.0 },

  /*  Expression: channel
   * Referenced by: '<S15>/PCI-6221 DI'
   */
  { 1.0, 2.0, 3.0, 4.0, 6.0, 8.0, 7.0 },

  /*  Computed Parameter: PCI6221DI_P2_Size
   * Referenced by: '<S15>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S15>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P3_Size
   * Referenced by: '<S15>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S15>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P4_Size
   * Referenced by: '<S15>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  48.0,                                /* Expression: control
                                        * Referenced by: '<S15>/PCI-6221 DI'
                                        */

  /*  Computed Parameter: PCI6221DI_P5_Size
   * Referenced by: '<S15>/PCI-6221 DI'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S15>/PCI-6221 DI'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Discrete Transfer Fcn'
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
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Discrete Transfer Fcn'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S12>/Discrete Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/Discrete Transfer Fcn1'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S11>/Delay'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S89>/Speed'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S89>/untere Grenze'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S89>/obere Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S89>/Const'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant14'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Switch3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Delay'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S6>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch1'
                                        */
  0.00125,                             /* Expression: 0.00125
                                        * Referenced by: '<S101>/Beschleunigung'
                                        */
  0.0003,                              /* Expression: 0.0003
                                        * Referenced by: '<S96>/Beschleunigung'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Delay'
                                        */
  0.04,                                /* Expression: 0.04
                                        * Referenced by: '<S96>/untere Kraftsensor Grenze'
                                        */
  0.04,                                /* Expression: 0.04
                                        * Referenced by: '<S96>/obere Kraftsensor Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Delay3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Delay4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S100>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch7'
                                        */
  0.00125,                             /* Expression: 0.00125
                                        * Referenced by: '<S103>/Beschleunigung'
                                        */
  0.0006,                              /* Expression: 0.0006
                                        * Referenced by: '<S102>/Beschleunigung'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S97>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Switch2'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S102>/untere Grenze'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S102>/obere Grenze'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S103>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S105>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S104>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S103>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S103>/Delay1'
                                        */
  0.213,                               /* Expression: 0.213
                                        * Referenced by: '<S8>/konstante Ausrollgeschw.1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Delay2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S100>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S101>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S107>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S106>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S101>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S101>/Delay1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S6>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S88>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch2'
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P1_Size
   * Referenced by: '<S15>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: device
                                        * Referenced by: '<S15>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P2_Size
   * Referenced by: '<S15>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: channel
                                        * Referenced by: '<S15>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P3_Size
   * Referenced by: '<S15>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: outmask
                                        * Referenced by: '<S15>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P4_Size
   * Referenced by: '<S15>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampleTime
                                        * Referenced by: '<S15>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: PCI6221PFIDI_P5_Size
   * Referenced by: '<S15>/PCI 6221 PFI DI '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S15>/PCI 6221 PFI DI '
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P1_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  40.0,                                /* Expression: maxsize
                                        * Referenced by: '<S17>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P2_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S17>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P3_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sampletime
                                        * Referenced by: '<S17>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P4_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread1_P4
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 36.0, 67.0 },

  /*  Computed Parameter: FIFOASCIIread1_P5_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S17>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P6_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  42.0,                                /* Computed Parameter: FIFOASCIIread1_P6
                                        * Referenced by: '<S17>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P7_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: hold
                                        * Referenced by: '<S17>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P8_Size
   * Referenced by: '<S17>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S17>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P1_Size_c
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  90.0,                                /* Expression: maxsize
                                        * Referenced by: '<S18>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P2_Size_c
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S18>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P3_Size_j
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: sampletime
                                        * Referenced by: '<S18>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P4_Size_c
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 6.0 },

  /*  Computed Parameter: FIFOASCIIread1_P4_e
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 36.0, 71.0, 80.0, 71.0, 71.0, 65.0 },

  /*  Computed Parameter: FIFOASCIIread1_P5_Size_o
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S18>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P6_Size_n
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread1_P6_i
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 13.0, 10.0 },

  /*  Computed Parameter: FIFOASCIIread1_P7_Size_c
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: hold
                                        * Referenced by: '<S18>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread1_P8_Size_l
   * Referenced by: '<S18>/FIFO ASCII read 1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S18>/FIFO ASCII read 1'
                                        */

  /*  Computed Parameter: FIFOASCIIread_P1_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: maxsize
                                        * Referenced by: '<S19>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P2_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: outputtype
                                        * Referenced by: '<S19>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P3_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  0.02,                                /* Expression: sampletime
                                        * Referenced by: '<S19>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P4_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 4.0 },

  /*  Computed Parameter: FIFOASCIIread_P4
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 2.0, 144.0, 0.0, 140.0 },

  /*  Computed Parameter: FIFOASCIIread_P5_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: hlengths
                                        * Referenced by: '<S19>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P6_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: FIFOASCIIread_P6
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 3.0, 255.0 },

  /*  Computed Parameter: FIFOASCIIread_P7_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: hold
                                        * Referenced by: '<S19>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOASCIIread_P8_Size
   * Referenced by: '<S19>/FIFO ASCII read '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: enable
                                        * Referenced by: '<S19>/FIFO ASCII read '
                                        */

  /*  Computed Parameter: FIFOwrite1_P1_Size_m
   * Referenced by: '<S20>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S20>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P2_Size_e
   * Referenced by: '<S20>/FIFO write 1'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S20>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P3_Size_g
   * Referenced by: '<S20>/FIFO write 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S20>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P4_Size_m
   * Referenced by: '<S20>/FIFO write 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S20>/FIFO write 1'
                                        */

  /*  Computed Parameter: FIFOwrite1_P5_Size_a
   * Referenced by: '<S20>/FIFO write 1'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite1_P5_o
   * Referenced by: '<S20>/FIFO write 1'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    49.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX1_P1_Size
   * Referenced by: '<S20>/Enable TX 1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Enable TX 1'
                                        */

  /*  Computed Parameter: EnableTX1_P2_Size
   * Referenced by: '<S20>/Enable TX 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Enable TX 1'
                                        */

  /*  Computed Parameter: EnableTX1_P3_Size
   * Referenced by: '<S20>/Enable TX 1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/Enable TX 1'
                                        */

  /*  Computed Parameter: FIFOwrite2_P1_Size_i
   * Referenced by: '<S20>/FIFO write 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S20>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P2_Size_l
   * Referenced by: '<S20>/FIFO write 2'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S20>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P3_Size_j
   * Referenced by: '<S20>/FIFO write 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S20>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P4_Size_k
   * Referenced by: '<S20>/FIFO write 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S20>/FIFO write 2'
                                        */

  /*  Computed Parameter: FIFOwrite2_P5_Size_g
   * Referenced by: '<S20>/FIFO write 2'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite2_P5_g
   * Referenced by: '<S20>/FIFO write 2'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    50.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX2_P1_Size
   * Referenced by: '<S20>/Enable TX 2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Enable TX 2'
                                        */

  /*  Computed Parameter: EnableTX2_P2_Size
   * Referenced by: '<S20>/Enable TX 2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Enable TX 2'
                                        */

  /*  Computed Parameter: EnableTX2_P3_Size
   * Referenced by: '<S20>/Enable TX 2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/Enable TX 2'
                                        */

  /*  Computed Parameter: FIFOwrite3_P1_Size_m
   * Referenced by: '<S20>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: size
                                        * Referenced by: '<S20>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P2_Size_f
   * Referenced by: '<S20>/FIFO write 3'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S20>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P3_Size_j
   * Referenced by: '<S20>/FIFO write 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S20>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P4_Size_e
   * Referenced by: '<S20>/FIFO write 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S20>/FIFO write 3'
                                        */

  /*  Computed Parameter: FIFOwrite3_P5_Size_i
   * Referenced by: '<S20>/FIFO write 3'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite3_P5_a
   * Referenced by: '<S20>/FIFO write 3'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    51.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX3_P1_Size
   * Referenced by: '<S20>/Enable TX 3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Enable TX 3'
                                        */

  /*  Computed Parameter: EnableTX3_P2_Size
   * Referenced by: '<S20>/Enable TX 3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Enable TX 3'
                                        */

  /*  Computed Parameter: EnableTX3_P3_Size
   * Referenced by: '<S20>/Enable TX 3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/Enable TX 3'
                                        */

  /*  Computed Parameter: FIFOwrite4_P1_Size_f
   * Referenced by: '<S20>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1024.0,                              /* Expression: size
                                        * Referenced by: '<S20>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P2_Size_b
   * Referenced by: '<S20>/FIFO write 4'
   */
  { 1.0, 1.0 },
  6.0,                                 /* Expression: inputtype
                                        * Referenced by: '<S20>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P3_Size_g
   * Referenced by: '<S20>/FIFO write 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S20>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P4_Size_j
   * Referenced by: '<S20>/FIFO write 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: present
                                        * Referenced by: '<S20>/FIFO write 4'
                                        */

  /*  Computed Parameter: FIFOwrite4_P5_Size_h
   * Referenced by: '<S20>/FIFO write 4'
   */
  { 1.0, 34.0 },

  /*  Computed Parameter: FIFOwrite4_P5_e
   * Referenced by: '<S20>/FIFO write 4'
   */
  { 88.0, 77.0, 84.0, 32.0, 99.0, 104.0, 97.0, 110.0, 110.0, 101.0, 108.0, 32.0,
    52.0, 44.0, 32.0, 73.0, 82.0, 81.0, 32.0, 65.0, 117.0, 116.0, 111.0, 32.0,
    40.0, 80.0, 67.0, 73.0, 32.0, 111.0, 110.0, 108.0, 121.0, 41.0 },

  /*  Computed Parameter: EnableTX4_P1_Size
   * Referenced by: '<S20>/Enable TX 4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Enable TX 4'
                                        */

  /*  Computed Parameter: EnableTX4_P2_Size
   * Referenced by: '<S20>/Enable TX 4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Enable TX 4'
                                        */

  /*  Computed Parameter: EnableTX4_P3_Size
   * Referenced by: '<S20>/Enable TX 4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S20>/Enable TX 4'
                                        */

  /*  Computed Parameter: Setup1_P1_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P2_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P3_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P4_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: baud
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P5_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P6_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P7_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P8_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P9_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup1_P10_Size
   * Referenced by: '<S20>/Setup1'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S20>/Setup1'
                                        */

  /*  Computed Parameter: Setup2_P1_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P2_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P3_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P4_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  9.0,                                 /* Expression: baud
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P5_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P6_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P7_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P8_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P9_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup2_P10_Size
   * Referenced by: '<S20>/Setup2'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S20>/Setup2'
                                        */

  /*  Computed Parameter: Setup3_P1_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P2_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P3_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P4_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: baud
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P5_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P6_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P7_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P8_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P9_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup3_P10_Size
   * Referenced by: '<S20>/Setup3'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S20>/Setup3'
                                        */

  /*  Computed Parameter: Setup4_P1_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P2_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: boardtype
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P3_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: port
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P4_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  5.0,                                 /* Expression: baud
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P5_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  4.0,                                 /* Expression: width
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P6_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: nstop
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P7_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: parity
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P8_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: fmode
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P9_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: ctsmode
                                        * Referenced by: '<S20>/Setup4'
                                        */

  /*  Computed Parameter: Setup4_P10_Size
   * Referenced by: '<S20>/Setup4'
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: rlevel
                                        * Referenced by: '<S20>/Setup4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/Constant3'
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P1_Size
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: device
                                        * Referenced by: '<S5>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P2_Size
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 3.0 },

  /*  Expression: channel
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 0.0, 2.0, 3.0 },

  /*  Computed Parameter: PCI6221PFIDO_P3_Size
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  13.0,                                /* Expression: outmask
                                        * Referenced by: '<S5>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P4_Size
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 3.0 },

  /*  Expression: reset1
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCI6221PFIDO_P5_Size
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 3.0 },

  /*  Expression: initial1
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0, 0.0 },

  /*  Computed Parameter: PCI6221PFIDO_P6_Size
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampleTime
                                        * Referenced by: '<S5>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221PFIDO_P7_Size
   * Referenced by: '<S5>/PCI 6221 PFI DO '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S5>/PCI 6221 PFI DO '
                                        */

  /*  Computed Parameter: PCI6221DA_P1_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: channel
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Computed Parameter: PCI6221DA_P2_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: range
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DA_P3_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: reset
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },

  /*  Computed Parameter: PCI6221DA_P4_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 2.0 },

  /*  Expression: initValue
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DA_P5_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S5>/PCI-6221 DA'
                                        */

  /*  Computed Parameter: PCI6221DA_P6_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S5>/PCI-6221 DA'
                                        */

  /*  Computed Parameter: PCI6221DA_P7_Size
   * Referenced by: '<S5>/PCI-6221 DA'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S5>/PCI-6221 DA'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S94>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S94>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S94>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S94>/Delay'
                                        */

  /*  Computed Parameter: PCI6221DO_P1_Size
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 1.0, 2.0 },

  /*  Expression: channel
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 5.0, 6.0 },

  /*  Computed Parameter: PCI6221DO_P2_Size
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 1.0, 2.0 },

  /*  Expression: reset
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DO_P3_Size
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 1.0, 2.0 },

  /*  Expression: initValue
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: PCI6221DO_P4_Size
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<S5>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P5_Size
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<S5>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P6_Size
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  48.0,                                /* Expression: control
                                        * Referenced by: '<S5>/PCI-6221 DO'
                                        */

  /*  Computed Parameter: PCI6221DO_P7_Size
   * Referenced by: '<S5>/PCI-6221 DO'
   */
  { 1.0, 1.0 },
  21.0,                                /* Expression: boardType
                                        * Referenced by: '<S5>/PCI-6221 DO'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S92>/Delay'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S95>/Delay'
                                        */
  0.00727136,                          /* Expression: 0.00727136
                                        * Referenced by: '<S93>/Gain'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S92>/Delay1'
                                        */
  19000.0,                             /* Expression: 19000
                                        * Referenced by: '<S6>/erste Spooling Grenze'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S6>/zweite Spooling Grenze'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S95>/Konstante Geschw. zum Spooling Grenze finden'
                                        */
  1U,                                  /* Computed Parameter: Constant1_Value_be
                                        * Referenced by: '<S78>/Constant1'
                                        */
  1U,                                  /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S78>/Constant2'
                                        */
  1U,                                  /* Computed Parameter: Constant3_Value_d
                                        * Referenced by: '<S78>/Constant3'
                                        */
  1U,                                  /* Computed Parameter: Constant4_Value_b
                                        * Referenced by: '<S78>/Constant4'
                                        */
  255U,                                /* Expression: BitMask
                                        * Referenced by: '<S78>/Bitwise Logical Operator'
                                        */
  0U,                                  /* Computed Parameter: Constant9_Value_o
                                        * Referenced by: '<S78>/Constant9'
                                        */
  3U,                                  /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S11>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S6>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_c
                                        * Referenced by: '<S6>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_l
                                        * Referenced by: '<S8>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<S100>/Delay3'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength_d
                                        * Referenced by: '<S100>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay4_DelayLength
                                        * Referenced by: '<S100>/Delay4'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_g
                                        * Referenced by: '<S97>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_a
                                        * Referenced by: '<S103>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength_h
                                        * Referenced by: '<S103>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S100>/Delay2'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_n
                                        * Referenced by: '<S101>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength_i
                                        * Referenced by: '<S101>/Delay1'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_gz
                                        * Referenced by: '<S94>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_o
                                        * Referenced by: '<S92>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay_DelayLength_b
                                        * Referenced by: '<S95>/Delay'
                                        */
  1U,                                  /* Computed Parameter: Delay1_DelayLength_f
                                        * Referenced by: '<S92>/Delay1'
                                        */
  0U,                                  /* Computed Parameter: Constant_Value_bd
                                        * Referenced by: '<S16>/Constant'
                                        */
  0U,                                  /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S16>/Constant1'
                                        */
  0U,                                  /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S16>/Constant2'
                                        */
  0U,                                  /* Computed Parameter: Constant3_Value_d2
                                        * Referenced by: '<S16>/Constant3'
                                        */
  -128                                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S6>/Gain1'
                                        */
};
