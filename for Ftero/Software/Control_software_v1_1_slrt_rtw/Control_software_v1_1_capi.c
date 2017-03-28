/*
 * Control_software_v1_1_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Control_software_v1_1_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Control_software_v1_1.h"
#include "Control_software_v1_1_capi.h"
#include "Control_software_v1_1_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("Auxiliary variables/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Auxiliary variables/Unit Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 1, TARGET_STRING("High-level control/MATLAB Function/p1"),
    TARGET_STRING("C_State"), 0, 0, 0, 0, 1 },

  { 3, 1, TARGET_STRING("High-level control/MATLAB Function/p2"),
    TARGET_STRING("HLC_SlidePosRef"), 1, 0, 0, 0, 1 },

  { 4, 1, TARGET_STRING("High-level control/MATLAB Function/p3"),
    TARGET_STRING("HLC_WinchSpdRef"), 2, 0, 0, 0, 1 },

  { 5, 1, TARGET_STRING("High-level control/MATLAB Function/p4"),
    TARGET_STRING("PotZoneFlight"), 3, 0, 0, 0, 1 },

  { 6, 1, TARGET_STRING("High-level control/MATLAB Function/p5"),
    TARGET_STRING("PotZoneLanding"), 4, 0, 0, 0, 1 },

  { 7, 1, TARGET_STRING("High-level control/MATLAB Function/p6"),
    TARGET_STRING("HLC_WinchMode"), 5, 0, 0, 0, 1 },

  { 8, 1, TARGET_STRING("High-level control/MATLAB Function/p7"),
    TARGET_STRING(""), 6, 0, 0, 0, 1 },

  { 9, 1, TARGET_STRING("High-level control/MATLAB Function/p8"),
    TARGET_STRING("Timer"), 7, 0, 0, 0, 1 },

  { 10, 1, TARGET_STRING("High-level control/MATLAB Function/p9"),
    TARGET_STRING("ReelTimer"), 8, 0, 0, 0, 1 },

  { 11, 0, TARGET_STRING("High-level control/Unit Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 12, 0, TARGET_STRING("High-level control/Unit Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 13, 0, TARGET_STRING("High-level control/Unit Delay2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 14, 0, TARGET_STRING("High-level control/Unit Delay3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 15, 0, TARGET_STRING("High-level control/Unit Delay4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("High-level control/Unit Delay5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 17, 0, TARGET_STRING("High-level control/Unit Delay6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 18, 0, TARGET_STRING("High-level control/Unit Delay7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 19, 0, TARGET_STRING("High-level control/Unit Delay8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 20, 0, TARGET_STRING("Outputs/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 0, TARGET_STRING("Outputs/Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("Outputs/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 23, 0, TARGET_STRING("Outputs/Saturation"),
    TARGET_STRING("AO_WinchDriver"), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("Outputs/Saturation1"),
    TARGET_STRING("AO_SlideDriver"), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("Outputs/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 26, 0, TARGET_STRING("Outputs/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 54, TARGET_STRING("Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 28, 56, TARGET_STRING("Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 29, 63, TARGET_STRING("Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("Subsystem/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 59, TARGET_STRING("Subsystem/Switch10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 61, TARGET_STRING("Subsystem/Switch11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 55, TARGET_STRING("Subsystem/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 57, TARGET_STRING("Subsystem/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Subsystem/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation"),
    TARGET_STRING("CI_JoyS"), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("CI_JoyW"), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Discrete Transfer Fcn2"),
    TARGET_STRING("CI_SlidePos"), 0, 0, 0, 0, 1 },

  { 45, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain1"),
    TARGET_STRING("CI_PotSpd"), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Saturation"),
    TARGET_STRING("CI_PotPos"), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p1"),
    TARGET_STRING("AI_Joy_W"), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p2"),
    TARGET_STRING("AI_Joy_S"), 1, 0, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p3"),
    TARGET_STRING("AI_mot_slide_pos"), 2, 0, 0, 0, 1 },

  { 55, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p4"),
    TARGET_STRING("AI_mot_winch_pos"), 3, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p5"),
    TARGET_STRING("AI_pot_pos"), 4, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("DI_SlideLimitB"), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p1"),
    TARGET_STRING("DI_Enable"), 0, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p2"),
    TARGET_STRING("DI_WinchMode"), 1, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p3"),
    TARGET_STRING("DI_Takeoff"), 2, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p4"),
    TARGET_STRING("DI_Landing"), 3, 0, 0, 0, 1 },

  { 62, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p5"),
    TARGET_STRING("DI_Operator"), 4, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p6"),
    TARGET_STRING("DI_GliderPres"), 5, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p7"),
    TARGET_STRING("DI_SlideLimitF"), 6, 0, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 66, 0, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 67, 0, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 68, 0, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 69, 0, TARGET_STRING("Logging/Log_conditioning/Rate Transition"),
    TARGET_STRING(""), 0, 0, 1, 0, 2 },

  { 70, 50, TARGET_STRING("Logging/Time_Scope_trigger/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 71, 0, TARGET_STRING("Logging/Time_Scope_trigger/Switch1"),
    TARGET_STRING("Trigger_time"), 0, 0, 0, 0, 0 },

  { 72, 66, TARGET_STRING("Subsystem/Emergency/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 65, TARGET_STRING("Subsystem/Emergency/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 74, 67, TARGET_STRING("Subsystem/Emergency/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 75, 64, TARGET_STRING("Subsystem/Emergency/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 66, TARGET_STRING("Subsystem/Emergency/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 65, TARGET_STRING("Subsystem/Emergency/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 67, TARGET_STRING("Subsystem/Emergency/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 57, TARGET_STRING("Subsystem/Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 80, 57, TARGET_STRING("Subsystem/Subsystem/Logical Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 81, 61, TARGET_STRING("Subsystem/Subsystem/Logical Operator2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 82, 61, TARGET_STRING("Subsystem/Subsystem/Logical Operator3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 83, 59, TARGET_STRING("Subsystem/Subsystem/Logical Operator4"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 84, 59, TARGET_STRING("Subsystem/Subsystem/Logical Operator5"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 85, 55, TARGET_STRING("Subsystem/Subsystem/Logical Operator6"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 86, 55, TARGET_STRING("Subsystem/Subsystem/Logical Operator7"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 87, 0, TARGET_STRING("Subsystem/Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 71, TARGET_STRING("Subsystem/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 69, TARGET_STRING("Subsystem/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 70, TARGET_STRING("Subsystem/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 0, TARGET_STRING("Subsystem/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 0, TARGET_STRING("Subsystem/Subsystem/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 68, TARGET_STRING("Subsystem/Subsystem/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 0, TARGET_STRING("Subsystem/Subsystem/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING("Subsystem/Subsystem/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 0, TARGET_STRING("Subsystem/Subsystem/Delay2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 0, TARGET_STRING("Subsystem/Subsystem/Delay3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 0, TARGET_STRING("Subsystem/Subsystem/Delay4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 0, TARGET_STRING("Subsystem/Subsystem/Delay5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 0, TARGET_STRING("Subsystem/Takeoff/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 0, TARGET_STRING("Subsystem/Takeoff1/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 83, TARGET_STRING("Subsystem/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Subsystem/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Subsystem/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 82, TARGET_STRING("Subsystem/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 106, 0, TARGET_STRING("Subsystem/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("Subsystem/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 108, 0, TARGET_STRING("Subsystem/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("CI_WinchPos"), 0, 0, 0, 0, 1 },

  { 113, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Discrete State-Space"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 114, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 115, 3, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 116, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain2"),
    TARGET_STRING("SlMotPosEst"), 0, 0, 0, 0, 1 },

  { 117, 3, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 118, 3, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 3, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 3, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 121, 3, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 3, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Switch"),
    TARGET_STRING("SlideMotTorqueEst"), 0, 0, 0, 0, 1 },

  { 124, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Discrete Transfer Fcn1"),
    TARGET_STRING("SlMotSpeedEst"), 0, 0, 0, 0, 1 },

  { 125, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete State-Space"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 126, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 127, 5, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 128, 5, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 129, 5, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 130, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 131, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 132, 5, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 133, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("WinchMotTorqueEst"), 0, 0, 0, 0, 1 },

  { 134, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("WinchMotSpeedEst"), 0, 0, 0, 0, 1 },

  { 135, 6, TARGET_STRING(
    "Inputs/RS232_read/Compass_read/Embedded MATLAB Function"),
    TARGET_STRING("GU_Yaw"), 0, 0, 0, 0, 0 },

  { 136, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 137, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 138, 7, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1"),
    TARGET_STRING("GU_Lat"), 0, 0, 0, 0, 0 },

  { 139, 7, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p2"),
    TARGET_STRING("GU_Lon"), 1, 0, 0, 0, 0 },

  { 140, 7, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p3"),
    TARGET_STRING("GU_h"), 2, 0, 0, 0, 0 },

  { 141, 7, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p4"),
    TARGET_STRING("Geo_Gu_h"), 3, 0, 0, 0, 0 },

  { 142, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 143, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 1, 4, 0, 0 },

  { 144, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 3 },

  { 145, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING(""), 0, 1, 5, 0, 3 },

  { 146, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 147, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition1"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 148, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition2"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 149, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition3"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 150, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 151, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition5"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 152, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition6"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 153, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition7"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 154, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 155, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 156, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 157, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 158, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 159, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 160, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 161, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 162, 74, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 163, 73, TARGET_STRING(
    "Subsystem/Takeoff/Joystick-Steuerung/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 164, 0, TARGET_STRING(
    "Subsystem/Takeoff/Joystick-Steuerung/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 165, 72, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 166, 74, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 167, 73, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 168, 0, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 169, 76, TARGET_STRING("Subsystem/Takeoff/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 170, 0, TARGET_STRING("Subsystem/Takeoff/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 171, 0, TARGET_STRING("Subsystem/Takeoff/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 172, 75, TARGET_STRING("Subsystem/Takeoff/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 173, 0, TARGET_STRING("Subsystem/Takeoff/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 174, 0, TARGET_STRING("Subsystem/Takeoff/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 175, 0, TARGET_STRING("Subsystem/Takeoff/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 176, 79, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 177, 78, TARGET_STRING(
    "Subsystem/Takeoff1/Joystick-Steuerung/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 178, 0, TARGET_STRING(
    "Subsystem/Takeoff1/Joystick-Steuerung/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 179, 77, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 180, 79, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 181, 78, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 182, 0, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 183, 81, TARGET_STRING("Subsystem/Takeoff1/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 184, 0, TARGET_STRING("Subsystem/Takeoff1/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 185, 0, TARGET_STRING("Subsystem/Takeoff1/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 186, 80, TARGET_STRING("Subsystem/Takeoff1/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 187, 0, TARGET_STRING("Subsystem/Takeoff1/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 188, 0, TARGET_STRING("Subsystem/Takeoff1/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 189, 0, TARGET_STRING("Subsystem/Takeoff1/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 190, 82, TARGET_STRING("Subsystem/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 191, 0, TARGET_STRING("Subsystem/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 192, 8, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 193, 9, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data"),
    TARGET_STRING(""), 0, 0, 6, 0, 3 },

  { 194, 75, TARGET_STRING("Subsystem/Takeoff/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 195, 0, TARGET_STRING("Subsystem/Takeoff/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 196, 80, TARGET_STRING("Subsystem/Takeoff1/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 197, 0, TARGET_STRING("Subsystem/Takeoff1/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 198, 10, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function"),
    TARGET_STRING("time"), 0, 0, 0, 0, 3 },

  { 199, 11, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1"),
    TARGET_STRING("GPSFlags"), 0, 0, 0, 0, 3 },

  { 200, 12, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function2"),
    TARGET_STRING("NbSat"), 0, 0, 0, 0, 3 },

  { 201, 13, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function"),
    TARGET_STRING("Mx"), 0, 0, 0, 0, 3 },

  { 202, 14, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function1"),
    TARGET_STRING("My"), 0, 0, 0, 0, 3 },

  { 203, 15, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function3"),
    TARGET_STRING("Mz"), 0, 0, 0, 0, 3 },

  { 204, 16, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function"),
    TARGET_STRING("year"), 0, 0, 0, 0, 3 },

  { 205, 17, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function1"),
    TARGET_STRING("nanoseconds"), 0, 0, 0, 0, 3 },

  { 206, 18, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function2"),
    TARGET_STRING("month"), 0, 0, 0, 0, 3 },

  { 207, 19, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function3"),
    TARGET_STRING("day"), 0, 0, 0, 0, 3 },

  { 208, 20, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function4"),
    TARGET_STRING("hour"), 0, 0, 0, 0, 3 },

  { 209, 21, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function5"),
    TARGET_STRING("min"), 0, 0, 0, 0, 3 },

  { 210, 22, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function6"),
    TARGET_STRING("sec"), 0, 0, 0, 0, 3 },

  { 211, 23, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14/Embedded MATLAB Function"),
    TARGET_STRING("Time_sr"), 0, 0, 0, 0, 3 },

  { 212, 24, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1"),
    TARGET_STRING("longitude"), 0, 0, 0, 0, 3 },

  { 213, 25, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function2"),
    TARGET_STRING("height"), 0, 0, 0, 0, 3 },

  { 214, 26, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function3"),
    TARGET_STRING("latitude"), 0, 0, 0, 0, 3 },

  { 215, 27, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function1"),
    TARGET_STRING("v_east"), 0, 0, 0, 0, 3 },

  { 216, 28, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function2"),
    TARGET_STRING("v_north"), 0, 0, 0, 0, 3 },

  { 217, 29, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function3"),
    TARGET_STRING("v_down"), 0, 0, 0, 0, 3 },

  { 218, 30, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function4"),
    TARGET_STRING("heading"), 0, 0, 0, 0, 3 },

  { 219, 31, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17/Embedded MATLAB Function2"),
    TARGET_STRING("Altitude"), 0, 0, 0, 0, 3 },

  { 220, 32, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function"),
    TARGET_STRING("lat_filt"), 0, 0, 0, 0, 3 },

  { 221, 33, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function1"),
    TARGET_STRING("long_filt"), 0, 0, 0, 0, 3 },

  { 222, 34, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function2"),
    TARGET_STRING("height_filt"), 0, 0, 0, 0, 3 },

  { 223, 35, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function"),
    TARGET_STRING("Vx"), 0, 0, 0, 0, 3 },

  { 224, 36, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function1"),
    TARGET_STRING("Vy"), 0, 0, 0, 0, 3 },

  { 225, 37, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function3"),
    TARGET_STRING("Vz"), 0, 0, 0, 0, 3 },

  { 226, 38, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function"),
    TARGET_STRING("q1"), 0, 0, 0, 0, 3 },

  { 227, 39, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function1"),
    TARGET_STRING("q2"), 0, 0, 0, 0, 3 },

  { 228, 40, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function3"),
    TARGET_STRING("q3"), 0, 0, 0, 0, 3 },

  { 229, 41, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function4"),
    TARGET_STRING("q4"), 0, 0, 0, 0, 3 },

  { 230, 42, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function"),
    TARGET_STRING("Gx"), 0, 0, 0, 0, 3 },

  { 231, 43, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function1"),
    TARGET_STRING("Gy"), 0, 0, 0, 0, 3 },

  { 232, 44, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function3"),
    TARGET_STRING("Gz"), 0, 0, 0, 0, 3 },

  { 233, 45, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function"),
    TARGET_STRING("Ax"), 0, 0, 0, 0, 3 },

  { 234, 46, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function1"),
    TARGET_STRING("Ay"), 0, 0, 0, 0, 3 },

  { 235, 47, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function3"),
    TARGET_STRING("Az"), 0, 0, 0, 0, 3 },

  { 236, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 237, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 238, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 239, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 240, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 4 },

  { 241, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Relational Operator"),
    TARGET_STRING(""), 0, 2, 7, 0, 4 },

  { 242, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING(""), 0, 4, 7, 0, 4 },

  { 243, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 244, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 245, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 246, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 247, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 248, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 249, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 250, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 251, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 252, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 253, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 254, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 255, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 256, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 257, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 258, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 259, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 260, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 261, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 262, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 263, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 264, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 265, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 266, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 267, 48, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING(""), 0, 4, 7, 0, 4 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 268, TARGET_STRING("Auxiliary variables/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 269, TARGET_STRING("High-level control/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 270, TARGET_STRING("High-level control/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 271, TARGET_STRING("High-level control/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 272, TARGET_STRING("High-level control/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 273, TARGET_STRING("High-level control/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 274, TARGET_STRING("High-level control/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 275, TARGET_STRING("High-level control/Unit Delay3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 276, TARGET_STRING("High-level control/Unit Delay4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 277, TARGET_STRING("High-level control/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 278, TARGET_STRING("High-level control/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 279, TARGET_STRING("High-level control/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 280, TARGET_STRING("High-level control/Unit Delay8"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 281, TARGET_STRING("Outputs/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 282, TARGET_STRING("Outputs/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 283, TARGET_STRING("Outputs/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 284, TARGET_STRING("Outputs/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 285, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 286, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P2"), 0, 10, 0 },

  { 287, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 288, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P4"), 0, 10, 0 },

  { 289, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P5"), 0, 10, 0 },

  { 290, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 291, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 292, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 293, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P2"), 0, 11, 0 },

  { 294, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P3"), 0, 11, 0 },

  { 295, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P4"), 0, 11, 0 },

  { 296, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 297, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 298, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 299, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 300, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 301, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 302, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 303, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 304, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 305, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 306, TARGET_STRING("Outputs/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 307, TARGET_STRING("Outputs/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 308, TARGET_STRING("Subsystem/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 309, TARGET_STRING("Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 310, TARGET_STRING("Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 311, TARGET_STRING("Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 312, TARGET_STRING("Subsystem/konstante Ausrollgeschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 313, TARGET_STRING("Subsystem/konstante Einrollgeschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 314, TARGET_STRING("Subsystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 315, TARGET_STRING("Subsystem/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 316, TARGET_STRING("Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 317, TARGET_STRING("Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 318, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 319, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 320, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 321, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 322, TARGET_STRING("Input conditioning and estimators/Subsystem1/Discrete Transfer Fcn2"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 323, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 324, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 325, TARGET_STRING("Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 326, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 327, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P2"), 0, 12, 0 },

  { 328, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P3"), 0, 12, 0 },

  { 329, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 330, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 331, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 332, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 333, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 334, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 335, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 336, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 337, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 338, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 339, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 340, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 341, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 342, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 343, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 344, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 345, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 346, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 347, TARGET_STRING("Logging/Time_Scope_trigger/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 348, TARGET_STRING("Logging/Time_Scope_trigger/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 349, TARGET_STRING("Logging/Time_Scope_trigger/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 350, TARGET_STRING("Subsystem/Emergency/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 351, TARGET_STRING("Subsystem/Emergency/obere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 352, TARGET_STRING("Subsystem/Emergency/untere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 353, TARGET_STRING("Subsystem/Emergency/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 354, TARGET_STRING("Subsystem/Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 355, TARGET_STRING("Subsystem/Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 356, TARGET_STRING("Subsystem/Subsystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 357, TARGET_STRING("Subsystem/Subsystem/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 358, TARGET_STRING("Subsystem/Subsystem/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 359, TARGET_STRING("Subsystem/Subsystem/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 360, TARGET_STRING("Subsystem/Subsystem/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 361, TARGET_STRING("Subsystem/Subsystem/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 362, TARGET_STRING("Subsystem/Subsystem/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 363, TARGET_STRING("Subsystem/Subsystem/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 364, TARGET_STRING("Subsystem/Subsystem/Delay1"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 365, TARGET_STRING("Subsystem/Subsystem/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 366, TARGET_STRING("Subsystem/Subsystem/Delay2"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 367, TARGET_STRING("Subsystem/Subsystem/Delay2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 368, TARGET_STRING("Subsystem/Subsystem/Delay3"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 369, TARGET_STRING("Subsystem/Subsystem/Delay3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 370, TARGET_STRING("Subsystem/Subsystem/Delay4"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 371, TARGET_STRING("Subsystem/Subsystem/Delay4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 372, TARGET_STRING("Subsystem/Subsystem/Delay5"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 373, TARGET_STRING("Subsystem/Subsystem/Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 374, TARGET_STRING("Subsystem/Takeoff/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 375, TARGET_STRING("Subsystem/Takeoff/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 376, TARGET_STRING("Subsystem/Takeoff1/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 377, TARGET_STRING("Subsystem/Takeoff1/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 378, TARGET_STRING("Subsystem/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 379, TARGET_STRING("Subsystem/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 380, TARGET_STRING("Subsystem/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 381, TARGET_STRING("Subsystem/damper/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 382, TARGET_STRING("Subsystem/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 383, TARGET_STRING("Subsystem/damper/Delay1"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 384, TARGET_STRING("Subsystem/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 385, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 386, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 387, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 388, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 389, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 390, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 391, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 392, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 393, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 394, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 395, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 396, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 11, 0 },

  { 397, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 398, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 399, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 400, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 401, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 402, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 403, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 404, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 14, 0 },

  { 405, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 406, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 11, 0 },

  { 407, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 408, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 409, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 410, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 411, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 412, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P4"), 0, 15, 0 },

  { 413, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 414, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P6"), 0, 11, 0 },

  { 415, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 416, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 417, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 418, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 419, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 420, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 421, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 422, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 423, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 424, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 425, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 426, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 427, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 428, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 429, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 430, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 431, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 432, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 433, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 434, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 435, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 436, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 437, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 438, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 439, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 440, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 441, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 442, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 443, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 444, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 445, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 446, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 447, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 448, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 449, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 450, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 451, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 452, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 453, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 454, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 455, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 456, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 457, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 458, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 459, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 460, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 461, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 462, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 463, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 464, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 465, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 466, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 467, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 468, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 469, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 470, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 471, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 472, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 473, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 474, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 475, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 476, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 477, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 478, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 479, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 480, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 481, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 482, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 483, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 484, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 485, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 486, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 487, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 488, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 489, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 490, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/obere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 491, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/untere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 492, TARGET_STRING("Subsystem/Takeoff/Joystick-Steuerung/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 493, TARGET_STRING("Subsystem/Takeoff/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 494, TARGET_STRING("Subsystem/Takeoff/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 495, TARGET_STRING("Subsystem/Takeoff/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 496, TARGET_STRING("Subsystem/Takeoff/damper/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 497, TARGET_STRING("Subsystem/Takeoff/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 498, TARGET_STRING("Subsystem/Takeoff/damper/Delay1"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 499, TARGET_STRING("Subsystem/Takeoff/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 500, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 501, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/obere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 502, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/untere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 503, TARGET_STRING("Subsystem/Takeoff1/Joystick-Steuerung/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 504, TARGET_STRING("Subsystem/Takeoff1/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 505, TARGET_STRING("Subsystem/Takeoff1/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 506, TARGET_STRING("Subsystem/Takeoff1/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 507, TARGET_STRING("Subsystem/Takeoff1/damper/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 508, TARGET_STRING("Subsystem/Takeoff1/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 509, TARGET_STRING("Subsystem/Takeoff1/damper/Delay1"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 510, TARGET_STRING("Subsystem/Takeoff1/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 511, TARGET_STRING("Subsystem/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 512, TARGET_STRING("Subsystem/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 513, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data_valid"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 514, TARGET_STRING("Subsystem/Takeoff/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 515, TARGET_STRING("Subsystem/Takeoff/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 516, TARGET_STRING("Subsystem/Takeoff1/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 517, TARGET_STRING("Subsystem/Takeoff1/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 518, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 519, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 520, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 521, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 522, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant9"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 523, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING("BitMask"), 4, 0, 0 },

  { 524, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 525, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 526, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 527, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 528, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 529, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 530, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 531, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 532, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 533, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 534, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 535, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 536, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 537, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 538, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 539, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 540, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 541, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 542, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 543, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 544, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 545, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 546, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 547, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 548, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 549, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 550, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 551, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 552, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 553, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 554, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 555, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 556, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 557, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 558, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 559, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 560, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 561, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 562, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 563, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 564, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 565, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 566, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 567, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 568, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 569, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 570, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 571, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 572, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 573, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 574, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 575, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 576, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 577, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 578, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 579, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 580, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 581, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 582, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 583, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 584, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 585, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 586, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 587, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 588, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 589, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 590, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 591, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 592, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 593, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 594, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 595, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 596, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 597, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 598, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 599, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 600, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 601, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 602, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 603, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 604, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 605, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 606, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 607, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 608, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 609, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 610, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 611, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 612, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 613, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 614, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 615, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 616, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 617, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 618, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 619, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 620, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 621, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 622, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 623, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 624, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 625, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 626, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 627, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 628, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 629, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 630, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 631, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 632, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 633, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 634, TARGET_STRING("HLC_Param"), 7, 0, 0 },

  { 635, TARGET_STRING("AOsat"), 0, 0, 0 },

  { 636, TARGET_STRING("Afilt_Sl"), 0, 18, 0 },

  { 637, TARGET_STRING("Afilt_Winch"), 0, 18, 0 },

  { 638, TARGET_STRING("Bfilt_Sl"), 0, 18, 0 },

  { 639, TARGET_STRING("Bfilt_Winch"), 0, 18, 0 },

  { 640, TARGET_STRING("Cfilt_Sl"), 0, 18, 0 },

  { 641, TARGET_STRING("Cfilt_Winch"), 0, 18, 0 },

  { 642, TARGET_STRING("Dfilt_Sl"), 0, 18, 0 },

  { 643, TARGET_STRING("Dfilt_Winch"), 0, 18, 0 },

  { 644, TARGET_STRING("JoyFiltDen"), 0, 10, 0 },

  { 645, TARGET_STRING("JoyFiltNum"), 0, 10, 0 },

  { 646, TARGET_STRING("JoyS_gain"), 0, 0, 0 },

  { 647, TARGET_STRING("JoyS_ofst"), 0, 0, 0 },

  { 648, TARGET_STRING("JoyS_sat"), 0, 0, 0 },

  { 649, TARGET_STRING("JoyW_gain"), 0, 0, 0 },

  { 650, TARGET_STRING("JoyW_ofst"), 0, 0, 0 },

  { 651, TARGET_STRING("Kpos"), 0, 0, 0 },

  { 652, TARGET_STRING("Kspd"), 0, 0, 0 },

  { 653, TARGET_STRING("KspdWinch"), 0, 0, 0 },

  { 654, TARGET_STRING("NPotSpdEst"), 0, 0, 0 },

  { 655, TARGET_STRING("PotPosFiltDen"), 0, 10, 0 },

  { 656, TARGET_STRING("PotPosFiltNum"), 0, 10, 0 },

  { 657, TARGET_STRING("Pot_gain"), 0, 0, 0 },

  { 658, TARGET_STRING("Pot_max"), 0, 0, 0 },

  { 659, TARGET_STRING("Pot_min"), 0, 0, 0 },

  { 660, TARGET_STRING("Pot_ofst"), 0, 0, 0 },

  { 661, TARGET_STRING("SlMotPosAIgain"), 0, 0, 0 },

  { 662, TARGET_STRING("SlideMotTorqueMax"), 0, 0, 0 },

  { 663, TARGET_STRING("SlidePosFiltDen"), 0, 10, 0 },

  { 664, TARGET_STRING("SlidePosFiltNum"), 0, 10, 0 },

  { 665, TARGET_STRING("SlideSpdEstFiltDen"), 0, 10, 0 },

  { 666, TARGET_STRING("SlideSpdEstFiltNum"), 0, 10, 0 },

  { 667, TARGET_STRING("Ts_1ms"), 0, 0, 0 },

  { 668, TARGET_STRING("Ts_1s"), 0, 0, 0 },

  { 669, TARGET_STRING("WinchDrumRad"), 0, 0, 0 },

  { 670, TARGET_STRING("WinchMotPosAIgain"), 0, 0, 0 },

  { 671, TARGET_STRING("WinchMotTorqueMax"), 0, 0, 0 },

  { 672, TARGET_STRING("WinchPosFiltDen"), 0, 10, 0 },

  { 673, TARGET_STRING("WinchPosFiltNum"), 0, 10, 0 },

  { 674, TARGET_STRING("WinchRefSpdSup"), 0, 0, 0 },

  { 675, TARGET_STRING("WinchSpdEstFiltDen"), 0, 10, 0 },

  { 676, TARGET_STRING("WinchSpdEstFiltNum"), 0, 10, 0 },

  { 677, TARGET_STRING("WinchTravelMin_m"), 0, 0, 0 },

  { 678, TARGET_STRING("WinchVoltMax"), 0, 0, 0 },

  { 679, TARGET_STRING("x0_Sl"), 0, 2, 0 },

  { 680, TARGET_STRING("x0_Winch"), 0, 2, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Control_software_v1_1_B.Sum,        /* 0: Signal */
  &Control_software_v1_1_B.UnitDelay,  /* 1: Signal */
  &Control_software_v1_1_B.HLC_State,  /* 2: Signal */
  &Control_software_v1_1_B.HLC_SlidePosRef,/* 3: Signal */
  &Control_software_v1_1_B.HLC_WinchSpdRef,/* 4: Signal */
  &Control_software_v1_1_B.PotZoneFlight,/* 5: Signal */
  &Control_software_v1_1_B.PotZoneLanding,/* 6: Signal */
  &Control_software_v1_1_B.HLC_WinchMode,/* 7: Signal */
  &Control_software_v1_1_B.Flag_OK,    /* 8: Signal */
  &Control_software_v1_1_B.Timer,      /* 9: Signal */
  &Control_software_v1_1_B.ReelTimer,  /* 10: Signal */
  &Control_software_v1_1_B.UnitDelay_b,/* 11: Signal */
  &Control_software_v1_1_B.UnitDelay1, /* 12: Signal */
  &Control_software_v1_1_B.UnitDelay2, /* 13: Signal */
  &Control_software_v1_1_B.UnitDelay3, /* 14: Signal */
  &Control_software_v1_1_B.UnitDelay4, /* 15: Signal */
  &Control_software_v1_1_B.UnitDelay5, /* 16: Signal */
  &Control_software_v1_1_B.UnitDelay6, /* 17: Signal */
  &Control_software_v1_1_B.UnitDelay7, /* 18: Signal */
  &Control_software_v1_1_B.UnitDelay8, /* 19: Signal */
  &Control_software_v1_1_B.Constant1,  /* 20: Signal */
  &Control_software_v1_1_B.Constant3,  /* 21: Signal */
  &Control_software_v1_1_B.Gain_j2,    /* 22: Signal */
  &Control_software_v1_1_B.AO_WinchDriver,/* 23: Signal */
  &Control_software_v1_1_B.AO_SlideDriver,/* 24: Signal */
  &Control_software_v1_1_B.Switch,     /* 25: Signal */
  &Control_software_v1_1_B.Switch1_n,  /* 26: Signal */
  &Control_software_v1_1_B.Sum_ot,     /* 27: Signal */
  &Control_software_v1_1_B.Sum1_bw,    /* 28: Signal */
  &Control_software_v1_1_B.Switch_dl,  /* 29: Signal */
  &Control_software_v1_1_B.Switch1_i,  /* 30: Signal */
  &Control_software_v1_1_B.Switch10,   /* 31: Signal */
  &Control_software_v1_1_B.Switch11,   /* 32: Signal */
  &Control_software_v1_1_B.Switch8,    /* 33: Signal */
  &Control_software_v1_1_B.Switch9,    /* 34: Signal */
  &Control_software_v1_1_B.Delay_c,    /* 35: Signal */
  &Control_software_v1_1_B.Gain,       /* 36: Signal */
  &Control_software_v1_1_B.Gain1,      /* 37: Signal */
  &Control_software_v1_1_B.CI_JoyS,    /* 38: Signal */
  &Control_software_v1_1_B.CI_JoyW,    /* 39: Signal */
  &Control_software_v1_1_B.Sum_n,      /* 40: Signal */
  &Control_software_v1_1_B.Sum1,       /* 41: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn,/* 42: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn1,/* 43: Signal */
  &Control_software_v1_1_B.CI_SlidePos,/* 44: Signal */
  &Control_software_v1_1_B.Gain_f,     /* 45: Signal */
  &Control_software_v1_1_B.CI_PotSpd,  /* 46: Signal */
  &Control_software_v1_1_B.CI_PotPos,  /* 47: Signal */
  &Control_software_v1_1_B.Sum_b,      /* 48: Signal */
  &Control_software_v1_1_B.Sum1_b,     /* 49: Signal */
  &Control_software_v1_1_B.Delay,      /* 50: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn1_c,/* 51: Signal */
  &Control_software_v1_1_B.AI_Joy_W,   /* 52: Signal */
  &Control_software_v1_1_B.AI_Joy_S,   /* 53: Signal */
  &Control_software_v1_1_B.AI_mot_slide_pos,/* 54: Signal */
  &Control_software_v1_1_B.AI_mot_winch_pos,/* 55: Signal */
  &Control_software_v1_1_B.AI_pot_pos, /* 56: Signal */
  &Control_software_v1_1_B.DI_SlideLimitB,/* 57: Signal */
  &Control_software_v1_1_B.DI_Enable,  /* 58: Signal */
  &Control_software_v1_1_B.DI_WinchMode,/* 59: Signal */
  &Control_software_v1_1_B.DI_Takeoff, /* 60: Signal */
  &Control_software_v1_1_B.DI_Landing, /* 61: Signal */
  &Control_software_v1_1_B.DI_Operator,/* 62: Signal */
  &Control_software_v1_1_B.DI_GliderPres,/* 63: Signal */
  &Control_software_v1_1_B.DI_SlideLimitF,/* 64: Signal */
  &Control_software_v1_1_B.Constant,   /* 65: Signal */
  &Control_software_v1_1_B.Constant1_d,/* 66: Signal */
  &Control_software_v1_1_B.Constant2_j,/* 67: Signal */
  &Control_software_v1_1_B.Constant3_h,/* 68: Signal */
  &Control_software_v1_1_B.RateTransition_i[0],/* 69: Signal */
  &Control_software_v1_1_B.Switch_k,   /* 70: Signal */
  &Control_software_v1_1_B.Trigger_time,/* 71: Signal */
  &Control_software_v1_1_B.Gain_jo,    /* 72: Signal */
  &Control_software_v1_1_B.RelationalOperator_j,/* 73: Signal */
  &Control_software_v1_1_B.RelationalOperator1_b,/* 74: Signal */
  &Control_software_v1_1_B.Sum_no,     /* 75: Signal */
  &Control_software_v1_1_B.Sum1_j4,    /* 76: Signal */
  &Control_software_v1_1_B.Switch_h,   /* 77: Signal */
  &Control_software_v1_1_B.Switch1_o,  /* 78: Signal */
  &Control_software_v1_1_B.LogicalOperator,/* 79: Signal */
  &Control_software_v1_1_B.LogicalOperator1,/* 80: Signal */
  &Control_software_v1_1_B.LogicalOperator2,/* 81: Signal */
  &Control_software_v1_1_B.LogicalOperator3,/* 82: Signal */
  &Control_software_v1_1_B.LogicalOperator4,/* 83: Signal */
  &Control_software_v1_1_B.LogicalOperator5,/* 84: Signal */
  &Control_software_v1_1_B.LogicalOperator6,/* 85: Signal */
  &Control_software_v1_1_B.LogicalOperator7,/* 86: Signal */
  &Control_software_v1_1_B.Switch_m,   /* 87: Signal */
  &Control_software_v1_1_B.Switch1_p,  /* 88: Signal */
  &Control_software_v1_1_B.Switch2,    /* 89: Signal */
  &Control_software_v1_1_B.Switch3,    /* 90: Signal */
  &Control_software_v1_1_B.Switch4,    /* 91: Signal */
  &Control_software_v1_1_B.Switch5,    /* 92: Signal */
  &Control_software_v1_1_B.Switch6,    /* 93: Signal */
  &Control_software_v1_1_B.Switch7,    /* 94: Signal */
  &Control_software_v1_1_B.Delay1,     /* 95: Signal */
  &Control_software_v1_1_B.Delay2,     /* 96: Signal */
  &Control_software_v1_1_B.Delay3,     /* 97: Signal */
  &Control_software_v1_1_B.Delay4,     /* 98: Signal */
  &Control_software_v1_1_B.Delay5,     /* 99: Signal */
  &Control_software_v1_1_B.Delay_cy,   /* 100: Signal */
  &Control_software_v1_1_B.Delay_i,    /* 101: Signal */
  &Control_software_v1_1_B.Gain_fi,    /* 102: Signal */
  &Control_software_v1_1_B.Sum_m,      /* 103: Signal */
  &Control_software_v1_1_B.Sum1_e,     /* 104: Signal */
  &Control_software_v1_1_B.Switch_c,   /* 105: Signal */
  &Control_software_v1_1_B.Switch1_dn, /* 106: Signal */
  &Control_software_v1_1_B.Delay_k,    /* 107: Signal */
  &Control_software_v1_1_B.Delay1_j,   /* 108: Signal */
  &Control_software_v1_1_B.Gain_m,     /* 109: Signal */
  &Control_software_v1_1_B.Sum_p,      /* 110: Signal */
  &Control_software_v1_1_B.Sum1_n,     /* 111: Signal */
  &Control_software_v1_1_B.CI_WinchPos,/* 112: Signal */
  &Control_software_v1_1_B.DiscreteStateSpace[0],/* 113: Signal */
  &Control_software_v1_1_B.Gain_j,     /* 114: Signal */
  &Control_software_v1_1_B.Gain1_g,    /* 115: Signal */
  &Control_software_v1_1_B.SlMotPosEst,/* 116: Signal */
  &Control_software_v1_1_B.Gain3,      /* 117: Signal */
  &Control_software_v1_1_B.Gain4,      /* 118: Signal */
  &Control_software_v1_1_B.Saturation_m,/* 119: Signal */
  &Control_software_v1_1_B.Sum_n3,     /* 120: Signal */
  &Control_software_v1_1_B.Sum1_bn,    /* 121: Signal */
  &Control_software_v1_1_B.Sum2_j,     /* 122: Signal */
  &Control_software_v1_1_B.SlideMotTorqueEst,/* 123: Signal */
  &Control_software_v1_1_B.SlMotSpeedEst,/* 124: Signal */
  &Control_software_v1_1_B.DiscreteStateSpace_g[0],/* 125: Signal */
  &Control_software_v1_1_B.Gain_g,     /* 126: Signal */
  &Control_software_v1_1_B.Gain1_d,    /* 127: Signal */
  &Control_software_v1_1_B.Saturation, /* 128: Signal */
  &Control_software_v1_1_B.Saturation1,/* 129: Signal */
  &Control_software_v1_1_B.Sum_c,      /* 130: Signal */
  &Control_software_v1_1_B.Sum1_nr,    /* 131: Signal */
  &Control_software_v1_1_B.Sum2,       /* 132: Signal */
  &Control_software_v1_1_B.WinchMotTorqueEst,/* 133: Signal */
  &Control_software_v1_1_B.WinchMotSpeedEst,/* 134: Signal */
  &Control_software_v1_1_B.GU_Yaw,     /* 135: Signal */
  &Control_software_v1_1_B.RateTransition4_p,/* 136: Signal */
  &Control_software_v1_1_B.FIFOASCIIread1[0],/* 137: Signal */
  &Control_software_v1_1_B.GU_Lat,     /* 138: Signal */
  &Control_software_v1_1_B.GU_Lon,     /* 139: Signal */
  &Control_software_v1_1_B.GU_h,       /* 140: Signal */
  &Control_software_v1_1_B.Geo_GU_h,   /* 141: Signal */
  &Control_software_v1_1_B.RateTransition4_d,/* 142: Signal */
  &Control_software_v1_1_B.FIFOASCIIread1_k[0],/* 143: Signal */
  &Control_software_v1_1_B.RateTransition4_f,/* 144: Signal */
  &Control_software_v1_1_B.FIFOASCIIread[0],/* 145: Signal */
  &Control_software_v1_1_B.RateTransition,/* 146: Signal */
  &Control_software_v1_1_B.RateTransition1,/* 147: Signal */
  &Control_software_v1_1_B.RateTransition2,/* 148: Signal */
  &Control_software_v1_1_B.RateTransition3,/* 149: Signal */
  &Control_software_v1_1_B.RateTransition4,/* 150: Signal */
  &Control_software_v1_1_B.RateTransition5,/* 151: Signal */
  &Control_software_v1_1_B.RateTransition6,/* 152: Signal */
  &Control_software_v1_1_B.RateTransition7,/* 153: Signal */
  &Control_software_v1_1_B.FIFOwrite1_o1,/* 154: Signal */
  &Control_software_v1_1_B.FIFOwrite1_o2,/* 155: Signal */
  &Control_software_v1_1_B.FIFOwrite2_o1,/* 156: Signal */
  &Control_software_v1_1_B.FIFOwrite2_o2,/* 157: Signal */
  &Control_software_v1_1_B.FIFOwrite3_o1,/* 158: Signal */
  &Control_software_v1_1_B.FIFOwrite3_o2,/* 159: Signal */
  &Control_software_v1_1_B.FIFOwrite4_o1,/* 160: Signal */
  &Control_software_v1_1_B.FIFOwrite4_o2,/* 161: Signal */
  &Control_software_v1_1_B.Gain_gc,    /* 162: Signal */
  &Control_software_v1_1_B.RelationalOperator_k,/* 163: Signal */
  &Control_software_v1_1_B.RelationalOperator1_d,/* 164: Signal */
  &Control_software_v1_1_B.Sum_ol,     /* 165: Signal */
  &Control_software_v1_1_B.Sum1_d,     /* 166: Signal */
  &Control_software_v1_1_B.Switch_b5,  /* 167: Signal */
  &Control_software_v1_1_B.Switch1_j,  /* 168: Signal */
  &Control_software_v1_1_B.Gain_c,     /* 169: Signal */
  &Control_software_v1_1_B.Sum_e,      /* 170: Signal */
  &Control_software_v1_1_B.Sum1_k,     /* 171: Signal */
  &Control_software_v1_1_B.Switch_i,   /* 172: Signal */
  &Control_software_v1_1_B.Switch1_d,  /* 173: Signal */
  &Control_software_v1_1_B.Delay_j,    /* 174: Signal */
  &Control_software_v1_1_B.Delay1_p,   /* 175: Signal */
  &Control_software_v1_1_B.Gain_m3,    /* 176: Signal */
  &Control_software_v1_1_B.RelationalOperator,/* 177: Signal */
  &Control_software_v1_1_B.RelationalOperator1,/* 178: Signal */
  &Control_software_v1_1_B.Sum_o,      /* 179: Signal */
  &Control_software_v1_1_B.Sum1_kj,    /* 180: Signal */
  &Control_software_v1_1_B.Switch_b,   /* 181: Signal */
  &Control_software_v1_1_B.Switch1,    /* 182: Signal */
  &Control_software_v1_1_B.Gain_p,     /* 183: Signal */
  &Control_software_v1_1_B.Sum_a,      /* 184: Signal */
  &Control_software_v1_1_B.Sum1_j,     /* 185: Signal */
  &Control_software_v1_1_B.Switch_d,   /* 186: Signal */
  &Control_software_v1_1_B.Switch1_k,  /* 187: Signal */
  &Control_software_v1_1_B.Delay_f,    /* 188: Signal */
  &Control_software_v1_1_B.Delay1_g,   /* 189: Signal */
  &Control_software_v1_1_B.Compare_k,  /* 190: Signal */
  &Control_software_v1_1_B.Compare_m,  /* 191: Signal */
  &Control_software_v1_1_B.CRC_valid,  /* 192: Signal */
  &Control_software_v1_1_B.IMU_data[0],/* 193: Signal */
  &Control_software_v1_1_B.Compare_f,  /* 194: Signal */
  &Control_software_v1_1_B.Compare_p,  /* 195: Signal */
  &Control_software_v1_1_B.Compare_j,  /* 196: Signal */
  &Control_software_v1_1_B.Compare,    /* 197: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_l.uint32_out,/* 198: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_e.uint8_out,/* 199: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_h.uint8_out,/* 200: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_b.sing_out,/* 201: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_j.sing_out,/* 202: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_ps.sing_out,/* 203: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_a.uint8_out,/* 204: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_c.uint32_out,/* 205: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_p.uint8_out,/* 206: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_k.uint8_out,/* 207: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_h.uint8_out,/* 208: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction5.uint8_out,/* 209: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction6.uint8_out,/* 210: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_bf.uint32_out,/* 211: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_g.int32_out,/* 212: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2.int32_out,/* 213: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_pw.int32_out,/* 214: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_n.int32_out,/* 215: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_n.int32_out,/* 216: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_o.int32_out,/* 217: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_g.int32_out,/* 218: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_m.int32_out,/* 219: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_k.double_out,/* 220: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_a.double_out,/* 221: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_g.double_out,/* 222: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_j.sing_out,/* 223: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_d.sing_out,/* 224: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_n.sing_out,/* 225: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_g.sing_out,/* 226: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1.sing_out,/* 227: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3.sing_out,/* 228: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4.sing_out,/* 229: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_d.sing_out,/* 230: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_i.sing_out,/* 231: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_p.sing_out,/* 232: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_f.sing_out,/* 233: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_p.sing_out,/* 234: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_a.sing_out,/* 235: Signal */
  &Control_software_v1_1_B.Constant1_p,/* 236: Signal */
  &Control_software_v1_1_B.Constant2,  /* 237: Signal */
  &Control_software_v1_1_B.Constant3_o,/* 238: Signal */
  &Control_software_v1_1_B.Constant4,  /* 239: Signal */
  &Control_software_v1_1_B.LogicalOperator_c,/* 240: Signal */
  &Control_software_v1_1_B.RelationalOperator_m[0],/* 241: Signal */
  &Control_software_v1_1_B.BitwiseLogicalOperator[0],/* 242: Signal */
  &Control_software_v1_1_B.FIFOread1_o1[0],/* 243: Signal */
  &Control_software_v1_1_B.FIFOread1_o2,/* 244: Signal */
  &Control_software_v1_1_B.FIFOread2_o1[0],/* 245: Signal */
  &Control_software_v1_1_B.FIFOread2_o2,/* 246: Signal */
  &Control_software_v1_1_B.FIFOread3_o1[0],/* 247: Signal */
  &Control_software_v1_1_B.FIFOread3_o2,/* 248: Signal */
  &Control_software_v1_1_B.FIFOread4_o1[0],/* 249: Signal */
  &Control_software_v1_1_B.FIFOread4_o2,/* 250: Signal */
  &Control_software_v1_1_B.FIFOwrite1, /* 251: Signal */
  &Control_software_v1_1_B.FIFOwrite2, /* 252: Signal */
  &Control_software_v1_1_B.FIFOwrite3, /* 253: Signal */
  &Control_software_v1_1_B.FIFOwrite4, /* 254: Signal */
  &Control_software_v1_1_B.FilterIntReason1,/* 255: Signal */
  &Control_software_v1_1_B.FilterIntReason2,/* 256: Signal */
  &Control_software_v1_1_B.FilterIntReason3,/* 257: Signal */
  &Control_software_v1_1_B.FilterIntReason4,/* 258: Signal */
  &Control_software_v1_1_B.FilterIntReason5,/* 259: Signal */
  &Control_software_v1_1_B.FilterIntReason6,/* 260: Signal */
  &Control_software_v1_1_B.FilterIntReason7,/* 261: Signal */
  &Control_software_v1_1_B.FilterIntReason8,/* 262: Signal */
  &Control_software_v1_1_B.ReadHWFIFO1[0],/* 263: Signal */
  &Control_software_v1_1_B.ReadHWFIFO2[0],/* 264: Signal */
  &Control_software_v1_1_B.ReadHWFIFO3[0],/* 265: Signal */
  &Control_software_v1_1_B.ReadHWFIFO4[0],/* 266: Signal */
  &Control_software_v1_1_B.ReadIntStatus1[0],/* 267: Signal */
  &Control_software_v1_1_P.UnitDelay_InitialCondition,/* 268: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_p,/* 269: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_b,/* 270: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_f,/* 271: Block Parameter */
  &Control_software_v1_1_P.UnitDelay_InitialCondition_n,/* 272: Block Parameter */
  &Control_software_v1_1_P.UnitDelay1_InitialCondition,/* 273: Block Parameter */
  &Control_software_v1_1_P.UnitDelay2_InitialCondition,/* 274: Block Parameter */
  &Control_software_v1_1_P.UnitDelay3_InitialCondition,/* 275: Block Parameter */
  &Control_software_v1_1_P.UnitDelay4_InitialCondition,/* 276: Block Parameter */
  &Control_software_v1_1_P.UnitDelay5_InitialCondition,/* 277: Block Parameter */
  &Control_software_v1_1_P.UnitDelay6_InitialCondition,/* 278: Block Parameter */
  &Control_software_v1_1_P.UnitDelay7_InitialCondition,/* 279: Block Parameter */
  &Control_software_v1_1_P.UnitDelay8_InitialCondition,/* 280: Block Parameter */
  &Control_software_v1_1_P.Constant_Value,/* 281: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_b3,/* 282: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_j,/* 283: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_n,/* 284: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P1,/* 285: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P2[0],/* 286: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P3,/* 287: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P4[0],/* 288: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P5[0],/* 289: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P6,/* 290: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P7,/* 291: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P1[0],/* 292: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P2[0],/* 293: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P3[0],/* 294: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P4[0],/* 295: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P5,/* 296: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P6,/* 297: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P7,/* 298: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P1,/* 299: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P2,/* 300: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P3,/* 301: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P4,/* 302: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P5,/* 303: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P6,/* 304: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P7,/* 305: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_k,/* 306: Block Parameter */
  &Control_software_v1_1_P.Switch1_Threshold_g,/* 307: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_n,/* 308: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_m,/* 309: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_h,/* 310: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value,/* 311: Block Parameter */
  &Control_software_v1_1_P.konstanteAusrollgeschw_Value,/* 312: Block Parameter */
  &Control_software_v1_1_P.konstanteEinrollgeschw_Value,/* 313: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold,/* 314: Block Parameter */
  &Control_software_v1_1_P.Switch1_Threshold_f,/* 315: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_l,/* 316: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_a,/* 317: Block Parameter */
  &Control_software_v1_1_P.Saturation1_UpperSat,/* 318: Block Parameter */
  &Control_software_v1_1_P.Saturation1_LowerSat,/* 319: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn_InitialStat,/* 320: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialSta,/* 321: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn2_InitialSta,/* 322: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength,/* 323: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition,/* 324: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_Initial_dv,/* 325: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P1[0],/* 326: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P2[0],/* 327: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P3[0],/* 328: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P4,/* 329: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P5,/* 330: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P6,/* 331: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P7,/* 332: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P1,/* 333: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P2,/* 334: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P3,/* 335: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P4,/* 336: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P5,/* 337: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P1[0],/* 338: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P2,/* 339: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P3,/* 340: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P4,/* 341: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P5,/* 342: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_bd,/* 343: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_ce,/* 344: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_jf,/* 345: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_d2,/* 346: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_d,/* 347: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_p,/* 348: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_d,/* 349: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_o,/* 350: Block Parameter */
  &Control_software_v1_1_P.obereKraftsensorGrenze_Value,/* 351: Block Parameter */
  &Control_software_v1_1_P.untereKraftsensorGrenze_Value,/* 352: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain,  /* 353: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_k,/* 354: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_j,/* 355: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_h2,/* 356: Block Parameter */
  &Control_software_v1_1_P.Switch1_Threshold,/* 357: Block Parameter */
  &Control_software_v1_1_P.Switch2_Threshold,/* 358: Block Parameter */
  &Control_software_v1_1_P.Switch3_Threshold,/* 359: Block Parameter */
  &Control_software_v1_1_P.Switch4_Threshold,/* 360: Block Parameter */
  &Control_software_v1_1_P.Switch5_Threshold,/* 361: Block Parameter */
  &Control_software_v1_1_P.Switch6_Threshold,/* 362: Block Parameter */
  &Control_software_v1_1_P.Switch7_Threshold,/* 363: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength,/* 364: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition,/* 365: Block Parameter */
  &Control_software_v1_1_P.Delay2_DelayLength,/* 366: Block Parameter */
  &Control_software_v1_1_P.Delay2_InitialCondition,/* 367: Block Parameter */
  &Control_software_v1_1_P.Delay3_DelayLength,/* 368: Block Parameter */
  &Control_software_v1_1_P.Delay3_InitialCondition,/* 369: Block Parameter */
  &Control_software_v1_1_P.Delay4_DelayLength,/* 370: Block Parameter */
  &Control_software_v1_1_P.Delay4_InitialCondition,/* 371: Block Parameter */
  &Control_software_v1_1_P.Delay5_DelayLength,/* 372: Block Parameter */
  &Control_software_v1_1_P.Delay5_InitialCondition,/* 373: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_f,/* 374: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_e,/* 375: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_lc,/* 376: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_j,/* 377: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value,/* 378: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_g,/* 379: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_f,/* 380: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_n,/* 381: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_c,/* 382: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength_i,/* 383: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition_a,/* 384: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_h,/* 385: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value,/* 386: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value,/* 387: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_l,/* 388: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_d,/* 389: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_e,/* 390: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_h,/* 391: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn_InitialSt_m,/* 392: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P1,/* 393: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P2,/* 394: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P3,/* 395: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P4[0],/* 396: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P5,/* 397: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P6,/* 398: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P7,/* 399: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P8,/* 400: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P1_l,/* 401: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P2_b,/* 402: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P3_n,/* 403: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P4_e[0],/* 404: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P5_o,/* 405: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P6_i[0],/* 406: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P7_i,/* 407: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P8_n,/* 408: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P1,/* 409: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P2,/* 410: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P3,/* 411: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P4[0],/* 412: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P5,/* 413: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P6[0],/* 414: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P7,/* 415: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P8,/* 416: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P1,/* 417: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P2,/* 418: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P3,/* 419: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P1,/* 420: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P2,/* 421: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P3,/* 422: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P1,/* 423: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P2,/* 424: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P3,/* 425: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P1,/* 426: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P2,/* 427: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P3,/* 428: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P1_n,/* 429: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P2_o,/* 430: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P3_n,/* 431: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P4_j,/* 432: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P5_o[0],/* 433: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P1_l,/* 434: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P2_i,/* 435: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P3_h,/* 436: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P4_d,/* 437: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P5_g[0],/* 438: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P1_p,/* 439: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P2_n,/* 440: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P3_k,/* 441: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P4_m,/* 442: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P5_a[0],/* 443: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P1_e,/* 444: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P2_n,/* 445: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P3_p,/* 446: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P4_f,/* 447: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P5_e[0],/* 448: Block Parameter */
  &Control_software_v1_1_P.Setup1_P1,  /* 449: Block Parameter */
  &Control_software_v1_1_P.Setup1_P2,  /* 450: Block Parameter */
  &Control_software_v1_1_P.Setup1_P3,  /* 451: Block Parameter */
  &Control_software_v1_1_P.Setup1_P4,  /* 452: Block Parameter */
  &Control_software_v1_1_P.Setup1_P5,  /* 453: Block Parameter */
  &Control_software_v1_1_P.Setup1_P6,  /* 454: Block Parameter */
  &Control_software_v1_1_P.Setup1_P7,  /* 455: Block Parameter */
  &Control_software_v1_1_P.Setup1_P8,  /* 456: Block Parameter */
  &Control_software_v1_1_P.Setup1_P9,  /* 457: Block Parameter */
  &Control_software_v1_1_P.Setup1_P10, /* 458: Block Parameter */
  &Control_software_v1_1_P.Setup2_P1,  /* 459: Block Parameter */
  &Control_software_v1_1_P.Setup2_P2,  /* 460: Block Parameter */
  &Control_software_v1_1_P.Setup2_P3,  /* 461: Block Parameter */
  &Control_software_v1_1_P.Setup2_P4,  /* 462: Block Parameter */
  &Control_software_v1_1_P.Setup2_P5,  /* 463: Block Parameter */
  &Control_software_v1_1_P.Setup2_P6,  /* 464: Block Parameter */
  &Control_software_v1_1_P.Setup2_P7,  /* 465: Block Parameter */
  &Control_software_v1_1_P.Setup2_P8,  /* 466: Block Parameter */
  &Control_software_v1_1_P.Setup2_P9,  /* 467: Block Parameter */
  &Control_software_v1_1_P.Setup2_P10, /* 468: Block Parameter */
  &Control_software_v1_1_P.Setup3_P1,  /* 469: Block Parameter */
  &Control_software_v1_1_P.Setup3_P2,  /* 470: Block Parameter */
  &Control_software_v1_1_P.Setup3_P3,  /* 471: Block Parameter */
  &Control_software_v1_1_P.Setup3_P4,  /* 472: Block Parameter */
  &Control_software_v1_1_P.Setup3_P5,  /* 473: Block Parameter */
  &Control_software_v1_1_P.Setup3_P6,  /* 474: Block Parameter */
  &Control_software_v1_1_P.Setup3_P7,  /* 475: Block Parameter */
  &Control_software_v1_1_P.Setup3_P8,  /* 476: Block Parameter */
  &Control_software_v1_1_P.Setup3_P9,  /* 477: Block Parameter */
  &Control_software_v1_1_P.Setup3_P10, /* 478: Block Parameter */
  &Control_software_v1_1_P.Setup4_P1,  /* 479: Block Parameter */
  &Control_software_v1_1_P.Setup4_P2,  /* 480: Block Parameter */
  &Control_software_v1_1_P.Setup4_P3,  /* 481: Block Parameter */
  &Control_software_v1_1_P.Setup4_P4,  /* 482: Block Parameter */
  &Control_software_v1_1_P.Setup4_P5,  /* 483: Block Parameter */
  &Control_software_v1_1_P.Setup4_P6,  /* 484: Block Parameter */
  &Control_software_v1_1_P.Setup4_P7,  /* 485: Block Parameter */
  &Control_software_v1_1_P.Setup4_P8,  /* 486: Block Parameter */
  &Control_software_v1_1_P.Setup4_P9,  /* 487: Block Parameter */
  &Control_software_v1_1_P.Setup4_P10, /* 488: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_l5,/* 489: Block Parameter */
  &Control_software_v1_1_P.obereKraftsensorGrenze_Value_m,/* 490: Block Parameter */
  &Control_software_v1_1_P.untereKraftsensorGrenze_Value_m,/* 491: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_e,/* 492: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_p,/* 493: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_c,/* 494: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_i,/* 495: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_p,/* 496: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_m,/* 497: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength_g,/* 498: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition_f,/* 499: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_j,/* 500: Block Parameter */
  &Control_software_v1_1_P.obereKraftsensorGrenze_Value_n,/* 501: Block Parameter */
  &Control_software_v1_1_P.untereKraftsensorGrenze_Value_i,/* 502: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_g,/* 503: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_l,/* 504: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_i,/* 505: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_in,/* 506: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_l4,/* 507: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_n,/* 508: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength_j,/* 509: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition_c,/* 510: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_m,/* 511: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_id,/* 512: Block Parameter */
  &Control_software_v1_1_P.IMU_data_valid_Y0,/* 513: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_b,/* 514: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_o,/* 515: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_l,/* 516: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_i,/* 517: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_be,/* 518: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_n,/* 519: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_d,/* 520: Block Parameter */
  &Control_software_v1_1_P.Constant4_Value,/* 521: Block Parameter */
  &Control_software_v1_1_P.Constant9_Value,/* 522: Block Parameter */
  &Control_software_v1_1_P.BitwiseLogicalOperator_BitMask,/* 523: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P1,/* 524: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P2,/* 525: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P3,/* 526: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P4,/* 527: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P5,/* 528: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P6,/* 529: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P7,/* 530: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P8,/* 531: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P1,/* 532: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P2,/* 533: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P3,/* 534: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P4,/* 535: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P5,/* 536: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P6,/* 537: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P7,/* 538: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P8,/* 539: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P1,/* 540: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P2,/* 541: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P3,/* 542: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P4,/* 543: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P5,/* 544: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P6,/* 545: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P7,/* 546: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P8,/* 547: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P1,/* 548: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P2,/* 549: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P3,/* 550: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P4,/* 551: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P5,/* 552: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P6,/* 553: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P7,/* 554: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P8,/* 555: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P1,/* 556: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P2,/* 557: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P3,/* 558: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P4,/* 559: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P5[0],/* 560: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P1,/* 561: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P2,/* 562: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P3,/* 563: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P4,/* 564: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P5[0],/* 565: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P1,/* 566: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P2,/* 567: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P3,/* 568: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P4,/* 569: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P5[0],/* 570: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P1,/* 571: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P2,/* 572: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P3,/* 573: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P4,/* 574: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P5[0],/* 575: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P1,/* 576: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P2,/* 577: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P3,/* 578: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P1,/* 579: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P2,/* 580: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P3,/* 581: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P1,/* 582: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P2,/* 583: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P3,/* 584: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P1,/* 585: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P2,/* 586: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P3,/* 587: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P1,/* 588: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P2,/* 589: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P3,/* 590: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P1,/* 591: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P2,/* 592: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P3,/* 593: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P1,/* 594: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P2,/* 595: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P3,/* 596: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P1,/* 597: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P2,/* 598: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P3,/* 599: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P1,/* 600: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P2,/* 601: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P3,/* 602: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P4,/* 603: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P1,/* 604: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P2,/* 605: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P3,/* 606: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P4,/* 607: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P1,/* 608: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P2,/* 609: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P3,/* 610: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P4,/* 611: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P1,/* 612: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P2,/* 613: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P3,/* 614: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P4,/* 615: Block Parameter */
  &Control_software_v1_1_P.ReadIntStatus1_P1,/* 616: Block Parameter */
  &Control_software_v1_1_P.ReadIntStatus1_P2,/* 617: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P1,/* 618: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P2,/* 619: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P3,/* 620: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P4,/* 621: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P1,/* 622: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P2,/* 623: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P3,/* 624: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P4,/* 625: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P1,/* 626: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P2,/* 627: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P3,/* 628: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P4,/* 629: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P1,/* 630: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P2,/* 631: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P3,/* 632: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P4,/* 633: Block Parameter */
  &Control_software_v1_1_P.HLC_Param,  /* 634: Model Parameter */
  &Control_software_v1_1_P.AOsat,      /* 635: Model Parameter */
  &Control_software_v1_1_P.Afilt_Sl[0],/* 636: Model Parameter */
  &Control_software_v1_1_P.Afilt_Winch[0],/* 637: Model Parameter */
  &Control_software_v1_1_P.Bfilt_Sl[0],/* 638: Model Parameter */
  &Control_software_v1_1_P.Bfilt_Winch[0],/* 639: Model Parameter */
  &Control_software_v1_1_P.Cfilt_Sl[0],/* 640: Model Parameter */
  &Control_software_v1_1_P.Cfilt_Winch[0],/* 641: Model Parameter */
  &Control_software_v1_1_P.Dfilt_Sl[0],/* 642: Model Parameter */
  &Control_software_v1_1_P.Dfilt_Winch[0],/* 643: Model Parameter */
  &Control_software_v1_1_P.JoyFiltDen[0],/* 644: Model Parameter */
  &Control_software_v1_1_P.JoyFiltNum[0],/* 645: Model Parameter */
  &Control_software_v1_1_P.JoyS_gain,  /* 646: Model Parameter */
  &Control_software_v1_1_P.JoyS_ofst,  /* 647: Model Parameter */
  &Control_software_v1_1_P.JoyS_sat,   /* 648: Model Parameter */
  &Control_software_v1_1_P.JoyW_gain,  /* 649: Model Parameter */
  &Control_software_v1_1_P.JoyW_ofst,  /* 650: Model Parameter */
  &Control_software_v1_1_P.Kpos,       /* 651: Model Parameter */
  &Control_software_v1_1_P.Kspd,       /* 652: Model Parameter */
  &Control_software_v1_1_P.KspdWinch,  /* 653: Model Parameter */
  &Control_software_v1_1_P.NPotSpdEst, /* 654: Model Parameter */
  &Control_software_v1_1_P.PotPosFiltDen[0],/* 655: Model Parameter */
  &Control_software_v1_1_P.PotPosFiltNum[0],/* 656: Model Parameter */
  &Control_software_v1_1_P.Pot_gain,   /* 657: Model Parameter */
  &Control_software_v1_1_P.Pot_max,    /* 658: Model Parameter */
  &Control_software_v1_1_P.Pot_min,    /* 659: Model Parameter */
  &Control_software_v1_1_P.Pot_ofst,   /* 660: Model Parameter */
  &Control_software_v1_1_P.SlMotPosAIgain,/* 661: Model Parameter */
  &Control_software_v1_1_P.SlideMotTorqueMax,/* 662: Model Parameter */
  &Control_software_v1_1_P.SlidePosFiltDen[0],/* 663: Model Parameter */
  &Control_software_v1_1_P.SlidePosFiltNum[0],/* 664: Model Parameter */
  &Control_software_v1_1_P.SlideSpdEstFiltDen[0],/* 665: Model Parameter */
  &Control_software_v1_1_P.SlideSpdEstFiltNum[0],/* 666: Model Parameter */
  &Control_software_v1_1_P.Ts_1ms,     /* 667: Model Parameter */
  &Control_software_v1_1_P.Ts_1s,      /* 668: Model Parameter */
  &Control_software_v1_1_P.WinchDrumRad,/* 669: Model Parameter */
  &Control_software_v1_1_P.WinchMotPosAIgain,/* 670: Model Parameter */
  &Control_software_v1_1_P.WinchMotTorqueMax,/* 671: Model Parameter */
  &Control_software_v1_1_P.WinchPosFiltDen[0],/* 672: Model Parameter */
  &Control_software_v1_1_P.WinchPosFiltNum[0],/* 673: Model Parameter */
  &Control_software_v1_1_P.WinchRefSpdSup,/* 674: Model Parameter */
  &Control_software_v1_1_P.WinchSpdEstFiltDen[0],/* 675: Model Parameter */
  &Control_software_v1_1_P.WinchSpdEstFiltNum[0],/* 676: Model Parameter */
  &Control_software_v1_1_P.WinchTravelMin_m,/* 677: Model Parameter */
  &Control_software_v1_1_P.WinchVoltMax,/* 678: Model Parameter */
  &Control_software_v1_1_P.x0_Sl[0],   /* 679: Model Parameter */
  &Control_software_v1_1_P.x0_Winch[0],/* 680: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "numeric", "serialfifoptr", 0, 0, sizeof(serialfifoptr), SS_STRUCT, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "struct", "struct_g4JHc2H3XRyVVgBupIhckB", 8, 1, sizeof
    (struct_g4JHc2H3XRyVVgBupIhckB), SS_STRUCT, 0, 0 },

  { "struct", "struct_nekeCBaUBwhMGZJyyesMPB", 31, 9, sizeof
    (struct_nekeCBaUBwhMGZJyyesMPB), SS_STRUCT, 0, 0 },

  { "struct", "struct_H3iKTmzQIZmmrWuxBo9E9D", 2, 40, sizeof
    (struct_H3iKTmzQIZmmrWuxBo9E9D), SS_STRUCT, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "TakeoffTravel_V", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB,
    TakeoffTravel_V), 0, 17, 0 },

  { "SlideTravelMax_V", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB,
    SlideTravelMax_V), 0, 17, 0 },

  { "SlideTravelMax_rad", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB,
    SlideTravelMax_rad), 0, 17, 0 },

  { "JogSpeed", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB, JogSpeed), 0, 17, 0 },

  { "TakeOffSpeed", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB, TakeOffSpeed), 0,
    17, 0 },

  { "ErrTol", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB, ErrTol), 0, 17, 0 },

  { "WaitTime", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB, WaitTime), 0, 17, 0 },

  { "LandingLength_rad", rt_offsetof(struct_g4JHc2H3XRyVVgBupIhckB,
    LandingLength_rad), 0, 17, 0 },

  { "WinchSpdRefGain", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdRefGain), 0, 17, 0 },

  { "WinchTravelMax", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB, WinchTravelMax),
    0, 17, 0 },

  { "WinchTravelMin", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB, WinchTravelMin),
    0, 17, 0 },

  { "WinchSpdMaxFlight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdMaxFlight), 0, 17, 0 },

  { "WinchSpdMinFlight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdMinFlight), 0, 17, 0 },

  { "WinchSpeedTakeOffMult", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpeedTakeOffMult), 0, 17, 0 },

  { "WinchSpdMaxLanding", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdMaxLanding), 0, 17, 0 },

  { "WinchSpdMinLanding", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdMinLanding), 0, 17, 0 },

  { "WinchSpdMax", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB, WinchSpdMax), 0,
    17, 0 },

  { "WinchSpdMin", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB, WinchSpdMin), 0,
    17, 0 },

  { "PotPosKeepMinFlight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPosKeepMinFlight), 0, 17, 0 },

  { "PotPosKeepMaxFlight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPosKeepMaxFlight), 0, 17, 0 },

  { "PotPosKeepMinLanding", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPosKeepMinLanding), 0, 17, 0 },

  { "PotPosKeepMaxLanding", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPosKeepMaxLanding), 0, 17, 0 },

  { "PotPivot2Flight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPivot2Flight), 0, 17, 0 },

  { "PotPivot0Flight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPivot0Flight), 0, 17, 0 },

  { "PotPivot2Landing", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPivot2Landing), 0, 17, 0 },

  { "PotPivot0Landing", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    PotPivot0Landing), 0, 17, 0 },

  { "WinchSpdNormFlightOut", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdNormFlightOut), 0, 17, 0 },

  { "WinchSpdNormLandingIn", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdNormLandingIn), 0, 17, 0 },

  { "WinchSpdNormLandingOut", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdNormLandingOut), 0, 17, 0 },

  { "WinchSpeedSlopeReelInFlight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpeedSlopeReelInFlight), 0, 17, 0 },

  { "WinchSpeedSlopeReelOutFlight", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpeedSlopeReelOutFlight), 0, 17, 0 },

  { "WinchSpeedSlopeReelInLanding", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpeedSlopeReelInLanding), 0, 17, 0 },

  { "WinchSpeedSlopeReelOutLanding", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpeedSlopeReelOutLanding), 0, 17, 0 },

  { "PotPosSpdMin", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB, PotPosSpdMin), 0,
    17, 0 },

  { "DerivGain", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB, DerivGain), 0, 17, 0
  },

  { "TakeOffLatchTime", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    TakeOffLatchTime), 0, 17, 0 },

  { "ReelTimer_wait", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB, ReelTimer_wait),
    0, 17, 0 },

  { "WinchSpdMinFlight_wait", rt_offsetof(struct_nekeCBaUBwhMGZJyyesMPB,
    WinchSpdMinFlight_wait), 0, 17, 0 },

  { "WinchSpeedSlopeReelInFlight_wait", rt_offsetof
    (struct_nekeCBaUBwhMGZJyyesMPB, WinchSpeedSlopeReelInFlight_wait), 0, 17, 0
  },

  { "Slide", rt_offsetof(struct_H3iKTmzQIZmmrWuxBo9E9D, Slide), 5, 17, 0 },

  { "Winch", rt_offsetof(struct_H3iKTmzQIZmmrWuxBo9E9D, Winch), 6, 17, 0 }
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_VECTOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_VECTOR, 22, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_VECTOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 },

  { rtwCAPI_VECTOR, 30, 2, 0 },

  { rtwCAPI_VECTOR, 32, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 0, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 34, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  35,                                  /* 2 */
  1,                                   /* 3 */
  2,                                   /* 4 */
  1,                                   /* 5 */
  41,                                  /* 6 */
  1,                                   /* 7 */
  91,                                  /* 8 */
  1,                                   /* 9 */
  1025,                                /* 10 */
  1,                                   /* 11 */
  38,                                  /* 12 */
  1,                                   /* 13 */
  4,                                   /* 14 */
  1,                                   /* 15 */
  61,                                  /* 16 */
  1,                                   /* 17 */
  65,                                  /* 18 */
  1,                                   /* 19 */
  1,                                   /* 20 */
  3,                                   /* 21 */
  1,                                   /* 22 */
  2,                                   /* 23 */
  1,                                   /* 24 */
  5,                                   /* 25 */
  1,                                   /* 26 */
  7,                                   /* 27 */
  1,                                   /* 28 */
  6,                                   /* 29 */
  1,                                   /* 30 */
  4,                                   /* 31 */
  1,                                   /* 32 */
  34,                                  /* 33 */
  2,                                   /* 34 */
  2                                    /* 35 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  1.0, 0.0, 0.001, 0.01, 0.02, -1.0, -2.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    3, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[1],
    2, 0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[6],
    4, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 268,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 366,
    rtModelParameters, 47 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2290380886U,
    2661673793U,
    1479294594U,
    2061487944U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Control_software_v1_1_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Control_software_v1_1_InitializeDataMapInfo
  (RT_MODEL_Control_software_v1_1_T *const Control_software_v1_1_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Control_software_v1_1_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Control_software_v1_1_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Control_software_v1_1_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Control_software_v1_1_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Control_software_v1_1_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  Control_software_v1_1_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(Control_software_v1_1_M);
  Control_software_v1_1_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_Control_software_v1_1_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Control_software_v1_1_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Control_software_v1_1_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(Control_software_v1_1_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Control_software_v1_1_host_InitializeDataMapInfo
    (Control_software_v1_1_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: Control_software_v1_1_capi.c */
