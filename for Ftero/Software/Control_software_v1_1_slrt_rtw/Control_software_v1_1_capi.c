/*
 * Control_software_v1_1_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Control_software_v1_1".
 *
 * Model version              : 1.1729
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Tue Apr 11 10:05:49 2017
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

  { 2, 0, TARGET_STRING("Logging/Data Type Conversion1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 3, 0, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 4, 0, TARGET_STRING("Outputs/Constant1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 5, 0, TARGET_STRING("Outputs/Constant3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 6, 48, TARGET_STRING("Outputs/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 7, 0, TARGET_STRING("Outputs/Saturation1"),
    TARGET_STRING("AO_WinchDriver"), 0, 0, 0, 0, 1 },

  { 8, 0, TARGET_STRING("Outputs/Byte Pack"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 9, 0, TARGET_STRING("Outputs/Byte Unpack1"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 10, 0, TARGET_STRING("Outputs/PNM Receive"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 11, 0, TARGET_STRING("Outputs/Switch"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 12, 48, TARGET_STRING("Outputs/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 13, 50, TARGET_STRING("Spooling_Pos_Controlled/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 14, 49, TARGET_STRING("Spooling_Pos_Controlled/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 15, 0, TARGET_STRING("Spooling_Pos_Controlled/Umrechnung"),
    TARGET_STRING("SpoolingPosSoll"), 0, 0, 0, 0, 1 },

  { 16, 0, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 17, 51, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 19, 0, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 20, 0, TARGET_STRING("Spooling_Pos_Controlled/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 21, 51, TARGET_STRING("Spooling_Pos_Controlled/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 22, 0, TARGET_STRING("Spooling_Pos_Controlled/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 23, 0, TARGET_STRING("Spooling_Pos_Controlled/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 24, 0, TARGET_STRING("Spooling_Pos_Controlled/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 25, 0, TARGET_STRING("Spooling_Pos_Controlled/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 26, 53, TARGET_STRING("Spooling_Speed_Controlled/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 27, 0, TARGET_STRING("Spooling_Speed_Controlled/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 28, 0, TARGET_STRING("Spooling_Speed_Controlled/Umrechnung"),
    TARGET_STRING("SpoolingPosSoll"), 0, 0, 0, 0, 1 },

  { 29, 0, TARGET_STRING("Spooling_Speed_Controlled/Umrechnung1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 30, 0, TARGET_STRING("Spooling_Speed_Controlled/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 31, 0, TARGET_STRING("Spooling_Speed_Controlled/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 32, 0, TARGET_STRING("Spooling_Speed_Controlled/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 56, TARGET_STRING("Winch_Conrtol/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 0, TARGET_STRING("Winch_Conrtol/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 63, TARGET_STRING("Winch_Conrtol/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 0, TARGET_STRING("Winch_Conrtol/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 59, TARGET_STRING("Winch_Conrtol/Switch10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 61, TARGET_STRING("Winch_Conrtol/Switch11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 55, TARGET_STRING("Winch_Conrtol/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 57, TARGET_STRING("Winch_Conrtol/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING("Winch_Conrtol/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 44, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation"),
    TARGET_STRING("CI_JoyS"), 0, 0, 0, 0, 1 },

  { 45, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("CI_JoyW"), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 2, TARGET_STRING("Input conditioning and estimators/Subsystem1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain1"),
    TARGET_STRING("CI_PotSpd"), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Saturation"),
    TARGET_STRING("CI_PotPos"), 0, 0, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 55, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p1"),
    TARGET_STRING("AI_Joy_W"), 0, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p2"),
    TARGET_STRING("AI_Joy_S"), 1, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p3"),
    TARGET_STRING("AI_mot_slide_pos"), 2, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p4"),
    TARGET_STRING("AI_mot_winch_pos"), 3, 0, 0, 0, 1 },

  { 62, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p5"),
    TARGET_STRING("AI_pot_pos"), 4, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("DI_SlideLimitB"), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p1"),
    TARGET_STRING("DI_Enable"), 0, 0, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p2"),
    TARGET_STRING("DI_WinchMode"), 1, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p3"),
    TARGET_STRING("DI_Takeoff"), 2, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p4"),
    TARGET_STRING("DI_Landing"), 3, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p5"),
    TARGET_STRING("DI_Operator"), 4, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p6"),
    TARGET_STRING("DI_GliderPres"), 5, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p7"),
    TARGET_STRING("DI_SlideLimitF"), 6, 0, 0, 0, 1 },

  { 71, 0, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 73, 0, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 74, 0, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 75, 0, TARGET_STRING("Logging/Log_conditioning/Rate Transition"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 76, 47, TARGET_STRING("Logging/Time_Scope_trigger/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Logging/Time_Scope_trigger/Switch1"),
    TARGET_STRING("Trigger_time"), 0, 0, 0, 0, 0 },

  { 78, 66, TARGET_STRING("Winch_Conrtol/Emergency/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 65, TARGET_STRING("Winch_Conrtol/Emergency/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 80, 67, TARGET_STRING("Winch_Conrtol/Emergency/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 81, 64, TARGET_STRING("Winch_Conrtol/Emergency/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 66, TARGET_STRING("Winch_Conrtol/Emergency/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 83, 65, TARGET_STRING("Winch_Conrtol/Emergency/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 67, TARGET_STRING("Winch_Conrtol/Emergency/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 85, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 86, 57, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 87, 57, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 88, 61, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 89, 61, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 90, 59, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator4"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 91, 59, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator5"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 92, 55, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator6"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 93, 55, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator7"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 94, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 76, TARGET_STRING("Winch_Conrtol/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 74, TARGET_STRING("Winch_Conrtol/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 97, 75, TARGET_STRING("Winch_Conrtol/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 98, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 99, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 73, TARGET_STRING("Winch_Conrtol/Subsystem/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 106, 78, TARGET_STRING("Winch_Conrtol/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("Winch_Conrtol/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 108, 0, TARGET_STRING("Winch_Conrtol/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 77, TARGET_STRING("Winch_Conrtol/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING("Winch_Conrtol/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 0, TARGET_STRING("Winch_Conrtol/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING("Winch_Conrtol/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 113, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 114, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 115, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 116, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("CI_WinchPos"), 0, 0, 0, 0, 1 },

  { 117, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete State-Space"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 118, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 121, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 122, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 123, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 124, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 125, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("WinchMotTorqueEst"), 0, 0, 0, 0, 1 },

  { 126, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("WinchMotSpeedEst"), 0, 0, 0, 0, 1 },

  { 127, 3, TARGET_STRING(
    "Inputs/RS232_read/Compass_read/Embedded MATLAB Function"),
    TARGET_STRING("GU_Yaw"), 0, 0, 0, 0, 0 },

  { 128, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 129, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 3, 4, 0, 0 },

  { 130, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1"),
    TARGET_STRING("GU_Lat"), 0, 0, 0, 0, 0 },

  { 131, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p2"),
    TARGET_STRING("GU_Lon"), 1, 0, 0, 0, 0 },

  { 132, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p3"),
    TARGET_STRING("GU_h"), 2, 0, 0, 0, 0 },

  { 133, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p4"),
    TARGET_STRING("Geo_Gu_h"), 3, 0, 0, 0, 0 },

  { 134, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 135, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 3, 5, 0, 0 },

  { 136, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 3 },

  { 137, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING(""), 0, 3, 6, 0, 3 },

  { 138, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 139, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition1"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 140, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 141, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition3"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 142, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 143, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition5"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 144, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition6"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 145, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition7"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 146, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 147, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 148, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 149, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 150, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 151, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 152, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 153, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 154, 70, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 155, 69, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 156, 0, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 157, 68, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 158, 70, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 159, 69, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 160, 0, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 161, 72, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 162, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 163, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 164, 71, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 165, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 166, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 167, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 168, 77, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 169, 0, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 170, 5, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 171, 6, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data"),
    TARGET_STRING(""), 0, 0, 7, 0, 3 },

  { 172, 71, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 173, 0, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 174, 7, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function"),
    TARGET_STRING("time"), 0, 0, 0, 0, 3 },

  { 175, 8, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1"),
    TARGET_STRING("GPSFlags"), 0, 0, 0, 0, 3 },

  { 176, 9, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function2"),
    TARGET_STRING("NbSat"), 0, 0, 0, 0, 3 },

  { 177, 10, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function"),
    TARGET_STRING("Mx"), 0, 0, 0, 0, 3 },

  { 178, 11, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function1"),
    TARGET_STRING("My"), 0, 0, 0, 0, 3 },

  { 179, 12, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function3"),
    TARGET_STRING("Mz"), 0, 0, 0, 0, 3 },

  { 180, 13, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function"),
    TARGET_STRING("year"), 0, 0, 0, 0, 3 },

  { 181, 14, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function1"),
    TARGET_STRING("nanoseconds"), 0, 0, 0, 0, 3 },

  { 182, 15, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function2"),
    TARGET_STRING("month"), 0, 0, 0, 0, 3 },

  { 183, 16, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function3"),
    TARGET_STRING("day"), 0, 0, 0, 0, 3 },

  { 184, 17, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function4"),
    TARGET_STRING("hour"), 0, 0, 0, 0, 3 },

  { 185, 18, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function5"),
    TARGET_STRING("min"), 0, 0, 0, 0, 3 },

  { 186, 19, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function6"),
    TARGET_STRING("sec"), 0, 0, 0, 0, 3 },

  { 187, 20, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14/Embedded MATLAB Function"),
    TARGET_STRING("Time_sr"), 0, 0, 0, 0, 3 },

  { 188, 21, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1"),
    TARGET_STRING("longitude"), 0, 0, 0, 0, 3 },

  { 189, 22, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function2"),
    TARGET_STRING("height"), 0, 0, 0, 0, 3 },

  { 190, 23, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function3"),
    TARGET_STRING("latitude"), 0, 0, 0, 0, 3 },

  { 191, 24, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function1"),
    TARGET_STRING("v_east"), 0, 0, 0, 0, 3 },

  { 192, 25, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function2"),
    TARGET_STRING("v_north"), 0, 0, 0, 0, 3 },

  { 193, 26, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function3"),
    TARGET_STRING("v_down"), 0, 0, 0, 0, 3 },

  { 194, 27, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function4"),
    TARGET_STRING("heading"), 0, 0, 0, 0, 3 },

  { 195, 28, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17/Embedded MATLAB Function2"),
    TARGET_STRING("Altitude"), 0, 0, 0, 0, 3 },

  { 196, 29, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function"),
    TARGET_STRING("lat_filt"), 0, 0, 0, 0, 3 },

  { 197, 30, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function1"),
    TARGET_STRING("long_filt"), 0, 0, 0, 0, 3 },

  { 198, 31, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function2"),
    TARGET_STRING("height_filt"), 0, 0, 0, 0, 3 },

  { 199, 32, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function"),
    TARGET_STRING("Vx"), 0, 0, 0, 0, 3 },

  { 200, 33, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function1"),
    TARGET_STRING("Vy"), 0, 0, 0, 0, 3 },

  { 201, 34, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function3"),
    TARGET_STRING("Vz"), 0, 0, 0, 0, 3 },

  { 202, 35, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function"),
    TARGET_STRING("q1"), 0, 0, 0, 0, 3 },

  { 203, 36, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function1"),
    TARGET_STRING("q2"), 0, 0, 0, 0, 3 },

  { 204, 37, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function3"),
    TARGET_STRING("q3"), 0, 0, 0, 0, 3 },

  { 205, 38, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function4"),
    TARGET_STRING("q4"), 0, 0, 0, 0, 3 },

  { 206, 39, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function"),
    TARGET_STRING("Gx"), 0, 0, 0, 0, 3 },

  { 207, 40, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function1"),
    TARGET_STRING("Gy"), 0, 0, 0, 0, 3 },

  { 208, 41, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function3"),
    TARGET_STRING("Gz"), 0, 0, 0, 0, 3 },

  { 209, 42, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function"),
    TARGET_STRING("Ax"), 0, 0, 0, 0, 3 },

  { 210, 43, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function1"),
    TARGET_STRING("Ay"), 0, 0, 0, 0, 3 },

  { 211, 44, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function3"),
    TARGET_STRING("Az"), 0, 0, 0, 0, 3 },

  { 212, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 213, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 214, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 215, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 216, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 4 },

  { 217, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Relational Operator"),
    TARGET_STRING(""), 0, 2, 8, 0, 4 },

  { 218, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING(""), 0, 5, 8, 0, 4 },

  { 219, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 220, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 221, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 222, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 223, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 224, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 225, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 226, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 227, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 228, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 229, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 230, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 231, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 232, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 233, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 234, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 235, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 236, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 237, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 238, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 239, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 240, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 241, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 242, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 243, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING(""), 0, 5, 8, 0, 4 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 244, TARGET_STRING("Auxiliary variables/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 245, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 246, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P2"), 0, 11, 0 },

  { 247, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 248, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 249, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 250, TARGET_STRING("Outputs/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 251, TARGET_STRING("Outputs/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 252, TARGET_STRING("Outputs/Constant2"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 253, TARGET_STRING("Outputs/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 254, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 255, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P2"), 0, 12, 0 },

  { 256, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 257, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P4"), 0, 12, 0 },

  { 258, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P5"), 0, 12, 0 },

  { 259, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 260, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 261, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 262, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 263, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 264, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 265, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 266, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 267, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 268, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 269, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 270, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 271, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 272, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 273, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 274, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 275, TARGET_STRING("Outputs/PNM Receive"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 276, TARGET_STRING("Outputs/PNM Receive"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 277, TARGET_STRING("Outputs/PNM Receive"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 278, TARGET_STRING("Outputs/PNM Receive"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 279, TARGET_STRING("Outputs/PNM Send1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 280, TARGET_STRING("Outputs/PNM Send1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 281, TARGET_STRING("Outputs/PNM Send1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 282, TARGET_STRING("Outputs/PNM Send1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 283, TARGET_STRING("Outputs/PNM Setup1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 284, TARGET_STRING("Outputs/PNM Setup1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 285, TARGET_STRING("Outputs/PNM Setup1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 286, TARGET_STRING("Outputs/PNM Setup1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 287, TARGET_STRING("Outputs/PNM Setup1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 288, TARGET_STRING("Outputs/PNM Setup1"),
    TARGET_STRING("P6"), 0, 13, 0 },

  { 289, TARGET_STRING("Outputs/PNM Setup1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 290, TARGET_STRING("Spooling_Pos_Controlled/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 291, TARGET_STRING("Spooling_Pos_Controlled/Spooling Geschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 292, TARGET_STRING("Spooling_Pos_Controlled/erste Grenze Spooling"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 293, TARGET_STRING("Spooling_Pos_Controlled/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 294, TARGET_STRING("Spooling_Pos_Controlled/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 295, TARGET_STRING("Spooling_Pos_Controlled/Umrechnung"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 296, TARGET_STRING("Spooling_Pos_Controlled/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 297, TARGET_STRING("Spooling_Pos_Controlled/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 298, TARGET_STRING("Spooling_Pos_Controlled/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 299, TARGET_STRING("Spooling_Pos_Controlled/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 300, TARGET_STRING("Spooling_Speed_Controlled/Spooling Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 301, TARGET_STRING("Spooling_Speed_Controlled/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 302, TARGET_STRING("Spooling_Speed_Controlled/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 303, TARGET_STRING("Spooling_Speed_Controlled/Umrechnung"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 304, TARGET_STRING("Spooling_Speed_Controlled/Umrechnung1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 305, TARGET_STRING("Winch_Conrtol/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 306, TARGET_STRING("Winch_Conrtol/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 307, TARGET_STRING("Winch_Conrtol/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 308, TARGET_STRING("Winch_Conrtol/konstante Ausrollgeschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 309, TARGET_STRING("Winch_Conrtol/konstante Ausrollgeschw.1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 310, TARGET_STRING("Winch_Conrtol/konstante Einrollgeschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 311, TARGET_STRING("Winch_Conrtol/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 312, TARGET_STRING("Winch_Conrtol/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 313, TARGET_STRING("Winch_Conrtol/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 314, TARGET_STRING("Winch_Conrtol/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 315, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 316, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 317, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 318, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 319, TARGET_STRING("Input conditioning and estimators/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 320, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 321, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 322, TARGET_STRING("Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 323, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 324, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 325, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P3"), 0, 14, 0 },

  { 326, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 327, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 328, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 329, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 330, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 331, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 332, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 333, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 334, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 335, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 336, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 337, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 338, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 339, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 340, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 341, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 342, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 343, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 344, TARGET_STRING("Logging/Time_Scope_trigger/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 345, TARGET_STRING("Logging/Time_Scope_trigger/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 346, TARGET_STRING("Logging/Time_Scope_trigger/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 347, TARGET_STRING("Winch_Conrtol/Emergency/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 348, TARGET_STRING("Winch_Conrtol/Emergency/obere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 349, TARGET_STRING("Winch_Conrtol/Emergency/untere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 350, TARGET_STRING("Winch_Conrtol/Emergency/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 351, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 352, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 353, TARGET_STRING("Winch_Conrtol/Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 354, TARGET_STRING("Winch_Conrtol/Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 355, TARGET_STRING("Winch_Conrtol/Subsystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 356, TARGET_STRING("Winch_Conrtol/Subsystem/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 357, TARGET_STRING("Winch_Conrtol/Subsystem/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 358, TARGET_STRING("Winch_Conrtol/Subsystem/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 359, TARGET_STRING("Winch_Conrtol/Subsystem/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 360, TARGET_STRING("Winch_Conrtol/Subsystem/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 361, TARGET_STRING("Winch_Conrtol/Subsystem/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 362, TARGET_STRING("Winch_Conrtol/Subsystem/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 363, TARGET_STRING("Winch_Conrtol/Subsystem/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 364, TARGET_STRING("Winch_Conrtol/Subsystem/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 365, TARGET_STRING("Winch_Conrtol/Subsystem/Delay2"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 366, TARGET_STRING("Winch_Conrtol/Subsystem/Delay2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 367, TARGET_STRING("Winch_Conrtol/Subsystem/Delay3"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 368, TARGET_STRING("Winch_Conrtol/Subsystem/Delay3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 369, TARGET_STRING("Winch_Conrtol/Subsystem/Delay4"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 370, TARGET_STRING("Winch_Conrtol/Subsystem/Delay4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 371, TARGET_STRING("Winch_Conrtol/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 372, TARGET_STRING("Winch_Conrtol/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 373, TARGET_STRING("Winch_Conrtol/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 374, TARGET_STRING("Winch_Conrtol/damper/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 375, TARGET_STRING("Winch_Conrtol/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 376, TARGET_STRING("Winch_Conrtol/damper/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 377, TARGET_STRING("Winch_Conrtol/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 378, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 379, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 380, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 381, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 382, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 383, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 384, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 385, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 13, 0 },

  { 386, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 387, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 388, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 389, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 390, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 391, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 392, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 393, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 11, 0 },

  { 394, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 395, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 13, 0 },

  { 396, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 397, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 398, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 399, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 400, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 401, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P4"), 0, 16, 0 },

  { 402, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 403, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P6"), 0, 13, 0 },

  { 404, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 405, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 406, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 407, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 408, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 409, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 410, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 411, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 412, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 413, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 414, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 415, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 416, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 417, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 418, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 419, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 420, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 421, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 422, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 423, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 424, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 425, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 426, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 427, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 428, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 429, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 430, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 431, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 432, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 433, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 434, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 435, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 436, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 437, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 438, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 439, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 440, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 441, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 442, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 443, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 444, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 445, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 446, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 447, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 448, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 449, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 450, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 451, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 452, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 453, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 454, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 455, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 456, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 457, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 458, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 459, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 460, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 461, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 462, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 463, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 464, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 465, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 466, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 467, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 468, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 469, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 470, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 471, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 472, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 473, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 474, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 475, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 476, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 477, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 478, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 479, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/obere Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 480, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/untere Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 481, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 482, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 483, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 484, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 485, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 486, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 487, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 488, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 489, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 490, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 491, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data_valid"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 492, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 493, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 494, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 495, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 496, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 497, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 498, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant9"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 499, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING("BitMask"), 5, 0, 0 },

  { 500, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 501, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 502, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 503, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 504, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 505, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 506, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 507, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 508, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 509, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 510, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 511, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 512, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 513, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 514, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 515, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 516, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 517, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 518, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 519, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 520, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 521, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 522, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 523, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 524, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 525, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 526, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 527, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 528, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 529, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 530, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 531, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 532, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 533, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 534, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 535, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 536, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 537, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 538, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 539, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 540, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 541, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 542, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 543, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 544, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 545, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 546, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 547, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 548, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 549, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 550, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 551, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 552, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 553, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 554, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 555, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 556, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 557, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 558, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 559, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 560, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 561, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 562, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 563, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 564, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 565, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 566, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 567, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 568, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 569, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 570, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 571, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 572, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 573, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 574, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 575, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 576, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 577, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 578, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 579, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 580, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 581, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 582, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 583, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 584, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 585, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 586, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 587, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 588, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 589, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 590, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 591, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 592, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 593, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 594, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 595, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 596, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 597, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 598, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 599, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 600, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 601, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 602, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 603, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 604, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 605, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 606, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 607, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 608, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 609, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 610, TARGET_STRING("AOsat"), 0, 0, 0 },

  { 611, TARGET_STRING("Afilt_Winch"), 0, 18, 0 },

  { 612, TARGET_STRING("Bfilt_Winch"), 0, 18, 0 },

  { 613, TARGET_STRING("Cfilt_Winch"), 0, 18, 0 },

  { 614, TARGET_STRING("Dfilt_Winch"), 0, 18, 0 },

  { 615, TARGET_STRING("JoyFiltDen"), 0, 12, 0 },

  { 616, TARGET_STRING("JoyFiltNum"), 0, 12, 0 },

  { 617, TARGET_STRING("JoyS_gain"), 0, 0, 0 },

  { 618, TARGET_STRING("JoyS_ofst"), 0, 0, 0 },

  { 619, TARGET_STRING("JoyS_sat"), 0, 0, 0 },

  { 620, TARGET_STRING("JoyW_gain"), 0, 0, 0 },

  { 621, TARGET_STRING("JoyW_ofst"), 0, 0, 0 },

  { 622, TARGET_STRING("KspdWinch"), 0, 0, 0 },

  { 623, TARGET_STRING("NPotSpdEst"), 0, 0, 0 },

  { 624, TARGET_STRING("PotPosFiltDen"), 0, 12, 0 },

  { 625, TARGET_STRING("PotPosFiltNum"), 0, 12, 0 },

  { 626, TARGET_STRING("Pot_gain"), 0, 0, 0 },

  { 627, TARGET_STRING("Pot_max"), 0, 0, 0 },

  { 628, TARGET_STRING("Pot_min"), 0, 0, 0 },

  { 629, TARGET_STRING("Pot_ofst"), 0, 0, 0 },

  { 630, TARGET_STRING("Ts_1ms"), 0, 0, 0 },

  { 631, TARGET_STRING("Ts_1s"), 0, 0, 0 },

  { 632, TARGET_STRING("WinchDrumRad"), 0, 0, 0 },

  { 633, TARGET_STRING("WinchMotPosAIgain"), 0, 0, 0 },

  { 634, TARGET_STRING("WinchMotTorqueMax"), 0, 0, 0 },

  { 635, TARGET_STRING("WinchPosFiltDen"), 0, 12, 0 },

  { 636, TARGET_STRING("WinchPosFiltNum"), 0, 12, 0 },

  { 637, TARGET_STRING("WinchRefSpdSup"), 0, 0, 0 },

  { 638, TARGET_STRING("WinchSpdEstFiltDen"), 0, 12, 0 },

  { 639, TARGET_STRING("WinchSpdEstFiltNum"), 0, 12, 0 },

  { 640, TARGET_STRING("WinchTravelMin_m"), 0, 0, 0 },

  { 641, TARGET_STRING("WinchVoltMax"), 0, 0, 0 },

  { 642, TARGET_STRING("x0_Winch"), 0, 3, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Control_software_v1_1_B.Sum_a,      /* 0: Signal */
  &Control_software_v1_1_B.UnitDelay,  /* 1: Signal */
  &Control_software_v1_1_B.DataTypeConversion1[0],/* 2: Signal */
  &Control_software_v1_1_B.WallTime1[0],/* 3: Signal */
  &Control_software_v1_1_B.Constant1,  /* 4: Signal */
  &Control_software_v1_1_B.Constant3,  /* 5: Signal */
  &Control_software_v1_1_B.RelationalOperator_c,/* 6: Signal */
  &Control_software_v1_1_B.AO_WinchDriver,/* 7: Signal */
  &Control_software_v1_1_B.BytePack,   /* 8: Signal */
  &Control_software_v1_1_B.ByteUnpack1,/* 9: Signal */
  &Control_software_v1_1_B.PNMReceive, /* 10: Signal */
  &Control_software_v1_1_B.Switch_g,   /* 11: Signal */
  &Control_software_v1_1_B.Switch1_b,  /* 12: Signal */
  &Control_software_v1_1_B.Gain_kk,    /* 13: Signal */
  &Control_software_v1_1_B.Gain1_p,    /* 14: Signal */
  &Control_software_v1_1_B.SpoolingPosSoll_o,/* 15: Signal */
  &Control_software_v1_1_B.RelationalOperator_o,/* 16: Signal */
  &Control_software_v1_1_B.RelationalOperator1_ba,/* 17: Signal */
  &Control_software_v1_1_B.RelationalOperator2,/* 18: Signal */
  &Control_software_v1_1_B.RelationalOperator3,/* 19: Signal */
  &Control_software_v1_1_B.Switch_l,   /* 20: Signal */
  &Control_software_v1_1_B.Switch1_l,  /* 21: Signal */
  &Control_software_v1_1_B.Switch2,    /* 22: Signal */
  &Control_software_v1_1_B.Switch3,    /* 23: Signal */
  &Control_software_v1_1_B.Delay_a,    /* 24: Signal */
  &Control_software_v1_1_B.Delay1_c,   /* 25: Signal */
  &Control_software_v1_1_B.Gain_k,     /* 26: Signal */
  &Control_software_v1_1_B.Gain1_h,    /* 27: Signal */
  &Control_software_v1_1_B.SpoolingPosSoll,/* 28: Signal */
  &Control_software_v1_1_B.Umrechnung1,/* 29: Signal */
  &Control_software_v1_1_B.RelationalOperator,/* 30: Signal */
  &Control_software_v1_1_B.RelationalOperator1_h,/* 31: Signal */
  &Control_software_v1_1_B.Switch_b,   /* 32: Signal */
  &Control_software_v1_1_B.Sum_k,      /* 33: Signal */
  &Control_software_v1_1_B.Sum2,       /* 34: Signal */
  &Control_software_v1_1_B.Switch_dl,  /* 35: Signal */
  &Control_software_v1_1_B.Switch1_i3, /* 36: Signal */
  &Control_software_v1_1_B.Switch10,   /* 37: Signal */
  &Control_software_v1_1_B.Switch11,   /* 38: Signal */
  &Control_software_v1_1_B.Switch8,    /* 39: Signal */
  &Control_software_v1_1_B.Switch9,    /* 40: Signal */
  &Control_software_v1_1_B.Delay,      /* 41: Signal */
  &Control_software_v1_1_B.Gain,       /* 42: Signal */
  &Control_software_v1_1_B.Gain1,      /* 43: Signal */
  &Control_software_v1_1_B.CI_JoyS,    /* 44: Signal */
  &Control_software_v1_1_B.CI_JoyW,    /* 45: Signal */
  &Control_software_v1_1_B.Sum_n,      /* 46: Signal */
  &Control_software_v1_1_B.Sum1,       /* 47: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn,/* 48: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn1,/* 49: Signal */
  &Control_software_v1_1_B.Gain_k4,    /* 50: Signal */
  &Control_software_v1_1_B.Gain_f,     /* 51: Signal */
  &Control_software_v1_1_B.CI_PotSpd,  /* 52: Signal */
  &Control_software_v1_1_B.CI_PotPos,  /* 53: Signal */
  &Control_software_v1_1_B.Sum_b,      /* 54: Signal */
  &Control_software_v1_1_B.Sum1_b,     /* 55: Signal */
  &Control_software_v1_1_B.Delay_e,    /* 56: Signal */
  &Control_software_v1_1_B.DiscreteTransferFcn1_c,/* 57: Signal */
  &Control_software_v1_1_B.AI_Joy_W,   /* 58: Signal */
  &Control_software_v1_1_B.AI_Joy_S,   /* 59: Signal */
  &Control_software_v1_1_B.AI_mot_slide_pos,/* 60: Signal */
  &Control_software_v1_1_B.AI_mot_winch_pos,/* 61: Signal */
  &Control_software_v1_1_B.AI_pot_pos, /* 62: Signal */
  &Control_software_v1_1_B.DI_SlideLimitB,/* 63: Signal */
  &Control_software_v1_1_B.DI_Enable,  /* 64: Signal */
  &Control_software_v1_1_B.DI_WinchMode,/* 65: Signal */
  &Control_software_v1_1_B.DI_Takeoff, /* 66: Signal */
  &Control_software_v1_1_B.DI_Landing, /* 67: Signal */
  &Control_software_v1_1_B.DI_Operator,/* 68: Signal */
  &Control_software_v1_1_B.DI_GliderPres,/* 69: Signal */
  &Control_software_v1_1_B.DI_SlideLimitF,/* 70: Signal */
  &Control_software_v1_1_B.Constant,   /* 71: Signal */
  &Control_software_v1_1_B.Constant1_d,/* 72: Signal */
  &Control_software_v1_1_B.Constant2_j,/* 73: Signal */
  &Control_software_v1_1_B.Constant3_h,/* 74: Signal */
  &Control_software_v1_1_B.RateTransition_i[0],/* 75: Signal */
  &Control_software_v1_1_B.Switch_ku,  /* 76: Signal */
  &Control_software_v1_1_B.Trigger_time,/* 77: Signal */
  &Control_software_v1_1_B.Gain_j,     /* 78: Signal */
  &Control_software_v1_1_B.RelationalOperator_j,/* 79: Signal */
  &Control_software_v1_1_B.RelationalOperator1_b,/* 80: Signal */
  &Control_software_v1_1_B.Sum_no,     /* 81: Signal */
  &Control_software_v1_1_B.Sum1_j,     /* 82: Signal */
  &Control_software_v1_1_B.Switch_h,   /* 83: Signal */
  &Control_software_v1_1_B.Switch1_o,  /* 84: Signal */
  &Control_software_v1_1_B.Delay_k,    /* 85: Signal */
  &Control_software_v1_1_B.LogicalOperator,/* 86: Signal */
  &Control_software_v1_1_B.LogicalOperator1,/* 87: Signal */
  &Control_software_v1_1_B.LogicalOperator2,/* 88: Signal */
  &Control_software_v1_1_B.LogicalOperator3,/* 89: Signal */
  &Control_software_v1_1_B.LogicalOperator4,/* 90: Signal */
  &Control_software_v1_1_B.LogicalOperator5,/* 91: Signal */
  &Control_software_v1_1_B.LogicalOperator6,/* 92: Signal */
  &Control_software_v1_1_B.LogicalOperator7,/* 93: Signal */
  &Control_software_v1_1_B.Switch,     /* 94: Signal */
  &Control_software_v1_1_B.Switch1_p,  /* 95: Signal */
  &Control_software_v1_1_B.Switch2_n,  /* 96: Signal */
  &Control_software_v1_1_B.Switch3_b,  /* 97: Signal */
  &Control_software_v1_1_B.Switch4,    /* 98: Signal */
  &Control_software_v1_1_B.Switch5,    /* 99: Signal */
  &Control_software_v1_1_B.Switch6,    /* 100: Signal */
  &Control_software_v1_1_B.Switch7,    /* 101: Signal */
  &Control_software_v1_1_B.Delay1,     /* 102: Signal */
  &Control_software_v1_1_B.Delay2,     /* 103: Signal */
  &Control_software_v1_1_B.Delay3,     /* 104: Signal */
  &Control_software_v1_1_B.Delay4,     /* 105: Signal */
  &Control_software_v1_1_B.Gain_fi,    /* 106: Signal */
  &Control_software_v1_1_B.Sum_m,      /* 107: Signal */
  &Control_software_v1_1_B.Sum1_e,     /* 108: Signal */
  &Control_software_v1_1_B.Switch_c,   /* 109: Signal */
  &Control_software_v1_1_B.Switch1_d,  /* 110: Signal */
  &Control_software_v1_1_B.Delay_kl,   /* 111: Signal */
  &Control_software_v1_1_B.Delay1_j,   /* 112: Signal */
  &Control_software_v1_1_B.Gain_m,     /* 113: Signal */
  &Control_software_v1_1_B.Sum_p,      /* 114: Signal */
  &Control_software_v1_1_B.Sum1_n,     /* 115: Signal */
  &Control_software_v1_1_B.CI_WinchPos,/* 116: Signal */
  &Control_software_v1_1_B.DiscreteStateSpace[0],/* 117: Signal */
  &Control_software_v1_1_B.Gain_g,     /* 118: Signal */
  &Control_software_v1_1_B.Gain1_d,    /* 119: Signal */
  &Control_software_v1_1_B.Saturation, /* 120: Signal */
  &Control_software_v1_1_B.Saturation1,/* 121: Signal */
  &Control_software_v1_1_B.Sum_c,      /* 122: Signal */
  &Control_software_v1_1_B.Sum1_nr,    /* 123: Signal */
  &Control_software_v1_1_B.Sum2_a,     /* 124: Signal */
  &Control_software_v1_1_B.WinchMotTorqueEst,/* 125: Signal */
  &Control_software_v1_1_B.WinchMotSpeedEst,/* 126: Signal */
  &Control_software_v1_1_B.GU_Yaw,     /* 127: Signal */
  &Control_software_v1_1_B.RateTransition4_p,/* 128: Signal */
  &Control_software_v1_1_B.FIFOASCIIread1[0],/* 129: Signal */
  &Control_software_v1_1_B.GU_Lat,     /* 130: Signal */
  &Control_software_v1_1_B.GU_Lon,     /* 131: Signal */
  &Control_software_v1_1_B.GU_h,       /* 132: Signal */
  &Control_software_v1_1_B.Geo_GU_h,   /* 133: Signal */
  &Control_software_v1_1_B.RateTransition4_d,/* 134: Signal */
  &Control_software_v1_1_B.FIFOASCIIread1_k[0],/* 135: Signal */
  &Control_software_v1_1_B.RateTransition4_f,/* 136: Signal */
  &Control_software_v1_1_B.FIFOASCIIread[0],/* 137: Signal */
  &Control_software_v1_1_B.RateTransition,/* 138: Signal */
  &Control_software_v1_1_B.RateTransition1,/* 139: Signal */
  &Control_software_v1_1_B.RateTransition2,/* 140: Signal */
  &Control_software_v1_1_B.RateTransition3,/* 141: Signal */
  &Control_software_v1_1_B.RateTransition4,/* 142: Signal */
  &Control_software_v1_1_B.RateTransition5,/* 143: Signal */
  &Control_software_v1_1_B.RateTransition6,/* 144: Signal */
  &Control_software_v1_1_B.RateTransition7,/* 145: Signal */
  &Control_software_v1_1_B.FIFOwrite1_o1,/* 146: Signal */
  &Control_software_v1_1_B.FIFOwrite1_o2,/* 147: Signal */
  &Control_software_v1_1_B.FIFOwrite2_o1,/* 148: Signal */
  &Control_software_v1_1_B.FIFOwrite2_o2,/* 149: Signal */
  &Control_software_v1_1_B.FIFOwrite3_o1,/* 150: Signal */
  &Control_software_v1_1_B.FIFOwrite3_o2,/* 151: Signal */
  &Control_software_v1_1_B.FIFOwrite4_o1,/* 152: Signal */
  &Control_software_v1_1_B.FIFOwrite4_o2,/* 153: Signal */
  &Control_software_v1_1_B.Gain_mz,    /* 154: Signal */
  &Control_software_v1_1_B.RelationalOperator_a,/* 155: Signal */
  &Control_software_v1_1_B.RelationalOperator1,/* 156: Signal */
  &Control_software_v1_1_B.Sum_my,     /* 157: Signal */
  &Control_software_v1_1_B.Sum1_k,     /* 158: Signal */
  &Control_software_v1_1_B.Switch_k,   /* 159: Signal */
  &Control_software_v1_1_B.Switch1,    /* 160: Signal */
  &Control_software_v1_1_B.Gain_mu,    /* 161: Signal */
  &Control_software_v1_1_B.Sum,        /* 162: Signal */
  &Control_software_v1_1_B.Sum1_l,     /* 163: Signal */
  &Control_software_v1_1_B.Switch_d,   /* 164: Signal */
  &Control_software_v1_1_B.Switch1_i,  /* 165: Signal */
  &Control_software_v1_1_B.Delay_c,    /* 166: Signal */
  &Control_software_v1_1_B.Delay1_h,   /* 167: Signal */
  &Control_software_v1_1_B.Compare_k,  /* 168: Signal */
  &Control_software_v1_1_B.Compare_m,  /* 169: Signal */
  &Control_software_v1_1_B.CRC_valid,  /* 170: Signal */
  &Control_software_v1_1_B.IMU_data[0],/* 171: Signal */
  &Control_software_v1_1_B.Compare_b,  /* 172: Signal */
  &Control_software_v1_1_B.Compare,    /* 173: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_l.uint32_out,/* 174: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_e.uint8_out,/* 175: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_h.uint8_out,/* 176: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_b.sing_out,/* 177: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_j.sing_out,/* 178: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_ps.sing_out,/* 179: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_a.uint8_out,/* 180: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_c.uint32_out,/* 181: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_p.uint8_out,/* 182: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_k.uint8_out,/* 183: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_h.uint8_out,/* 184: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction5.uint8_out,/* 185: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction6.uint8_out,/* 186: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_bf.uint32_out,/* 187: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_g.int32_out,/* 188: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2.int32_out,/* 189: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_pw.int32_out,/* 190: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_n.int32_out,/* 191: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_n.int32_out,/* 192: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_o.int32_out,/* 193: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_g.int32_out,/* 194: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_m.int32_out,/* 195: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_k.double_out,/* 196: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_a.double_out,/* 197: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_g.double_out,/* 198: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_j.sing_out,/* 199: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_d.sing_out,/* 200: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_n.sing_out,/* 201: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_g.sing_out,/* 202: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1.sing_out,/* 203: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3.sing_out,/* 204: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4.sing_out,/* 205: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_d.sing_out,/* 206: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_i.sing_out,/* 207: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_p.sing_out,/* 208: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_f.sing_out,/* 209: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_p.sing_out,/* 210: Signal */
  &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_a.sing_out,/* 211: Signal */
  &Control_software_v1_1_B.Constant1_p,/* 212: Signal */
  &Control_software_v1_1_B.Constant2,  /* 213: Signal */
  &Control_software_v1_1_B.Constant3_o,/* 214: Signal */
  &Control_software_v1_1_B.Constant4,  /* 215: Signal */
  &Control_software_v1_1_B.LogicalOperator_c,/* 216: Signal */
  &Control_software_v1_1_B.RelationalOperator_m[0],/* 217: Signal */
  &Control_software_v1_1_B.BitwiseLogicalOperator[0],/* 218: Signal */
  &Control_software_v1_1_B.FIFOread1_o1[0],/* 219: Signal */
  &Control_software_v1_1_B.FIFOread1_o2,/* 220: Signal */
  &Control_software_v1_1_B.FIFOread2_o1[0],/* 221: Signal */
  &Control_software_v1_1_B.FIFOread2_o2,/* 222: Signal */
  &Control_software_v1_1_B.FIFOread3_o1[0],/* 223: Signal */
  &Control_software_v1_1_B.FIFOread3_o2,/* 224: Signal */
  &Control_software_v1_1_B.FIFOread4_o1[0],/* 225: Signal */
  &Control_software_v1_1_B.FIFOread4_o2,/* 226: Signal */
  &Control_software_v1_1_B.FIFOwrite1, /* 227: Signal */
  &Control_software_v1_1_B.FIFOwrite2, /* 228: Signal */
  &Control_software_v1_1_B.FIFOwrite3, /* 229: Signal */
  &Control_software_v1_1_B.FIFOwrite4, /* 230: Signal */
  &Control_software_v1_1_B.FilterIntReason1,/* 231: Signal */
  &Control_software_v1_1_B.FilterIntReason2,/* 232: Signal */
  &Control_software_v1_1_B.FilterIntReason3,/* 233: Signal */
  &Control_software_v1_1_B.FilterIntReason4,/* 234: Signal */
  &Control_software_v1_1_B.FilterIntReason5,/* 235: Signal */
  &Control_software_v1_1_B.FilterIntReason6,/* 236: Signal */
  &Control_software_v1_1_B.FilterIntReason7,/* 237: Signal */
  &Control_software_v1_1_B.FilterIntReason8,/* 238: Signal */
  &Control_software_v1_1_B.ReadHWFIFO1[0],/* 239: Signal */
  &Control_software_v1_1_B.ReadHWFIFO2[0],/* 240: Signal */
  &Control_software_v1_1_B.ReadHWFIFO3[0],/* 241: Signal */
  &Control_software_v1_1_B.ReadHWFIFO4[0],/* 242: Signal */
  &Control_software_v1_1_B.ReadIntStatus1[0],/* 243: Signal */
  &Control_software_v1_1_P.UnitDelay_InitialCondition,/* 244: Block Parameter */
  &Control_software_v1_1_P.WallTime1_P1,/* 245: Block Parameter */
  &Control_software_v1_1_P.WallTime1_P2[0],/* 246: Block Parameter */
  &Control_software_v1_1_P.WallTime1_P3,/* 247: Block Parameter */
  &Control_software_v1_1_P.WallTime1_P4,/* 248: Block Parameter */
  &Control_software_v1_1_P.WallTime1_P5,/* 249: Block Parameter */
  &Control_software_v1_1_P.Constant_Value,/* 250: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_b,/* 251: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_m,/* 252: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_n,/* 253: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P1,/* 254: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P2[0],/* 255: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P3,/* 256: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P4[0],/* 257: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P5[0],/* 258: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P6,/* 259: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDO_P7,/* 260: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P1,/* 261: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P2,/* 262: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P3,/* 263: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P4,/* 264: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P5,/* 265: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P6,/* 266: Block Parameter */
  &Control_software_v1_1_P.PCI6221DA_P7,/* 267: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P1,/* 268: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P2,/* 269: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P3,/* 270: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P4,/* 271: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P5,/* 272: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P6,/* 273: Block Parameter */
  &Control_software_v1_1_P.PCI6221DO_P7,/* 274: Block Parameter */
  &Control_software_v1_1_P.PNMReceive_P1,/* 275: Block Parameter */
  &Control_software_v1_1_P.PNMReceive_P2,/* 276: Block Parameter */
  &Control_software_v1_1_P.PNMReceive_P3,/* 277: Block Parameter */
  &Control_software_v1_1_P.PNMReceive_P4,/* 278: Block Parameter */
  &Control_software_v1_1_P.PNMSend1_P1,/* 279: Block Parameter */
  &Control_software_v1_1_P.PNMSend1_P2,/* 280: Block Parameter */
  &Control_software_v1_1_P.PNMSend1_P3,/* 281: Block Parameter */
  &Control_software_v1_1_P.PNMSend1_P4,/* 282: Block Parameter */
  &Control_software_v1_1_P.PNMSetup1_P1,/* 283: Block Parameter */
  &Control_software_v1_1_P.PNMSetup1_P2,/* 284: Block Parameter */
  &Control_software_v1_1_P.PNMSetup1_P3,/* 285: Block Parameter */
  &Control_software_v1_1_P.PNMSetup1_P4,/* 286: Block Parameter */
  &Control_software_v1_1_P.PNMSetup1_P5,/* 287: Block Parameter */
  &Control_software_v1_1_P.PNMSetup1_P6[0],/* 288: Block Parameter */
  &Control_software_v1_1_P.PNMSetup1_P7,/* 289: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value,/* 290: Block Parameter */
  &Control_software_v1_1_P.SpoolingGeschw_Value,/* 291: Block Parameter */
  &Control_software_v1_1_P.ersteGrenzeSpooling_Value,/* 292: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_i,/* 293: Block Parameter */
  &Control_software_v1_1_P.Gain1_Gain, /* 294: Block Parameter */
  &Control_software_v1_1_P.Umrechnung_Gain_n,/* 295: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_h,/* 296: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_ax,/* 297: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength_g,/* 298: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition_l,/* 299: Block Parameter */
  &Control_software_v1_1_P.SpoolingGrenze_Value,/* 300: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_j,/* 301: Block Parameter */
  &Control_software_v1_1_P.Gain1_Gain_a,/* 302: Block Parameter */
  &Control_software_v1_1_P.Umrechnung_Gain,/* 303: Block Parameter */
  &Control_software_v1_1_P.Umrechnung1_Gain,/* 304: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_n,/* 305: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_h,/* 306: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value,/* 307: Block Parameter */
  &Control_software_v1_1_P.konstanteAusrollgeschw_Value,/* 308: Block Parameter */
  &Control_software_v1_1_P.konstanteAusrollgeschw1_Value,/* 309: Block Parameter */
  &Control_software_v1_1_P.konstanteEinrollgeschw_Value,/* 310: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold,/* 311: Block Parameter */
  &Control_software_v1_1_P.Switch1_Threshold_f,/* 312: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength,/* 313: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition,/* 314: Block Parameter */
  &Control_software_v1_1_P.Saturation1_UpperSat,/* 315: Block Parameter */
  &Control_software_v1_1_P.Saturation1_LowerSat,/* 316: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn_InitialStat,/* 317: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialSta,/* 318: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain,  /* 319: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_n3,/* 320: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_m,/* 321: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_d,/* 322: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P1[0],/* 323: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P2[0],/* 324: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P3[0],/* 325: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P4,/* 326: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P5,/* 327: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P6,/* 328: Block Parameter */
  &Control_software_v1_1_P.PCI6221AD_P7,/* 329: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P1,/* 330: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P2,/* 331: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P3,/* 332: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P4,/* 333: Block Parameter */
  &Control_software_v1_1_P.PCI6221PFIDI_P5,/* 334: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P1[0],/* 335: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P2,/* 336: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P3,/* 337: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P4,/* 338: Block Parameter */
  &Control_software_v1_1_P.PCI6221DI_P5,/* 339: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_b,/* 340: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_c,/* 341: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_j,/* 342: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_d2,/* 343: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_d,/* 344: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_po,/* 345: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_d,/* 346: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_o,/* 347: Block Parameter */
  &Control_software_v1_1_P.obereKraftsensorGrenze_Value,/* 348: Block Parameter */
  &Control_software_v1_1_P.untereKraftsensorGrenze_Value,/* 349: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_p,/* 350: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_g,/* 351: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_b,/* 352: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_k,/* 353: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_j,/* 354: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_h,/* 355: Block Parameter */
  &Control_software_v1_1_P.Switch1_Threshold,/* 356: Block Parameter */
  &Control_software_v1_1_P.Switch2_Threshold,/* 357: Block Parameter */
  &Control_software_v1_1_P.Switch3_Threshold,/* 358: Block Parameter */
  &Control_software_v1_1_P.Switch4_Threshold,/* 359: Block Parameter */
  &Control_software_v1_1_P.Switch5_Threshold,/* 360: Block Parameter */
  &Control_software_v1_1_P.Switch6_Threshold,/* 361: Block Parameter */
  &Control_software_v1_1_P.Switch7_Threshold,/* 362: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength,/* 363: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition,/* 364: Block Parameter */
  &Control_software_v1_1_P.Delay2_DelayLength,/* 365: Block Parameter */
  &Control_software_v1_1_P.Delay2_InitialCondition,/* 366: Block Parameter */
  &Control_software_v1_1_P.Delay3_DelayLength,/* 367: Block Parameter */
  &Control_software_v1_1_P.Delay3_InitialCondition,/* 368: Block Parameter */
  &Control_software_v1_1_P.Delay4_DelayLength,/* 369: Block Parameter */
  &Control_software_v1_1_P.Delay4_InitialCondition,/* 370: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value,/* 371: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_g,/* 372: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_f,/* 373: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_n,/* 374: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_c,/* 375: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength_i,/* 376: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition_a,/* 377: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_h,/* 378: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value,/* 379: Block Parameter */
  &Control_software_v1_1_P.Switch_Threshold_ha,/* 380: Block Parameter */
  &Control_software_v1_1_P.DiscreteTransferFcn_InitialSt_m,/* 381: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P1,/* 382: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P2,/* 383: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P3,/* 384: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P4[0],/* 385: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P5,/* 386: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P6,/* 387: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P7,/* 388: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P8,/* 389: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P1_l,/* 390: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P2_b,/* 391: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P3_n,/* 392: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P4_e[0],/* 393: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P5_o,/* 394: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P6_i[0],/* 395: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P7_i,/* 396: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread1_P8_n,/* 397: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P1,/* 398: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P2,/* 399: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P3,/* 400: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P4[0],/* 401: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P5,/* 402: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P6[0],/* 403: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P7,/* 404: Block Parameter */
  &Control_software_v1_1_P.FIFOASCIIread_P8,/* 405: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P1,/* 406: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P2,/* 407: Block Parameter */
  &Control_software_v1_1_P.EnableTX1_P3,/* 408: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P1,/* 409: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P2,/* 410: Block Parameter */
  &Control_software_v1_1_P.EnableTX2_P3,/* 411: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P1,/* 412: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P2,/* 413: Block Parameter */
  &Control_software_v1_1_P.EnableTX3_P3,/* 414: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P1,/* 415: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P2,/* 416: Block Parameter */
  &Control_software_v1_1_P.EnableTX4_P3,/* 417: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P1_n,/* 418: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P2_o,/* 419: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P3_n,/* 420: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P4_j,/* 421: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P5_o[0],/* 422: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P1_l,/* 423: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P2_i,/* 424: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P3_h,/* 425: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P4_d,/* 426: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P5_g[0],/* 427: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P1_p,/* 428: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P2_n,/* 429: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P3_k,/* 430: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P4_m,/* 431: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P5_a[0],/* 432: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P1_e,/* 433: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P2_n,/* 434: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P3_p,/* 435: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P4_f,/* 436: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P5_e[0],/* 437: Block Parameter */
  &Control_software_v1_1_P.Setup1_P1,  /* 438: Block Parameter */
  &Control_software_v1_1_P.Setup1_P2,  /* 439: Block Parameter */
  &Control_software_v1_1_P.Setup1_P3,  /* 440: Block Parameter */
  &Control_software_v1_1_P.Setup1_P4,  /* 441: Block Parameter */
  &Control_software_v1_1_P.Setup1_P5,  /* 442: Block Parameter */
  &Control_software_v1_1_P.Setup1_P6,  /* 443: Block Parameter */
  &Control_software_v1_1_P.Setup1_P7,  /* 444: Block Parameter */
  &Control_software_v1_1_P.Setup1_P8,  /* 445: Block Parameter */
  &Control_software_v1_1_P.Setup1_P9,  /* 446: Block Parameter */
  &Control_software_v1_1_P.Setup1_P10, /* 447: Block Parameter */
  &Control_software_v1_1_P.Setup2_P1,  /* 448: Block Parameter */
  &Control_software_v1_1_P.Setup2_P2,  /* 449: Block Parameter */
  &Control_software_v1_1_P.Setup2_P3,  /* 450: Block Parameter */
  &Control_software_v1_1_P.Setup2_P4,  /* 451: Block Parameter */
  &Control_software_v1_1_P.Setup2_P5,  /* 452: Block Parameter */
  &Control_software_v1_1_P.Setup2_P6,  /* 453: Block Parameter */
  &Control_software_v1_1_P.Setup2_P7,  /* 454: Block Parameter */
  &Control_software_v1_1_P.Setup2_P8,  /* 455: Block Parameter */
  &Control_software_v1_1_P.Setup2_P9,  /* 456: Block Parameter */
  &Control_software_v1_1_P.Setup2_P10, /* 457: Block Parameter */
  &Control_software_v1_1_P.Setup3_P1,  /* 458: Block Parameter */
  &Control_software_v1_1_P.Setup3_P2,  /* 459: Block Parameter */
  &Control_software_v1_1_P.Setup3_P3,  /* 460: Block Parameter */
  &Control_software_v1_1_P.Setup3_P4,  /* 461: Block Parameter */
  &Control_software_v1_1_P.Setup3_P5,  /* 462: Block Parameter */
  &Control_software_v1_1_P.Setup3_P6,  /* 463: Block Parameter */
  &Control_software_v1_1_P.Setup3_P7,  /* 464: Block Parameter */
  &Control_software_v1_1_P.Setup3_P8,  /* 465: Block Parameter */
  &Control_software_v1_1_P.Setup3_P9,  /* 466: Block Parameter */
  &Control_software_v1_1_P.Setup3_P10, /* 467: Block Parameter */
  &Control_software_v1_1_P.Setup4_P1,  /* 468: Block Parameter */
  &Control_software_v1_1_P.Setup4_P2,  /* 469: Block Parameter */
  &Control_software_v1_1_P.Setup4_P3,  /* 470: Block Parameter */
  &Control_software_v1_1_P.Setup4_P4,  /* 471: Block Parameter */
  &Control_software_v1_1_P.Setup4_P5,  /* 472: Block Parameter */
  &Control_software_v1_1_P.Setup4_P6,  /* 473: Block Parameter */
  &Control_software_v1_1_P.Setup4_P7,  /* 474: Block Parameter */
  &Control_software_v1_1_P.Setup4_P8,  /* 475: Block Parameter */
  &Control_software_v1_1_P.Setup4_P9,  /* 476: Block Parameter */
  &Control_software_v1_1_P.Setup4_P10, /* 477: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_i,/* 478: Block Parameter */
  &Control_software_v1_1_P.obereGrenze_Value,/* 479: Block Parameter */
  &Control_software_v1_1_P.untereGrenze_Value,/* 480: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_a,/* 481: Block Parameter */
  &Control_software_v1_1_P.Beschleunigung_Value_p,/* 482: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_p,/* 483: Block Parameter */
  &Control_software_v1_1_P.Gain_Gain_e,/* 484: Block Parameter */
  &Control_software_v1_1_P.Delay_DelayLength_a,/* 485: Block Parameter */
  &Control_software_v1_1_P.Delay_InitialCondition_a,/* 486: Block Parameter */
  &Control_software_v1_1_P.Delay1_DelayLength_h,/* 487: Block Parameter */
  &Control_software_v1_1_P.Delay1_InitialCondition_n,/* 488: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_m0,/* 489: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_i,/* 490: Block Parameter */
  &Control_software_v1_1_P.IMU_data_valid_Y0,/* 491: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_h,/* 492: Block Parameter */
  &Control_software_v1_1_P.Constant_Value_m,/* 493: Block Parameter */
  &Control_software_v1_1_P.Constant1_Value_be,/* 494: Block Parameter */
  &Control_software_v1_1_P.Constant2_Value_n,/* 495: Block Parameter */
  &Control_software_v1_1_P.Constant3_Value_d,/* 496: Block Parameter */
  &Control_software_v1_1_P.Constant4_Value,/* 497: Block Parameter */
  &Control_software_v1_1_P.Constant9_Value,/* 498: Block Parameter */
  &Control_software_v1_1_P.BitwiseLogicalOperator_BitMask,/* 499: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P1,/* 500: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P2,/* 501: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P3,/* 502: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P4,/* 503: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P5,/* 504: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P6,/* 505: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P7,/* 506: Block Parameter */
  &Control_software_v1_1_P.FIFOread1_P8,/* 507: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P1,/* 508: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P2,/* 509: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P3,/* 510: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P4,/* 511: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P5,/* 512: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P6,/* 513: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P7,/* 514: Block Parameter */
  &Control_software_v1_1_P.FIFOread2_P8,/* 515: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P1,/* 516: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P2,/* 517: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P3,/* 518: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P4,/* 519: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P5,/* 520: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P6,/* 521: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P7,/* 522: Block Parameter */
  &Control_software_v1_1_P.FIFOread3_P8,/* 523: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P1,/* 524: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P2,/* 525: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P3,/* 526: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P4,/* 527: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P5,/* 528: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P6,/* 529: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P7,/* 530: Block Parameter */
  &Control_software_v1_1_P.FIFOread4_P8,/* 531: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P1,/* 532: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P2,/* 533: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P3,/* 534: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P4,/* 535: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite1_P5[0],/* 536: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P1,/* 537: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P2,/* 538: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P3,/* 539: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P4,/* 540: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite2_P5[0],/* 541: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P1,/* 542: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P2,/* 543: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P3,/* 544: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P4,/* 545: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite3_P5[0],/* 546: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P1,/* 547: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P2,/* 548: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P3,/* 549: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P4,/* 550: Block Parameter */
  &Control_software_v1_1_P.FIFOwrite4_P5[0],/* 551: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P1,/* 552: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P2,/* 553: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason1_P3,/* 554: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P1,/* 555: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P2,/* 556: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason2_P3,/* 557: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P1,/* 558: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P2,/* 559: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason3_P3,/* 560: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P1,/* 561: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P2,/* 562: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason4_P3,/* 563: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P1,/* 564: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P2,/* 565: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason5_P3,/* 566: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P1,/* 567: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P2,/* 568: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason6_P3,/* 569: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P1,/* 570: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P2,/* 571: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason7_P3,/* 572: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P1,/* 573: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P2,/* 574: Block Parameter */
  &Control_software_v1_1_P.FilterIntReason8_P3,/* 575: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P1,/* 576: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P2,/* 577: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P3,/* 578: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO1_P4,/* 579: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P1,/* 580: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P2,/* 581: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P3,/* 582: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO2_P4,/* 583: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P1,/* 584: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P2,/* 585: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P3,/* 586: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO3_P4,/* 587: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P1,/* 588: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P2,/* 589: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P3,/* 590: Block Parameter */
  &Control_software_v1_1_P.ReadHWFIFO4_P4,/* 591: Block Parameter */
  &Control_software_v1_1_P.ReadIntStatus1_P1,/* 592: Block Parameter */
  &Control_software_v1_1_P.ReadIntStatus1_P2,/* 593: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P1,/* 594: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P2,/* 595: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P3,/* 596: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO1_P4,/* 597: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P1,/* 598: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P2,/* 599: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P3,/* 600: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO2_P4,/* 601: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P1,/* 602: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P2,/* 603: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P3,/* 604: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO3_P4,/* 605: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P1,/* 606: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P2,/* 607: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P3,/* 608: Block Parameter */
  &Control_software_v1_1_P.WriteHWFIFO4_P4,/* 609: Block Parameter */
  &Control_software_v1_1_P.AOsat,      /* 610: Model Parameter */
  &Control_software_v1_1_P.Afilt_Winch[0],/* 611: Model Parameter */
  &Control_software_v1_1_P.Bfilt_Winch[0],/* 612: Model Parameter */
  &Control_software_v1_1_P.Cfilt_Winch[0],/* 613: Model Parameter */
  &Control_software_v1_1_P.Dfilt_Winch[0],/* 614: Model Parameter */
  &Control_software_v1_1_P.JoyFiltDen[0],/* 615: Model Parameter */
  &Control_software_v1_1_P.JoyFiltNum[0],/* 616: Model Parameter */
  &Control_software_v1_1_P.JoyS_gain,  /* 617: Model Parameter */
  &Control_software_v1_1_P.JoyS_ofst,  /* 618: Model Parameter */
  &Control_software_v1_1_P.JoyS_sat,   /* 619: Model Parameter */
  &Control_software_v1_1_P.JoyW_gain,  /* 620: Model Parameter */
  &Control_software_v1_1_P.JoyW_ofst,  /* 621: Model Parameter */
  &Control_software_v1_1_P.KspdWinch,  /* 622: Model Parameter */
  &Control_software_v1_1_P.NPotSpdEst, /* 623: Model Parameter */
  &Control_software_v1_1_P.PotPosFiltDen[0],/* 624: Model Parameter */
  &Control_software_v1_1_P.PotPosFiltNum[0],/* 625: Model Parameter */
  &Control_software_v1_1_P.Pot_gain,   /* 626: Model Parameter */
  &Control_software_v1_1_P.Pot_max,    /* 627: Model Parameter */
  &Control_software_v1_1_P.Pot_min,    /* 628: Model Parameter */
  &Control_software_v1_1_P.Pot_ofst,   /* 629: Model Parameter */
  &Control_software_v1_1_P.Ts_1ms,     /* 630: Model Parameter */
  &Control_software_v1_1_P.Ts_1s,      /* 631: Model Parameter */
  &Control_software_v1_1_P.WinchDrumRad,/* 632: Model Parameter */
  &Control_software_v1_1_P.WinchMotPosAIgain,/* 633: Model Parameter */
  &Control_software_v1_1_P.WinchMotTorqueMax,/* 634: Model Parameter */
  &Control_software_v1_1_P.WinchPosFiltDen[0],/* 635: Model Parameter */
  &Control_software_v1_1_P.WinchPosFiltNum[0],/* 636: Model Parameter */
  &Control_software_v1_1_P.WinchRefSpdSup,/* 637: Model Parameter */
  &Control_software_v1_1_P.WinchSpdEstFiltDen[0],/* 638: Model Parameter */
  &Control_software_v1_1_P.WinchSpdEstFiltNum[0],/* 639: Model Parameter */
  &Control_software_v1_1_P.WinchTravelMin_m,/* 640: Model Parameter */
  &Control_software_v1_1_P.WinchVoltMax,/* 641: Model Parameter */
  &Control_software_v1_1_P.x0_Winch[0],/* 642: Model Parameter */
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

  { "unsigned short", "uint16_T", 0, 0, sizeof(uint16_T), SS_UINT16, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "numeric", "serialfifoptr", 0, 0, sizeof(serialfifoptr), SS_STRUCT, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
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

  { rtwCAPI_VECTOR, 34, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 36, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  22,                                  /* 4 */
  1,                                   /* 5 */
  2,                                   /* 6 */
  1,                                   /* 7 */
  41,                                  /* 8 */
  1,                                   /* 9 */
  91,                                  /* 10 */
  1,                                   /* 11 */
  1025,                                /* 12 */
  1,                                   /* 13 */
  38,                                  /* 14 */
  1,                                   /* 15 */
  4,                                   /* 16 */
  1,                                   /* 17 */
  61,                                  /* 18 */
  1,                                   /* 19 */
  65,                                  /* 20 */
  1,                                   /* 21 */
  1,                                   /* 22 */
  6,                                   /* 23 */
  1,                                   /* 24 */
  3,                                   /* 25 */
  1,                                   /* 26 */
  2,                                   /* 27 */
  1,                                   /* 28 */
  5,                                   /* 29 */
  1,                                   /* 30 */
  7,                                   /* 31 */
  1,                                   /* 32 */
  4,                                   /* 33 */
  1,                                   /* 34 */
  34,                                  /* 35 */
  2,                                   /* 36 */
  2                                    /* 37 */
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
    4, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[3], (const void *) &rtcapiStoredFloats[1],
    2, 0 },

  { (const void *) &rtcapiStoredFloats[4], (const void *) &rtcapiStoredFloats[1],
    3, 0 },

  { (const void *) &rtcapiStoredFloats[5], (const void *) &rtcapiStoredFloats[6],
    5, 0 }
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
  { rtBlockSignals, 244,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 366,
    rtModelParameters, 33 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2425074301U,
    3681404270U,
    2821833701U,
    3603886653U },
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
