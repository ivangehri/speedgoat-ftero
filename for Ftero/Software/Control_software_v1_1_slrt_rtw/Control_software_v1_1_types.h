/*
 * Control_software_v1_1_types.h
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

#ifndef RTW_HEADER_Control_software_v1_1_types_h_
#define RTW_HEADER_Control_software_v1_1_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_g4JHc2H3XRyVVgBupIhckB_
#define DEFINED_TYPEDEF_FOR_struct_g4JHc2H3XRyVVgBupIhckB_

typedef struct {
  real_T TakeoffTravel_V;
  real_T SlideTravelMax_V;
  real_T SlideTravelMax_rad;
  real_T JogSpeed;
  real_T TakeOffSpeed;
  real_T ErrTol;
  real_T WaitTime;
  real_T LandingLength_rad;
} struct_g4JHc2H3XRyVVgBupIhckB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_nekeCBaUBwhMGZJyyesMPB_
#define DEFINED_TYPEDEF_FOR_struct_nekeCBaUBwhMGZJyyesMPB_

typedef struct {
  real_T WinchSpdRefGain;
  real_T WinchTravelMax;
  real_T WinchTravelMin;
  real_T WinchSpdMaxFlight;
  real_T WinchSpdMinFlight;
  real_T WinchSpeedTakeOffMult;
  real_T WinchSpdMaxLanding;
  real_T WinchSpdMinLanding;
  real_T WinchSpdMax;
  real_T WinchSpdMin;
  real_T PotPosKeepMinFlight;
  real_T PotPosKeepMaxFlight;
  real_T PotPosKeepMinLanding;
  real_T PotPosKeepMaxLanding;
  real_T PotPivot2Flight;
  real_T PotPivot0Flight;
  real_T PotPivot2Landing;
  real_T PotPivot0Landing;
  real_T WinchSpdNormFlightOut;
  real_T WinchSpdNormLandingIn;
  real_T WinchSpdNormLandingOut;
  real_T WinchSpeedSlopeReelInFlight;
  real_T WinchSpeedSlopeReelOutFlight;
  real_T WinchSpeedSlopeReelInLanding;
  real_T WinchSpeedSlopeReelOutLanding;
  real_T PotPosSpdMin;
  real_T DerivGain;
  real_T TakeOffLatchTime;
  real_T ReelTimer_wait;
  real_T WinchSpdMinFlight_wait;
  real_T WinchSpeedSlopeReelInFlight_wait;
} struct_nekeCBaUBwhMGZJyyesMPB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_H3iKTmzQIZmmrWuxBo9E9D_
#define DEFINED_TYPEDEF_FOR_struct_H3iKTmzQIZmmrWuxBo9E9D_

typedef struct {
  struct_g4JHc2H3XRyVVgBupIhckB Slide;
  struct_nekeCBaUBwhMGZJyyesMPB Winch;
} struct_H3iKTmzQIZmmrWuxBo9E9D;

#endif

/* Parameters (auto storage) */
typedef struct P_Control_software_v1_1_T_ P_Control_software_v1_1_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Control_software_v1_1_T RT_MODEL_Control_software_v1_1_T;

#endif                                 /* RTW_HEADER_Control_software_v1_1_types_h_ */
