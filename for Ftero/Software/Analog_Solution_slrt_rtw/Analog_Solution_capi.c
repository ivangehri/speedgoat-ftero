/*
 * Analog_Solution_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Analog_Solution".
 *
 * Model version              : 1.1800
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Apr 19 09:55:24 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Analog_Solution_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "Analog_Solution.h"
#include "Analog_Solution_capi.h"
#include "Analog_Solution_private.h"
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
    TARGET_STRING("SpoolingOutput"), 0, 0, 0, 0, 1 },

  { 8, 0, TARGET_STRING("Outputs/Saturation2"),
    TARGET_STRING("Siemens_Output"), 0, 0, 0, 0, 1 },

  { 9, 0, TARGET_STRING("Outputs/Switch"),
    TARGET_STRING("Siemens_Motor"), 0, 0, 0, 0, 1 },

  { 10, 48, TARGET_STRING("Outputs/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 11, 50, TARGET_STRING("Spooling_Pos_Controlled/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 12, 49, TARGET_STRING("Spooling_Pos_Controlled/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 13, 0, TARGET_STRING("Spooling_Pos_Controlled/Gain2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 14, 0, TARGET_STRING("Spooling_Pos_Controlled/Umrechnung"),
    TARGET_STRING("SpoolingPosSoll"), 0, 0, 0, 0, 1 },

  { 15, 0, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 16, 51, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 17, 0, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 18, 0, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 19, 0, TARGET_STRING("Spooling_Pos_Controlled/Relational Operator4"),
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

  { 27, 0, TARGET_STRING("Spooling_Speed_Controlled/Umrechnung"),
    TARGET_STRING("WinchSpeed(rad/s)"), 0, 0, 0, 0, 1 },

  { 28, 0, TARGET_STRING("Spooling_Speed_Controlled/zweite Spooling Grenze"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 29, 0, TARGET_STRING("Spooling_Speed_Controlled/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 30, 0, TARGET_STRING("Spooling_Speed_Controlled/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 31, 0, TARGET_STRING("Spooling_Speed_Controlled/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 32, 57, TARGET_STRING("Winch_Conrtol/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 33, 0, TARGET_STRING("Winch_Conrtol/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 34, 64, TARGET_STRING("Winch_Conrtol/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 35, 0, TARGET_STRING("Winch_Conrtol/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 36, 60, TARGET_STRING("Winch_Conrtol/Switch10"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 37, 62, TARGET_STRING("Winch_Conrtol/Switch11"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 38, 56, TARGET_STRING("Winch_Conrtol/Switch8"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 39, 58, TARGET_STRING("Winch_Conrtol/Switch9"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 40, 0, TARGET_STRING("Winch_Conrtol/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 41, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 42, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation"),
    TARGET_STRING("CI_JoyS"), 0, 0, 0, 0, 1 },

  { 44, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("CI_JoyW"), 0, 0, 0, 0, 1 },

  { 45, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 46, 0, TARGET_STRING("Input conditioning and estimators/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 47, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 2, TARGET_STRING("Input conditioning and estimators/Subsystem1/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 50, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 51, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Gain1"),
    TARGET_STRING("CI_PotSpd"), 0, 0, 0, 0, 1 },

  { 52, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Saturation"),
    TARGET_STRING("CI_PotPos"), 0, 0, 0, 0, 1 },

  { 53, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 54, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 55, 0, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 56, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 57, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p1"),
    TARGET_STRING("AI_Joy_W"), 0, 0, 0, 0, 1 },

  { 58, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p2"),
    TARGET_STRING("AI_Joy_S"), 1, 0, 0, 0, 1 },

  { 59, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p3"),
    TARGET_STRING("AI_mot_SiemensMotor_Speed"), 2, 0, 0, 0, 1 },

  { 60, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p4"),
    TARGET_STRING("AI_mot_winch_pos"), 3, 0, 0, 0, 1 },

  { 61, 0, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD/p5"),
    TARGET_STRING("AI_pot_pos"), 4, 0, 0, 0, 1 },

  { 62, 0, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("DI_SlideLimitB"), 0, 0, 0, 0, 1 },

  { 63, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p1"),
    TARGET_STRING("DI_Enable"), 0, 0, 0, 0, 1 },

  { 64, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p2"),
    TARGET_STRING("DI_WinchMode"), 1, 0, 0, 0, 1 },

  { 65, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p3"),
    TARGET_STRING("DI_Takeoff"), 2, 0, 0, 0, 1 },

  { 66, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p4"),
    TARGET_STRING("DI_Landing"), 3, 0, 0, 0, 1 },

  { 67, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p5"),
    TARGET_STRING("DI_Operator"), 4, 0, 0, 0, 1 },

  { 68, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p6"),
    TARGET_STRING("DI_GliderPres"), 5, 0, 0, 0, 1 },

  { 69, 0, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI/p7"),
    TARGET_STRING("DI_SlideLimitF"), 6, 0, 0, 0, 1 },

  { 70, 0, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 71, 0, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 72, 0, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 73, 0, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING(""), 0, 3, 0, 0, 0 },

  { 74, 0, TARGET_STRING("Logging/Log_conditioning/Rate Transition"),
    TARGET_STRING(""), 0, 0, 2, 0, 2 },

  { 75, 47, TARGET_STRING("Logging/Time_Scope_trigger/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 76, 0, TARGET_STRING("Logging/Time_Scope_trigger/Switch1"),
    TARGET_STRING("Trigger_time"), 0, 0, 0, 0, 0 },

  { 77, 0, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Abs"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 78, 0, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Sample Zeit"),
    TARGET_STRING("Umdrehung/SampleTime"), 0, 0, 0, 0, 1 },

  { 79, 0, TARGET_STRING(
    "Spooling_Speed_Controlled/Subsystem/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 80, 0, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 81, 0, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 0, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 83, 67, TARGET_STRING("Winch_Conrtol/Emergency/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 84, 66, TARGET_STRING("Winch_Conrtol/Emergency/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 85, 68, TARGET_STRING("Winch_Conrtol/Emergency/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 86, 65, TARGET_STRING("Winch_Conrtol/Emergency/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 87, 67, TARGET_STRING("Winch_Conrtol/Emergency/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 88, 66, TARGET_STRING("Winch_Conrtol/Emergency/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 89, 68, TARGET_STRING("Winch_Conrtol/Emergency/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 58, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 92, 58, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 93, 62, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator2"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 94, 62, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator3"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 95, 60, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator4"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 96, 60, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator5"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 97, 56, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator6"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 98, 56, TARGET_STRING("Winch_Conrtol/Subsystem/Logical Operator7"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 99, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 100, 77, TARGET_STRING("Winch_Conrtol/Subsystem/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 101, 75, TARGET_STRING("Winch_Conrtol/Subsystem/Switch2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 102, 76, TARGET_STRING("Winch_Conrtol/Subsystem/Switch3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 103, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 104, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch5"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 105, 74, TARGET_STRING("Winch_Conrtol/Subsystem/Switch6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 106, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Switch7"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 107, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 108, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 110, 0, TARGET_STRING("Winch_Conrtol/Subsystem/Delay4"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 111, 79, TARGET_STRING("Winch_Conrtol/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 112, 0, TARGET_STRING("Winch_Conrtol/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 113, 0, TARGET_STRING("Winch_Conrtol/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 114, 78, TARGET_STRING("Winch_Conrtol/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 115, 0, TARGET_STRING("Winch_Conrtol/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 116, 0, TARGET_STRING("Winch_Conrtol/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 117, 0, TARGET_STRING("Winch_Conrtol/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 118, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 119, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 120, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 121, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("CI_WinchPos"), 0, 0, 0, 0, 1 },

  { 122, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete State-Space"),
    TARGET_STRING(""), 0, 0, 3, 0, 1 },

  { 123, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 124, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Gain1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 125, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 126, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Saturation1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 127, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 128, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 129, 2, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Sum2"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 130, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("WinchMotTorqueEst"), 0, 0, 0, 0, 1 },

  { 131, 0, TARGET_STRING(
    "Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("WinchMotSpeedEst"), 0, 0, 0, 0, 1 },

  { 132, 3, TARGET_STRING(
    "Inputs/RS232_read/Compass_read/Embedded MATLAB Function"),
    TARGET_STRING("GU_Yaw"), 0, 0, 0, 0, 0 },

  { 133, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 134, 0, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 3, 4, 0, 0 },

  { 135, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1"),
    TARGET_STRING("GU_Lat"), 0, 0, 0, 0, 0 },

  { 136, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p2"),
    TARGET_STRING("GU_Lon"), 1, 0, 0, 0, 0 },

  { 137, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p3"),
    TARGET_STRING("GU_h"), 2, 0, 0, 0, 0 },

  { 138, 4, TARGET_STRING(
    "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p4"),
    TARGET_STRING("Geo_Gu_h"), 3, 0, 0, 0, 0 },

  { 139, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 140, 0, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING(""), 0, 3, 5, 0, 0 },

  { 141, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 3 },

  { 142, 0, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING(""), 0, 3, 6, 0, 3 },

  { 143, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 144, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition1"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 145, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 146, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition3"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 147, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 148, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition5"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 149, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition6"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 150, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Rate Transition7"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 151, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 152, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 153, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 154, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 155, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 156, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 157, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p1"),
    TARGET_STRING(""), 0, 4, 0, 0, 0 },

  { 158, 0, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4/p2"),
    TARGET_STRING(""), 1, 2, 0, 0, 0 },

  { 159, 71, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 160, 70, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 161, 0, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Relational Operator1"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 162, 69, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 163, 71, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 164, 70, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 165, 0, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 166, 73, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 167, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 168, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 169, 72, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 170, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 171, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 172, 0, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 173, 78, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 174, 0, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 175, 5, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function"),
    TARGET_STRING(""), 0, 0, 0, 0, 3 },

  { 176, 6, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data"),
    TARGET_STRING(""), 0, 0, 7, 0, 3 },

  { 177, 72, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 178, 0, TARGET_STRING(
    "Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero1/Compare"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  { 179, 7, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function"),
    TARGET_STRING("time"), 0, 0, 0, 0, 3 },

  { 180, 8, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1"),
    TARGET_STRING("GPSFlags"), 0, 0, 0, 0, 3 },

  { 181, 9, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function2"),
    TARGET_STRING("NbSat"), 0, 0, 0, 0, 3 },

  { 182, 10, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function"),
    TARGET_STRING("Mx"), 0, 0, 0, 0, 3 },

  { 183, 11, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function1"),
    TARGET_STRING("My"), 0, 0, 0, 0, 3 },

  { 184, 12, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function3"),
    TARGET_STRING("Mz"), 0, 0, 0, 0, 3 },

  { 185, 13, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function"),
    TARGET_STRING("year"), 0, 0, 0, 0, 3 },

  { 186, 14, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function1"),
    TARGET_STRING("nanoseconds"), 0, 0, 0, 0, 3 },

  { 187, 15, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function2"),
    TARGET_STRING("month"), 0, 0, 0, 0, 3 },

  { 188, 16, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function3"),
    TARGET_STRING("day"), 0, 0, 0, 0, 3 },

  { 189, 17, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function4"),
    TARGET_STRING("hour"), 0, 0, 0, 0, 3 },

  { 190, 18, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function5"),
    TARGET_STRING("min"), 0, 0, 0, 0, 3 },

  { 191, 19, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function6"),
    TARGET_STRING("sec"), 0, 0, 0, 0, 3 },

  { 192, 20, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14/Embedded MATLAB Function"),
    TARGET_STRING("Time_sr"), 0, 0, 0, 0, 3 },

  { 193, 21, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1"),
    TARGET_STRING("longitude"), 0, 0, 0, 0, 3 },

  { 194, 22, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function2"),
    TARGET_STRING("height"), 0, 0, 0, 0, 3 },

  { 195, 23, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function3"),
    TARGET_STRING("latitude"), 0, 0, 0, 0, 3 },

  { 196, 24, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function1"),
    TARGET_STRING("v_east"), 0, 0, 0, 0, 3 },

  { 197, 25, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function2"),
    TARGET_STRING("v_north"), 0, 0, 0, 0, 3 },

  { 198, 26, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function3"),
    TARGET_STRING("v_down"), 0, 0, 0, 0, 3 },

  { 199, 27, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function4"),
    TARGET_STRING("heading"), 0, 0, 0, 0, 3 },

  { 200, 28, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17/Embedded MATLAB Function2"),
    TARGET_STRING("Altitude"), 0, 0, 0, 0, 3 },

  { 201, 29, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function"),
    TARGET_STRING("lat_filt"), 0, 0, 0, 0, 3 },

  { 202, 30, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function1"),
    TARGET_STRING("long_filt"), 0, 0, 0, 0, 3 },

  { 203, 31, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function2"),
    TARGET_STRING("height_filt"), 0, 0, 0, 0, 3 },

  { 204, 32, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function"),
    TARGET_STRING("Vx"), 0, 0, 0, 0, 3 },

  { 205, 33, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function1"),
    TARGET_STRING("Vy"), 0, 0, 0, 0, 3 },

  { 206, 34, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function3"),
    TARGET_STRING("Vz"), 0, 0, 0, 0, 3 },

  { 207, 35, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function"),
    TARGET_STRING("q1"), 0, 0, 0, 0, 3 },

  { 208, 36, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function1"),
    TARGET_STRING("q2"), 0, 0, 0, 0, 3 },

  { 209, 37, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function3"),
    TARGET_STRING("q3"), 0, 0, 0, 0, 3 },

  { 210, 38, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function4"),
    TARGET_STRING("q4"), 0, 0, 0, 0, 3 },

  { 211, 39, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function"),
    TARGET_STRING("Gx"), 0, 0, 0, 0, 3 },

  { 212, 40, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function1"),
    TARGET_STRING("Gy"), 0, 0, 0, 0, 3 },

  { 213, 41, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function3"),
    TARGET_STRING("Gz"), 0, 0, 0, 0, 3 },

  { 214, 42, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function"),
    TARGET_STRING("Ax"), 0, 0, 0, 0, 3 },

  { 215, 43, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function1"),
    TARGET_STRING("Ay"), 0, 0, 0, 0, 3 },

  { 216, 44, TARGET_STRING(
    "Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function3"),
    TARGET_STRING("Az"), 0, 0, 0, 0, 3 },

  { 217, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 218, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 219, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 220, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 221, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Logical Operator"),
    TARGET_STRING(""), 0, 2, 0, 0, 4 },

  { 222, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Relational Operator"),
    TARGET_STRING(""), 0, 2, 8, 0, 4 },

  { 223, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING(""), 0, 5, 8, 0, 4 },

  { 224, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 225, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 226, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 227, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 228, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 229, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 230, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p1"),
    TARGET_STRING(""), 0, 5, 9, 0, 4 },

  { 231, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4/p2"),
    TARGET_STRING(""), 1, 5, 0, 0, 4 },

  { 232, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 233, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 234, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 235, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING(""), 0, 4, 0, 0, 4 },

  { 236, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 237, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 238, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 239, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 240, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 241, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 242, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 243, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING(""), 0, 5, 0, 0, 4 },

  { 244, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 245, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 246, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 247, 45, TARGET_STRING(
    "Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING(""), 0, 5, 10, 0, 4 },

  { 248, 45, TARGET_STRING(
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
  { 249, TARGET_STRING("Auxiliary variables/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 250, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 251, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P2"), 0, 11, 0 },

  { 252, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 253, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 254, TARGET_STRING("Logging/Wall Time 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 255, TARGET_STRING("Outputs/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 256, TARGET_STRING("Outputs/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 257, TARGET_STRING("Outputs/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 258, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 259, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P2"), 0, 12, 0 },

  { 260, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 261, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P4"), 0, 12, 0 },

  { 262, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P5"), 0, 12, 0 },

  { 263, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 264, TARGET_STRING("Outputs/PCI 6221 PFI DO "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 265, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P1"), 0, 13, 0 },

  { 266, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P2"), 0, 13, 0 },

  { 267, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P3"), 0, 13, 0 },

  { 268, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P4"), 0, 13, 0 },

  { 269, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 270, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 271, TARGET_STRING("Outputs/PCI-6221 DA"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 272, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 273, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 274, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 275, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 276, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 277, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 278, TARGET_STRING("Outputs/PCI-6221 DO"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 279, TARGET_STRING("Spooling_Pos_Controlled/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 280, TARGET_STRING("Spooling_Pos_Controlled/Spooling Geschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 281, TARGET_STRING("Spooling_Pos_Controlled/erste Grenze Spooling"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 282, TARGET_STRING("Spooling_Pos_Controlled/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 283, TARGET_STRING("Spooling_Pos_Controlled/Gain1"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 284, TARGET_STRING("Spooling_Pos_Controlled/Gain2"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 285, TARGET_STRING("Spooling_Pos_Controlled/Umrechnung"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 286, TARGET_STRING("Spooling_Pos_Controlled/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 287, TARGET_STRING("Spooling_Pos_Controlled/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 288, TARGET_STRING("Spooling_Pos_Controlled/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 289, TARGET_STRING("Spooling_Pos_Controlled/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 290, TARGET_STRING("Spooling_Speed_Controlled/erste Spooling Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 291, TARGET_STRING("Spooling_Speed_Controlled/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 292, TARGET_STRING("Spooling_Speed_Controlled/Umrechnung"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 293, TARGET_STRING("Spooling_Speed_Controlled/zweite Spooling Grenze"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 294, TARGET_STRING("Winch_Conrtol/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 295, TARGET_STRING("Winch_Conrtol/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 296, TARGET_STRING("Winch_Conrtol/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 297, TARGET_STRING("Winch_Conrtol/konstante Ausrollgeschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 298, TARGET_STRING("Winch_Conrtol/konstante Ausrollgeschw.1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 299, TARGET_STRING("Winch_Conrtol/konstante Einrollgeschw."),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 300, TARGET_STRING("Winch_Conrtol/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 301, TARGET_STRING("Winch_Conrtol/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 302, TARGET_STRING("Winch_Conrtol/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 303, TARGET_STRING("Winch_Conrtol/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 304, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 305, TARGET_STRING("Input conditioning and estimators/Subsystem/Saturation1"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 306, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 307, TARGET_STRING("Input conditioning and estimators/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 308, TARGET_STRING("Input conditioning and estimators/Subsystem1/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 309, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 310, TARGET_STRING("Input conditioning and estimators/Subsystem2/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 311, TARGET_STRING("Input conditioning and estimators/Subsystem2/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 312, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P1"), 0, 14, 0 },

  { 313, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P2"), 0, 14, 0 },

  { 314, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P3"), 0, 14, 0 },

  { 315, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 316, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 317, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 318, TARGET_STRING("Inputs/Analog Inputs/PCI-6221 AD"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 319, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 320, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 321, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 322, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 323, TARGET_STRING("Inputs/Digital Inputs/PCI 6221 PFI DI "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 324, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P1"), 0, 15, 0 },

  { 325, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 326, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 327, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 328, TARGET_STRING("Inputs/Digital Inputs/PCI-6221 DI"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 329, TARGET_STRING("Inputs/RS232_read/Constant"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 330, TARGET_STRING("Inputs/RS232_read/Constant1"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 331, TARGET_STRING("Inputs/RS232_read/Constant2"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 332, TARGET_STRING("Inputs/RS232_read/Constant3"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 333, TARGET_STRING("Logging/Time_Scope_trigger/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 334, TARGET_STRING("Logging/Time_Scope_trigger/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 335, TARGET_STRING("Logging/Time_Scope_trigger/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 336, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 337, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 338, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Sample Zeit"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 339, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 340, TARGET_STRING("Spooling_Speed_Controlled/Subsystem/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 341, TARGET_STRING("Winch_Conrtol/Emergency/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 342, TARGET_STRING("Winch_Conrtol/Emergency/obere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 343, TARGET_STRING("Winch_Conrtol/Emergency/untere Kraftsensor Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 344, TARGET_STRING("Winch_Conrtol/Emergency/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 345, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 346, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 347, TARGET_STRING("Winch_Conrtol/Subsystem/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 348, TARGET_STRING("Winch_Conrtol/Subsystem/Constant3"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 349, TARGET_STRING("Winch_Conrtol/Subsystem/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 350, TARGET_STRING("Winch_Conrtol/Subsystem/Switch1"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 351, TARGET_STRING("Winch_Conrtol/Subsystem/Switch2"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 352, TARGET_STRING("Winch_Conrtol/Subsystem/Switch3"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 353, TARGET_STRING("Winch_Conrtol/Subsystem/Switch4"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 354, TARGET_STRING("Winch_Conrtol/Subsystem/Switch5"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 355, TARGET_STRING("Winch_Conrtol/Subsystem/Switch6"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 356, TARGET_STRING("Winch_Conrtol/Subsystem/Switch7"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 357, TARGET_STRING("Winch_Conrtol/Subsystem/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 358, TARGET_STRING("Winch_Conrtol/Subsystem/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 359, TARGET_STRING("Winch_Conrtol/Subsystem/Delay2"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 360, TARGET_STRING("Winch_Conrtol/Subsystem/Delay2"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 361, TARGET_STRING("Winch_Conrtol/Subsystem/Delay3"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 362, TARGET_STRING("Winch_Conrtol/Subsystem/Delay3"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 363, TARGET_STRING("Winch_Conrtol/Subsystem/Delay4"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 364, TARGET_STRING("Winch_Conrtol/Subsystem/Delay4"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 365, TARGET_STRING("Winch_Conrtol/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 366, TARGET_STRING("Winch_Conrtol/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 367, TARGET_STRING("Winch_Conrtol/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 368, TARGET_STRING("Winch_Conrtol/damper/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 369, TARGET_STRING("Winch_Conrtol/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 370, TARGET_STRING("Winch_Conrtol/damper/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 371, TARGET_STRING("Winch_Conrtol/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 372, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem/Discrete Transfer Fcn1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 373, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Constant2"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 374, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Switch"),
    TARGET_STRING("Threshold"), 0, 0, 0 },

  { 375, TARGET_STRING("Input conditioning and estimators/Subsystem1/Subsystem2/Discrete Transfer Fcn"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 376, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 377, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 378, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 379, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 13, 0 },

  { 380, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 381, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 382, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 383, TARGET_STRING("Inputs/RS232_read/Compass_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 384, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 385, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 386, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 387, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P4"), 0, 11, 0 },

  { 388, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 389, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P6"), 0, 13, 0 },

  { 390, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 391, TARGET_STRING("Inputs/RS232_read/GPS_read/FIFO ASCII read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 392, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 393, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 394, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 395, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P4"), 0, 16, 0 },

  { 396, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 397, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P6"), 0, 13, 0 },

  { 398, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 399, TARGET_STRING("Inputs/RS232_read/IMU_read/FIFO ASCII read "),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 400, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 401, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 402, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 403, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 404, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 405, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 406, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 407, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 408, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 409, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 410, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 411, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Enable TX 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 412, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 413, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 414, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 415, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 416, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 1"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 417, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 418, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 419, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 420, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 421, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 2"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 422, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 423, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 424, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 425, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 426, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 3"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 427, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 428, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 429, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 430, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 431, TARGET_STRING("Inputs/RS232_read/QSC-100 F/FIFO write 4"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 432, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 433, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 434, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 435, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 436, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 437, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 438, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 439, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 440, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 441, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup1"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 442, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 443, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 444, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 445, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 446, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 447, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 448, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 449, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 450, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 451, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup2"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 452, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 453, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 454, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 455, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 456, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 457, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 458, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 459, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 460, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 461, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup3"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 462, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 463, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 464, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 465, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 466, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 467, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 468, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 469, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 470, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P9"), 0, 0, 0 },

  { 471, TARGET_STRING("Inputs/RS232_read/QSC-100 F/Setup4"),
    TARGET_STRING("P10"), 0, 0, 0 },

  { 472, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 473, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/obere Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 474, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/untere Grenze"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 475, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/Joystick-Steuerung/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 476, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Beschleunigung"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 477, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 478, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 479, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 480, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 481, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay1"),
    TARGET_STRING("DelayLength"), 5, 0, 0 },

  { 482, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 483, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 484, TARGET_STRING("Winch_Conrtol/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 485, TARGET_STRING("Inputs/RS232_read/IMU_read/Data_validation/IMU_data_valid"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 486, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 487, TARGET_STRING("Winch_Conrtol/Joystick Regelung1/damper/Compare To Zero1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 488, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant1"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 489, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant2"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 490, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant3"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 491, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant4"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 492, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Constant9"),
    TARGET_STRING("Value"), 5, 0, 0 },

  { 493, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Bitwise Logical Operator"),
    TARGET_STRING("BitMask"), 5, 0, 0 },

  { 494, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 495, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 496, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 497, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 498, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 499, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 500, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 501, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 502, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 503, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 504, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 505, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 506, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 507, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 508, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 509, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 510, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 511, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 512, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 513, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 514, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 515, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 516, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 517, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 518, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 519, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 520, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 521, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 522, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 523, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 524, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P7"), 0, 0, 0 },

  { 525, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4"),
    TARGET_STRING("P8"), 0, 0, 0 },

  { 526, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 527, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 528, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 529, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 530, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 531, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 532, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 533, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 534, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 535, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 536, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 537, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 538, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 539, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 540, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 541, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 542, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 543, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 544, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 545, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4"),
    TARGET_STRING("P5"), 0, 17, 0 },

  { 546, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 547, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 548, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 549, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 550, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 551, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 552, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 553, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 554, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 555, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 556, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 557, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 558, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 559, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 560, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 561, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 562, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 563, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 564, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 565, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 566, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 567, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 568, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 569, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 570, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 571, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 572, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 573, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 574, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 575, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 576, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 577, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 578, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 579, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 580, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 581, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 582, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 583, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 584, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 585, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 586, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 587, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 588, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 589, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 590, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 591, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 592, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 593, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 594, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 595, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 596, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 597, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 598, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 599, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 600, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 601, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 602, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 603, TARGET_STRING("Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4"),
    TARGET_STRING("P4"), 0, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 604, TARGET_STRING("AOsat"), 0, 0, 0 },

  { 605, TARGET_STRING("Afilt_Winch"), 0, 18, 0 },

  { 606, TARGET_STRING("Bfilt_Winch"), 0, 18, 0 },

  { 607, TARGET_STRING("Cfilt_Winch"), 0, 18, 0 },

  { 608, TARGET_STRING("Dfilt_Winch"), 0, 18, 0 },

  { 609, TARGET_STRING("JoyFiltDen"), 0, 12, 0 },

  { 610, TARGET_STRING("JoyFiltNum"), 0, 12, 0 },

  { 611, TARGET_STRING("JoyS_gain"), 0, 0, 0 },

  { 612, TARGET_STRING("JoyS_ofst"), 0, 0, 0 },

  { 613, TARGET_STRING("JoyS_sat"), 0, 0, 0 },

  { 614, TARGET_STRING("JoyW_gain"), 0, 0, 0 },

  { 615, TARGET_STRING("JoyW_ofst"), 0, 0, 0 },

  { 616, TARGET_STRING("KspdWinch"), 0, 0, 0 },

  { 617, TARGET_STRING("NPotSpdEst"), 0, 0, 0 },

  { 618, TARGET_STRING("PotPosFiltDen"), 0, 12, 0 },

  { 619, TARGET_STRING("PotPosFiltNum"), 0, 12, 0 },

  { 620, TARGET_STRING("Pot_gain"), 0, 0, 0 },

  { 621, TARGET_STRING("Pot_max"), 0, 0, 0 },

  { 622, TARGET_STRING("Pot_min"), 0, 0, 0 },

  { 623, TARGET_STRING("Pot_ofst"), 0, 0, 0 },

  { 624, TARGET_STRING("Ts_1ms"), 0, 0, 0 },

  { 625, TARGET_STRING("Ts_1s"), 0, 0, 0 },

  { 626, TARGET_STRING("WinchDrumRad"), 0, 0, 0 },

  { 627, TARGET_STRING("WinchMotPosAIgain"), 0, 0, 0 },

  { 628, TARGET_STRING("WinchMotTorqueMax"), 0, 0, 0 },

  { 629, TARGET_STRING("WinchPosFiltDen"), 0, 12, 0 },

  { 630, TARGET_STRING("WinchPosFiltNum"), 0, 12, 0 },

  { 631, TARGET_STRING("WinchRefSpdSup"), 0, 0, 0 },

  { 632, TARGET_STRING("WinchSpdEstFiltDen"), 0, 12, 0 },

  { 633, TARGET_STRING("WinchSpdEstFiltNum"), 0, 12, 0 },

  { 634, TARGET_STRING("WinchTravelMin_m"), 0, 0, 0 },

  { 635, TARGET_STRING("WinchVoltMax"), 0, 0, 0 },

  { 636, TARGET_STRING("x0_Winch"), 0, 3, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &Analog_Solution_B.Sum,              /* 0: Signal */
  &Analog_Solution_B.UnitDelay,        /* 1: Signal */
  &Analog_Solution_B.DataTypeConversion1[0],/* 2: Signal */
  &Analog_Solution_B.WallTime1[0],     /* 3: Signal */
  &Analog_Solution_B.Constant1,        /* 4: Signal */
  &Analog_Solution_B.Constant3,        /* 5: Signal */
  &Analog_Solution_B.RelationalOperator_c,/* 6: Signal */
  &Analog_Solution_B.SpoolingOutput,   /* 7: Signal */
  &Analog_Solution_B.Siemens_Output,   /* 8: Signal */
  &Analog_Solution_B.Siemens_Motor,    /* 9: Signal */
  &Analog_Solution_B.Switch1_b,        /* 10: Signal */
  &Analog_Solution_B.Gain_k,           /* 11: Signal */
  &Analog_Solution_B.Gain1_p,          /* 12: Signal */
  &Analog_Solution_B.Gain2,            /* 13: Signal */
  &Analog_Solution_B.SpoolingPosSoll,  /* 14: Signal */
  &Analog_Solution_B.RelationalOperator_o,/* 15: Signal */
  &Analog_Solution_B.RelationalOperator1_ba,/* 16: Signal */
  &Analog_Solution_B.RelationalOperator2,/* 17: Signal */
  &Analog_Solution_B.RelationalOperator3,/* 18: Signal */
  &Analog_Solution_B.RelationalOperator4,/* 19: Signal */
  &Analog_Solution_B.Switch_l,         /* 20: Signal */
  &Analog_Solution_B.Switch1_l,        /* 21: Signal */
  &Analog_Solution_B.Switch2,          /* 22: Signal */
  &Analog_Solution_B.Switch3,          /* 23: Signal */
  &Analog_Solution_B.Delay_a,          /* 24: Signal */
  &Analog_Solution_B.Delay1_c,         /* 25: Signal */
  &Analog_Solution_B.Gain_b,           /* 26: Signal */
  &Analog_Solution_B.WinchSpeedrads,   /* 27: Signal */
  &Analog_Solution_B.zweiteSpoolingGrenze,/* 28: Signal */
  &Analog_Solution_B.RelationalOperator_l,/* 29: Signal */
  &Analog_Solution_B.RelationalOperator1_h,/* 30: Signal */
  &Analog_Solution_B.Switch_k,         /* 31: Signal */
  &Analog_Solution_B.Sum_k,            /* 32: Signal */
  &Analog_Solution_B.Sum2,             /* 33: Signal */
  &Analog_Solution_B.Switch_dl,        /* 34: Signal */
  &Analog_Solution_B.Switch1_i3,       /* 35: Signal */
  &Analog_Solution_B.Switch10,         /* 36: Signal */
  &Analog_Solution_B.Switch11,         /* 37: Signal */
  &Analog_Solution_B.Switch8,          /* 38: Signal */
  &Analog_Solution_B.Switch9,          /* 39: Signal */
  &Analog_Solution_B.Delay_c,          /* 40: Signal */
  &Analog_Solution_B.Gain,             /* 41: Signal */
  &Analog_Solution_B.Gain1,            /* 42: Signal */
  &Analog_Solution_B.CI_JoyS,          /* 43: Signal */
  &Analog_Solution_B.CI_JoyW,          /* 44: Signal */
  &Analog_Solution_B.Sum_n,            /* 45: Signal */
  &Analog_Solution_B.Sum1,             /* 46: Signal */
  &Analog_Solution_B.DiscreteTransferFcn,/* 47: Signal */
  &Analog_Solution_B.DiscreteTransferFcn1,/* 48: Signal */
  &Analog_Solution_B.Gain_k4,          /* 49: Signal */
  &Analog_Solution_B.Gain_f,           /* 50: Signal */
  &Analog_Solution_B.CI_PotSpd,        /* 51: Signal */
  &Analog_Solution_B.CI_PotPos,        /* 52: Signal */
  &Analog_Solution_B.Sum_b,            /* 53: Signal */
  &Analog_Solution_B.Sum1_b,           /* 54: Signal */
  &Analog_Solution_B.Delay,            /* 55: Signal */
  &Analog_Solution_B.DiscreteTransferFcn1_c,/* 56: Signal */
  &Analog_Solution_B.AI_Joy_W,         /* 57: Signal */
  &Analog_Solution_B.AI_Joy_S,         /* 58: Signal */
  &Analog_Solution_B.AI_mot_SiemensMotor_Speed,/* 59: Signal */
  &Analog_Solution_B.AI_mot_winch_pos, /* 60: Signal */
  &Analog_Solution_B.AI_pot_pos,       /* 61: Signal */
  &Analog_Solution_B.DI_SlideLimitB,   /* 62: Signal */
  &Analog_Solution_B.DI_Enable,        /* 63: Signal */
  &Analog_Solution_B.DI_WinchMode,     /* 64: Signal */
  &Analog_Solution_B.DI_Takeoff,       /* 65: Signal */
  &Analog_Solution_B.DI_Landing,       /* 66: Signal */
  &Analog_Solution_B.DI_Operator,      /* 67: Signal */
  &Analog_Solution_B.DI_GliderPres,    /* 68: Signal */
  &Analog_Solution_B.DI_SlideLimitF,   /* 69: Signal */
  &Analog_Solution_B.Constant,         /* 70: Signal */
  &Analog_Solution_B.Constant1_d,      /* 71: Signal */
  &Analog_Solution_B.Constant2_j,      /* 72: Signal */
  &Analog_Solution_B.Constant3_h,      /* 73: Signal */
  &Analog_Solution_B.RateTransition_i[0],/* 74: Signal */
  &Analog_Solution_B.Switch_ku,        /* 75: Signal */
  &Analog_Solution_B.Trigger_time,     /* 76: Signal */
  &Analog_Solution_B.Abs,              /* 77: Signal */
  &Analog_Solution_B.UmdrehungSampleTime,/* 78: Signal */
  &Analog_Solution_B.RelationalOperator,/* 79: Signal */
  &Analog_Solution_B.Sum_bi,           /* 80: Signal */
  &Analog_Solution_B.Switch,           /* 81: Signal */
  &Analog_Solution_B.Delay_e,          /* 82: Signal */
  &Analog_Solution_B.Gain_j,           /* 83: Signal */
  &Analog_Solution_B.RelationalOperator_j,/* 84: Signal */
  &Analog_Solution_B.RelationalOperator1_b,/* 85: Signal */
  &Analog_Solution_B.Sum_no,           /* 86: Signal */
  &Analog_Solution_B.Sum1_j,           /* 87: Signal */
  &Analog_Solution_B.Switch_h,         /* 88: Signal */
  &Analog_Solution_B.Switch1_o,        /* 89: Signal */
  &Analog_Solution_B.Delay_k,          /* 90: Signal */
  &Analog_Solution_B.LogicalOperator,  /* 91: Signal */
  &Analog_Solution_B.LogicalOperator1, /* 92: Signal */
  &Analog_Solution_B.LogicalOperator2, /* 93: Signal */
  &Analog_Solution_B.LogicalOperator3, /* 94: Signal */
  &Analog_Solution_B.LogicalOperator4, /* 95: Signal */
  &Analog_Solution_B.LogicalOperator5, /* 96: Signal */
  &Analog_Solution_B.LogicalOperator6, /* 97: Signal */
  &Analog_Solution_B.LogicalOperator7, /* 98: Signal */
  &Analog_Solution_B.Switch_m,         /* 99: Signal */
  &Analog_Solution_B.Switch1_p,        /* 100: Signal */
  &Analog_Solution_B.Switch2_n,        /* 101: Signal */
  &Analog_Solution_B.Switch3_b,        /* 102: Signal */
  &Analog_Solution_B.Switch4,          /* 103: Signal */
  &Analog_Solution_B.Switch5,          /* 104: Signal */
  &Analog_Solution_B.Switch6,          /* 105: Signal */
  &Analog_Solution_B.Switch7,          /* 106: Signal */
  &Analog_Solution_B.Delay1,           /* 107: Signal */
  &Analog_Solution_B.Delay2,           /* 108: Signal */
  &Analog_Solution_B.Delay3,           /* 109: Signal */
  &Analog_Solution_B.Delay4,           /* 110: Signal */
  &Analog_Solution_B.Gain_fi,          /* 111: Signal */
  &Analog_Solution_B.Sum_m,            /* 112: Signal */
  &Analog_Solution_B.Sum1_e,           /* 113: Signal */
  &Analog_Solution_B.Switch_c,         /* 114: Signal */
  &Analog_Solution_B.Switch1_d,        /* 115: Signal */
  &Analog_Solution_B.Delay_kl,         /* 116: Signal */
  &Analog_Solution_B.Delay1_j,         /* 117: Signal */
  &Analog_Solution_B.Gain_m,           /* 118: Signal */
  &Analog_Solution_B.Sum_p,            /* 119: Signal */
  &Analog_Solution_B.Sum1_n,           /* 120: Signal */
  &Analog_Solution_B.CI_WinchPos,      /* 121: Signal */
  &Analog_Solution_B.DiscreteStateSpace[0],/* 122: Signal */
  &Analog_Solution_B.Gain_g,           /* 123: Signal */
  &Analog_Solution_B.Gain1_d,          /* 124: Signal */
  &Analog_Solution_B.Saturation,       /* 125: Signal */
  &Analog_Solution_B.Saturation1,      /* 126: Signal */
  &Analog_Solution_B.Sum_c,            /* 127: Signal */
  &Analog_Solution_B.Sum1_nr,          /* 128: Signal */
  &Analog_Solution_B.Sum2_a,           /* 129: Signal */
  &Analog_Solution_B.WinchMotTorqueEst,/* 130: Signal */
  &Analog_Solution_B.WinchMotSpeedEst, /* 131: Signal */
  &Analog_Solution_B.GU_Yaw,           /* 132: Signal */
  &Analog_Solution_B.RateTransition4_p,/* 133: Signal */
  &Analog_Solution_B.FIFOASCIIread1[0],/* 134: Signal */
  &Analog_Solution_B.GU_Lat,           /* 135: Signal */
  &Analog_Solution_B.GU_Lon,           /* 136: Signal */
  &Analog_Solution_B.GU_h,             /* 137: Signal */
  &Analog_Solution_B.Geo_GU_h,         /* 138: Signal */
  &Analog_Solution_B.RateTransition4_d,/* 139: Signal */
  &Analog_Solution_B.FIFOASCIIread1_k[0],/* 140: Signal */
  &Analog_Solution_B.RateTransition4_f,/* 141: Signal */
  &Analog_Solution_B.FIFOASCIIread[0], /* 142: Signal */
  &Analog_Solution_B.RateTransition,   /* 143: Signal */
  &Analog_Solution_B.RateTransition1,  /* 144: Signal */
  &Analog_Solution_B.RateTransition2,  /* 145: Signal */
  &Analog_Solution_B.RateTransition3,  /* 146: Signal */
  &Analog_Solution_B.RateTransition4,  /* 147: Signal */
  &Analog_Solution_B.RateTransition5,  /* 148: Signal */
  &Analog_Solution_B.RateTransition6,  /* 149: Signal */
  &Analog_Solution_B.RateTransition7,  /* 150: Signal */
  &Analog_Solution_B.FIFOwrite1_o1,    /* 151: Signal */
  &Analog_Solution_B.FIFOwrite1_o2,    /* 152: Signal */
  &Analog_Solution_B.FIFOwrite2_o1,    /* 153: Signal */
  &Analog_Solution_B.FIFOwrite2_o2,    /* 154: Signal */
  &Analog_Solution_B.FIFOwrite3_o1,    /* 155: Signal */
  &Analog_Solution_B.FIFOwrite3_o2,    /* 156: Signal */
  &Analog_Solution_B.FIFOwrite4_o1,    /* 157: Signal */
  &Analog_Solution_B.FIFOwrite4_o2,    /* 158: Signal */
  &Analog_Solution_B.Gain_mz,          /* 159: Signal */
  &Analog_Solution_B.RelationalOperator_a,/* 160: Signal */
  &Analog_Solution_B.RelationalOperator1,/* 161: Signal */
  &Analog_Solution_B.Sum_my,           /* 162: Signal */
  &Analog_Solution_B.Sum1_k,           /* 163: Signal */
  &Analog_Solution_B.Switch_kw,        /* 164: Signal */
  &Analog_Solution_B.Switch1,          /* 165: Signal */
  &Analog_Solution_B.Gain_mu,          /* 166: Signal */
  &Analog_Solution_B.Sum_j,            /* 167: Signal */
  &Analog_Solution_B.Sum1_l,           /* 168: Signal */
  &Analog_Solution_B.Switch_d,         /* 169: Signal */
  &Analog_Solution_B.Switch1_i,        /* 170: Signal */
  &Analog_Solution_B.Delay_c3,         /* 171: Signal */
  &Analog_Solution_B.Delay1_h,         /* 172: Signal */
  &Analog_Solution_B.Compare_k,        /* 173: Signal */
  &Analog_Solution_B.Compare_m,        /* 174: Signal */
  &Analog_Solution_B.CRC_valid,        /* 175: Signal */
  &Analog_Solution_B.IMU_data[0],      /* 176: Signal */
  &Analog_Solution_B.Compare_b,        /* 177: Signal */
  &Analog_Solution_B.Compare,          /* 178: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_l.uint32_out,/* 179: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_e.uint8_out,/* 180: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction2_h.uint8_out,/* 181: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_b.sing_out,/* 182: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_j.sing_out,/* 183: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3_ps.sing_out,/* 184: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_a.uint8_out,/* 185: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_c.uint32_out,/* 186: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction2_p.uint8_out,/* 187: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3_k.uint8_out,/* 188: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction4_h.uint8_out,/* 189: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction5.uint8_out,/* 190: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction6.uint8_out,/* 191: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_bf.uint32_out,/* 192: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_g.int32_out,/* 193: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction2.int32_out,/* 194: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3_pw.int32_out,/* 195: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_n.int32_out,/* 196: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction2_n.int32_out,/* 197: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3_o.int32_out,/* 198: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction4_g.int32_out,/* 199: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction2_m.int32_out,/* 200: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_k.double_out,/* 201: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_a.double_out,/* 202: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction2_g.double_out,/* 203: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_j.sing_out,/* 204: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_d.sing_out,/* 205: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3_n.sing_out,/* 206: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_g.sing_out,/* 207: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1.sing_out,/* 208: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3.sing_out,/* 209: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction4.sing_out,/* 210: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_d.sing_out,/* 211: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_i.sing_out,/* 212: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3_p.sing_out,/* 213: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction_f.sing_out,/* 214: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction1_p.sing_out,/* 215: Signal */
  &Analog_Solution_B.sf_EmbeddedMATLABFunction3_a.sing_out,/* 216: Signal */
  &Analog_Solution_B.Constant1_p,      /* 217: Signal */
  &Analog_Solution_B.Constant2,        /* 218: Signal */
  &Analog_Solution_B.Constant3_o,      /* 219: Signal */
  &Analog_Solution_B.Constant4,        /* 220: Signal */
  &Analog_Solution_B.LogicalOperator_c,/* 221: Signal */
  &Analog_Solution_B.RelationalOperator_m[0],/* 222: Signal */
  &Analog_Solution_B.BitwiseLogicalOperator[0],/* 223: Signal */
  &Analog_Solution_B.FIFOread1_o1[0],  /* 224: Signal */
  &Analog_Solution_B.FIFOread1_o2,     /* 225: Signal */
  &Analog_Solution_B.FIFOread2_o1[0],  /* 226: Signal */
  &Analog_Solution_B.FIFOread2_o2,     /* 227: Signal */
  &Analog_Solution_B.FIFOread3_o1[0],  /* 228: Signal */
  &Analog_Solution_B.FIFOread3_o2,     /* 229: Signal */
  &Analog_Solution_B.FIFOread4_o1[0],  /* 230: Signal */
  &Analog_Solution_B.FIFOread4_o2,     /* 231: Signal */
  &Analog_Solution_B.FIFOwrite1,       /* 232: Signal */
  &Analog_Solution_B.FIFOwrite2,       /* 233: Signal */
  &Analog_Solution_B.FIFOwrite3,       /* 234: Signal */
  &Analog_Solution_B.FIFOwrite4,       /* 235: Signal */
  &Analog_Solution_B.FilterIntReason1, /* 236: Signal */
  &Analog_Solution_B.FilterIntReason2, /* 237: Signal */
  &Analog_Solution_B.FilterIntReason3, /* 238: Signal */
  &Analog_Solution_B.FilterIntReason4, /* 239: Signal */
  &Analog_Solution_B.FilterIntReason5, /* 240: Signal */
  &Analog_Solution_B.FilterIntReason6, /* 241: Signal */
  &Analog_Solution_B.FilterIntReason7, /* 242: Signal */
  &Analog_Solution_B.FilterIntReason8, /* 243: Signal */
  &Analog_Solution_B.ReadHWFIFO1[0],   /* 244: Signal */
  &Analog_Solution_B.ReadHWFIFO2[0],   /* 245: Signal */
  &Analog_Solution_B.ReadHWFIFO3[0],   /* 246: Signal */
  &Analog_Solution_B.ReadHWFIFO4[0],   /* 247: Signal */
  &Analog_Solution_B.ReadIntStatus1[0],/* 248: Signal */
  &Analog_Solution_P.UnitDelay_InitialCondition,/* 249: Block Parameter */
  &Analog_Solution_P.WallTime1_P1,     /* 250: Block Parameter */
  &Analog_Solution_P.WallTime1_P2[0],  /* 251: Block Parameter */
  &Analog_Solution_P.WallTime1_P3,     /* 252: Block Parameter */
  &Analog_Solution_P.WallTime1_P4,     /* 253: Block Parameter */
  &Analog_Solution_P.WallTime1_P5,     /* 254: Block Parameter */
  &Analog_Solution_P.Constant_Value,   /* 255: Block Parameter */
  &Analog_Solution_P.Constant1_Value_b,/* 256: Block Parameter */
  &Analog_Solution_P.Constant3_Value_n,/* 257: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDO_P1,  /* 258: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDO_P2[0],/* 259: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDO_P3,  /* 260: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDO_P4[0],/* 261: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDO_P5[0],/* 262: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDO_P6,  /* 263: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDO_P7,  /* 264: Block Parameter */
  &Analog_Solution_P.PCI6221DA_P1[0],  /* 265: Block Parameter */
  &Analog_Solution_P.PCI6221DA_P2[0],  /* 266: Block Parameter */
  &Analog_Solution_P.PCI6221DA_P3[0],  /* 267: Block Parameter */
  &Analog_Solution_P.PCI6221DA_P4[0],  /* 268: Block Parameter */
  &Analog_Solution_P.PCI6221DA_P5,     /* 269: Block Parameter */
  &Analog_Solution_P.PCI6221DA_P6,     /* 270: Block Parameter */
  &Analog_Solution_P.PCI6221DA_P7,     /* 271: Block Parameter */
  &Analog_Solution_P.PCI6221DO_P1,     /* 272: Block Parameter */
  &Analog_Solution_P.PCI6221DO_P2,     /* 273: Block Parameter */
  &Analog_Solution_P.PCI6221DO_P3,     /* 274: Block Parameter */
  &Analog_Solution_P.PCI6221DO_P4,     /* 275: Block Parameter */
  &Analog_Solution_P.PCI6221DO_P5,     /* 276: Block Parameter */
  &Analog_Solution_P.PCI6221DO_P6,     /* 277: Block Parameter */
  &Analog_Solution_P.PCI6221DO_P7,     /* 278: Block Parameter */
  &Analog_Solution_P.Constant1_Value,  /* 279: Block Parameter */
  &Analog_Solution_P.SpoolingGeschw_Value,/* 280: Block Parameter */
  &Analog_Solution_P.ersteGrenzeSpooling_Value,/* 281: Block Parameter */
  &Analog_Solution_P.Gain_Gain_i,      /* 282: Block Parameter */
  &Analog_Solution_P.Gain1_Gain,       /* 283: Block Parameter */
  &Analog_Solution_P.Gain2_Gain,       /* 284: Block Parameter */
  &Analog_Solution_P.Umrechnung_Gain_n,/* 285: Block Parameter */
  &Analog_Solution_P.Delay_DelayLength_h,/* 286: Block Parameter */
  &Analog_Solution_P.Delay_InitialCondition_ax,/* 287: Block Parameter */
  &Analog_Solution_P.Delay1_DelayLength_g,/* 288: Block Parameter */
  &Analog_Solution_P.Delay1_InitialCondition_l,/* 289: Block Parameter */
  &Analog_Solution_P.ersteSpoolingGrenze_Value,/* 290: Block Parameter */
  &Analog_Solution_P.Gain_Gain_j,      /* 291: Block Parameter */
  &Analog_Solution_P.Umrechnung_Gain,  /* 292: Block Parameter */
  &Analog_Solution_P.zweiteSpoolingGrenze_Gain,/* 293: Block Parameter */
  &Analog_Solution_P.Constant_Value_n, /* 294: Block Parameter */
  &Analog_Solution_P.Constant2_Value_h,/* 295: Block Parameter */
  &Analog_Solution_P.Constant3_Value,  /* 296: Block Parameter */
  &Analog_Solution_P.konstanteAusrollgeschw_Value,/* 297: Block Parameter */
  &Analog_Solution_P.konstanteAusrollgeschw1_Value,/* 298: Block Parameter */
  &Analog_Solution_P.konstanteEinrollgeschw_Value,/* 299: Block Parameter */
  &Analog_Solution_P.Switch_Threshold, /* 300: Block Parameter */
  &Analog_Solution_P.Switch1_Threshold_f,/* 301: Block Parameter */
  &Analog_Solution_P.Delay_DelayLength_l,/* 302: Block Parameter */
  &Analog_Solution_P.Delay_InitialCondition_a,/* 303: Block Parameter */
  &Analog_Solution_P.Saturation1_UpperSat,/* 304: Block Parameter */
  &Analog_Solution_P.Saturation1_LowerSat,/* 305: Block Parameter */
  &Analog_Solution_P.DiscreteTransferFcn_InitialStat,/* 306: Block Parameter */
  &Analog_Solution_P.DiscreteTransferFcn1_InitialSta,/* 307: Block Parameter */
  &Analog_Solution_P.Gain_Gain,        /* 308: Block Parameter */
  &Analog_Solution_P.Delay_DelayLength,/* 309: Block Parameter */
  &Analog_Solution_P.Delay_InitialCondition,/* 310: Block Parameter */
  &Analog_Solution_P.DiscreteTransferFcn1_InitialS_d,/* 311: Block Parameter */
  &Analog_Solution_P.PCI6221AD_P1[0],  /* 312: Block Parameter */
  &Analog_Solution_P.PCI6221AD_P2[0],  /* 313: Block Parameter */
  &Analog_Solution_P.PCI6221AD_P3[0],  /* 314: Block Parameter */
  &Analog_Solution_P.PCI6221AD_P4,     /* 315: Block Parameter */
  &Analog_Solution_P.PCI6221AD_P5,     /* 316: Block Parameter */
  &Analog_Solution_P.PCI6221AD_P6,     /* 317: Block Parameter */
  &Analog_Solution_P.PCI6221AD_P7,     /* 318: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDI_P1,  /* 319: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDI_P2,  /* 320: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDI_P3,  /* 321: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDI_P4,  /* 322: Block Parameter */
  &Analog_Solution_P.PCI6221PFIDI_P5,  /* 323: Block Parameter */
  &Analog_Solution_P.PCI6221DI_P1[0],  /* 324: Block Parameter */
  &Analog_Solution_P.PCI6221DI_P2,     /* 325: Block Parameter */
  &Analog_Solution_P.PCI6221DI_P3,     /* 326: Block Parameter */
  &Analog_Solution_P.PCI6221DI_P4,     /* 327: Block Parameter */
  &Analog_Solution_P.PCI6221DI_P5,     /* 328: Block Parameter */
  &Analog_Solution_P.Constant_Value_bd,/* 329: Block Parameter */
  &Analog_Solution_P.Constant1_Value_c,/* 330: Block Parameter */
  &Analog_Solution_P.Constant2_Value_j,/* 331: Block Parameter */
  &Analog_Solution_P.Constant3_Value_d2,/* 332: Block Parameter */
  &Analog_Solution_P.Constant_Value_d, /* 333: Block Parameter */
  &Analog_Solution_P.Constant1_Value_p,/* 334: Block Parameter */
  &Analog_Solution_P.Constant2_Value_d,/* 335: Block Parameter */
  &Analog_Solution_P.Constant_Value_b, /* 336: Block Parameter */
  &Analog_Solution_P.Constant1_Value_g,/* 337: Block Parameter */
  &Analog_Solution_P.SampleZeit_Gain,  /* 338: Block Parameter */
  &Analog_Solution_P.Delay_DelayLength_o,/* 339: Block Parameter */
  &Analog_Solution_P.Delay_InitialCondition_b,/* 340: Block Parameter */
  &Analog_Solution_P.Beschleunigung_Value_o,/* 341: Block Parameter */
  &Analog_Solution_P.obereKraftsensorGrenze_Value,/* 342: Block Parameter */
  &Analog_Solution_P.untereKraftsensorGrenze_Value,/* 343: Block Parameter */
  &Analog_Solution_P.Gain_Gain_p,      /* 344: Block Parameter */
  &Analog_Solution_P.Delay_DelayLength_g,/* 345: Block Parameter */
  &Analog_Solution_P.Delay_InitialCondition_b5,/* 346: Block Parameter */
  &Analog_Solution_P.Constant2_Value_k,/* 347: Block Parameter */
  &Analog_Solution_P.Constant3_Value_j,/* 348: Block Parameter */
  &Analog_Solution_P.Switch_Threshold_h2,/* 349: Block Parameter */
  &Analog_Solution_P.Switch1_Threshold,/* 350: Block Parameter */
  &Analog_Solution_P.Switch2_Threshold,/* 351: Block Parameter */
  &Analog_Solution_P.Switch3_Threshold,/* 352: Block Parameter */
  &Analog_Solution_P.Switch4_Threshold,/* 353: Block Parameter */
  &Analog_Solution_P.Switch5_Threshold,/* 354: Block Parameter */
  &Analog_Solution_P.Switch6_Threshold,/* 355: Block Parameter */
  &Analog_Solution_P.Switch7_Threshold,/* 356: Block Parameter */
  &Analog_Solution_P.Delay1_DelayLength,/* 357: Block Parameter */
  &Analog_Solution_P.Delay1_InitialCondition,/* 358: Block Parameter */
  &Analog_Solution_P.Delay2_DelayLength,/* 359: Block Parameter */
  &Analog_Solution_P.Delay2_InitialCondition,/* 360: Block Parameter */
  &Analog_Solution_P.Delay3_DelayLength,/* 361: Block Parameter */
  &Analog_Solution_P.Delay3_InitialCondition,/* 362: Block Parameter */
  &Analog_Solution_P.Delay4_DelayLength,/* 363: Block Parameter */
  &Analog_Solution_P.Delay4_InitialCondition,/* 364: Block Parameter */
  &Analog_Solution_P.Beschleunigung_Value,/* 365: Block Parameter */
  &Analog_Solution_P.Constant1_Value_gd,/* 366: Block Parameter */
  &Analog_Solution_P.Gain_Gain_f,      /* 367: Block Parameter */
  &Analog_Solution_P.Delay_DelayLength_n,/* 368: Block Parameter */
  &Analog_Solution_P.Delay_InitialCondition_c,/* 369: Block Parameter */
  &Analog_Solution_P.Delay1_DelayLength_i,/* 370: Block Parameter */
  &Analog_Solution_P.Delay1_InitialCondition_a,/* 371: Block Parameter */
  &Analog_Solution_P.DiscreteTransferFcn1_InitialS_h,/* 372: Block Parameter */
  &Analog_Solution_P.Constant2_Value,  /* 373: Block Parameter */
  &Analog_Solution_P.Switch_Threshold_h,/* 374: Block Parameter */
  &Analog_Solution_P.DiscreteTransferFcn_InitialSt_m,/* 375: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P1,/* 376: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P2,/* 377: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P3,/* 378: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P4[0],/* 379: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P5,/* 380: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P6,/* 381: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P7,/* 382: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P8,/* 383: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P1_l,/* 384: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P2_b,/* 385: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P3_n,/* 386: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P4_e[0],/* 387: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P5_o,/* 388: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P6_i[0],/* 389: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P7_i,/* 390: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread1_P8_n,/* 391: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P1, /* 392: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P2, /* 393: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P3, /* 394: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P4[0],/* 395: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P5, /* 396: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P6[0],/* 397: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P7, /* 398: Block Parameter */
  &Analog_Solution_P.FIFOASCIIread_P8, /* 399: Block Parameter */
  &Analog_Solution_P.EnableTX1_P1,     /* 400: Block Parameter */
  &Analog_Solution_P.EnableTX1_P2,     /* 401: Block Parameter */
  &Analog_Solution_P.EnableTX1_P3,     /* 402: Block Parameter */
  &Analog_Solution_P.EnableTX2_P1,     /* 403: Block Parameter */
  &Analog_Solution_P.EnableTX2_P2,     /* 404: Block Parameter */
  &Analog_Solution_P.EnableTX2_P3,     /* 405: Block Parameter */
  &Analog_Solution_P.EnableTX3_P1,     /* 406: Block Parameter */
  &Analog_Solution_P.EnableTX3_P2,     /* 407: Block Parameter */
  &Analog_Solution_P.EnableTX3_P3,     /* 408: Block Parameter */
  &Analog_Solution_P.EnableTX4_P1,     /* 409: Block Parameter */
  &Analog_Solution_P.EnableTX4_P2,     /* 410: Block Parameter */
  &Analog_Solution_P.EnableTX4_P3,     /* 411: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P1_n,  /* 412: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P2_o,  /* 413: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P3_n,  /* 414: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P4_j,  /* 415: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P5_o[0],/* 416: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P1_l,  /* 417: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P2_i,  /* 418: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P3_h,  /* 419: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P4_d,  /* 420: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P5_g[0],/* 421: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P1_p,  /* 422: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P2_n,  /* 423: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P3_k,  /* 424: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P4_m,  /* 425: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P5_a[0],/* 426: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P1_e,  /* 427: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P2_n,  /* 428: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P3_p,  /* 429: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P4_f,  /* 430: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P5_e[0],/* 431: Block Parameter */
  &Analog_Solution_P.Setup1_P1,        /* 432: Block Parameter */
  &Analog_Solution_P.Setup1_P2,        /* 433: Block Parameter */
  &Analog_Solution_P.Setup1_P3,        /* 434: Block Parameter */
  &Analog_Solution_P.Setup1_P4,        /* 435: Block Parameter */
  &Analog_Solution_P.Setup1_P5,        /* 436: Block Parameter */
  &Analog_Solution_P.Setup1_P6,        /* 437: Block Parameter */
  &Analog_Solution_P.Setup1_P7,        /* 438: Block Parameter */
  &Analog_Solution_P.Setup1_P8,        /* 439: Block Parameter */
  &Analog_Solution_P.Setup1_P9,        /* 440: Block Parameter */
  &Analog_Solution_P.Setup1_P10,       /* 441: Block Parameter */
  &Analog_Solution_P.Setup2_P1,        /* 442: Block Parameter */
  &Analog_Solution_P.Setup2_P2,        /* 443: Block Parameter */
  &Analog_Solution_P.Setup2_P3,        /* 444: Block Parameter */
  &Analog_Solution_P.Setup2_P4,        /* 445: Block Parameter */
  &Analog_Solution_P.Setup2_P5,        /* 446: Block Parameter */
  &Analog_Solution_P.Setup2_P6,        /* 447: Block Parameter */
  &Analog_Solution_P.Setup2_P7,        /* 448: Block Parameter */
  &Analog_Solution_P.Setup2_P8,        /* 449: Block Parameter */
  &Analog_Solution_P.Setup2_P9,        /* 450: Block Parameter */
  &Analog_Solution_P.Setup2_P10,       /* 451: Block Parameter */
  &Analog_Solution_P.Setup3_P1,        /* 452: Block Parameter */
  &Analog_Solution_P.Setup3_P2,        /* 453: Block Parameter */
  &Analog_Solution_P.Setup3_P3,        /* 454: Block Parameter */
  &Analog_Solution_P.Setup3_P4,        /* 455: Block Parameter */
  &Analog_Solution_P.Setup3_P5,        /* 456: Block Parameter */
  &Analog_Solution_P.Setup3_P6,        /* 457: Block Parameter */
  &Analog_Solution_P.Setup3_P7,        /* 458: Block Parameter */
  &Analog_Solution_P.Setup3_P8,        /* 459: Block Parameter */
  &Analog_Solution_P.Setup3_P9,        /* 460: Block Parameter */
  &Analog_Solution_P.Setup3_P10,       /* 461: Block Parameter */
  &Analog_Solution_P.Setup4_P1,        /* 462: Block Parameter */
  &Analog_Solution_P.Setup4_P2,        /* 463: Block Parameter */
  &Analog_Solution_P.Setup4_P3,        /* 464: Block Parameter */
  &Analog_Solution_P.Setup4_P4,        /* 465: Block Parameter */
  &Analog_Solution_P.Setup4_P5,        /* 466: Block Parameter */
  &Analog_Solution_P.Setup4_P6,        /* 467: Block Parameter */
  &Analog_Solution_P.Setup4_P7,        /* 468: Block Parameter */
  &Analog_Solution_P.Setup4_P8,        /* 469: Block Parameter */
  &Analog_Solution_P.Setup4_P9,        /* 470: Block Parameter */
  &Analog_Solution_P.Setup4_P10,       /* 471: Block Parameter */
  &Analog_Solution_P.Beschleunigung_Value_i,/* 472: Block Parameter */
  &Analog_Solution_P.obereGrenze_Value,/* 473: Block Parameter */
  &Analog_Solution_P.untereGrenze_Value,/* 474: Block Parameter */
  &Analog_Solution_P.Gain_Gain_a,      /* 475: Block Parameter */
  &Analog_Solution_P.Beschleunigung_Value_p,/* 476: Block Parameter */
  &Analog_Solution_P.Constant1_Value_pr,/* 477: Block Parameter */
  &Analog_Solution_P.Gain_Gain_e,      /* 478: Block Parameter */
  &Analog_Solution_P.Delay_DelayLength_a,/* 479: Block Parameter */
  &Analog_Solution_P.Delay_InitialCondition_au,/* 480: Block Parameter */
  &Analog_Solution_P.Delay1_DelayLength_h,/* 481: Block Parameter */
  &Analog_Solution_P.Delay1_InitialCondition_n,/* 482: Block Parameter */
  &Analog_Solution_P.Constant_Value_m0,/* 483: Block Parameter */
  &Analog_Solution_P.Constant_Value_i, /* 484: Block Parameter */
  &Analog_Solution_P.IMU_data_valid_Y0,/* 485: Block Parameter */
  &Analog_Solution_P.Constant_Value_h, /* 486: Block Parameter */
  &Analog_Solution_P.Constant_Value_m, /* 487: Block Parameter */
  &Analog_Solution_P.Constant1_Value_be,/* 488: Block Parameter */
  &Analog_Solution_P.Constant2_Value_n,/* 489: Block Parameter */
  &Analog_Solution_P.Constant3_Value_d,/* 490: Block Parameter */
  &Analog_Solution_P.Constant4_Value,  /* 491: Block Parameter */
  &Analog_Solution_P.Constant9_Value,  /* 492: Block Parameter */
  &Analog_Solution_P.BitwiseLogicalOperator_BitMask,/* 493: Block Parameter */
  &Analog_Solution_P.FIFOread1_P1,     /* 494: Block Parameter */
  &Analog_Solution_P.FIFOread1_P2,     /* 495: Block Parameter */
  &Analog_Solution_P.FIFOread1_P3,     /* 496: Block Parameter */
  &Analog_Solution_P.FIFOread1_P4,     /* 497: Block Parameter */
  &Analog_Solution_P.FIFOread1_P5,     /* 498: Block Parameter */
  &Analog_Solution_P.FIFOread1_P6,     /* 499: Block Parameter */
  &Analog_Solution_P.FIFOread1_P7,     /* 500: Block Parameter */
  &Analog_Solution_P.FIFOread1_P8,     /* 501: Block Parameter */
  &Analog_Solution_P.FIFOread2_P1,     /* 502: Block Parameter */
  &Analog_Solution_P.FIFOread2_P2,     /* 503: Block Parameter */
  &Analog_Solution_P.FIFOread2_P3,     /* 504: Block Parameter */
  &Analog_Solution_P.FIFOread2_P4,     /* 505: Block Parameter */
  &Analog_Solution_P.FIFOread2_P5,     /* 506: Block Parameter */
  &Analog_Solution_P.FIFOread2_P6,     /* 507: Block Parameter */
  &Analog_Solution_P.FIFOread2_P7,     /* 508: Block Parameter */
  &Analog_Solution_P.FIFOread2_P8,     /* 509: Block Parameter */
  &Analog_Solution_P.FIFOread3_P1,     /* 510: Block Parameter */
  &Analog_Solution_P.FIFOread3_P2,     /* 511: Block Parameter */
  &Analog_Solution_P.FIFOread3_P3,     /* 512: Block Parameter */
  &Analog_Solution_P.FIFOread3_P4,     /* 513: Block Parameter */
  &Analog_Solution_P.FIFOread3_P5,     /* 514: Block Parameter */
  &Analog_Solution_P.FIFOread3_P6,     /* 515: Block Parameter */
  &Analog_Solution_P.FIFOread3_P7,     /* 516: Block Parameter */
  &Analog_Solution_P.FIFOread3_P8,     /* 517: Block Parameter */
  &Analog_Solution_P.FIFOread4_P1,     /* 518: Block Parameter */
  &Analog_Solution_P.FIFOread4_P2,     /* 519: Block Parameter */
  &Analog_Solution_P.FIFOread4_P3,     /* 520: Block Parameter */
  &Analog_Solution_P.FIFOread4_P4,     /* 521: Block Parameter */
  &Analog_Solution_P.FIFOread4_P5,     /* 522: Block Parameter */
  &Analog_Solution_P.FIFOread4_P6,     /* 523: Block Parameter */
  &Analog_Solution_P.FIFOread4_P7,     /* 524: Block Parameter */
  &Analog_Solution_P.FIFOread4_P8,     /* 525: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P1,    /* 526: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P2,    /* 527: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P3,    /* 528: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P4,    /* 529: Block Parameter */
  &Analog_Solution_P.FIFOwrite1_P5[0], /* 530: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P1,    /* 531: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P2,    /* 532: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P3,    /* 533: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P4,    /* 534: Block Parameter */
  &Analog_Solution_P.FIFOwrite2_P5[0], /* 535: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P1,    /* 536: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P2,    /* 537: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P3,    /* 538: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P4,    /* 539: Block Parameter */
  &Analog_Solution_P.FIFOwrite3_P5[0], /* 540: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P1,    /* 541: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P2,    /* 542: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P3,    /* 543: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P4,    /* 544: Block Parameter */
  &Analog_Solution_P.FIFOwrite4_P5[0], /* 545: Block Parameter */
  &Analog_Solution_P.FilterIntReason1_P1,/* 546: Block Parameter */
  &Analog_Solution_P.FilterIntReason1_P2,/* 547: Block Parameter */
  &Analog_Solution_P.FilterIntReason1_P3,/* 548: Block Parameter */
  &Analog_Solution_P.FilterIntReason2_P1,/* 549: Block Parameter */
  &Analog_Solution_P.FilterIntReason2_P2,/* 550: Block Parameter */
  &Analog_Solution_P.FilterIntReason2_P3,/* 551: Block Parameter */
  &Analog_Solution_P.FilterIntReason3_P1,/* 552: Block Parameter */
  &Analog_Solution_P.FilterIntReason3_P2,/* 553: Block Parameter */
  &Analog_Solution_P.FilterIntReason3_P3,/* 554: Block Parameter */
  &Analog_Solution_P.FilterIntReason4_P1,/* 555: Block Parameter */
  &Analog_Solution_P.FilterIntReason4_P2,/* 556: Block Parameter */
  &Analog_Solution_P.FilterIntReason4_P3,/* 557: Block Parameter */
  &Analog_Solution_P.FilterIntReason5_P1,/* 558: Block Parameter */
  &Analog_Solution_P.FilterIntReason5_P2,/* 559: Block Parameter */
  &Analog_Solution_P.FilterIntReason5_P3,/* 560: Block Parameter */
  &Analog_Solution_P.FilterIntReason6_P1,/* 561: Block Parameter */
  &Analog_Solution_P.FilterIntReason6_P2,/* 562: Block Parameter */
  &Analog_Solution_P.FilterIntReason6_P3,/* 563: Block Parameter */
  &Analog_Solution_P.FilterIntReason7_P1,/* 564: Block Parameter */
  &Analog_Solution_P.FilterIntReason7_P2,/* 565: Block Parameter */
  &Analog_Solution_P.FilterIntReason7_P3,/* 566: Block Parameter */
  &Analog_Solution_P.FilterIntReason8_P1,/* 567: Block Parameter */
  &Analog_Solution_P.FilterIntReason8_P2,/* 568: Block Parameter */
  &Analog_Solution_P.FilterIntReason8_P3,/* 569: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO1_P1,   /* 570: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO1_P2,   /* 571: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO1_P3,   /* 572: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO1_P4,   /* 573: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO2_P1,   /* 574: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO2_P2,   /* 575: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO2_P3,   /* 576: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO2_P4,   /* 577: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO3_P1,   /* 578: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO3_P2,   /* 579: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO3_P3,   /* 580: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO3_P4,   /* 581: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO4_P1,   /* 582: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO4_P2,   /* 583: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO4_P3,   /* 584: Block Parameter */
  &Analog_Solution_P.ReadHWFIFO4_P4,   /* 585: Block Parameter */
  &Analog_Solution_P.ReadIntStatus1_P1,/* 586: Block Parameter */
  &Analog_Solution_P.ReadIntStatus1_P2,/* 587: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO1_P1,  /* 588: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO1_P2,  /* 589: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO1_P3,  /* 590: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO1_P4,  /* 591: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO2_P1,  /* 592: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO2_P2,  /* 593: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO2_P3,  /* 594: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO2_P4,  /* 595: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO3_P1,  /* 596: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO3_P2,  /* 597: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO3_P3,  /* 598: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO3_P4,  /* 599: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO4_P1,  /* 600: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO4_P2,  /* 601: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO4_P3,  /* 602: Block Parameter */
  &Analog_Solution_P.WriteHWFIFO4_P4,  /* 603: Block Parameter */
  &Analog_Solution_P.AOsat,            /* 604: Model Parameter */
  &Analog_Solution_P.Afilt_Winch[0],   /* 605: Model Parameter */
  &Analog_Solution_P.Bfilt_Winch[0],   /* 606: Model Parameter */
  &Analog_Solution_P.Cfilt_Winch[0],   /* 607: Model Parameter */
  &Analog_Solution_P.Dfilt_Winch[0],   /* 608: Model Parameter */
  &Analog_Solution_P.JoyFiltDen[0],    /* 609: Model Parameter */
  &Analog_Solution_P.JoyFiltNum[0],    /* 610: Model Parameter */
  &Analog_Solution_P.JoyS_gain,        /* 611: Model Parameter */
  &Analog_Solution_P.JoyS_ofst,        /* 612: Model Parameter */
  &Analog_Solution_P.JoyS_sat,         /* 613: Model Parameter */
  &Analog_Solution_P.JoyW_gain,        /* 614: Model Parameter */
  &Analog_Solution_P.JoyW_ofst,        /* 615: Model Parameter */
  &Analog_Solution_P.KspdWinch,        /* 616: Model Parameter */
  &Analog_Solution_P.NPotSpdEst,       /* 617: Model Parameter */
  &Analog_Solution_P.PotPosFiltDen[0], /* 618: Model Parameter */
  &Analog_Solution_P.PotPosFiltNum[0], /* 619: Model Parameter */
  &Analog_Solution_P.Pot_gain,         /* 620: Model Parameter */
  &Analog_Solution_P.Pot_max,          /* 621: Model Parameter */
  &Analog_Solution_P.Pot_min,          /* 622: Model Parameter */
  &Analog_Solution_P.Pot_ofst,         /* 623: Model Parameter */
  &Analog_Solution_P.Ts_1ms,           /* 624: Model Parameter */
  &Analog_Solution_P.Ts_1s,            /* 625: Model Parameter */
  &Analog_Solution_P.WinchDrumRad,     /* 626: Model Parameter */
  &Analog_Solution_P.WinchMotPosAIgain,/* 627: Model Parameter */
  &Analog_Solution_P.WinchMotTorqueMax,/* 628: Model Parameter */
  &Analog_Solution_P.WinchPosFiltDen[0],/* 629: Model Parameter */
  &Analog_Solution_P.WinchPosFiltNum[0],/* 630: Model Parameter */
  &Analog_Solution_P.WinchRefSpdSup,   /* 631: Model Parameter */
  &Analog_Solution_P.WinchSpdEstFiltDen[0],/* 632: Model Parameter */
  &Analog_Solution_P.WinchSpdEstFiltNum[0],/* 633: Model Parameter */
  &Analog_Solution_P.WinchTravelMin_m, /* 634: Model Parameter */
  &Analog_Solution_P.WinchVoltMax,     /* 635: Model Parameter */
  &Analog_Solution_P.x0_Winch[0],      /* 636: Model Parameter */
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
  23,                                  /* 4 */
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
  { rtBlockSignals, 249,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 355,
    rtModelParameters, 33 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 2751300826U,
    4270779105U,
    1636659996U,
    2315766574U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  Analog_Solution_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void Analog_Solution_InitializeDataMapInfo(RT_MODEL_Analog_Solution_T *const
  Analog_Solution_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(Analog_Solution_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(Analog_Solution_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(Analog_Solution_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(Analog_Solution_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(Analog_Solution_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  Analog_Solution_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (Analog_Solution_M);
  Analog_Solution_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_Analog_Solution_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(Analog_Solution_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(Analog_Solution_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(Analog_Solution_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void Analog_Solution_host_InitializeDataMapInfo
    (Analog_Solution_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: Analog_Solution_capi.c */
