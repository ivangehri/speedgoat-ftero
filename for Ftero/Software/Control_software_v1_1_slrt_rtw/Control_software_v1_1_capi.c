/*
 * Control_software_v1_1_capi.c
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
    TARGET_STRING("HLC_State"), 0, 0, 0, 0, 1 },

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

  { 22, 61, TARGET_STRING("Outputs/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 23, 0, TARGET_STRING("Outputs/Saturation"),
    TARGET_STRING("AO_WinchDriver"), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("Outputs/Saturation1"),
    TARGET_STRING("AO_SlideDriver"), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("Outputs/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 26, 0, TARGET_STRING("Outputs/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 28, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 29, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation"),
    TARGET_STRING("CI_JoyS"), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 31, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 4, TARGET_STRING("Input conditioning and estimators/Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Discrete Transfer Fcn2"),
    TARGET_STRING("CI_SlidePos"), 0, 0, 0, 0, 1 },

  { 39, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain1"),
    TARGET_STRING("CI_PotSpd"), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Saturation"),
    TARGET_STRING("CI_PotPos"), 0, 0, 0, 0, 1 },

  { 42, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p1"),
    TARGET_STRING("AI_Joy_W"), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p2"),
    TARGET_STRING("AI_Joy_S"), 1, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p3"),
    TARGET_STRING("AI_mot_slide_pos"), 2, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p4"),
    TARGET_STRING("AI_mot_winch_pos"), 3, 0, 0, 0, 1 },

  { 50, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p5"),
    TARGET_STRING("AI_pot_pos"), 4, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("DI_SlideLimitB"), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p1"),
    TARGET_STRING("DI_Enable"), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p2"),
    TARGET_STRING("DI_WinchMode"), 1, 0, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p3"),
    TARGET_STRING("DI_Takeoff"), 2, 0, 0, 0, 1 },

  { 55, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p4"),
    TARGET_STRING("DI_Landing"), 3, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p5"),
    TARGET_STRING("DI_Operator"), 4, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p6"),
    TARGET_STRING("DI_GliderPres"), 5, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p7"),
    TARGET_STRING("DI_SlideLimitF"), 6, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 60, 0, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 61, 0, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 62, 0, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 63, 0, TARGET_STRING("Logging/Log_conditioning/Rate Transition"),
    TARGET_STRING(""), 0, 0, 1, 0, 2 },

  { 64, 59, TARGET_STRING("Logging/Time_Scope_trigger/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 65, 0, TARGET_STRING("Logging/Time_Scope_trigger/Switch1"),
    TARGET_STRING("Trigger_time"), 0, 0, 0, 0, 0 },

  { 66, 7, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Kraftgesteuert/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 67, 6, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Kraftgesteuert/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 68, 8, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Kraftgesteuert/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 69, 5, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Kraftgesteuert/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 7, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Kraftgesteuert/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 6, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Kraftgesteuert/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 8, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Kraftgesteuert/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 10, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 9, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 77, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 80, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 83, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("CI_WinchPos"), 0, 0, 0, 0, 1 },

  { 84, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Discrete State-Space"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 85, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 86, 12, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain2"),
    TARGET_STRING("SlMotPosEst"), 0, 0, 0, 0, 1 },

  { 88, 12, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 12, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Gain4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 12, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 12, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 12, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 93, 12, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Switch"),
    TARGET_STRING("SlideMotTorqueEst"), 0, 0, 0, 0, 1 },

  { 95, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem1/Discrete Transfer Fcn1"),
    TARGET_STRING("SlMotSpeedEst"), 0, 0, 0, 0, 1 },

  { 96, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete State-Space"),
    TARGET_STRING(""), 0, 0, 2, 0, 1 },

  { 97, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 14, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 14, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 14, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 14, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("WinchMotTorqueEst"), 0, 0, 0, 0, 1 },

  { 105, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("WinchMotSpeedEst"), 0, 0, 0, 0, 1 },

  { 106, 15, TARGET_STRING(
    "Inputs/RS232_read/Compass_read/Embedded MATLAB Function"),
    TARGET_STRING("GU_Yaw"), 0, 0, 0, 0, 0 },

  { 107, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 108, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 109, 16, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1"),
    TARGET_STRING("GU_Lat"), 0, 0, 0, 0, 0 },

  { 110, 16, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p2"),
    TARGET_STRING("GU_Lon"), 1, 0, 0, 0, 0 },

  { 111, 16, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p3"),
    TARGET_STRING("GU_h"), 2, 0, 0, 0, 0 },

  { 112, 16, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p4"),
    TARGET_STRING("Geo_Gu_h"), 3, 0, 0, 0, 0 },

  { 113, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 114, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 1, 4, 0, 0 },

  { 115, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 3 },

  { 116, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING(""), 0, 1, 5, 0, 3 },

  { 117, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 118, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition1"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 119, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition2"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 120, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition3"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 121, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition4"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 122, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition5"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 123, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition6"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 124, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition7"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 125, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 126, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 127, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 130, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 131, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 132, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 133, 9, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 134, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 135, 17, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 136, 18, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data"),
    TARGET_STRING(""), 0, 0, 6, 0, 3 },

  { 137, 19, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function"),
    TARGET_STRING("time"), 0, 0, 0, 0, 3 },

  { 138, 20, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1"),
    TARGET_STRING("GPSFlags"), 0, 0, 0, 0, 3 },

  { 139, 21, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function2"),
    TARGET_STRING("NbSat"), 0, 0, 0, 0, 3 },

  { 140, 22, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function"),
    TARGET_STRING("Mx"), 0, 0, 0, 0, 3 },

  { 141, 23, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function1"),
    TARGET_STRING("My"), 0, 0, 0, 0, 3 },

  { 142, 24, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function3"),
    TARGET_STRING("Mz"), 0, 0, 0, 0, 3 },

  { 143, 25, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function"),
    TARGET_STRING("year"), 0, 0, 0, 0, 3 },

  { 144, 26, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function1"),
    TARGET_STRING("nanoseconds"), 0, 0, 0, 0, 3 },

  { 145, 27, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function2"),
    TARGET_STRING("month"), 0, 0, 0, 0, 3 },

  { 146, 28, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function3"),
    TARGET_STRING("day"), 0, 0, 0, 0, 3 },

  { 147, 29, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function4"),
    TARGET_STRING("hour"), 0, 0, 0, 0, 3 },

  { 148, 30, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function5"),
    TARGET_STRING("min"), 0, 0, 0, 0, 3 },

  { 149, 31, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function6"),
    TARGET_STRING("sec"), 0, 0, 0, 0, 3 },

  { 150, 32, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14/Embedded MATLAB Function"),
    TARGET_STRING("Time_sr"), 0, 0, 0, 0, 3 },

  { 151, 33, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1"),
    TARGET_STRING("longitude"), 0, 0, 0, 0, 3 },

  { 152, 34, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function2"),
    TARGET_STRING("height"), 0, 0, 0, 0, 3 },

  { 153, 35, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function3"),
    TARGET_STRING("latitude"), 0, 0, 0, 0, 3 },

  { 154, 36, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function1"),
    TARGET_STRING("v_east"), 0, 0, 0, 0, 3 },

  { 155, 37, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function2"),
    TARGET_STRING("v_north"), 0, 0, 0, 0, 3 },

  { 156, 38, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function3"),
    TARGET_STRING("v_down"), 0, 0, 0, 0, 3 },

  { 157, 39, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function4"),
    TARGET_STRING("heading"), 0, 0, 0, 0, 3 },

  { 158, 40, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17/Embedded MATLAB Function2"),
    TARGET_STRING("Altitude"), 0, 0, 0, 0, 3 },

  { 159, 41, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function"),
    TARGET_STRING("lat_filt"), 0, 0, 0, 0, 3 },

  { 160, 42, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function1"),
    TARGET_STRING("long_filt"), 0, 0, 0, 0, 3 },

  { 161, 43, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function2"),
    TARGET_STRING("height_filt"), 0, 0, 0, 0, 3 },

  { 162, 44, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function"),
    TARGET_STRING("Vx"), 0, 0, 0, 0, 3 },

  { 163, 45, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function1"),
    TARGET_STRING("Vy"), 0, 0, 0, 0, 3 },

  { 164, 46, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function3"),
    TARGET_STRING("Vz"), 0, 0, 0, 0, 3 },

  { 165, 47, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function"),
    TARGET_STRING("q1"), 0, 0, 0, 0, 3 },

  { 166, 48, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function1"),
    TARGET_STRING("q2"), 0, 0, 0, 0, 3 },

  { 167, 49, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function3"),
    TARGET_STRING("q3"), 0, 0, 0, 0, 3 },

  { 168, 50, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function4"),
    TARGET_STRING("q4"), 0, 0, 0, 0, 3 },

  { 169, 51, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function"),
    TARGET_STRING("Gx"), 0, 0, 0, 0, 3 },

  { 170, 52, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function1"),
    TARGET_STRING("Gy"), 0, 0, 0, 0, 3 },

  { 171, 53, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function3"),
    TARGET_STRING("Gz"), 0, 0, 0, 0, 3 },

  { 172, 54, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function"),
    TARGET_STRING("Ax"), 0, 0, 0, 0, 3 },

  { 173, 55, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function1"),
    TARGET_STRING("Ay"), 0, 0, 0, 0, 3 },

  { 174, 56, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function3"),
    TARGET_STRING("Az"), 0, 0, 0, 0, 3 },

  { 175, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 176, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 177, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 178, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 179, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 4 },

  { 180, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Relational Operator"),
    TARGET_STRING(""), 0, 2, 7, 0, 4 },

  { 181, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING(""), 0, 4, 7, 0, 4 },

  { 182, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 183, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 184, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 185, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 186, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 187, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 188, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p1"),
    TARGET_STRING(""), 0, 4, 8, 0, 4 },

  { 189, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p2"),
    TARGET_STRING(""), 1, 4, 0, 0, 4 },

  { 190, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 191, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 192, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 193, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING(""), 0, 3, 0, 0, 4 },

  { 194, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 195, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 196, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 197, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 198, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 199, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 200, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 201, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 202, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 203, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 204, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 205, 57, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING(""), 0, 4, 9, 0, 4 },

  { 206, 57, TARGET_STRING(
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
  { 207, TARGET_STRING("Auxiliary variables/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 208, TARGET_STRING("High-level control/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 209, TARGET_STRING("High-level control/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 210, TARGET_STRING("High-level control/Unit Delay2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 211, TARGET_STRING("High-level control/Unit Delay3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 212, TARGET_STRING("High-level control/Unit Delay4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 213, TARGET_STRING("High-level control/Unit Delay5"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 214, TARGET_STRING("High-level control/Unit Delay6"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 215, TARGET_STRING("High-level control/Unit Delay7"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 216, TARGET_STRING("High-level control/Unit Delay8"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 217, TARGET_STRING("Outputs/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 218, TARGET_STRING("Outputs/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 219, TARGET_STRING("Outputs/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 220, TARGET_STRING("Outputs/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 221, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 222, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P2"), 0, 10, 0 },

  { 223, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 224, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P4"), 0, 10, 0 },

  { 225, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P5"), 0, 10, 0 },

  { 226, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 227, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 228, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P1"), 0, 11, 0 },

  { 229, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P2"), 0, 11, 0 },

  { 230, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P3"), 0, 11, 0 },

  { 231, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P4"), 0, 11, 0 },

  { 232, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 233, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 234, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 235, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 236, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 237, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 238, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 239, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 240, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 241, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 242, TARGET_STRING("Outputs/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 243, TARGET_STRING("Outputs/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 244, TARGET_STRING("Input conditioning and estimators/Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 245, TARGET_STRING("Input conditioning and estimators/Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 246, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 247, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 248, TARGET_STRING("Input conditioning and estimators/Subsystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 249, TARGET_STRING("Input conditioning and estimators/Subsystem/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 250, TARGET_STRING("Input conditioning and estimators/Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 251, TARGET_STRING("Input conditioning and estimators/Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 252, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 253, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 254, TARGET_STRING("Input conditioning and estimators/Subsystem1/Discrete Transfer Fcn2"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 255, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 256, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 257, TARGET_STRING("Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 258, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P1"), 0, 12, 0 },

  { 259, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P2"), 0, 12, 0 },

  { 260, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P3"), 0, 12, 0 },

  { 261, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 262, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 263, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 264, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 265, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 266, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 267, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 268, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 269, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 270, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 271, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 272, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 273, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 274, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 275, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 276, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 277, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 278, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 279, TARGET_STRING("Logging/Time_Scope_trigger/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 280, TARGET_STRING("Logging/Time_Scope_trigger/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 281, TARGET_STRING("Logging/Time_Scope_trigger/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 282, TARGET_STRING("Input conditioning and estimators/Subsystem/Kraftgesteuert/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 283, TARGET_STRING("Input conditioning and estimators/Subsystem/Kraftgesteuert/obere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 284, TARGET_STRING("Input conditioning and estimators/Subsystem/Kraftgesteuert/untere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 285, TARGET_STRING("Input conditioning and estimators/Subsystem/Kraftgesteuert/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 286, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 287, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 288, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 289, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Delay"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 290, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 291, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Delay1"),
    TARGET_STRING("DelayLength"), 4, 0, 0 },

  { 292, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 293, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 294, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 295, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 296, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 297, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem1/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 298, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 299, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 300, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 301, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 302, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 303, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 304, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 11, 0 },

  { 305, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 306, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 307, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 308, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 309, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 310, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 311, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 312, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 14, 0 },

  { 313, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 314, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 11, 0 },

  { 315, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 316, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 317, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 318, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 319, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 320, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P4"), 0, 15, 0 },

  { 321, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 322, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P6"), 0, 11, 0 },

  { 323, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 324, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 325, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 326, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 327, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 328, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 329, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 330, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 331, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 332, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 333, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 334, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 335, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 336, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 337, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 338, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 339, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 340, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 341, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 342, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 343, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 344, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 345, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 346, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 347, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 348, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 349, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 350, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 351, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 352, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 353, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 354, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 355, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 356, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 357, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 358, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 359, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 360, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 361, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 362, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 363, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 364, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 365, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 366, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 367, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 368, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 369, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 370, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 371, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 372, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 373, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 374, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 375, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 376, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 377, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 378, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 379, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 380, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 381, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 382, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 383, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 384, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 385, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 386, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 387, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 388, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 389, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 390, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 391, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 392, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 393, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 394, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 395, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 396, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 397, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 398, TARGET_STRING("Input conditioning and estimators/Subsystem/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 399, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data_valid"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 400, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 401, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 402, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 403, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 404, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant9"),
    TARGET_STRING("Value"), 4, 0, 0 },

  { 405, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING("BitMask"), 4, 0, 0 },

  { 406, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 407, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 408, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 409, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 410, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 411, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 412, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 413, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 414, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 415, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 416, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 417, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 418, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 419, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 420, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 421, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 422, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 423, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 424, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 425, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 426, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 427, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 428, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 429, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 430, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 431, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 432, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 433, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 434, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 435, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 436, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 437, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 438, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 439, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 440, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 441, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 442, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 443, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 444, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 445, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 446, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 447, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 448, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 449, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 450, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 451, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 452, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 453, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 454, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 455, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 456, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 457, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P5"), 0, 16, 0 },

  { 458, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 459, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 460, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 461, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 462, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 463, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 464, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 465, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 466, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 467, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 468, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 469, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 470, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 471, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 472, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 473, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 474, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 475, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 476, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 477, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 478, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 479, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 480, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 481, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 482, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 483, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 484, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 485, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 486, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 487, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 488, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 489, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 490, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 491, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 492, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 493, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 494, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 495, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 496, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 497, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 498, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 499, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 500, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 501, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 502, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 503, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 504, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 505, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 506, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 507, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 508, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 509, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 510, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 511, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 512, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 513, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 514, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 515, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 516, TARGET_STRING("HLC_Param"), 7, 0, 0 },

  { 517, TARGET_STRING("AOsat"), 0, 0, 0 },

  { 518, TARGET_STRING("Afilt_Sl"), 0, 18, 0 },

  { 519, TARGET_STRING("Afilt_Winch"), 0, 18, 0 },

  { 520, TARGET_STRING("Bfilt_Sl"), 0, 18, 0 },

  { 521, TARGET_STRING("Bfilt_Winch"), 0, 18, 0 },

  { 522, TARGET_STRING("Cfilt_Sl"), 0, 18, 0 },

  { 523, TARGET_STRING("Cfilt_Winch"), 0, 18, 0 },

  { 524, TARGET_STRING("Dfilt_Sl"), 0, 18, 0 },

  { 525, TARGET_STRING("Dfilt_Winch"), 0, 18, 0 },

  { 526, TARGET_STRING("JoyFiltDen"), 0, 10, 0 },

  { 527, TARGET_STRING("JoyFiltNum"), 0, 10, 0 },

  { 528, TARGET_STRING("JoyS_gain"), 0, 0, 0 },

  { 529, TARGET_STRING("JoyS_ofst"), 0, 0, 0 },

  { 530, TARGET_STRING("JoyS_sat"), 0, 0, 0 },

  { 531, TARGET_STRING("JoyW_gain"), 0, 0, 0 },

  { 532, TARGET_STRING("JoyW_ofst"), 0, 0, 0 },

  { 533, TARGET_STRING("Kpos"), 0, 0, 0 },

  { 534, TARGET_STRING("Kspd"), 0, 0, 0 },

  { 535, TARGET_STRING("KspdWinch"), 0, 0, 0 },

  { 536, TARGET_STRING("NPotSpdEst"), 0, 0, 0 },

  { 537, TARGET_STRING("PotPosFiltDen"), 0, 10, 0 },

  { 538, TARGET_STRING("PotPosFiltNum"), 0, 10, 0 },

  { 539, TARGET_STRING("Pot_gain"), 0, 0, 0 },

  { 540, TARGET_STRING("Pot_max"), 0, 0, 0 },

  { 541, TARGET_STRING("Pot_min"), 0, 0, 0 },

  { 542, TARGET_STRING("Pot_ofst"), 0, 0, 0 },

  { 543, TARGET_STRING("SlMotPosAIgain"), 0, 0, 0 },

  { 544, TARGET_STRING("SlideMotTorqueMax"), 0, 0, 0 },

  { 545, TARGET_STRING("SlidePosFiltDen"), 0, 10, 0 },

  { 546, TARGET_STRING("SlidePosFiltNum"), 0, 10, 0 },

  { 547, TARGET_STRING("SlideSpdEstFiltDen"), 0, 10, 0 },

  { 548, TARGET_STRING("SlideSpdEstFiltNum"), 0, 10, 0 },

  { 549, TARGET_STRING("Ts_1ms"), 0, 0, 0 },

  { 550, TARGET_STRING("Ts_1s"), 0, 0, 0 },

  { 551, TARGET_STRING("WinchDrumRad"), 0, 0, 0 },

  { 552, TARGET_STRING("WinchMotPosAIgain"), 0, 0, 0 },

  { 553, TARGET_STRING("WinchMotTorqueMax"), 0, 0, 0 },

  { 554, TARGET_STRING("WinchPosFiltDen"), 0, 10, 0 },

  { 555, TARGET_STRING("WinchPosFiltNum"), 0, 10, 0 },

  { 556, TARGET_STRING("WinchRefSpdSup"), 0, 0, 0 },

  { 557, TARGET_STRING("WinchSpdEstFiltDen"), 0, 10, 0 },

  { 558, TARGET_STRING("WinchSpdEstFiltNum"), 0, 10, 0 },

  { 559, TARGET_STRING("WinchTravelMin_m"), 0, 0, 0 },

  { 560, TARGET_STRING("WinchVoltMax"), 0, 0, 0 },

  { 561, TARGET_STRING("x0_Sl"), 0, 2, 0 },

  { 562, TARGET_STRING("x0_Winch"), 0, 2, 0 },

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
  &Control_software_v1_1_B.Gain,       /* 27: Signal */
  &Control_software_v1_1_B.Gain1,      /* 28: Signal */
  &Control_software_v1_1_B.CI_JoyS,    /* 29: Signal */
  &Control_software_v1_1_B.Saturation1,/* 30: Signal */
  &Control_software_v1_1_B.Sum_a,      /* 31: Signal */
  &Control_software_v1_1_B.Sum1,       /* 32: Signal */
  &Control_software_v1_1_B.Switch_i,   /* 33: Signal */
  &Control_software_v1_1_B.Switch1,    /* 34: Signal */
  &Control_software_v1_1_B.Delay,      /* 35: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn,/* 36: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn1,/* 37: Signal */
  &Control_software_v1_1_B.CI_SlidePos,/* 38: Signal */
  &Control_software_v1_1_B.Gain_f,     /* 39: Signal */
  &Control_software_v1_1_B.CI_PotSpd,  /* 40: Signal */
  &Control_software_v1_1_B.CI_PotPos,  /* 41: Signal */
  &Control_software_v1_1_B.Sum_b,      /* 42: Signal */
  &Control_software_v1_1_B.Sum1_b,     /* 43: Signal */
  &Control_software_v1_1_B.Delay_e,    /* 44: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn1_c,/* 45: Signal */
  &Control_software_v1_1_B.AI_Joy_W,   /* 46: Signal */
  &Control_software_v1_1_B.AI_Joy_S,   /* 47: Signal */
  &Control_software_v1_1_B.AI_mot_slide_pos,/* 48: Signal */
  &Control_software_v1_1_B.AI_mot_winch_pos,/* 49: Signal */
  &Control_software_v1_1_B.AI_pot_pos, /* 50: Signal */
  &Control_software_v1_1_B.DI_SlideLimitB,/* 51: Signal */
  &Control_software_v1_1_B.DI_Enable,  /* 52: Signal */
  &Control_software_v1_1_B.DI_WinchMode,/* 53: Signal */
  &Control_software_v1_1_B.DI_Takeoff, /* 54: Signal */
  &Control_software_v1_1_B.DI_Landing, /* 55: Signal */
  &Control_software_v1_1_B.DI_Operator,/* 56: Signal */
  &Control_software_v1_1_B.DI_GliderPres,/* 57: Signal */
  &Control_software_v1_1_B.DI_SlideLimitF,/* 58: Signal */
  &Control_software_v1_1_B.Constant,   /* 59: Signal */
  &Control_software_v1_1_B.Constant1_d,/* 60: Signal */
  &Control_software_v1_1_B.Constant2_j,/* 61: Signal */
  &Control_software_v1_1_B.Constant3_h,/* 62: Signal */
  &Control_software_v1_1_B.RateTransition_i[0],/* 63: Signal */
  &Control_software_v1_1_B.Switch_k,   /* 64: Signal */
  &Control_software_v1_1_B.Trigger_time,/* 65: Signal */
  &Control_software_v1_1_B.Gain_n,     /* 66: Signal */
  &Control_software_v1_1_B.RelationalOperator_i,/* 67: Signal */
  &Control_software_v1_1_B.RelationalOperator1,/* 68: Signal */
  &Control_software_v1_1_B.Sum_o,      /* 69: Signal */
  &Control_software_v1_1_B.Sum1_p,     /* 70: Signal */
  &Control_software_v1_1_B.Switch_m,   /* 71: Signal */
  &Control_software_v1_1_B.Switch1_m,  /* 72: Signal */
  &Control_software_v1_1_B.Gain_ms,    /* 73: Signal */
  &Control_software_v1_1_B.Sum_n,      /* 74: Signal */
  &Control_software_v1_1_B.Sum1_o,     /* 75: Signal */
  &Control_software_v1_1_B.Switch_kv,  /* 76: Signal */
  &Control_software_v1_1_B.Switch1_d,  /* 77: Signal */
  &Control_software_v1_1_B.Delay_b,    /* 78: Signal */
  &Control_software_v1_1_B.Delay1,     /* 79: Signal */
  &Control_software_v1_1_B.Gain_m,     /* 80: Signal */
  &Control_software_v1_1_B.Sum_p,      /* 81: Signal */
  &Control_software_v1_1_B.Sum1_n,     /* 82: Signal */
  &Control_software_v1_1_B.CI_WinchPos,/* 83: Signal */
  &Control_software_v1_1_B.DiscreteStateSpace[0],/* 84: Signal */
  &Control_software_v1_1_B.Gain_j,     /* 85: Signal */
  &Control_software_v1_1_B.Gain1_g,    /* 86: Signal */
  &Control_software_v1_1_B.SlMotPosEst,/* 87: Signal */
  &Control_software_v1_1_B.Gain3,      /* 88: Signal */
  &Control_software_v1_1_B.Gain4,      /* 89: Signal */
  &Control_software_v1_1_B.Saturation_m,/* 90: Signal */
  &Control_software_v1_1_B.Sum_n3,     /* 91: Signal */
  &Control_software_v1_1_B.Sum1_bn,    /* 92: Signal */
  &Control_software_v1_1_B.Sum2_j,     /* 93: Signal */
  &Control_software_v1_1_B.SlideMotTorqueEst,/* 94: Signal */
  &Control_software_v1_1_B.SlMotSpeedEst,/* 95: Signal */
  &Control_software_v1_1_B.DiscreteStateSpace_g[0],/* 96: Signal */
  &Control_software_v1_1_B.Gain_g,     /* 97: Signal */
  &Control_software_v1_1_B.Gain1_d,    /* 98: Signal */
  &Control_software_v1_1_B.Saturation, /* 99: Signal */
  &Control_software_v1_1_B.Saturation1_m,/* 100: Signal */
  &Control_software_v1_1_B.Sum_c,      /* 101: Signal */
  &Control_software_v1_1_B.Sum1_nr,    /* 102: Signal */
  &Control_software_v1_1_B.Sum2,       /* 103: Signal */
  &Control_software_v1_1_B.WinchMotTorqueEst,/* 104: Signal */
  &Control_software_v1_1_B.WinchMotSpeedEst,/* 105: Signal */
  &Control_software_v1_1_B.GU_Yaw,     /* 106: Signal */
  &Control_software_v1_1_B.RateTransition4_p,/* 107: Signal */
  &Control_software_v1_1_B.FIFOASCIIread1[0],/* 108: Signal */
  &Control_software_v1_1_B.GU_Lat,     /* 109: Signal */
  &Control_software_v1_1_B.GU_Lon,     /* 110: Signal */
  &Control_software_v1_1_B.GU_h,       /* 111: Signal */
  &Control_software_v1_1_B.Geo_GU_h,   /* 112: Signal */
  &Control_software_v1_1_B.RateTransition4_d,/* 113: Signal */
  &Control_software_v1_1_B.FIFOASCIIread1_k[0],/* 114: Signal */
  &Control_software_v1_1_B.RateTransition4_f,/* 115: Signal */
  &Control_software_v1_1_B.FIFOASCIIread[0],/* 116: Signal */
  &Control_software_v1_1_B.RateTransition,/* 117: Signal */
  &Control_software_v1_1_B.RateTransition1,/* 118: Signal */
  &Control_software_v1_1_B.RateTransition2,/* 119: Signal */
  &Control_software_v1_1_B.RateTransition3,/* 120: Signal */
  &Control_software_v1_1_B.RateTransition4,/* 121: Signal */
  &Control_software_v1_1_B.RateTransition5,/* 122: Signal */
  &Control_software_v1_1_B.RateTransition6,/* 123: Signal */
  &Control_software_v1_1_B.RateTransition7,/* 124: Signal */
  &Control_software_v1_1_B.FIFOwrite1_o1,/* 125: Signal */
  &Control_software_v1_1_B.FIFOwrite1_o2,/* 126: Signal */
  &Control_software_v1_1_B.FIFOwrite2_o1,/* 127: Signal */
  &Control_software_v1_1_B.FIFOwrite2_o2,/* 128: Signal */
  &Control_software_v1_1_B.FIFOwrite3_o1,/* 129: Signal */
  &Control_software_v1_1_B.FIFOwrite3_o2,/* 130: Signal */
  &Control_software_v1_1_B.FIFOwrite4_o1,/* 131: Signal */
  &Control_software_v1_1_B.FIFOwrite4_o2,/* 132: Signal */
  &Control_software_v1_1_B.Compare_e,  /* 133: Signal */
  &Control_software_v1_1_B.Compare,    /* 134: Signal */
  &Control_software_v1_1_B.CRC_valid,  /* 135: Signal */
  &Control_software_v1_1_B.IMU_data[0],/* 136: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_l.uint32_out,/* 137: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_e.uint8_out,/* 138: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_h.uint8_out,/* 139: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_b.sing_out,/* 140: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_j.sing_out,/* 141: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_ps.sing_out,/* 142: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_a.uint8_out,/* 143: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_c.uint32_out,/* 144: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_p.uint8_out,/* 145: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_k.uint8_out,/* 146: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_h.uint8_out,/* 147: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction5.uint8_out,/* 148: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction6.uint8_out,/* 149: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_bf.uint32_out,/* 150: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_g.int32_out,/* 151: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2.int32_out,/* 152: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_pw.int32_out,/* 153: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_n.int32_out,/* 154: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_n.int32_out,/* 155: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_o.int32_out,/* 156: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_g.int32_out,/* 157: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_m.int32_out,/* 158: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_k.double_out,/* 159: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_a.double_out,/* 160: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_g.double_out,/* 161: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_j.sing_out,/* 162: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_d.sing_out,/* 163: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_n.sing_out,/* 164: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_g.sing_out,/* 165: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1.sing_out,/* 166: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3.sing_out,/* 167: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4.sing_out,/* 168: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_d.sing_out,/* 169: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_i.sing_out,/* 170: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_p.sing_out,/* 171: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_f.sing_out,/* 172: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_p.sing_out,/* 173: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_a.sing_out,/* 174: Signal */
  &Control_software_v1_1_B.Constant1_p,/* 175: Signal */
  &Control_software_v1_1_B.Constant2,  /* 176: Signal */
  &Control_software_v1_1_B.Constant3_o,/* 177: Signal */
  &Control_software_v1_1_B.Constant4,  /* 178: Signal */
  &Control_software_v1_1_B.LogicalOperator,/* 179: Signal */
  &Control_software_v1_1_B.RelationalOperator[0],/* 180: Signal */
  &Control_software_v1_1_B.BitwiseLogicalOperator[0],/* 181: Signal */
  &Control_software_v1_1_B.FIFOread1_o1[0],/* 182: Signal */
  &Control_software_v1_1_B.FIFOread1_o2,/* 183: Signal */
  &Control_software_v1_1_B.FIFOread2_o1[0],/* 184: Signal */
  &Control_software_v1_1_B.FIFOread2_o2,/* 185: Signal */
  &Control_software_v1_1_B.FIFOread3_o1[0],/* 186: Signal */
  &Control_software_v1_1_B.FIFOread3_o2,/* 187: Signal */
  &Control_software_v1_1_B.FIFOread4_o1[0],/* 188: Signal */
  &Control_software_v1_1_B.FIFOread4_o2,/* 189: Signal */
  &Control_software_v1_1_B.FIFOwrite1, /* 190: Signal */
  &Control_software_v1_1_B.FIFOwrite2, /* 191: Signal */
  &Control_software_v1_1_B.FIFOwrite3, /* 192: Signal */
  &Control_software_v1_1_B.FIFOwrite4, /* 193: Signal */
  &Control_software_v1_1_B.FilterIntReason1,/* 194: Signal */
  &Control_software_v1_1_B.FilterIntReason2,/* 195: Signal */
  &Control_software_v1_1_B.FilterIntReason3,/* 196: Signal */
  &Control_software_v1_1_B.FilterIntReason4,/* 197: Signal */
  &Control_software_v1_1_B.FilterIntReason5,/* 198: Signal */
  &Control_software_v1_1_B.FilterIntReason6,/* 199: Signal */
  &Control_software_v1_1_B.FilterIntReason7,/* 200: Signal */
  &Control_software_v1_1_B.FilterIntReason8,/* 201: Signal */
  &Control_software_v1_1_B.ReadHWFIFO1[0],/* 202: Signal */
  &Control_software_v1_1_B.ReadHWFIFO2[0],/* 203: Signal */
  &Control_software_v1_1_B.ReadHWFIFO3[0],/* 204: Signal */
  &Control_software_v1_1_B.ReadHWFIFO4[0],/* 205: Signal */
  &Control_software_v1_1_B.ReadIntStatus1[0],/* 206: Signal */
  &Control_software_v1_1_P.UnitDelay_InitialCondition,/* 207: Block Parameter */
  &Control_software_v1_1_P.UnitDelay_InitialCondition_n,/* 208: Block Parameter */
  &Control_software_v1_1_P.UnitDelay1_InitialCondition,/* 209: Block Parameter */
  &Control_software_v1_1_P.UnitDelay2_InitialCondition,/* 210: Block Parameter */
  &Control_software_v1_1_P.UnitDelay3_InitialCondition,/* 211: Block Parameter */
  &Control_software_v1_1_P.UnitDelay4_InitialCondition,/* 212: Block Parameter */
  &Control_software_v1_1_P.UnitDelay5_InitialCondition,/* 213: Block Parameter */
  &Control_software_v1_1_P.UnitDelay6_InitialCondition,/* 214: Block Parameter */
  &Control_software_v1_1_P.UnitDelay7_InitialCondition,/* 215: Block Parameter */
  &Control_software_v1_1_P.UnitDelay8_InitialCondition,/* 216: Block Parameter */
  &Control_software_v1_1_P.Constant_Value,/* 217: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_b,/* 218: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_j,/* 219: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_n,/* 220: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P1,/* 221: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P2[0],/* 222: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P3,/* 223: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P4[0],/* 224: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P5[0],/* 225: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P6,/* 226: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P7,/* 227: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P1[0],/* 228: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P2[0],/* 229: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P3[0],/* 230: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P4[0],/* 231: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P5,/* 232: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P6,/* 233: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P7,/* 234: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P1,/* 235: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P2,/* 236: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P3,/* 237: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P4,/* 238: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P5,/* 239: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P6,/* 240: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P7,/* 241: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_k,/* 242: Block Parameter */
  &Control_software_v1_1_P.Switch1_Threshold_g,/* 243: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value,/* 244: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value,/* 245: Block Parameter */
  &Control_software_v1_1_P.Saturation1_UpperSat,/* 246: Block Parameter */
  &Control_software_v1_1_P.Saturation1_LowerSat,/* 247: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold,/* 248: Block Parameter */
  &Control_software_v1_1_P.Switch1_Threshold,/* 249: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength,/* 250: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition,/* 251: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn_InitialStat,/* 252: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialSta,/* 253: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn2_InitialSta,/* 254: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_n,/* 255: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_m,/* 256: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_Initial_dv,/* 257: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P1[0],/* 258: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P2[0],/* 259: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P3[0],/* 260: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P4,/* 261: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P5,/* 262: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P6,/* 263: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P7,/* 264: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P1,/* 265: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P2,/* 266: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P3,/* 267: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P4,/* 268: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P5,/* 269: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P1[0],/* 270: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P2,/* 271: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P3,/* 272: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P4,/* 273: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P5,/* 274: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_b,/* 275: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_c,/* 276: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_jf,/* 277: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_d2,/* 278: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_d,/* 279: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_p,/* 280: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_d,/* 281: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_i,/* 282: Block Parameter */
  &Control_software_v1_1_P.obereKraftsensorGrenze_Value,/* 283: Block Parameter */
  &Control_software_v1_1_P.untereKraftsensorGrenze_Value,/* 284: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain,  /* 285: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value,/* 286: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_l,/* 287: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_l,/* 288: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_f,/* 289: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_p,/* 290: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength,/* 291: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition,/* 292: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_h,/* 293: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value,/* 294: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_l,/* 295: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_l,/* 296: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_d,/* 297: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_e,/* 298: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_h,/* 299: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn_InitialSt_m,/* 300: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P1,/* 301: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P2,/* 302: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P3,/* 303: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P4[0],/* 304: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P5,/* 305: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P6,/* 306: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P7,/* 307: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P8,/* 308: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P1_l,/* 309: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P2_b,/* 310: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P3_n,/* 311: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P4_e[0],/* 312: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P5_o,/* 313: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P6_i[0],/* 314: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P7_i,/* 315: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P8_n,/* 316: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P1,/* 317: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P2,/* 318: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P3,/* 319: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P4[0],/* 320: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P5,/* 321: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P6[0],/* 322: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P7,/* 323: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P8,/* 324: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P1,/* 325: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P2,/* 326: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P3,/* 327: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P1,/* 328: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P2,/* 329: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P3,/* 330: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P1,/* 331: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P2,/* 332: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P3,/* 333: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P1,/* 334: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P2,/* 335: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P3,/* 336: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P1_n,/* 337: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P2_o,/* 338: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P3_n,/* 339: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P4_j,/* 340: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P5_o[0],/* 341: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P1_l,/* 342: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P2_i,/* 343: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P3_h,/* 344: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P4_d,/* 345: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P5_g[0],/* 346: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P1_p,/* 347: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P2_n,/* 348: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P3_k,/* 349: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P4_m,/* 350: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P5_a[0],/* 351: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P1_e,/* 352: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P2_n,/* 353: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P3_p,/* 354: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P4_f,/* 355: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P5_e[0],/* 356: Block Parameter */
  &Control_software_v1_1_P.Setup1_P1,  /* 357: Block Parameter */
  &Control_software_v1_1_P.Setup1_P2,  /* 358: Block Parameter */
  &Control_software_v1_1_P.Setup1_P3,  /* 359: Block Parameter */
  &Control_software_v1_1_P.Setup1_P4,  /* 360: Block Parameter */
  &Control_software_v1_1_P.Setup1_P5,  /* 361: Block Parameter */
  &Control_software_v1_1_P.Setup1_P6,  /* 362: Block Parameter */
  &Control_software_v1_1_P.Setup1_P7,  /* 363: Block Parameter */
  &Control_software_v1_1_P.Setup1_P8,  /* 364: Block Parameter */
  &Control_software_v1_1_P.Setup1_P9,  /* 365: Block Parameter */
  &Control_software_v1_1_P.Setup1_P10, /* 366: Block Parameter */
  &Control_software_v1_1_P.Setup2_P1,  /* 367: Block Parameter */
  &Control_software_v1_1_P.Setup2_P2,  /* 368: Block Parameter */
  &Control_software_v1_1_P.Setup2_P3,  /* 369: Block Parameter */
  &Control_software_v1_1_P.Setup2_P4,  /* 370: Block Parameter */
  &Control_software_v1_1_P.Setup2_P5,  /* 371: Block Parameter */
  &Control_software_v1_1_P.Setup2_P6,  /* 372: Block Parameter */
  &Control_software_v1_1_P.Setup2_P7,  /* 373: Block Parameter */
  &Control_software_v1_1_P.Setup2_P8,  /* 374: Block Parameter */
  &Control_software_v1_1_P.Setup2_P9,  /* 375: Block Parameter */
  &Control_software_v1_1_P.Setup2_P10, /* 376: Block Parameter */
  &Control_software_v1_1_P.Setup3_P1,  /* 377: Block Parameter */
  &Control_software_v1_1_P.Setup3_P2,  /* 378: Block Parameter */
  &Control_software_v1_1_P.Setup3_P3,  /* 379: Block Parameter */
  &Control_software_v1_1_P.Setup3_P4,  /* 380: Block Parameter */
  &Control_software_v1_1_P.Setup3_P5,  /* 381: Block Parameter */
  &Control_software_v1_1_P.Setup3_P6,  /* 382: Block Parameter */
  &Control_software_v1_1_P.Setup3_P7,  /* 383: Block Parameter */
  &Control_software_v1_1_P.Setup3_P8,  /* 384: Block Parameter */
  &Control_software_v1_1_P.Setup3_P9,  /* 385: Block Parameter */
  &Control_software_v1_1_P.Setup3_P10, /* 386: Block Parameter */
  &Control_software_v1_1_P.Setup4_P1,  /* 387: Block Parameter */
  &Control_software_v1_1_P.Setup4_P2,  /* 388: Block Parameter */
  &Control_software_v1_1_P.Setup4_P3,  /* 389: Block Parameter */
  &Control_software_v1_1_P.Setup4_P4,  /* 390: Block Parameter */
  &Control_software_v1_1_P.Setup4_P5,  /* 391: Block Parameter */
  &Control_software_v1_1_P.Setup4_P6,  /* 392: Block Parameter */
  &Control_software_v1_1_P.Setup4_P7,  /* 393: Block Parameter */
  &Control_software_v1_1_P.Setup4_P8,  /* 394: Block Parameter */
  &Control_software_v1_1_P.Setup4_P9,  /* 395: Block Parameter */
  &Control_software_v1_1_P.Setup4_P10, /* 396: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_n,/* 397: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_f,/* 398: Block Parameter */
  &Control_software_v1_1_P.IMU_data_valid_Y0,/* 399: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_be,/* 400: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_n,/* 401: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_d,/* 402: Block Parameter */
  &Control_software_v1_1_P.Constant4_Value,/* 403: Block Parameter */
  &Control_software_v1_1_P.Constant9_Value,/* 404: Block Parameter */
  &Control_software_v1_1_P.BitwiseLogicalOperator_BitMask,/* 405: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P1,/* 406: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P2,/* 407: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P3,/* 408: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P4,/* 409: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P5,/* 410: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P6,/* 411: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P7,/* 412: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P8,/* 413: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P1,/* 414: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P2,/* 415: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P3,/* 416: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P4,/* 417: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P5,/* 418: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P6,/* 419: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P7,/* 420: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P8,/* 421: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P1,/* 422: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P2,/* 423: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P3,/* 424: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P4,/* 425: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P5,/* 426: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P6,/* 427: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P7,/* 428: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P8,/* 429: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P1,/* 430: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P2,/* 431: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P3,/* 432: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P4,/* 433: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P5,/* 434: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P6,/* 435: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P7,/* 436: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P8,/* 437: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P1,/* 438: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P2,/* 439: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P3,/* 440: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P4,/* 441: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P5[0],/* 442: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P1,/* 443: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P2,/* 444: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P3,/* 445: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P4,/* 446: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P5[0],/* 447: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P1,/* 448: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P2,/* 449: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P3,/* 450: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P4,/* 451: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P5[0],/* 452: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P1,/* 453: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P2,/* 454: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P3,/* 455: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P4,/* 456: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P5[0],/* 457: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P1,/* 458: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P2,/* 459: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P3,/* 460: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P1,/* 461: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P2,/* 462: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P3,/* 463: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P1,/* 464: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P2,/* 465: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P3,/* 466: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P1,/* 467: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P2,/* 468: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P3,/* 469: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P1,/* 470: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P2,/* 471: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P3,/* 472: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P1,/* 473: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P2,/* 474: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P3,/* 475: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P1,/* 476: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P2,/* 477: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P3,/* 478: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P1,/* 479: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P2,/* 480: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P3,/* 481: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P1,/* 482: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P2,/* 483: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P3,/* 484: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P4,/* 485: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P1,/* 486: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P2,/* 487: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P3,/* 488: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P4,/* 489: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P1,/* 490: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P2,/* 491: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P3,/* 492: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P4,/* 493: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P1,/* 494: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P2,/* 495: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P3,/* 496: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P4,/* 497: Block Parameter */
  &Control_software_v1_1_P.ReadIntStatus1_P1,/* 498: Block Parameter */
  &Control_software_v1_1_P.ReadIntStatus1_P2,/* 499: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P1,/* 500: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P2,/* 501: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P3,/* 502: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P4,/* 503: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P1,/* 504: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P2,/* 505: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P3,/* 506: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P4,/* 507: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P1,/* 508: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P2,/* 509: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P3,/* 510: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P4,/* 511: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P1,/* 512: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P2,/* 513: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P3,/* 514: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P4,/* 515: Block Parameter */
  &Control_software_v1_1_P.HLC_Param,  /* 516: Model Parameter */
  &Control_software_v1_1_P.AOsat,      /* 517: Model Parameter */
  &Control_software_v1_1_P.Afilt_Sl[0],/* 518: Model Parameter */
  &Control_software_v1_1_P.Afilt_Winch[0],/* 519: Model Parameter */
  &Control_software_v1_1_P.Bfilt_Sl[0],/* 520: Model Parameter */
  &Control_software_v1_1_P.Bfilt_Winch[0],/* 521: Model Parameter */
  &Control_software_v1_1_P.Cfilt_Sl[0],/* 522: Model Parameter */
  &Control_software_v1_1_P.Cfilt_Winch[0],/* 523: Model Parameter */
  &Control_software_v1_1_P.Dfilt_Sl[0],/* 524: Model Parameter */
  &Control_software_v1_1_P.Dfilt_Winch[0],/* 525: Model Parameter */
  &Control_software_v1_1_P.JoyFiltDen[0],/* 526: Model Parameter */
  &Control_software_v1_1_P.JoyFiltNum[0],/* 527: Model Parameter */
  &Control_software_v1_1_P.JoyS_gain,  /* 528: Model Parameter */
  &Control_software_v1_1_P.JoyS_ofst,  /* 529: Model Parameter */
  &Control_software_v1_1_P.JoyS_sat,   /* 530: Model Parameter */
  &Control_software_v1_1_P.JoyW_gain,  /* 531: Model Parameter */
  &Control_software_v1_1_P.JoyW_ofst,  /* 532: Model Parameter */
  &Control_software_v1_1_P.Kpos,       /* 533: Model Parameter */
  &Control_software_v1_1_P.Kspd,       /* 534: Model Parameter */
  &Control_software_v1_1_P.KspdWinch,  /* 535: Model Parameter */
  &Control_software_v1_1_P.NPotSpdEst, /* 536: Model Parameter */
  &Control_software_v1_1_P.PotPosFiltDen[0],/* 537: Model Parameter */
  &Control_software_v1_1_P.PotPosFiltNum[0],/* 538: Model Parameter */
  &Control_software_v1_1_P.Pot_gain,   /* 539: Model Parameter */
  &Control_software_v1_1_P.Pot_max,    /* 540: Model Parameter */
  &Control_software_v1_1_P.Pot_min,    /* 541: Model Parameter */
  &Control_software_v1_1_P.Pot_ofst,   /* 542: Model Parameter */
  &Control_software_v1_1_P.SlMotPosAIgain,/* 543: Model Parameter */
  &Control_software_v1_1_P.SlideMotTorqueMax,/* 544: Model Parameter */
  &Control_software_v1_1_P.SlidePosFiltDen[0],/* 545: Model Parameter */
  &Control_software_v1_1_P.SlidePosFiltNum[0],/* 546: Model Parameter */
  &Control_software_v1_1_P.SlideSpdEstFiltDen[0],/* 547: Model Parameter */
  &Control_software_v1_1_P.SlideSpdEstFiltNum[0],/* 548: Model Parameter */
  &Control_software_v1_1_P.Ts_1ms,     /* 549: Model Parameter */
  &Control_software_v1_1_P.Ts_1s,      /* 550: Model Parameter */
  &Control_software_v1_1_P.WinchDrumRad,/* 551: Model Parameter */
  &Control_software_v1_1_P.WinchMotPosAIgain,/* 552: Model Parameter */
  &Control_software_v1_1_P.WinchMotTorqueMax,/* 553: Model Parameter */
  &Control_software_v1_1_P.WinchPosFiltDen[0],/* 554: Model Parameter */
  &Control_software_v1_1_P.WinchPosFiltNum[0],/* 555: Model Parameter */
  &Control_software_v1_1_P.WinchRefSpdSup,/* 556: Model Parameter */
  &Control_software_v1_1_P.WinchSpdEstFiltDen[0],/* 557: Model Parameter */
  &Control_software_v1_1_P.WinchSpdEstFiltNum[0],/* 558: Model Parameter */
  &Control_software_v1_1_P.WinchTravelMin_m,/* 559: Model Parameter */
  &Control_software_v1_1_P.WinchVoltMax,/* 560: Model Parameter */
  &Control_software_v1_1_P.x0_Sl[0],   /* 561: Model Parameter */
  &Control_software_v1_1_P.x0_Winch[0],/* 562: Model Parameter */
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
  { rtBlockSignals, 207,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 309,
    rtModelParameters, 47 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3898504106U,
    1950818236U,
    540195190U,
    616930913U },
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
