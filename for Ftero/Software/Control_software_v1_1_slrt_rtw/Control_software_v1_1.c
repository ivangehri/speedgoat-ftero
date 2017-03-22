/*
 * Control_software_v1_1.c
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

#include "rt_logging_mmi.h"
#include "Control_software_v1_1_capi.h"
#include "Control_software_v1_1.h"
#include "Control_software_v1_1_private.h"

/* Block signals (auto storage) */
B_Control_software_v1_1_T Control_software_v1_1_B;

/* Block states (auto storage) */
DW_Control_software_v1_1_T Control_software_v1_1_DW;

/* Real-time model */
RT_MODEL_Control_software_v1_1_T Control_software_v1_1_M_;
RT_MODEL_Control_software_v1_1_T *const Control_software_v1_1_M =
  &Control_software_v1_1_M_;

/* Forward declaration for local functions */
static void Control_software_v_convert1word(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Control_software_convert1word_e(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Control_software_convert1word_i(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Control_software_convert1word_b(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Control_software_v1_PotWinchRef(real_T CI_PotPos, real_T CI_PotSpd,
  real_T CI_PotSpd_m1, real_T HLC_State, real_T PotZoneFlight, real_T
  PotZoneFlight_m1, real_T PotZoneLanding, real_T PotZoneLanding_m1, real_T
  WinchMotSpdEst, real_T SlMotSpeedEst, real_T HLC_WinchSpdRef_m1, real_T
  PotPosKeepMinFlight, real_T PotPosKeepMaxFlight, real_T PotPosKeepMinLanding,
  real_T PotPosKeepMaxLanding, real_T WinchSpdMaxFlight, real_T
  WinchSpdMinFlight, real_T WinchSpdMaxLanding, real_T WinchSpdMinLanding,
  real_T WinchSpeedTakeOffMult, real_T PotPivot2Flight, real_T PotPivot0Flight,
  real_T PotPivot2Landing, real_T PotPivot0Landing, real_T WinchSpdNormFlightOut,
  real_T WinchSpeedSlopeReelInFlight, real_T WinchSpeedSlopeReelOutFlight,
  real_T WinchSpeedSlopeReelInLanding, real_T WinchSpeedSlopeReelOutLanding,
  real_T PotPosSpdMin, real_T DerivGain, real_T Timer, real_T ReelTimer_m1,
  real_T TakeOffLatchTime, real_T Ts, real_T ReelTimer_wait, real_T
  WinchSpdMinFlight_wait, real_T c_WinchSpeedSlopeReelInFlight_w, real_T
  *WinchSpdRef_Pot, real_T *ReelTimer_Pot);
static void Control_software_convert1word_p(uint8_T in, real_T vec[8]);
static void rate_monotonic_scheduler(void);

/* xPC Target Async Interrupt Block '<S28>/IRQ Source' */
void xPCISR1(void)
{
  {
    /* Reset subsysRan breadcrumbs */
    srClearBC(Control_software_v1_1_DW.RS232ISR_SubsysRanBC);

    /* RateTransition: '<S28>/Rate Transition' */
    Control_software_v1_1_B.RateTransition =
      Control_software_v1_1_B.FIFOwrite1_o1;

    /* RateTransition: '<S28>/Rate Transition2' */
    Control_software_v1_1_B.RateTransition2 =
      Control_software_v1_1_B.FIFOwrite2_o1;

    /* RateTransition: '<S28>/Rate Transition4' */
    Control_software_v1_1_B.RateTransition4 =
      Control_software_v1_1_B.FIFOwrite3_o1;

    /* RateTransition: '<S28>/Rate Transition6' */
    Control_software_v1_1_B.RateTransition6 =
      Control_software_v1_1_B.FIFOwrite4_o1;

    /* S-Function (xpcinterrupt): '<S28>/IRQ Source' */
    Control_software_v_RS232ISR();

    /* End of Outputs for S-Function (xpcinterrupt): '<S28>/IRQ Source' */
  }

  xpceDAQUpdateTimeStamp(4, Control_software_v1_1_M->Timing.t[4]);
  xpceDAQPostEvent(4);
}

time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(Control_software_v1_1_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(Control_software_v1_1_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(Control_software_v1_1_M, 3);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rates: 1, 2, 3 */
  Control_software_v1_1_M->Timing.RateInteraction.TID0_1 =
    (Control_software_v1_1_M->Timing.TaskCounters.TID[1] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  Control_software_v1_1_M->Timing.perTaskSampleHits[1] =
    Control_software_v1_1_M->Timing.RateInteraction.TID0_1;
  Control_software_v1_1_M->Timing.RateInteraction.TID0_2 =
    (Control_software_v1_1_M->Timing.TaskCounters.TID[2] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  Control_software_v1_1_M->Timing.perTaskSampleHits[2] =
    Control_software_v1_1_M->Timing.RateInteraction.TID0_2;
  Control_software_v1_1_M->Timing.RateInteraction.TID0_3 =
    (Control_software_v1_1_M->Timing.TaskCounters.TID[3] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  Control_software_v1_1_M->Timing.perTaskSampleHits[3] =
    Control_software_v1_1_M->Timing.RateInteraction.TID0_3;

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Control_software_v1_1_M->Timing.TaskCounters.TID[1])++;
  if ((Control_software_v1_1_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.01s, 0.0s] */
    Control_software_v1_1_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Control_software_v1_1_M->Timing.TaskCounters.TID[2])++;
  if ((Control_software_v1_1_M->Timing.TaskCounters.TID[2]) > 19) {/* Sample time: [0.02s, 0.0s] */
    Control_software_v1_1_M->Timing.TaskCounters.TID[2] = 0;
  }

  (Control_software_v1_1_M->Timing.TaskCounters.TID[3])++;
  if ((Control_software_v1_1_M->Timing.TaskCounters.TID[3]) > 999) {/* Sample time: [1.0s, 0.0s] */
    Control_software_v1_1_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Function for MATLAB Function: '<S35>/Embedded MATLAB Function' */
static void Control_software_v_convert1word(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S47>:1:20' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S47>:1:21' */
  ind = 7U;
  while (in > 0) {
    /* '<S47>:1:23' */
    /* '<S47>:1:24' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S47>:1:25' */
      /* '<S47>:1:26' */
      vec[7 - ind] = 1.0;

      /* '<S47>:1:27' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S47>:1:29' */
      vec[7 - ind] = 0.0;
    }

    /* '<S47>:1:31' */
    q0 = ind;
    qY = q0 - 1U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)qY;
    ind = (uint8_T)q0;
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Output and update for atomic system:
 *    '<S35>/Embedded MATLAB Function'
 *    '<S37>/Embedded MATLAB Function1'
 *    '<S38>/Embedded MATLAB Function'
 */
void Cont_EmbeddedMATLABFunction(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction_Cont_T *localB)
{
  real_T uint32_out;
  real_T vec1[8];
  real_T vec2[8];
  real_T vec3[8];
  real_T vec4[8];
  real_T temp[32];
  int32_T ind;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function': '<S47>:1' */
  /* '<S47>:1:3' */
  Control_software_v_convert1word(rtu_in[0], vec1);

  /* '<S47>:1:4' */
  Control_software_v_convert1word(rtu_in[1], vec2);

  /* '<S47>:1:5' */
  Control_software_v_convert1word(rtu_in[2], vec3);

  /* '<S47>:1:6' */
  Control_software_v_convert1word(rtu_in[3], vec4);

  /* '<S47>:1:8' */
  for (ind = 0; ind < 8; ind++) {
    temp[ind] = vec1[ind];
    temp[ind + 8] = vec2[ind];
    temp[ind + 16] = vec3[ind];
    temp[ind + 24] = vec4[ind];
  }

  /* '<S47>:1:10' */
  /* '<S47>:1:14' */
  uint32_out = 0.0;

  /* '<S47>:1:15' */
  for (ind = 0; ind < 32; ind++) {
    /* '<S47>:1:15' */
    /* '<S47>:1:16' */
    uint32_out += rt_powd_snf(2.0, 32.0 - (1.0 + (real_T)ind)) * temp[ind];
  }

  localB->uint32_out = uint32_out;
}

/*
 * Output and update for atomic system:
 *    '<S35>/Embedded MATLAB Function1'
 *    '<S35>/Embedded MATLAB Function2'
 *    '<S37>/Embedded MATLAB Function'
 *    '<S37>/Embedded MATLAB Function2'
 *    '<S37>/Embedded MATLAB Function3'
 *    '<S37>/Embedded MATLAB Function4'
 *    '<S37>/Embedded MATLAB Function5'
 *    '<S37>/Embedded MATLAB Function6'
 */
void Con_EmbeddedMATLABFunction1(uint8_T rtu_in, B_EmbeddedMATLABFunction1_Con_T
  *localB)
{
  int8_T vec1[8];
  uint8_T in;
  uint8_T ind;
  uint8_T a;
  int32_T b_ind;
  uint32_T qY;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1': '<S48>:1' */
  /* '<S48>:1:3' */
  in = rtu_in;

  /* '<S48>:1:17' */
  for (b_ind = 0; b_ind < 8; b_ind++) {
    vec1[b_ind] = 0;
  }

  /* '<S48>:1:18' */
  ind = 7U;
  while (in > 0) {
    /* '<S48>:1:20' */
    /* '<S48>:1:21' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S48>:1:22' */
      /* '<S48>:1:23' */
      vec1[7 - ind] = 1;

      /* '<S48>:1:24' */
      b_ind = in;
      qY = (uint32_T)b_ind - a;
      if (qY > (uint32_T)b_ind) {
        qY = 0U;
      }

      b_ind = (int32_T)qY;
      in = (uint8_T)b_ind;
    } else {
      /* '<S48>:1:26' */
      vec1[7 - ind] = 0;
    }

    /* '<S48>:1:28' */
    b_ind = ind;
    qY = b_ind - 1U;
    if (qY > (uint32_T)b_ind) {
      qY = 0U;
    }

    b_ind = (int32_T)qY;
    ind = (uint8_T)b_ind;
  }

  /* '<S48>:1:7' */
  /* '<S48>:1:11' */
  localB->uint8_out = 0.0;

  /* '<S48>:1:12' */
  for (b_ind = 0; b_ind < 8; b_ind++) {
    /* '<S48>:1:12' */
    /* '<S48>:1:13' */
    localB->uint8_out += rt_powd_snf(2.0, 8.0 - (1.0 + (real_T)b_ind)) * (real_T)
      vec1[b_ind];
  }
}

/* Function for MATLAB Function: '<S36>/Embedded MATLAB Function' */
static void Control_software_convert1word_e(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S50>:1:19' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S50>:1:20' */
  ind = 7U;
  while (in > 0) {
    /* '<S50>:1:22' */
    /* '<S50>:1:23' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S50>:1:24' */
      /* '<S50>:1:25' */
      vec[7 - ind] = 1.0;

      /* '<S50>:1:26' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S50>:1:28' */
      vec[7 - ind] = 0.0;
    }

    /* '<S50>:1:30' */
    q0 = ind;
    qY = q0 - 1U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)qY;
    ind = (uint8_T)q0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S36>/Embedded MATLAB Function'
 *    '<S36>/Embedded MATLAB Function1'
 *    '<S36>/Embedded MATLAB Function3'
 *    '<S43>/Embedded MATLAB Function'
 *    '<S43>/Embedded MATLAB Function1'
 *    '<S43>/Embedded MATLAB Function3'
 *    '<S44>/Embedded MATLAB Function'
 *    '<S44>/Embedded MATLAB Function1'
 *    '<S44>/Embedded MATLAB Function3'
 *    '<S44>/Embedded MATLAB Function4'
 *    ...
 */
void Co_EmbeddedMATLABFunction_b(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction_Co_o_T *localB)
{
  real_T vec1[8];
  real_T vec2[8];
  real_T vec3[8];
  real_T vec4[8];
  real_T temp[32];
  real_T y;
  int32_T k;
  real_T b_vec;
  boolean_T guard1 = false;
  boolean_T guard2 = false;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function': '<S50>:1' */
  /* '<S50>:1:3' */
  Control_software_convert1word_e(rtu_in[0], vec1);

  /* '<S50>:1:4' */
  Control_software_convert1word_e(rtu_in[1], vec2);

  /* '<S50>:1:5' */
  Control_software_convert1word_e(rtu_in[2], vec3);

  /* '<S50>:1:6' */
  Control_software_convert1word_e(rtu_in[3], vec4);

  /* '<S50>:1:8' */
  for (k = 0; k < 8; k++) {
    temp[k] = vec1[k];
    temp[k + 8] = vec2[k];
    temp[k + 16] = vec3[k];
    temp[k + 24] = vec4[k];
  }

  y = temp[1];
  for (k = 0; k < 7; k++) {
    y += temp[k + 2];
  }

  guard1 = false;
  guard2 = false;
  if (y == 8.0) {
    /* '<S50>:1:10' */
    y = temp[9];
    for (k = 0; k < 22; k++) {
      y += temp[k + 10];
    }

    if (y == 0.0) {
      /* '<S50>:1:10' */
      /* '<S50>:1:11' */
      /* '<S50>:1:34' */
      y = rt_powd_snf(-1.0, temp[0]) * (rtInf);
    } else {
      guard2 = true;
    }
  } else {
    guard2 = true;
  }

  if (guard2) {
    y = temp[1];
    for (k = 0; k < 7; k++) {
      y += temp[k + 2];
    }

    if (y == 8.0) {
      /* '<S50>:1:12' */
      y = temp[9];
      for (k = 0; k < 22; k++) {
        y += temp[k + 10];
      }

      if (y > 0.0) {
        /* '<S50>:1:12' */
        /* '<S50>:1:13' */
        y = (rtNaN);
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    /* '<S50>:1:15' */
    /* '<S50>:1:34' */
    /* '<S50>:1:37' */
    y = 0.0;

    /* '<S50>:1:38' */
    for (k = 0; k < 8; k++) {
      /* '<S50>:1:38' */
      /* '<S50>:1:39' */
      y += rt_powd_snf(2.0, 8.0 - (1.0 + (real_T)k)) * temp[1 + k];
    }

    /* '<S50>:1:41' */
    y -= 127.0;

    /* '<S50>:1:44' */
    b_vec = 0.0;

    /* '<S50>:1:45' */
    for (k = 0; k < 23; k++) {
      /* '<S50>:1:45' */
      /* '<S50>:1:46' */
      b_vec += temp[9 + k] * rt_powd_snf(2.0, -(1.0 + (real_T)k));
    }

    y = rt_powd_snf(-1.0, temp[0]) * rt_powd_snf(2.0, y) * (1.0 + b_vec);
  }

  localB->sing_out = y;
}

/* Function for MATLAB Function: '<S39>/Embedded MATLAB Function1' */
static void Control_software_convert1word_i(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S61>:1:20' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S61>:1:21' */
  ind = 7U;
  while (in > 0) {
    /* '<S61>:1:23' */
    /* '<S61>:1:24' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S61>:1:25' */
      /* '<S61>:1:26' */
      vec[7 - ind] = 1.0;

      /* '<S61>:1:27' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S61>:1:29' */
      vec[7 - ind] = 0.0;
    }

    /* '<S61>:1:31' */
    q0 = ind;
    qY = q0 - 1U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)qY;
    ind = (uint8_T)q0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S39>/Embedded MATLAB Function1'
 *    '<S39>/Embedded MATLAB Function2'
 *    '<S39>/Embedded MATLAB Function3'
 *    '<S40>/Embedded MATLAB Function1'
 *    '<S40>/Embedded MATLAB Function2'
 *    '<S40>/Embedded MATLAB Function3'
 *    '<S40>/Embedded MATLAB Function4'
 *    '<S41>/Embedded MATLAB Function2'
 */
void C_EmbeddedMATLABFunction1_g(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction1_C_k_T *localB)
{
  real_T vec1[8];
  real_T vec2[8];
  real_T vec3[8];
  real_T vec4[8];
  real_T temp[32];
  real_T vec;
  int32_T ind;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1': '<S61>:1' */
  /*  in=double(in); */
  /* '<S61>:1:4' */
  Control_software_convert1word_i(rtu_in[0], vec1);

  /* '<S61>:1:5' */
  Control_software_convert1word_i(rtu_in[1], vec2);

  /* '<S61>:1:6' */
  Control_software_convert1word_i(rtu_in[2], vec3);

  /* '<S61>:1:7' */
  Control_software_convert1word_i(rtu_in[3], vec4);

  /* '<S61>:1:9' */
  for (ind = 0; ind < 8; ind++) {
    temp[ind] = vec1[ind];
    temp[ind + 8] = vec2[ind];
    temp[ind + 16] = vec3[ind];
    temp[ind + 24] = vec4[ind];
  }

  /* '<S61>:1:11' */
  /* '<S61>:1:14' */
  vec = 0.0;

  /* '<S61>:1:15' */
  for (ind = 0; ind < 31; ind++) {
    /* '<S61>:1:15' */
    /* '<S61>:1:16' */
    vec += rt_powd_snf(2.0, 31.0 - (1.0 + (real_T)ind)) * temp[1 + ind];
  }

  localB->int32_out = vec - temp[0] * 2.147483648E+9;
}

/* Function for MATLAB Function: '<S42>/Embedded MATLAB Function' */
static void Control_software_convert1word_b(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S69>:1:35' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S69>:1:36' */
  ind = 7U;
  while (in > 0) {
    /* '<S69>:1:38' */
    /* '<S69>:1:39' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S69>:1:40' */
      /* '<S69>:1:41' */
      vec[7 - ind] = 1.0;

      /* '<S69>:1:42' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S69>:1:44' */
      vec[7 - ind] = 0.0;
    }

    /* '<S69>:1:46' */
    q0 = ind;
    qY = q0 - 1U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)qY;
    ind = (uint8_T)q0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S42>/Embedded MATLAB Function'
 *    '<S42>/Embedded MATLAB Function1'
 *    '<S42>/Embedded MATLAB Function2'
 */
void Co_EmbeddedMATLABFunction_k(const uint8_T rtu_in[8],
  B_EmbeddedMATLABFunction_Co_l_T *localB)
{
  real_T vec1[8];
  real_T vec2[8];
  real_T vec3[8];
  real_T vec4[8];
  real_T vec5[8];
  real_T vec6[8];
  real_T vec7[8];
  real_T vec8[8];
  real_T temp[64];
  real_T exponent;
  real_T signif;
  real_T signum;
  int32_T ind;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function': '<S69>:1' */
  /* '<S69>:1:3' */
  Control_software_convert1word_b(rtu_in[0], vec1);

  /* '<S69>:1:4' */
  Control_software_convert1word_b(rtu_in[1], vec2);

  /* '<S69>:1:5' */
  Control_software_convert1word_b(rtu_in[2], vec3);

  /* '<S69>:1:6' */
  Control_software_convert1word_b(rtu_in[3], vec4);

  /* '<S69>:1:7' */
  Control_software_convert1word_b(rtu_in[4], vec5);

  /* '<S69>:1:8' */
  Control_software_convert1word_b(rtu_in[5], vec6);

  /* '<S69>:1:9' */
  Control_software_convert1word_b(rtu_in[6], vec7);

  /* '<S69>:1:10' */
  Control_software_convert1word_b(rtu_in[7], vec8);

  /* '<S69>:1:12' */
  for (ind = 0; ind < 8; ind++) {
    temp[ind] = vec1[ind];
    temp[ind + 8] = vec2[ind];
    temp[ind + 16] = vec3[ind];
    temp[ind + 24] = vec4[ind];
    temp[ind + 32] = vec5[ind];
    temp[ind + 40] = vec6[ind];
    temp[ind + 48] = vec7[ind];
    temp[ind + 56] = vec8[ind];
  }

  /* '<S69>:1:14' */
  /* '<S69>:1:53' */
  exponent = 0.0;

  /* '<S69>:1:54' */
  for (ind = 0; ind < 11; ind++) {
    /* '<S69>:1:54' */
    /* '<S69>:1:55' */
    exponent += rt_powd_snf(2.0, 11.0 - (1.0 + (real_T)ind)) * temp[1 + ind];
  }

  /* '<S69>:1:57' */
  exponent -= 1023.0;

  /* '<S69>:1:15' */
  /* '<S69>:1:60' */
  signif = 0.0;

  /* '<S69>:1:61' */
  for (ind = 0; ind < 52; ind++) {
    /* '<S69>:1:61' */
    /* '<S69>:1:62' */
    signif += temp[12 + ind] * rt_powd_snf(2.0, -(1.0 + (real_T)ind));
  }

  /* '<S69>:1:16' */
  /* '<S69>:1:50' */
  signum = rt_powd_snf(-1.0, temp[0]);
  if (exponent == -1023.0) {
    /* '<S69>:1:18' */
    if (signif == 0.0) {
      /* '<S69>:1:19' */
      /* '<S69>:1:20' */
      exponent = signum * 0.0;
    } else {
      /* '<S69>:1:22' */
      exponent = signum * 2.2250738585072014E-308 * signif;
    }
  } else if (exponent == 1024.0) {
    /* '<S69>:1:24' */
    if (signif != 0.0) {
      /* '<S69>:1:25' */
      /* '<S69>:1:26' */
      exponent = (rtNaN);
    } else {
      /* '<S69>:1:28' */
      exponent = signum * (rtInf);
    }
  } else {
    /* '<S69>:1:31' */
    exponent = signum * rt_powd_snf(2.0, exponent) * (1.0 + signif);
  }

  localB->double_out = exponent;
}

/* Start for function-call system: '<S28>/RS232 ISR' */
void Control_soft_RS232ISR_Start(void)
{
  /* Start for Iterator SubSystem: '<S85>/While Iterator Subsystem' */
  /* Start for S-Function (iqueryqua): '<S86>/Read Int Status1' */
  /* Level2 S-Function Block: '<S86>/Read Int Status1' (iqueryqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason5' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason5' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S86>/Constant1' */
  Control_software_v1_1_B.Constant1_p =
    Control_software_v1_1_P.Constant1_Value_be;

  /* Start for S-Function (fiforead): '<S86>/FIFO read 1' */
  /* Level2 S-Function Block: '<S86>/FIFO read 1' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S86>/Write HW FIFO1' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO1' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason6' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason6' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S86>/Constant2' */
  Control_software_v1_1_B.Constant2 = Control_software_v1_1_P.Constant2_Value_n;

  /* Start for S-Function (fiforead): '<S86>/FIFO read 2' */
  /* Level2 S-Function Block: '<S86>/FIFO read 2' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S86>/Write HW FIFO2' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO2' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason7' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason7' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S86>/Constant3' */
  Control_software_v1_1_B.Constant3_o =
    Control_software_v1_1_P.Constant3_Value_d;

  /* Start for S-Function (fiforead): '<S86>/FIFO read 3' */
  /* Level2 S-Function Block: '<S86>/FIFO read 3' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S86>/Write HW FIFO3' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO3' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason8' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason8' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S86>/Constant4' */
  Control_software_v1_1_B.Constant4 = Control_software_v1_1_P.Constant4_Value;

  /* Start for S-Function (fiforead): '<S86>/FIFO read 4' */
  /* Level2 S-Function Block: '<S86>/FIFO read 4' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S86>/Write HW FIFO4' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO4' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason1' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason1' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S86>/Read HW FIFO1' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO1' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S86>/FIFO write 1' */
  /* Level2 S-Function Block: '<S86>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason2' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason2' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S86>/Read HW FIFO2' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO2' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S86>/FIFO write 2' */
  /* Level2 S-Function Block: '<S86>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason3' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason3' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S86>/Read HW FIFO3' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO3' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S86>/FIFO write 3' */
  /* Level2 S-Function Block: '<S86>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S86>/Filter Int Reason4' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason4' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S86>/Read HW FIFO4' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO4' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S86>/FIFO write 4' */
  /* Level2 S-Function Block: '<S86>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S85>/While Iterator Subsystem' */
}

/* Output and update for function-call system: '<S28>/RS232 ISR' */
void Control_software_v_RS232ISR(void)
{
  int32_T s86_iter;

  /* Asynchronous task (with no priority assigned)
   * reads absolute time */
  switch (Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4) {
   case 0:
    Control_software_v1_1_M->Timing.rtmDbBufReadBuf4 = 1;
    break;

   case 1:
    Control_software_v1_1_M->Timing.rtmDbBufReadBuf4 = 0;
    break;

   default:
    Control_software_v1_1_M->Timing.rtmDbBufReadBuf4 =
      Control_software_v1_1_M->Timing.rtmDbBufLastBufWr4;
    break;
  }

  Control_software_v1_1_M->Timing.clockTick4 =
    Control_software_v1_1_M->Timing.rtmDbBufClockTick4
    [Control_software_v1_1_M->Timing.rtmDbBufReadBuf4];
  Control_software_v1_1_M->Timing.clockTickH4 =
    Control_software_v1_1_M->Timing.rtmDbBufClockTickH4
    [Control_software_v1_1_M->Timing.rtmDbBufReadBuf4];
  Control_software_v1_1_M->Timing.rtmDbBufReadBuf4 = 0xFF;
  Control_software_v1_1_M->Timing.t[4] =
    Control_software_v1_1_M->Timing.clockTick4 *
    Control_software_v1_1_M->Timing.stepSize4 +
    Control_software_v1_1_M->Timing.clockTickH4 *
    Control_software_v1_1_M->Timing.stepSize4 * 4294967296.0;

  /* Outputs for Iterator SubSystem: '<S85>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S86>/While Iterator'
   */
  s86_iter = 1;
  do {
    /* Level2 S-Function Block: '<S86>/Read Int Status1' (iqueryqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[0];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Filter Int Reason5' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[1];
      sfcnOutputs(rts,4);
    }

    Control_software_v1_1_B.Constant1_p =
      Control_software_v1_1_P.Constant1_Value_be;

    /* Level2 S-Function Block: '<S86>/FIFO read 1' (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[2];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Write HW FIFO1' (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[3];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Filter Int Reason6' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[4];
      sfcnOutputs(rts,4);
    }

    Control_software_v1_1_B.Constant2 =
      Control_software_v1_1_P.Constant2_Value_n;

    /* Level2 S-Function Block: '<S86>/FIFO read 2' (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[5];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Write HW FIFO2' (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[6];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Filter Int Reason7' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[7];
      sfcnOutputs(rts,4);
    }

    Control_software_v1_1_B.Constant3_o =
      Control_software_v1_1_P.Constant3_Value_d;

    /* Level2 S-Function Block: '<S86>/FIFO read 3' (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[8];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Write HW FIFO3' (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[9];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Filter Int Reason8' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[10];
      sfcnOutputs(rts,4);
    }

    Control_software_v1_1_B.Constant4 = Control_software_v1_1_P.Constant4_Value;

    /* Level2 S-Function Block: '<S86>/FIFO read 4' (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[11];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Write HW FIFO4' (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[12];
      sfcnOutputs(rts,4);
    }

    Control_software_v1_1_B.BitwiseLogicalOperator[0] =
      Control_software_v1_1_B.ReadIntStatus1[0] &
      Control_software_v1_1_P.BitwiseLogicalOperator_BitMask;
    Control_software_v1_1_B.BitwiseLogicalOperator[1] =
      Control_software_v1_1_B.ReadIntStatus1[1] &
      Control_software_v1_1_P.BitwiseLogicalOperator_BitMask;
    Control_software_v1_1_B.BitwiseLogicalOperator[2] =
      Control_software_v1_1_B.ReadIntStatus1[2] &
      Control_software_v1_1_P.BitwiseLogicalOperator_BitMask;
    Control_software_v1_1_B.BitwiseLogicalOperator[3] =
      Control_software_v1_1_B.ReadIntStatus1[3] &
      Control_software_v1_1_P.BitwiseLogicalOperator_BitMask;

    /* Level2 S-Function Block: '<S86>/Filter Int Reason1' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[13];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Read HW FIFO1' (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[14];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/FIFO write 1' (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[15];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Filter Int Reason2' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[16];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Read HW FIFO2' (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[17];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/FIFO write 2' (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[18];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Filter Int Reason3' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[19];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Read HW FIFO3' (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[20];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/FIFO write 3' (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[21];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Filter Int Reason4' (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[22];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/Read HW FIFO4' (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[23];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S86>/FIFO write 4' (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[24];
      sfcnOutputs(rts,4);
    }

    Control_software_v1_1_B.RelationalOperator[0] =
      (Control_software_v1_1_P.Constant9_Value !=
       Control_software_v1_1_B.BitwiseLogicalOperator[0]);
    Control_software_v1_1_B.RelationalOperator[1] =
      (Control_software_v1_1_P.Constant9_Value !=
       Control_software_v1_1_B.BitwiseLogicalOperator[1]);
    Control_software_v1_1_B.RelationalOperator[2] =
      (Control_software_v1_1_P.Constant9_Value !=
       Control_software_v1_1_B.BitwiseLogicalOperator[2]);
    Control_software_v1_1_B.RelationalOperator[3] =
      (Control_software_v1_1_P.Constant9_Value !=
       Control_software_v1_1_B.BitwiseLogicalOperator[3]);
    Control_software_v1_1_B.LogicalOperator =
      (Control_software_v1_1_B.RelationalOperator[0] ||
       Control_software_v1_1_B.RelationalOperator[1] ||
       Control_software_v1_1_B.RelationalOperator[2] ||
       Control_software_v1_1_B.RelationalOperator[3]);
    s86_iter++;
  } while (Control_software_v1_1_B.LogicalOperator && (s86_iter <= 65));

  /* End of Outputs for SubSystem: '<S85>/While Iterator Subsystem' */
  Control_software_v1_1_DW.RS232ISR_SubsysRanBC = 4;
}

/* Termination for function-call system: '<S28>/RS232 ISR' */
void Control_softw_RS232ISR_Term(void)
{
  /* Terminate for Iterator SubSystem: '<S85>/While Iterator Subsystem' */

  /* Terminate for S-Function (iqueryqua): '<S86>/Read Int Status1' */
  /* Level2 S-Function Block: '<S86>/Read Int Status1' (iqueryqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason5' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason5' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S86>/FIFO read 1' */
  /* Level2 S-Function Block: '<S86>/FIFO read 1' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S86>/Write HW FIFO1' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO1' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason6' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason6' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S86>/FIFO read 2' */
  /* Level2 S-Function Block: '<S86>/FIFO read 2' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S86>/Write HW FIFO2' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO2' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason7' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason7' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S86>/FIFO read 3' */
  /* Level2 S-Function Block: '<S86>/FIFO read 3' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S86>/Write HW FIFO3' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO3' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason8' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason8' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S86>/FIFO read 4' */
  /* Level2 S-Function Block: '<S86>/FIFO read 4' (fiforead) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S86>/Write HW FIFO4' */
  /* Level2 S-Function Block: '<S86>/Write HW FIFO4' (serwritequa) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason1' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason1' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S86>/Read HW FIFO1' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO1' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S86>/FIFO write 1' */
  /* Level2 S-Function Block: '<S86>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason2' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason2' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S86>/Read HW FIFO2' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO2' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S86>/FIFO write 2' */
  /* Level2 S-Function Block: '<S86>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason3' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason3' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S86>/Read HW FIFO3' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO3' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S86>/FIFO write 3' */
  /* Level2 S-Function Block: '<S86>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S86>/Filter Int Reason4' */
  /* Level2 S-Function Block: '<S86>/Filter Int Reason4' (filterqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S86>/Read HW FIFO4' */
  /* Level2 S-Function Block: '<S86>/Read HW FIFO4' (serreadqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S86>/FIFO write 4' */
  /* Level2 S-Function Block: '<S86>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S85>/While Iterator Subsystem' */
}

/* Function for MATLAB Function: '<S2>/MATLAB Function' */
static void Control_software_v1_PotWinchRef(real_T CI_PotPos, real_T CI_PotSpd,
  real_T CI_PotSpd_m1, real_T HLC_State, real_T PotZoneFlight, real_T
  PotZoneFlight_m1, real_T PotZoneLanding, real_T PotZoneLanding_m1, real_T
  WinchMotSpdEst, real_T SlMotSpeedEst, real_T HLC_WinchSpdRef_m1, real_T
  PotPosKeepMinFlight, real_T PotPosKeepMaxFlight, real_T PotPosKeepMinLanding,
  real_T PotPosKeepMaxLanding, real_T WinchSpdMaxFlight, real_T
  WinchSpdMinFlight, real_T WinchSpdMaxLanding, real_T WinchSpdMinLanding,
  real_T WinchSpeedTakeOffMult, real_T PotPivot2Flight, real_T PotPivot0Flight,
  real_T PotPivot2Landing, real_T PotPivot0Landing, real_T WinchSpdNormFlightOut,
  real_T WinchSpeedSlopeReelInFlight, real_T WinchSpeedSlopeReelOutFlight,
  real_T WinchSpeedSlopeReelInLanding, real_T WinchSpeedSlopeReelOutLanding,
  real_T PotPosSpdMin, real_T DerivGain, real_T Timer, real_T ReelTimer_m1,
  real_T TakeOffLatchTime, real_T Ts, real_T ReelTimer_wait, real_T
  WinchSpdMinFlight_wait, real_T c_WinchSpeedSlopeReelInFlight_w, real_T
  *WinchSpdRef_Pot, real_T *ReelTimer_Pot)
{
  real_T WinchSpdRefDeriv;
  real_T WinchSpdRefDeriv_m1;
  real_T PotPos_norm;
  real_T WinchSpd_int;
  real_T u1;

  /* '<S8>:1:397' */
  *WinchSpdRef_Pot = HLC_WinchSpdRef_m1;

  /* '<S8>:1:398' */
  *ReelTimer_Pot = 0.0;

  /* '<S8>:1:399' */
  WinchSpdRefDeriv = 0.0;

  /* '<S8>:1:400' */
  WinchSpdRefDeriv_m1 = 0.0;
  if (CI_PotSpd > PotPosSpdMin) {
    /* '<S8>:1:402' */
    /* '<S8>:1:403' */
    WinchSpdRefDeriv = CI_PotSpd * DerivGain;
  }

  if (CI_PotSpd_m1 > PotPosSpdMin) {
    /* '<S8>:1:406' */
    /* '<S8>:1:407' */
    WinchSpdRefDeriv_m1 = CI_PotSpd_m1 * DerivGain;
  }

  if (HLC_State != 9.0) {
    /* '<S8>:1:410' */
    /*  Not-approaching phase */
    if (PotZoneFlight == 1.0) {
      /* '<S8>:1:411' */
      /*  Keep speed */
      if (PotZoneFlight_m1 != 1.0) {
        /* '<S8>:1:412' */
        /* '<S8>:1:413' */
        *WinchSpdRef_Pot = 1.1 * WinchMotSpdEst + WinchSpdRefDeriv;
        if ((0.0 > *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot)) {
          *WinchSpdRef_Pot = 0.0;
        }

        if ((WinchSpdMaxFlight < *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot))
        {
          *WinchSpdRef_Pot = WinchSpdMaxFlight;
        }
      } else {
        /* '<S8>:1:414' */
        /* '<S8>:1:415' */
        u1 = WinchSpdRefDeriv - WinchSpdRefDeriv_m1;
        if ((0.0 > u1) || rtIsNaN(u1)) {
          u1 = 0.0;
        }

        *WinchSpdRef_Pot = HLC_WinchSpdRef_m1 + u1;
        if ((WinchSpdMaxFlight < *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot))
        {
          *WinchSpdRef_Pot = WinchSpdMaxFlight;
        }
      }
    } else if (PotZoneFlight == 2.0) {
      /* '<S8>:1:418' */
      /*  Reel-out */
      /* '<S8>:1:419' */
      PotPos_norm = (CI_PotPos - PotPosKeepMaxFlight) / (PotPivot2Flight -
        PotPosKeepMaxFlight);
      if ((0.0 > PotPos_norm) || rtIsNaN(PotPos_norm)) {
        PotPos_norm = 0.0;
      }

      /* '<S8>:1:420' */
      /* '<S8>:1:421' */
      /* '<S8>:1:422' */
      u1 = PotPos_norm * PotPos_norm * WinchSpdNormFlightOut;
      if ((WinchSpdMaxFlight < u1) || rtIsNaN(u1)) {
        u1 = WinchSpdMaxFlight;
      }

      PotPos_norm = WinchSpeedSlopeReelOutFlight * Ts * PotPos_norm +
        HLC_WinchSpdRef_m1;
      if ((WinchSpdMaxFlight < PotPos_norm) || rtIsNaN(PotPos_norm)) {
        PotPos_norm = WinchSpdMaxFlight;
      }

      if ((u1 > PotPos_norm) || rtIsNaN(PotPos_norm)) {
        PotPos_norm = u1;
      }

      u1 = WinchSpdRefDeriv - WinchSpdRefDeriv_m1;
      if ((0.0 > u1) || rtIsNaN(u1)) {
        u1 = 0.0;
      }

      *WinchSpdRef_Pot = PotPos_norm + u1;
      if ((WinchSpdMaxFlight < *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot)) {
        *WinchSpdRef_Pot = WinchSpdMaxFlight;
      }

      /*          WinchSpdRef     =   WinchSpd_int; */
    } else {
      if (PotZoneFlight == 0.0) {
        /* '<S8>:1:425' */
        /*  Reel-in */
        /* '<S8>:1:426' */
        *ReelTimer_Pot = ReelTimer_m1 + Ts;

        /* '<S8>:1:427' */
        PotPos_norm = (CI_PotPos - PotPosKeepMinFlight) / (PotPivot0Flight -
          PotPosKeepMinFlight);
        if ((0.0 > PotPos_norm) || rtIsNaN(PotPos_norm)) {
          PotPos_norm = 0.0;
        }

        /*          WinchSpd_prop   =   max(WinchSpdMinFlight,WinchSpdNormFlightIn*PotPos_norm^2); */
        /* '<S8>:1:429' */
        WinchSpd_int = WinchSpeedSlopeReelInFlight * Ts * PotPos_norm +
          HLC_WinchSpdRef_m1;
        if ((WinchSpdMinFlight > WinchSpd_int) || rtIsNaN(WinchSpd_int)) {
          WinchSpd_int = WinchSpdMinFlight;
        }

        if (*ReelTimer_Pot >= ReelTimer_wait) {
          /* '<S8>:1:430' */
          /* '<S8>:1:431' */
          WinchSpd_int = c_WinchSpeedSlopeReelInFlight_w * Ts * PotPos_norm +
            HLC_WinchSpdRef_m1;
          if ((WinchSpdMinFlight_wait > WinchSpd_int) || rtIsNaN(WinchSpd_int))
          {
            WinchSpd_int = WinchSpdMinFlight_wait;
          }
        }

        /*      if HLC_WinchSpdRef_m1>=0.1 */
        /*          WinchSpd_int    =   max(0,HLC_WinchSpdRef_m1+WinchSpeedSlopeReelInFlight*Ts*PotPos_norm*1.5); */
        /*      end         */
        /*          WinchSpdRef     =   min(0,min(WinchSpd_prop,WinchSpd_int)); */
        /* '<S8>:1:437' */
        u1 = WinchSpdRefDeriv - WinchSpdRefDeriv_m1;
        if ((0.0 > u1) || rtIsNaN(u1)) {
          u1 = 0.0;
        }

        *WinchSpdRef_Pot = WinchSpd_int + u1;
        if ((WinchSpdMaxFlight < *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot))
        {
          *WinchSpdRef_Pot = WinchSpdMaxFlight;
        }
      }
    }
  } else {
    /* '<S8>:1:440' */
    /*  Approaching phase */
    if (PotZoneLanding == 1.0) {
      /* '<S8>:1:441' */
      /*  Keep speed */
      if (PotZoneLanding_m1 != 1.0) {
        /* '<S8>:1:442' */
        /* '<S8>:1:443' */
        if ((0.0 < WinchMotSpdEst) || rtIsNaN(WinchMotSpdEst)) {
          *WinchSpdRef_Pot = 0.0;
        } else {
          *WinchSpdRef_Pot = WinchMotSpdEst;
        }
      }
    } else if (PotZoneLanding == 2.0) {
      /* '<S8>:1:448' */
      /*  Reel-out */
      /* '<S8>:1:449' */
      /*          WinchSpd_prop   =   min(WinchSpdMaxLanding,WinchSpdNormLandingOut*PotPos_norm^2); */
      /* '<S8>:1:451' */
      /*          WinchSpdRef     =   min(WinchSpdSup,max(WinchSpd_prop,WinchSpd_int)); */
      /* '<S8>:1:453' */
      u1 = (CI_PotPos - PotPosKeepMaxLanding) / (PotPivot2Landing -
        PotPosKeepMaxLanding);
      if ((0.0 > u1) || rtIsNaN(u1)) {
        u1 = 0.0;
      }

      *WinchSpdRef_Pot = WinchSpeedSlopeReelOutLanding * Ts * u1 +
        HLC_WinchSpdRef_m1;
      if ((WinchSpdMaxLanding < *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot))
      {
        *WinchSpdRef_Pot = WinchSpdMaxLanding;
      }
    } else {
      if (PotZoneLanding == 0.0) {
        /* '<S8>:1:455' */
        /*  Reel-in */
        /* '<S8>:1:456' */
        /*          WinchSpd_prop   =   max(WinchSpdMinLanding,WinchSpdNormLandingIn*PotPos_norm^2); */
        /* '<S8>:1:458' */
        /*          WinchSpdRef     =   min(0,min(WinchSpd_prop,WinchSpd_int)); */
        /* '<S8>:1:460' */
        u1 = (CI_PotPos - PotPosKeepMinLanding) / (PotPivot0Landing -
          PotPosKeepMinLanding);
        if ((0.0 > u1) || rtIsNaN(u1)) {
          u1 = 0.0;
        }

        *WinchSpdRef_Pot = WinchSpeedSlopeReelInLanding * Ts * u1 +
          HLC_WinchSpdRef_m1;
        if ((WinchSpdMinLanding > *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot))
        {
          *WinchSpdRef_Pot = WinchSpdMinLanding;
        }

        if ((0.0 < *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot)) {
          *WinchSpdRef_Pot = 0.0;
        }
      }
    }
  }

  if (HLC_State == 7.0) {
    /* '<S8>:1:464' */
    /* '<S8>:1:465' */
    WinchSpdRefDeriv = -WinchSpeedTakeOffMult * SlMotSpeedEst;
    if ((WinchSpdRefDeriv > *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot)) {
      *WinchSpdRef_Pot = WinchSpdRefDeriv;
    }

    /*  Latch drum speed to slide speed */
    if (Timer <= TakeOffLatchTime) {
      /* '<S8>:1:466' */
      /* '<S8>:1:467' */
      if ((HLC_WinchSpdRef_m1 > *WinchSpdRef_Pot) || rtIsNaN(*WinchSpdRef_Pot))
      {
        *WinchSpdRef_Pot = HLC_WinchSpdRef_m1;
      }

      /*  Keep maximum speed during take-off for TakeOffLatchTime seconds */
    }
  }
}

/* Function for MATLAB Function: '<S31>/Embedded MATLAB Function' */
static void Control_software_convert1word_p(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S34>:1:48' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S34>:1:49' */
  ind = 7U;
  while (in > 0) {
    /* '<S34>:1:51' */
    /* '<S34>:1:52' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S34>:1:53' */
      /* '<S34>:1:54' */
      vec[7 - ind] = 1.0;

      /* '<S34>:1:55' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S34>:1:57' */
      vec[7 - ind] = 0.0;
    }

    /* '<S34>:1:59' */
    q0 = ind;
    qY = q0 - 1U;
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    q0 = (int32_T)qY;
    ind = (uint8_T)q0;
  }
}

/* Model output function for TID0 */
static void Control_software_v1_1_output0(void) /* Sample time: [0.001s, 0.0s] */
{
  int32_T k;
  int32_T PotZoneFlight;
  real_T Flag_OK;
  real_T Timer;
  real_T TravelRefMinus;
  real_T WinchSpdRef;
  real_T ReelTimer_Pot;
  real_T y;
  real_T u0;
  real_T u2;

  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (scblock): '<S88>/S-Function' */
  /* ok to acquire for <S88>/S-Function */
  Control_software_v1_1_DW.SFunction_IWORK_h.AcquireOK = 1;

  /* S-Function (adnipcim): '<S22>/PCI-6221 AD' */

  /* Level2 S-Function Block: '<S22>/PCI-6221 AD' (adnipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dinipcim): '<S23>/PCI-6221 DI' */

  /* Level2 S-Function Block: '<S23>/PCI-6221 DI' (dinipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* S-Function (pfidinipcim): '<S23>/PCI 6221 PFI DI ' */

  /* Level2 S-Function Block: '<S23>/PCI 6221 PFI DI ' (pfidinipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[27];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<S9>/Sum' incorporates:
   *  Constant: '<S9>/Constant'
   */
  Control_software_v1_1_B.Sum_a = Control_software_v1_1_P.JoyS_ofst +
    Control_software_v1_1_B.AI_Joy_S;

  /* Gain: '<S9>/Gain' */
  Control_software_v1_1_B.Gain = Control_software_v1_1_P.JoyS_gain *
    Control_software_v1_1_B.Sum_a;

  /* DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
  y = Control_software_v1_1_B.Gain;
  y -= Control_software_v1_1_P.JoyFiltDen[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states[0];
  y -= Control_software_v1_1_P.JoyFiltDen[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states[1];
  y /= Control_software_v1_1_P.JoyFiltDen[0];
  Control_software_v1_1_DW.DiscreteTransferFcn_tmp = y;
  y = Control_software_v1_1_P.JoyFiltNum[0] *
    Control_software_v1_1_DW.DiscreteTransferFcn_tmp;
  y += Control_software_v1_1_P.JoyFiltNum[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states[0];
  y += Control_software_v1_1_P.JoyFiltNum[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states[1];
  Control_software_v1_1_B.DiscreteTransferFcn = y;

  /* Saturate: '<S9>/Saturation' */
  y = -Control_software_v1_1_P.JoyS_sat;
  u0 = Control_software_v1_1_B.DiscreteTransferFcn;
  u2 = Control_software_v1_1_P.JoyS_sat;
  if (u0 > u2) {
    Control_software_v1_1_B.CI_JoyS = u2;
  } else if (u0 < y) {
    Control_software_v1_1_B.CI_JoyS = y;
  } else {
    Control_software_v1_1_B.CI_JoyS = u0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Delay: '<S9>/Delay' */
  Control_software_v1_1_B.Delay = Control_software_v1_1_DW.Delay_DSTATE;

  /* Sum: '<S9>/Sum1' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  Control_software_v1_1_B.Sum1 = Control_software_v1_1_B.AI_Joy_W +
    Control_software_v1_1_P.JoyW_ofst;

  /* Gain: '<S9>/Gain1' */
  Control_software_v1_1_B.Gain1 = Control_software_v1_1_P.JoyW_gain *
    Control_software_v1_1_B.Sum1;

  /* DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
  y = Control_software_v1_1_B.Gain1;
  y -= Control_software_v1_1_P.JoyFiltDen[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states[0];
  y -= Control_software_v1_1_P.JoyFiltDen[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states[1];
  y /= Control_software_v1_1_P.JoyFiltDen[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_tmp = y;
  y = Control_software_v1_1_P.JoyFiltNum[0] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp;
  y += Control_software_v1_1_P.JoyFiltNum[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states[0];
  y += Control_software_v1_1_P.JoyFiltNum[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states[1];
  Control_software_v1_1_B.DiscreteTransferFcn1 = y;

  /* Saturate: '<S9>/Saturation1' */
  u0 = Control_software_v1_1_B.DiscreteTransferFcn1;
  y = Control_software_v1_1_P.Saturation1_LowerSat;
  u2 = Control_software_v1_1_P.Saturation1_UpperSat;
  if (u0 > u2) {
    Control_software_v1_1_B.Saturation1 = u2;
  } else if (u0 < y) {
    Control_software_v1_1_B.Saturation1 = y;
  } else {
    Control_software_v1_1_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S9>/Saturation1' */

  /* Switch: '<S9>/Switch1' incorporates:
   *  Switch: '<S9>/Switch'
   */
  if (Control_software_v1_1_B.DI_Enable >
      Control_software_v1_1_P.Switch1_Threshold) {
    /* RelationalOperator: '<S12>/Relational Operator1' incorporates:
     *  Constant: '<S12>/untere Kraftsensor Grenze'
     */
    Control_software_v1_1_B.RelationalOperator1 =
      (Control_software_v1_1_B.Saturation1 <
       Control_software_v1_1_P.untereKraftsensorGrenze_Value);

    /* Switch: '<S12>/Switch1' */
    if (Control_software_v1_1_B.RelationalOperator1) {
      /* Gain: '<S12>/Gain' incorporates:
       *  Constant: '<S12>/Beschleunigung'
       */
      Control_software_v1_1_B.Gain_n = Control_software_v1_1_P.Gain_Gain *
        Control_software_v1_1_P.Beschleunigung_Value_i;

      /* Sum: '<S12>/Sum1' */
      Control_software_v1_1_B.Sum1_p = Control_software_v1_1_B.Gain_n +
        Control_software_v1_1_B.Delay;
      Control_software_v1_1_B.Switch1_m = Control_software_v1_1_B.Sum1_p;
    } else {
      /* RelationalOperator: '<S12>/Relational Operator' incorporates:
       *  Constant: '<S12>/obere Kraftsensor Grenze'
       */
      Control_software_v1_1_B.RelationalOperator_i =
        (Control_software_v1_1_B.Saturation1 >=
         Control_software_v1_1_P.obereKraftsensorGrenze_Value);

      /* Switch: '<S12>/Switch' */
      if (Control_software_v1_1_B.RelationalOperator_i) {
        /* Sum: '<S12>/Sum' incorporates:
         *  Constant: '<S12>/Beschleunigung'
         */
        Control_software_v1_1_B.Sum_o =
          Control_software_v1_1_P.Beschleunigung_Value_i +
          Control_software_v1_1_B.Delay;
        Control_software_v1_1_B.Switch_m = Control_software_v1_1_B.Sum_o;
      } else {
        Control_software_v1_1_B.Switch_m = Control_software_v1_1_B.Delay;
      }

      /* End of Switch: '<S12>/Switch' */
      Control_software_v1_1_B.Switch1_m = Control_software_v1_1_B.Switch_m;
    }

    /* End of Switch: '<S12>/Switch1' */
    Control_software_v1_1_B.Switch1 = Control_software_v1_1_B.Switch1_m;
  } else {
    if (Control_software_v1_1_B.DI_WinchMode >
        Control_software_v1_1_P.Switch_Threshold) {
      /* Switch: '<S9>/Switch' incorporates:
       *  Constant: '<S9>/Constant3'
       */
      Control_software_v1_1_B.Switch_i = Control_software_v1_1_P.Constant3_Value;
    } else {
      /* Switch: '<S9>/Switch' incorporates:
       *  Constant: '<S9>/Constant2'
       */
      Control_software_v1_1_B.Switch_i = Control_software_v1_1_P.Constant2_Value;
    }

    Control_software_v1_1_B.Switch1 = Control_software_v1_1_B.Switch_i;
  }

  /* End of Switch: '<S9>/Switch1' */

  /* Delay: '<S16>/Delay' */
  Control_software_v1_1_B.Delay_b = Control_software_v1_1_DW.Delay_DSTATE_f;

  /* Sum: '<S16>/Sum' */
  Control_software_v1_1_B.Sum_n = Control_software_v1_1_B.Switch1 -
    Control_software_v1_1_B.Delay_b;

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   */
  Control_software_v1_1_B.Compare = (Control_software_v1_1_B.Sum_n <
    Control_software_v1_1_P.Constant_Value_f);

  /* Switch: '<S16>/Switch1' */
  if (Control_software_v1_1_B.Compare) {
    /* Gain: '<S16>/Gain' incorporates:
     *  Constant: '<S16>/Beschleunigung'
     */
    Control_software_v1_1_B.Gain_ms = Control_software_v1_1_P.Gain_Gain_l *
      Control_software_v1_1_P.Beschleunigung_Value;
    Control_software_v1_1_B.Switch1_d = Control_software_v1_1_B.Gain_ms;
  } else {
    /* RelationalOperator: '<S17>/Compare' incorporates:
     *  Constant: '<S17>/Constant'
     */
    Control_software_v1_1_B.Compare_e = (Control_software_v1_1_B.Sum_n >
      Control_software_v1_1_P.Constant_Value_n);

    /* Switch: '<S16>/Switch' incorporates:
     *  Constant: '<S16>/Beschleunigung'
     *  Constant: '<S16>/Constant1'
     */
    if (Control_software_v1_1_B.Compare_e) {
      Control_software_v1_1_B.Switch_kv =
        Control_software_v1_1_P.Beschleunigung_Value;
    } else {
      Control_software_v1_1_B.Switch_kv =
        Control_software_v1_1_P.Constant1_Value_l;
    }

    /* End of Switch: '<S16>/Switch' */
    Control_software_v1_1_B.Switch1_d = Control_software_v1_1_B.Switch_kv;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Delay: '<S16>/Delay1' */
  Control_software_v1_1_B.Delay1 = Control_software_v1_1_DW.Delay1_DSTATE;

  /* Sum: '<S16>/Sum1' */
  Control_software_v1_1_B.Sum1_o = Control_software_v1_1_B.Switch1_d +
    Control_software_v1_1_B.Delay1;

  /* DiscreteStateSpace: '<S20>/Discrete State-Space' */
  Control_software_v1_1_B.DiscreteStateSpace[0] = 0.0;
  Control_software_v1_1_B.DiscreteStateSpace[0] +=
    Control_software_v1_1_P.Cfilt_Sl[0] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[0];
  Control_software_v1_1_B.DiscreteStateSpace[0] +=
    Control_software_v1_1_P.Cfilt_Sl[2] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[1];
  Control_software_v1_1_B.DiscreteStateSpace[1] = 0.0;
  Control_software_v1_1_B.DiscreteStateSpace[1] +=
    Control_software_v1_1_P.Cfilt_Sl[1] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[0];
  Control_software_v1_1_B.DiscreteStateSpace[1] +=
    Control_software_v1_1_P.Cfilt_Sl[3] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[1];

  /* Gain: '<S20>/Gain2' */
  TravelRefMinus = Control_software_v1_1_P.SlMotPosAIgain;
  y = 1.0 / TravelRefMinus;
  Control_software_v1_1_B.SlMotPosEst = y *
    Control_software_v1_1_B.DiscreteStateSpace[0];

  /* DiscreteTransferFcn: '<S20>/Discrete Transfer Fcn1' */
  y = Control_software_v1_1_B.DiscreteStateSpace[1];
  y -= Control_software_v1_1_P.SlideSpdEstFiltDen[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[0];
  y -= Control_software_v1_1_P.SlideSpdEstFiltDen[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[1];
  y /= Control_software_v1_1_P.SlideSpdEstFiltDen[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_d = y;
  y = Control_software_v1_1_P.SlideSpdEstFiltNum[0] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_d;
  y += Control_software_v1_1_P.SlideSpdEstFiltNum[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[0];
  y += Control_software_v1_1_P.SlideSpdEstFiltNum[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[1];
  Control_software_v1_1_B.SlMotSpeedEst = y;

  /* DiscreteTransferFcn: '<S10>/Discrete Transfer Fcn2' */
  y = Control_software_v1_1_B.AI_mot_slide_pos;
  y -= Control_software_v1_1_P.SlidePosFiltDen[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn2_states[0];
  y -= Control_software_v1_1_P.SlidePosFiltDen[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn2_states[1];
  y /= Control_software_v1_1_P.SlidePosFiltDen[0];
  Control_software_v1_1_DW.DiscreteTransferFcn2_tmp = y;
  y = Control_software_v1_1_P.SlidePosFiltNum[0] *
    Control_software_v1_1_DW.DiscreteTransferFcn2_tmp;
  y += Control_software_v1_1_P.SlidePosFiltNum[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn2_states[0];
  y += Control_software_v1_1_P.SlidePosFiltNum[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn2_states[1];
  Control_software_v1_1_B.CI_SlidePos = y;

  /* Sum: '<S19>/Sum' incorporates:
   *  Constant: '<S19>/Constant'
   */
  Control_software_v1_1_B.Sum_p = Control_software_v1_1_P.WinchVoltMax +
    Control_software_v1_1_B.AI_mot_winch_pos;

  /* Gain: '<S19>/Gain' */
  Control_software_v1_1_B.Gain_m = Control_software_v1_1_P.WinchMotPosAIgain *
    Control_software_v1_1_B.Sum_p;

  /* Sum: '<S19>/Sum1' incorporates:
   *  Constant: '<S19>/Constant1'
   */
  y = Control_software_v1_1_P.WinchTravelMin_m;
  TravelRefMinus = Control_software_v1_1_P.WinchDrumRad;
  y /= TravelRefMinus;
  Control_software_v1_1_B.Sum1_n = y + Control_software_v1_1_B.Gain_m;

  /* DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn1' */
  y = Control_software_v1_1_B.Sum1_n;
  y -= Control_software_v1_1_P.WinchPosFiltDen[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[0];
  y -= Control_software_v1_1_P.WinchPosFiltDen[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[1];
  y /= Control_software_v1_1_P.WinchPosFiltDen[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_c = y;
  y = Control_software_v1_1_P.WinchPosFiltNum[0] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_c;
  y += Control_software_v1_1_P.WinchPosFiltNum[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[0];
  y += Control_software_v1_1_P.WinchPosFiltNum[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[1];
  Control_software_v1_1_B.CI_WinchPos = y;

  /* DiscreteStateSpace: '<S21>/Discrete State-Space' */
  Control_software_v1_1_B.DiscreteStateSpace_g[0] = 0.0;
  Control_software_v1_1_B.DiscreteStateSpace_g[0] +=
    Control_software_v1_1_P.Cfilt_Winch[0] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[0];
  Control_software_v1_1_B.DiscreteStateSpace_g[0] +=
    Control_software_v1_1_P.Cfilt_Winch[2] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[1];
  Control_software_v1_1_B.DiscreteStateSpace_g[1] = 0.0;
  Control_software_v1_1_B.DiscreteStateSpace_g[1] +=
    Control_software_v1_1_P.Cfilt_Winch[1] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[0];
  Control_software_v1_1_B.DiscreteStateSpace_g[1] +=
    Control_software_v1_1_P.Cfilt_Winch[3] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[1];

  /* DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
  k = 1;
  y = Control_software_v1_1_B.DiscreteStateSpace_g[1];
  y -= Control_software_v1_1_P.WinchSpdEstFiltDen[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states_n[0];
  y -= Control_software_v1_1_P.WinchSpdEstFiltDen[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states_n[1];
  y /= Control_software_v1_1_P.WinchSpdEstFiltDen[0];
  Control_software_v1_1_DW.DiscreteTransferFcn_tmp_g = y;
  y = Control_software_v1_1_P.WinchSpdEstFiltNum[0] *
    Control_software_v1_1_DW.DiscreteTransferFcn_tmp_g;
  y += Control_software_v1_1_P.WinchSpdEstFiltNum[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states_n[0];
  y += Control_software_v1_1_P.WinchSpdEstFiltNum[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn_states_n[1];
  Control_software_v1_1_B.WinchMotSpeedEst = y;

  /* Gain: '<S11>/Gain' */
  Control_software_v1_1_B.Gain_f = Control_software_v1_1_P.Pot_gain *
    Control_software_v1_1_B.AI_pot_pos;

  /* Sum: '<S11>/Sum' incorporates:
   *  Constant: '<S11>/Constant'
   */
  Control_software_v1_1_B.Sum_b = Control_software_v1_1_P.Pot_ofst +
    Control_software_v1_1_B.Gain_f;

  /* DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
  y = Control_software_v1_1_B.Sum_b;
  y -= Control_software_v1_1_P.PotPosFiltDen[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[0];
  y -= Control_software_v1_1_P.PotPosFiltDen[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[1];
  y /= Control_software_v1_1_P.PotPosFiltDen[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_h = y;
  y = Control_software_v1_1_P.PotPosFiltNum[0] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_h;
  y += Control_software_v1_1_P.PotPosFiltNum[1] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[0];
  y += Control_software_v1_1_P.PotPosFiltNum[2] *
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[1];
  Control_software_v1_1_B.DiscreteTransferFcn1_c = y;

  /* Saturate: '<S11>/Saturation' */
  u0 = Control_software_v1_1_B.DiscreteTransferFcn1_c;
  y = Control_software_v1_1_P.Pot_min;
  u2 = Control_software_v1_1_P.Pot_max;
  if (u0 > u2) {
    Control_software_v1_1_B.CI_PotPos = u2;
  } else if (u0 < y) {
    Control_software_v1_1_B.CI_PotPos = y;
  } else {
    Control_software_v1_1_B.CI_PotPos = u0;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Delay: '<S11>/Delay' */
  Control_software_v1_1_B.Delay_e = Control_software_v1_1_DW.Delay_DSTATE_b[0];

  /* Sum: '<S11>/Sum1' */
  Control_software_v1_1_B.Sum1_b = Control_software_v1_1_B.CI_PotPos -
    Control_software_v1_1_B.Delay_e;

  /* Gain: '<S11>/Gain1' */
  TravelRefMinus = Control_software_v1_1_P.NPotSpdEst *
    Control_software_v1_1_P.Ts_1ms;
  y = 1.0 / TravelRefMinus;
  Control_software_v1_1_B.CI_PotSpd = y * Control_software_v1_1_B.Sum1_b;

  /* UnitDelay: '<S2>/Unit Delay7' */
  Control_software_v1_1_B.UnitDelay7 =
    Control_software_v1_1_DW.UnitDelay7_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay1' */
  Control_software_v1_1_B.UnitDelay1 =
    Control_software_v1_1_DW.UnitDelay1_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay2' */
  Control_software_v1_1_B.UnitDelay2 =
    Control_software_v1_1_DW.UnitDelay2_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay4' */
  Control_software_v1_1_B.UnitDelay4 =
    Control_software_v1_1_DW.UnitDelay4_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay5' */
  Control_software_v1_1_B.UnitDelay5 =
    Control_software_v1_1_DW.UnitDelay5_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay6' */
  Control_software_v1_1_B.UnitDelay6 =
    Control_software_v1_1_DW.UnitDelay6_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay3' */
  Control_software_v1_1_B.UnitDelay3 =
    Control_software_v1_1_DW.UnitDelay3_DSTATE;

  /* UnitDelay: '<S2>/Unit Delay' */
  Control_software_v1_1_B.UnitDelay_b =
    Control_software_v1_1_DW.UnitDelay_DSTATE_k;

  /* UnitDelay: '<S2>/Unit Delay8' */
  Control_software_v1_1_B.UnitDelay8 =
    Control_software_v1_1_DW.UnitDelay8_DSTATE;

  /* SignalConversion: '<S8>/TmpSignal ConversionAt SFunction Inport23' incorporates:
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant11'
   *  Constant: '<S7>/Constant12'
   *  Constant: '<S7>/Constant13'
   *  Constant: '<S7>/Constant14'
   *  Constant: '<S7>/Constant15'
   *  Constant: '<S7>/Constant16'
   *  Constant: '<S7>/Constant17'
   *  Constant: '<S7>/Constant18'
   *  Constant: '<S7>/Constant19'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant20'
   *  Constant: '<S7>/Constant21'
   *  Constant: '<S7>/Constant22'
   *  Constant: '<S7>/Constant23'
   *  Constant: '<S7>/Constant24'
   *  Constant: '<S7>/Constant25'
   *  Constant: '<S7>/Constant26'
   *  Constant: '<S7>/Constant28'
   *  Constant: '<S7>/Constant29'
   *  Constant: '<S7>/Constant3'
   *  Constant: '<S7>/Constant30'
   *  Constant: '<S7>/Constant31'
   *  Constant: '<S7>/Constant32'
   *  Constant: '<S7>/Constant33'
   *  Constant: '<S7>/Constant34'
   *  Constant: '<S7>/Constant35'
   *  Constant: '<S7>/Constant36'
   *  Constant: '<S7>/Constant37'
   *  Constant: '<S7>/Constant38'
   *  Constant: '<S7>/Constant39'
   *  Constant: '<S7>/Constant4'
   *  Constant: '<S7>/Constant40'
   *  Constant: '<S7>/Constant41'
   *  Constant: '<S7>/Constant42'
   *  Constant: '<S7>/Constant5'
   *  Constant: '<S7>/Constant6'
   *  Constant: '<S7>/Constant7'
   *  Constant: '<S7>/Constant8'
   *  MATLAB Function: '<S2>/MATLAB Function'
   */
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[0] =
    Control_software_v1_1_P.HLC_Param.Slide.TakeoffTravel_V;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] =
    Control_software_v1_1_P.HLC_Param.Slide.SlideTravelMax_V;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[2] =
    Control_software_v1_1_P.HLC_Param.Slide.SlideTravelMax_rad;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] =
    Control_software_v1_1_P.HLC_Param.Slide.JogSpeed;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[4] =
    Control_software_v1_1_P.HLC_Param.Slide.TakeOffSpeed;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] =
    Control_software_v1_1_P.HLC_Param.Slide.ErrTol;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[6] =
    Control_software_v1_1_P.HLC_Param.Slide.WaitTime;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[7] =
    Control_software_v1_1_P.HLC_Param.Slide.LandingLength_rad;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[8] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdRefGain;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[9] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchTravelMax;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchTravelMin;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[11] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdMaxFlight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[12] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdMinFlight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[13] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpeedTakeOffMult;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[14] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdMaxLanding;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[15] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdMinLanding;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[16] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdMax;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[17] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdMin;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[18] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPosKeepMinFlight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[19] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPosKeepMaxFlight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[20] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPosKeepMinLanding;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[21] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPosKeepMaxLanding;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[22] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPivot2Flight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[23] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPivot0Flight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[24] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPivot2Landing;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[25] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPivot0Landing;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[26] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdNormFlightOut;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[27] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdNormLandingIn;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[28] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdNormLandingOut;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[29] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpeedSlopeReelInFlight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[30] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpeedSlopeReelOutFlight;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[31] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpeedSlopeReelInLanding;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[32] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpeedSlopeReelOutLanding;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[33] =
    Control_software_v1_1_P.HLC_Param.Winch.PotPosSpdMin;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[34] =
    Control_software_v1_1_P.HLC_Param.Winch.DerivGain;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[35] =
    Control_software_v1_1_P.HLC_Param.Winch.TakeOffLatchTime;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[36] =
    Control_software_v1_1_P.HLC_Param.Winch.ReelTimer_wait;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[37] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpdMinFlight_wait;
  Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[38] =
    Control_software_v1_1_P.HLC_Param.Winch.WinchSpeedSlopeReelInFlight_wait;

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Constant: '<S2>/Constant2'
   */
  y = Control_software_v1_1_B.UnitDelay2;

  /* MATLAB Function 'High-level control/MATLAB Function': '<S8>:1' */
  /*  Parameter reading */
  /* '<S8>:1:6' */
  /* '<S8>:1:7' */
  /* '<S8>:1:8' */
  /* '<S8>:1:9' */
  /* '<S8>:1:10' */
  /* '<S8>:1:11' */
  /* '<S8>:1:12' */
  /* '<S8>:1:13' */
  /*  LandingTravel_V                     =   HLC_Param(9,1); */
  /*  LandingSpeed                        =   HLC_Param(10,1); */
  /* '<S8>:1:17' */
  /* '<S8>:1:18' */
  /* '<S8>:1:19' */
  /* '<S8>:1:20' */
  /* '<S8>:1:21' */
  /* '<S8>:1:22' */
  /* '<S8>:1:23' */
  /* '<S8>:1:24' */
  /* '<S8>:1:25' */
  /* '<S8>:1:26' */
  /* '<S8>:1:27' */
  /* '<S8>:1:28' */
  /* '<S8>:1:29' */
  /* '<S8>:1:30' */
  /* '<S8>:1:31' */
  /* '<S8>:1:32' */
  /* '<S8>:1:33' */
  /* '<S8>:1:34' */
  /* '<S8>:1:35' */
  /* '<S8>:1:38' */
  /* '<S8>:1:39' */
  /* '<S8>:1:40' */
  /* '<S8>:1:41' */
  /* '<S8>:1:42' */
  /* '<S8>:1:43' */
  /* '<S8>:1:44' */
  /* '<S8>:1:45' */
  /* '<S8>:1:46' */
  /* '<S8>:1:47' */
  /*  Auxiliary variables */
  /* '<S8>:1:51' */
  TravelRefMinus = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] -
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[0];

  /*  Potentiometer zone calculation 0=reel-in, 1=keep, 2=reel-out */
  /* '<S8>:1:54' */
  PotZoneFlight = 1;
  if (Control_software_v1_1_B.CI_PotPos <
      Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[18]) {
    /* '<S8>:1:55' */
    /* '<S8>:1:56' */
    PotZoneFlight = 0;
  } else {
    if (Control_software_v1_1_B.CI_PotPos >
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[19]) {
      /* '<S8>:1:57' */
      /* '<S8>:1:58' */
      PotZoneFlight = 2;
    }
  }

  /* '<S8>:1:61' */
  if (Control_software_v1_1_B.CI_PotPos <
      Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[20]) {
    /* '<S8>:1:62' */
    /* '<S8>:1:63' */
    k = 0;
  } else {
    if (Control_software_v1_1_B.CI_PotPos >
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[21]) {
      /* '<S8>:1:64' */
      /* '<S8>:1:65' */
      k = 2;
    }
  }

  /*  Initialize and update current state of state machine */
  /*  0=all disabled; 1=smooth homing; 2=manual slide and winch; 3=prepare */
  /*  takeoff without winch; 4=takeoff without winch; 5=manual slide */
  /*  and auto winch; 6=prepare takeoff with auto winch; 7=takeoff with auto */
  /*  winch; 8=flight with auto winch; 9=approach with auto winch; 10=landing; */
  /*  11= flight with manual winch */
  if (Control_software_v1_1_B.DI_Enable < 0.5) {
    /* '<S8>:1:75' */
    /*  State 0 */
    /* '<S8>:1:76' */
    u2 = 0.0;

    /* '<S8>:1:77' */
    Timer = 0.0;

    /* '<S8>:1:78' */
    Control_software_v1_1_B.ReelTimer = 0.0;

    /* '<S8>:1:79' */
    Flag_OK = 0.0;
  } else {
    /*  all other states, initially confirm previous state and outputs */
    /* '<S8>:1:82' */
    u2 = Control_software_v1_1_B.UnitDelay1;

    /* '<S8>:1:83' */
    Timer = Control_software_v1_1_B.UnitDelay_b;

    /* '<S8>:1:84' */
    Control_software_v1_1_B.ReelTimer = Control_software_v1_1_B.UnitDelay8;

    /* '<S8>:1:85' */
    Flag_OK = Control_software_v1_1_B.UnitDelay3;

    /*  Transitions from State 0 */
    if ((Control_software_v1_1_B.UnitDelay1 == 0.0) &&
        (Control_software_v1_1_B.DI_Enable > 0.5)) {
      /* '<S8>:1:88' */
      /*  go to state = 1, reset flag_OK and Timer   */
      /* '<S8>:1:89' */
      u2 = 1.0;

      /* '<S8>:1:90' */
      Timer = 0.0;

      /* '<S8>:1:91' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:92' */
      Flag_OK = 0.0;

      /*  Transitions from State 1 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 1.0) &&
               (Control_software_v1_1_B.UnitDelay3 == 1.0) &&
               (Control_software_v1_1_B.DI_WinchMode < 0.5)) {
      /* '<S8>:1:95' */
      /*  go to state = 2, reset flag_OK and Timer  */
      /* '<S8>:1:96' */
      u2 = 2.0;

      /* '<S8>:1:97' */
      Timer = 0.0;

      /* '<S8>:1:98' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:99' */
      Flag_OK = 0.0;
    } else if ((Control_software_v1_1_B.UnitDelay1 == 1.0) &&
               (Control_software_v1_1_B.UnitDelay3 == 1.0) &&
               (Control_software_v1_1_B.DI_WinchMode > 0.5)) {
      /* '<S8>:1:100' */
      /*  go to state = 5, reset flag_OK and Timer  */
      /* '<S8>:1:101' */
      u2 = 5.0;

      /* '<S8>:1:102' */
      Timer = 0.0;

      /* '<S8>:1:103' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:104' */
      Flag_OK = 0.0;

      /*  Transitions from State 2 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 2.0) &&
               (Control_software_v1_1_B.DI_WinchMode > 0.5)) {
      /* '<S8>:1:107' */
      /*  go to state = 5, reset flag_OK and Timer  */
      /* '<S8>:1:108' */
      u2 = 5.0;

      /* '<S8>:1:109' */
      Timer = 0.0;

      /* '<S8>:1:110' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:111' */
      Flag_OK = 0.0;
    } else if ((Control_software_v1_1_B.UnitDelay1 == 2.0) &&
               (Control_software_v1_1_B.DI_Takeoff > 0.5)) {
      /* '<S8>:1:112' */
      /*  go to state = 3, reset flag_OK and Timer  */
      /* '<S8>:1:113' */
      u2 = 3.0;

      /* '<S8>:1:114' */
      Timer = 0.0;

      /* '<S8>:1:115' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:116' */
      Flag_OK = 0.0;

      /*  Transitions from State 3 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 3.0) &&
               (Control_software_v1_1_B.DI_Takeoff < 0.5)) {
      /* '<S8>:1:119' */
      /*  go to state = 4, reset flag_OK and Timer  */
      /* '<S8>:1:120' */
      u2 = 4.0;

      /* '<S8>:1:121' */
      Timer = 0.0;

      /* '<S8>:1:122' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:123' */
      Flag_OK = 0.0;

      /*  Transitions from State 4 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 4.0) &&
               (Control_software_v1_1_B.UnitDelay3 == 1.0)) {
      /* '<S8>:1:126' */
      /*  go to state = 1, reset flag_OK and Timer  */
      /* '<S8>:1:127' */
      u2 = 1.0;

      /* '<S8>:1:128' */
      Timer = 0.0;

      /* '<S8>:1:129' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:130' */
      Flag_OK = 0.0;

      /*  Transitions from State 5 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 5.0) &&
               (Control_software_v1_1_B.DI_WinchMode < 0.5)) {
      /* '<S8>:1:133' */
      /*  go to state = 2, reset flag_OK and Timer  */
      /* '<S8>:1:134' */
      u2 = 2.0;

      /* '<S8>:1:135' */
      Timer = 0.0;

      /* '<S8>:1:136' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:137' */
      Flag_OK = 0.0;
    } else if ((Control_software_v1_1_B.UnitDelay1 == 5.0) &&
               (Control_software_v1_1_B.DI_Takeoff > 0.5)) {
      /* '<S8>:1:138' */
      /*  go to state = 6, reset flag_OK and Timer  */
      /* '<S8>:1:139' */
      u2 = 6.0;

      /* '<S8>:1:140' */
      Timer = 0.0;

      /* '<S8>:1:141' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:142' */
      Flag_OK = 0.0;

      /*  Transitions from State 6 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 6.0) &&
               (Control_software_v1_1_B.DI_Takeoff < 0.5)) {
      /* '<S8>:1:145' */
      /*  go to state = 7, reset flag_OK and Timer  */
      /* '<S8>:1:146' */
      u2 = 7.0;

      /* '<S8>:1:147' */
      Timer = 0.0;

      /* '<S8>:1:148' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:149' */
      Flag_OK = 0.0;

      /*  Transitions from State 7 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 7.0) &&
               (Control_software_v1_1_B.UnitDelay3 == 1.0)) {
      /* '<S8>:1:152' */
      /*  go to state = 8, reset flag_OK and Timer  */
      /* '<S8>:1:153' */
      u2 = 8.0;

      /* '<S8>:1:154' */
      Timer = 0.0;

      /* '<S8>:1:155' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:156' */
      Flag_OK = 0.0;

      /*  Transitions from State 8 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 8.0) &&
               (Control_software_v1_1_B.DI_WinchMode < 0.5)) {
      /* '<S8>:1:159' */
      /*  go to state = 11, reset flag_OK and Timer  */
      /* '<S8>:1:160' */
      u2 = 11.0;

      /* '<S8>:1:161' */
      Timer = 0.0;

      /* '<S8>:1:162' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:163' */
      Flag_OK = 0.0;
    } else if ((Control_software_v1_1_B.UnitDelay1 == 8.0) &&
               (Control_software_v1_1_B.DI_Landing > 0.5)) {
      /* '<S8>:1:164' */
      /*  go to state = 9, reset flag_OK and Timer  */
      /* '<S8>:1:165' */
      u2 = 9.0;

      /* '<S8>:1:166' */
      Timer = 0.0;

      /* '<S8>:1:167' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:168' */
      Flag_OK = 0.0;

      /*  Transitions from State 9 */
    } else if ((Control_software_v1_1_B.UnitDelay1 == 9.0) &&
               (Control_software_v1_1_B.DI_Landing < 0.5)) {
      /* '<S8>:1:171' */
      /*  go to state = 8, reset flag_OK and Timer  */
      /* '<S8>:1:172' */
      u2 = 8.0;

      /* '<S8>:1:173' */
      Timer = 0.0;

      /* '<S8>:1:174' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:175' */
      Flag_OK = 0.0;
    } else if ((Control_software_v1_1_B.UnitDelay1 == 9.0) &&
               (Control_software_v1_1_B.DI_WinchMode < 0.5)) {
      /* '<S8>:1:176' */
      /*  go to state = 11, reset flag_OK and Timer  */
      /* '<S8>:1:177' */
      u2 = 11.0;

      /* '<S8>:1:178' */
      Timer = 0.0;

      /* '<S8>:1:179' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:180' */
      Flag_OK = 0.0;
    } else if ((Control_software_v1_1_B.UnitDelay1 == 9.0) &&
               (Control_software_v1_1_B.UnitDelay3 == 1.0)) {
      /* '<S8>:1:181' */
      /*  go to state = 10, reset flag_OK and Timer  */
      /* '<S8>:1:182' */
      u2 = 10.0;

      /* '<S8>:1:183' */
      Timer = 0.0;

      /* '<S8>:1:184' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:185' */
      Flag_OK = 0.0;
    } else if (Control_software_v1_1_B.UnitDelay1 == 10.0) {
      /* '<S8>:1:187' */
      /*  keep state 10  */
      /* '<S8>:1:188' */
      u2 = 10.0;

      /* '<S8>:1:189' */
      Timer = 0.0;

      /* '<S8>:1:190' */
      Control_software_v1_1_B.ReelTimer = 0.0;

      /* '<S8>:1:191' */
      Flag_OK = 0.0;

      /*  Transitions from State 11 */
    } else {
      if ((Control_software_v1_1_B.UnitDelay1 == 11.0) &&
          (Control_software_v1_1_B.DI_WinchMode > 0.5)) {
        /* '<S8>:1:194' */
        /*  go to state = 8, reset flag_OK and Timer  */
        /* '<S8>:1:195' */
        u2 = 8.0;

        /* '<S8>:1:196' */
        Timer = 0.0;

        /* '<S8>:1:197' */
        Control_software_v1_1_B.ReelTimer = 0.0;

        /* '<S8>:1:198' */
        Flag_OK = 0.0;

        /*      elseif HLC_State==11 && Flag_OK==1 % go to state = 10, reset flag_OK and Timer  */
        /*          HLC_State           =   10; */
        /*          Timer               =   0; */
        /*          Flag_OK             =   0; */
      }
    }
  }

  /*  Compute slide position reference, winch speed reference, Flag_OK and Timer according to current State */
  /*  Winch reference speed calculation based on potentiometer position */
  /* '<S8>:1:209' */
  Control_software_v1_PotWinchRef(Control_software_v1_1_B.CI_PotPos,
    Control_software_v1_1_B.CI_PotSpd, Control_software_v1_1_B.UnitDelay7, u2,
    (real_T)PotZoneFlight, Control_software_v1_1_B.UnitDelay5, (real_T)k,
    Control_software_v1_1_B.UnitDelay6, Control_software_v1_1_B.WinchMotSpeedEst,
    Control_software_v1_1_B.SlMotSpeedEst, Control_software_v1_1_B.UnitDelay4,
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[18],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[19],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[20],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[21],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[11],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[12],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[14],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[15],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[13],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[22],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[23],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[24],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[25],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[26],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[29],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[30],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[31],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[32],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[33],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[34], Timer,
    Control_software_v1_1_B.UnitDelay8,
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[35],
    Control_software_v1_1_P.Ts_1ms,
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[36],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[37],
    Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[38], &WinchSpdRef,
    &ReelTimer_Pot);
  if (u2 == 0.0) {
    /* '<S8>:1:218' */
    /*  Disable */
    /* '<S8>:1:219' */
    Control_software_v1_1_B.HLC_SlidePosRef = 0.0;

    /* '<S8>:1:220' */
    WinchSpdRef = 0.0;

    /* '<S8>:1:221' */
    Control_software_v1_1_B.HLC_WinchMode = 2.0;
  } else if (u2 == 1.0) {
    /* '<S8>:1:223' */
    /*  smooth homing */
    if (Control_software_v1_1_B.UnitDelay1 != 1.0) {
      /* '<S8>:1:224' */
      /*  initial reference = position at time of transition to State 1 */
      /* '<S8>:1:225' */
      y = Control_software_v1_1_B.CI_SlidePos;
    }

    if (y < -Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0) {
      /* '<S8>:1:227' */
      /* '<S8>:1:228' */
      Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] + y;
    } else if (y > Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] /
               3.0) {
      /* '<S8>:1:229' */
      /* '<S8>:1:230' */
      Control_software_v1_1_B.HLC_SlidePosRef = y -
        Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3];
    } else {
      /* '<S8>:1:232' */
      Control_software_v1_1_B.HLC_SlidePosRef = 0.0;
      if (fabs(Control_software_v1_1_B.CI_SlidePos) <
          Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5]) {
        /* '<S8>:1:233' */
        /* '<S8>:1:234' */
        Flag_OK = 1.0;
      }
    }

    /* '<S8>:1:237' */
    WinchSpdRef = 0.0;

    /* '<S8>:1:238' */
    Control_software_v1_1_B.HLC_WinchMode = 2.0;
  } else if (u2 == 2.0) {
    /* '<S8>:1:240' */
    /*  manual slide and winch */
    /* '<S8>:1:241' */
    Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_B.CI_JoyS;

    /* '<S8>:1:242' */
    u0 = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[17];
    WinchSpdRef = Control_software_v1_1_B.Sum1_o *
      Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[8];
    if ((u0 > WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
      WinchSpdRef = u0;
    }

    u0 = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[16];
    if ((u0 < WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
      WinchSpdRef = u0;
    }

    if ((WinchSpdRef <= 3.0) && (WinchSpdRef >= -3.0)) {
      /* '<S8>:1:243' */
      /* '<S8>:1:244' */
      WinchSpdRef = 0.0;
    } else if (WinchSpdRef > 3.0) {
      /* '<S8>:1:245' */
      /* '<S8>:1:246' */
      WinchSpdRef -= 3.0;
    } else {
      if (WinchSpdRef < -3.0) {
        /* '<S8>:1:247' */
        /* '<S8>:1:248' */
        WinchSpdRef += 3.0;
      }
    }

    /* '<S8>:1:250' */
    Control_software_v1_1_B.HLC_WinchMode = 0.0;
  } else if (u2 == 3.0) {
    /* '<S8>:1:252' */
    /*  prepare takeoff without winch */
    if ((Control_software_v1_1_B.UnitDelay2 <
         Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] -
         Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0) &&
        (Flag_OK == 0.0)) {
      /* '<S8>:1:253' */
      /* '<S8>:1:254' */
      Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] +
        Control_software_v1_1_B.UnitDelay2;
    } else if ((Control_software_v1_1_B.UnitDelay2 >
                Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0
                + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1]) &&
               (Flag_OK == 0.0)) {
      /* '<S8>:1:255' */
      /* '<S8>:1:256' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3];
    } else {
      /* '<S8>:1:258' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];

      /* '<S8>:1:259' */
      Flag_OK = 1.0;
    }

    /* '<S8>:1:261' */
    WinchSpdRef = 0.0;

    /* '<S8>:1:262' */
    Control_software_v1_1_B.HLC_WinchMode = 2.0;
  } else if (u2 == 4.0) {
    /* '<S8>:1:264' */
    /*  takeoff without winch */
    /* '<S8>:1:265' */
    u0 = Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
      Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[4];
    if (!((u0 > TravelRefMinus) || rtIsNaN(TravelRefMinus))) {
      u0 = TravelRefMinus;
    }

    y = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];
    if ((y < u0) || rtIsNaN(u0)) {
      Control_software_v1_1_B.HLC_SlidePosRef = y;
    } else {
      Control_software_v1_1_B.HLC_SlidePosRef = u0;
    }

    if (fabs(TravelRefMinus - Control_software_v1_1_B.CI_SlidePos) <
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5]) {
      /* '<S8>:1:266' */
      /* '<S8>:1:267' */
      Timer = Control_software_v1_1_B.UnitDelay_b +
        Control_software_v1_1_P.Ts_1ms;
      y = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[6];
      if ((3.0 > y) || rtIsNaN(y)) {
        y = 3.0;
      }

      if (Timer > y) {
        /* '<S8>:1:268' */
        /* '<S8>:1:269' */
        Flag_OK = 1.0;

        /* '<S8>:1:270' */
        Timer = 0.0;
      }
    }

    /* '<S8>:1:273' */
    WinchSpdRef = 0.0;

    /* '<S8>:1:274' */
    Control_software_v1_1_B.HLC_WinchMode = 2.0;
  } else if (u2 == 5.0) {
    /* '<S8>:1:276' */
    /*  manual slide and auto winch */
    /* '<S8>:1:277' */
    Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_B.CI_JoyS;

    /* '<S8>:1:278' */
    /* '<S8>:1:279' */
    Control_software_v1_1_B.ReelTimer = ReelTimer_Pot;

    /* '<S8>:1:280' */
    Control_software_v1_1_B.HLC_WinchMode = 1.0;
  } else if (u2 == 6.0) {
    /* '<S8>:1:282' */
    /*  prepare takeoff with auto winch */
    if ((Control_software_v1_1_B.UnitDelay2 <
         Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] -
         Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0) &&
        (Flag_OK == 0.0)) {
      /* '<S8>:1:283' */
      /* '<S8>:1:284' */
      Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] +
        Control_software_v1_1_B.UnitDelay2;
    } else if ((Control_software_v1_1_B.UnitDelay2 >
                Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0
                + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1]) &&
               (Flag_OK == 0.0)) {
      /* '<S8>:1:285' */
      /* '<S8>:1:286' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3];
    } else {
      /* '<S8>:1:288' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];

      /* '<S8>:1:289' */
      Flag_OK = 1.0;
    }

    /* '<S8>:1:291' */
    /* '<S8>:1:292' */
    Control_software_v1_1_B.ReelTimer = ReelTimer_Pot;

    /* '<S8>:1:293' */
    Control_software_v1_1_B.HLC_WinchMode = 1.0;
  } else if (u2 == 7.0) {
    /* '<S8>:1:295' */
    /*  takeoff with auto winch */
    /* '<S8>:1:296' */
    u0 = Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
      Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[4];
    if (!((u0 > TravelRefMinus) || rtIsNaN(TravelRefMinus))) {
      u0 = TravelRefMinus;
    }

    y = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];
    if ((y < u0) || rtIsNaN(u0)) {
      Control_software_v1_1_B.HLC_SlidePosRef = y;
    } else {
      Control_software_v1_1_B.HLC_SlidePosRef = u0;
    }

    if (fabs(TravelRefMinus - Control_software_v1_1_B.CI_SlidePos) <
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5]) {
      /* '<S8>:1:297' */
      /* '<S8>:1:298' */
      Timer = Control_software_v1_1_B.UnitDelay_b +
        Control_software_v1_1_P.Ts_1ms;
      y = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[6];
      if ((3.0 > y) || rtIsNaN(y)) {
        y = 3.0;
      }

      if (Timer > y) {
        /* '<S8>:1:299' */
        /* '<S8>:1:300' */
        Flag_OK = 1.0;

        /* '<S8>:1:301' */
        Timer = 0.0;
      }
    }

    /* '<S8>:1:304' */
    /* '<S8>:1:305' */
    Control_software_v1_1_B.ReelTimer = ReelTimer_Pot;

    /* '<S8>:1:306' */
    Control_software_v1_1_B.HLC_WinchMode = 1.0;
  } else if (u2 == 8.0) {
    /* '<S8>:1:308' */
    /*  slide homing, flight with auto winch */
    if (Control_software_v1_1_B.UnitDelay2 <
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] -
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0) {
      /* '<S8>:1:309' */
      /* '<S8>:1:310' */
      Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] +
        Control_software_v1_1_B.UnitDelay2;
    } else if (Control_software_v1_1_B.UnitDelay2 >
               Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0
               + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1]) {
      /* '<S8>:1:311' */
      /* '<S8>:1:312' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3];
    } else {
      /* '<S8>:1:314' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];
    }

    /* '<S8>:1:316' */
    /* '<S8>:1:317' */
    Control_software_v1_1_B.ReelTimer = ReelTimer_Pot;

    /* '<S8>:1:318' */
    Control_software_v1_1_B.HLC_WinchMode = 1.0;
  } else if (u2 == 9.0) {
    /* '<S8>:1:320' */
    /*  slide homing, approach with auto winch */
    if (Control_software_v1_1_B.UnitDelay2 <
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] -
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0) {
      /* '<S8>:1:321' */
      /* '<S8>:1:322' */
      Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] +
        Control_software_v1_1_B.UnitDelay2;
    } else if (Control_software_v1_1_B.UnitDelay2 >
               Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0
               + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1]) {
      /* '<S8>:1:323' */
      /* '<S8>:1:324' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3];
    } else {
      /* '<S8>:1:326' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];
    }

    /* '<S8>:1:328' */
    /* '<S8>:1:329' */
    Control_software_v1_1_B.ReelTimer = ReelTimer_Pot;

    /* '<S8>:1:330' */
    Control_software_v1_1_B.HLC_WinchMode = 1.0;
    if (Control_software_v1_1_B.CI_WinchPos <
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[7] -
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[2]) {
      /* '<S8>:1:331' */
      /* '<S8>:1:332' */
      Flag_OK = 1.0;
    }
  } else if (u2 == 10.0) {
    /* '<S8>:1:335' */
    /*  slide homing, last part of landing */
    if (Control_software_v1_1_B.UnitDelay2 <
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] -
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0) {
      /* '<S8>:1:336' */
      /* '<S8>:1:337' */
      Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] +
        Control_software_v1_1_B.UnitDelay2;
    } else if (Control_software_v1_1_B.UnitDelay2 >
               Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0
               + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1]) {
      /* '<S8>:1:338' */
      /* '<S8>:1:339' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3];
    } else {
      /* '<S8>:1:341' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];
    }

    /* '<S8>:1:343' */
    WinchSpdRef = 0.0;

    /* '<S8>:1:344' */
    Control_software_v1_1_B.HLC_WinchMode = 2.0;
  } else if (u2 == 11.0) {
    /* '<S8>:1:346' */
    /*  slide homing, flight with manual winch */
    if (Control_software_v1_1_B.UnitDelay2 <
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1] -
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0) {
      /* '<S8>:1:347' */
      /* '<S8>:1:348' */
      Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3] +
        Control_software_v1_1_B.UnitDelay2;
    } else if (Control_software_v1_1_B.UnitDelay2 >
               Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[5] / 3.0
               + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1]) {
      /* '<S8>:1:349' */
      /* '<S8>:1:350' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.UnitDelay2 - Control_software_v1_1_P.Ts_1ms *
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[3];
    } else {
      /* '<S8>:1:352' */
      Control_software_v1_1_B.HLC_SlidePosRef =
        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[1];
    }

    /* '<S8>:1:354' */
    u0 = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[17];
    WinchSpdRef = Control_software_v1_1_B.Sum1_o *
      Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[8];
    if ((u0 > WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
      WinchSpdRef = u0;
    }

    u0 = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[16];
    if ((u0 < WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
      WinchSpdRef = u0;
    }

    if ((WinchSpdRef <= 3.0) && (WinchSpdRef >= -3.0)) {
      /* '<S8>:1:355' */
      /* '<S8>:1:356' */
      WinchSpdRef = 0.0;
    } else if (WinchSpdRef > 3.0) {
      /* '<S8>:1:357' */
      /* '<S8>:1:358' */
      WinchSpdRef -= 3.0;
    } else {
      if (WinchSpdRef < -3.0) {
        /* '<S8>:1:359' */
        /* '<S8>:1:360' */
        WinchSpdRef += 3.0;
      }
    }

    /* '<S8>:1:362' */
    Control_software_v1_1_B.HLC_WinchMode = 0.0;

    /*      if CI_WinchPos<LandingTravel_rad-SlideTravelMax_rad */
    /*          Flag_OK = 1; */
    /*      end */
  } else {
    /*  not-foreseen case, should never happen, stop winch and keep older slide reference */
    /* '<S8>:1:368' */
    Control_software_v1_1_B.HLC_SlidePosRef = Control_software_v1_1_B.UnitDelay2;

    /* '<S8>:1:369' */
    WinchSpdRef = 0.0;

    /* '<S8>:1:370' */
    Control_software_v1_1_B.HLC_WinchMode = 2.0;
  }

  /* '<S8>:1:373' */
  Control_software_v1_1_B.HLC_WinchSpdRef = WinchSpdRef;

  /*  Winch speed saturation and modulation close to end of travel */
  if (Control_software_v1_1_B.CI_WinchPos <=
      (Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[9] -
       Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10]) * 0.0085 +
      Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10]) {
    /* '<S8>:1:376' */
    /* '<S8>:1:377' */
    if ((0.0 > WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
      Control_software_v1_1_B.HLC_WinchSpdRef = 0.0;
    } else {
      Control_software_v1_1_B.HLC_WinchSpdRef = WinchSpdRef;
    }
  } else if ((Control_software_v1_1_B.CI_WinchPos >=
              (Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[9] -
               Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10]) *
              0.0085 + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI
              [10]) && (Control_software_v1_1_B.CI_WinchPos <=
                        (Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[
                         9] -
                         Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[
                         10]) * 0.01042 +
                        Control_software_v1_1_B.TmpSignalConversionAtSFunctionI
                        [10])) {
    /* '<S8>:1:378' */
    /* '<S8>:1:379' */
    u0 = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[12];
    if ((u0 > WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
      Control_software_v1_1_B.HLC_WinchSpdRef = u0;
    } else {
      Control_software_v1_1_B.HLC_WinchSpdRef = WinchSpdRef;
    }
  } else if (Control_software_v1_1_B.CI_WinchPos >=
             (Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[9] -
              Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10]) *
             0.99 + Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10])
  {
    /* '<S8>:1:380' */
    /* '<S8>:1:381' */
    if ((0.0 < WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
      Control_software_v1_1_B.HLC_WinchSpdRef = 0.0;
    } else {
      Control_software_v1_1_B.HLC_WinchSpdRef = WinchSpdRef;
    }
  } else {
    if ((Control_software_v1_1_B.CI_WinchPos <=
         (Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[9] -
          Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10]) * 0.99 +
         Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10]) &&
        (Control_software_v1_1_B.CI_WinchPos >=
         (Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[9] -
          Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10]) * 0.98 +
         Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[10])) {
      /* '<S8>:1:382' */
      /* '<S8>:1:383' */
      u0 = Control_software_v1_1_B.TmpSignalConversionAtSFunctionI[14];
      if ((u0 < WinchSpdRef) || rtIsNaN(WinchSpdRef)) {
        Control_software_v1_1_B.HLC_WinchSpdRef = u0;
      } else {
        Control_software_v1_1_B.HLC_WinchSpdRef = WinchSpdRef;
      }
    }
  }

  Control_software_v1_1_B.HLC_State = u2;
  Control_software_v1_1_B.PotZoneFlight = PotZoneFlight;
  Control_software_v1_1_B.PotZoneLanding = k;
  Control_software_v1_1_B.Flag_OK = Flag_OK;
  Control_software_v1_1_B.Timer = Timer;

  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/Constant2'
   */
  if (Control_software_v1_1_B.DI_Enable >
      Control_software_v1_1_P.Switch_Threshold_l) {
    /* Sum: '<S20>/Sum2' incorporates:
     *  Constant: '<S20>/Constant1'
     */
    Control_software_v1_1_B.Sum2_j = Control_software_v1_1_P.Constant1_Value -
      Control_software_v1_1_B.DiscreteStateSpace[1];

    /* Gain: '<S20>/Gain4' */
    Control_software_v1_1_B.Gain4 = Control_software_v1_1_P.Kspd *
      Control_software_v1_1_B.Sum2_j;

    /* Gain: '<S20>/Gain1' */
    Control_software_v1_1_B.Gain1_g = Control_software_v1_1_P.SlMotPosAIgain *
      Control_software_v1_1_B.HLC_SlidePosRef;

    /* Sum: '<S20>/Sum' */
    Control_software_v1_1_B.Sum_n3 = Control_software_v1_1_B.Gain1_g -
      Control_software_v1_1_B.DiscreteStateSpace[0];

    /* Gain: '<S20>/Gain3' */
    Control_software_v1_1_B.Gain3 = Control_software_v1_1_P.Kpos *
      Control_software_v1_1_B.Sum_n3;

    /* Sum: '<S20>/Sum1' */
    Control_software_v1_1_B.Sum1_bn = Control_software_v1_1_B.Gain3 +
      Control_software_v1_1_B.Gain4;

    /* Saturate: '<S20>/Saturation' */
    y = -Control_software_v1_1_P.SlideMotTorqueMax;
    u0 = Control_software_v1_1_B.Sum1_bn;
    u2 = Control_software_v1_1_P.SlideMotTorqueMax;
    if (u0 > u2) {
      Control_software_v1_1_B.Saturation_m = u2;
    } else if (u0 < y) {
      Control_software_v1_1_B.Saturation_m = y;
    } else {
      Control_software_v1_1_B.Saturation_m = u0;
    }

    /* End of Saturate: '<S20>/Saturation' */
    Control_software_v1_1_B.SlideMotTorqueEst =
      Control_software_v1_1_B.Saturation_m;
  } else {
    Control_software_v1_1_B.SlideMotTorqueEst =
      Control_software_v1_1_P.Constant2_Value_l;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/Constant2'
   */
  if (Control_software_v1_1_B.DI_Enable >
      Control_software_v1_1_P.Switch_Threshold_h) {
    /* Saturate: '<S21>/Saturation1' */
    y = -Control_software_v1_1_P.WinchRefSpdSup;
    u0 = Control_software_v1_1_B.HLC_WinchSpdRef;
    u2 = Control_software_v1_1_P.WinchRefSpdSup;
    if (u0 > u2) {
      Control_software_v1_1_B.Saturation1_m = u2;
    } else if (u0 < y) {
      Control_software_v1_1_B.Saturation1_m = y;
    } else {
      Control_software_v1_1_B.Saturation1_m = u0;
    }

    /* End of Saturate: '<S21>/Saturation1' */

    /* Sum: '<S21>/Sum2' */
    Control_software_v1_1_B.Sum2 = Control_software_v1_1_B.Saturation1_m -
      Control_software_v1_1_B.DiscreteStateSpace_g[1];

    /* Gain: '<S21>/Gain1' */
    Control_software_v1_1_B.Gain1_d = Control_software_v1_1_P.KspdWinch *
      Control_software_v1_1_B.Sum2;

    /* Saturate: '<S21>/Saturation' */
    y = -Control_software_v1_1_P.WinchMotTorqueMax;
    u0 = Control_software_v1_1_B.Gain1_d;
    u2 = Control_software_v1_1_P.WinchMotTorqueMax;
    if (u0 > u2) {
      Control_software_v1_1_B.Saturation = u2;
    } else if (u0 < y) {
      Control_software_v1_1_B.Saturation = y;
    } else {
      Control_software_v1_1_B.Saturation = u0;
    }

    /* End of Saturate: '<S21>/Saturation' */
    Control_software_v1_1_B.WinchMotTorqueEst =
      Control_software_v1_1_B.Saturation;
  } else {
    Control_software_v1_1_B.WinchMotTorqueEst =
      Control_software_v1_1_P.Constant2_Value_e;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/Constant'
   */
  if (Control_software_v1_1_B.DI_Enable >
      Control_software_v1_1_P.Switch_Threshold_k) {
    Control_software_v1_1_B.Switch = Control_software_v1_1_B.HLC_SlidePosRef;
  } else {
    Control_software_v1_1_B.Switch = Control_software_v1_1_P.Constant_Value;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Saturate: '<S6>/Saturation1' */
  y = -Control_software_v1_1_P.AOsat;
  u0 = Control_software_v1_1_B.Switch;
  u2 = Control_software_v1_1_P.AOsat;
  if (u0 > u2) {
    Control_software_v1_1_B.AO_SlideDriver = u2;
  } else if (u0 < y) {
    Control_software_v1_1_B.AO_SlideDriver = y;
  } else {
    Control_software_v1_1_B.AO_SlideDriver = u0;
  }

  /* End of Saturate: '<S6>/Saturation1' */

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/Constant2'
   */
  if (Control_software_v1_1_B.DI_Enable >
      Control_software_v1_1_P.Switch1_Threshold_g) {
    /* Gain: '<S6>/Gain' */
    y = Control_software_v1_1_P.WinchVoltMax;
    TravelRefMinus = Control_software_v1_1_P.WinchRefSpdSup;
    y /= TravelRefMinus;
    Control_software_v1_1_B.Gain_j2 = y *
      Control_software_v1_1_B.HLC_WinchSpdRef;
    Control_software_v1_1_B.Switch1_n = Control_software_v1_1_B.Gain_j2;
  } else {
    Control_software_v1_1_B.Switch1_n =
      Control_software_v1_1_P.Constant2_Value_j;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Saturate: '<S6>/Saturation' */
  y = -Control_software_v1_1_P.AOsat;
  u0 = Control_software_v1_1_B.Switch1_n;
  u2 = Control_software_v1_1_P.AOsat;
  if (u0 > u2) {
    Control_software_v1_1_B.AO_WinchDriver = u2;
  } else if (u0 < y) {
    Control_software_v1_1_B.AO_WinchDriver = y;
  } else {
    Control_software_v1_1_B.AO_WinchDriver = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* RateTransition: '<S87>/Rate Transition' */
  if (Control_software_v1_1_M->Timing.RateInteraction.TID0_1) {
    Control_software_v1_1_B.RateTransition_i[0] =
      Control_software_v1_1_B.AI_Joy_W;
    Control_software_v1_1_B.RateTransition_i[1] =
      Control_software_v1_1_B.AI_Joy_S;
    Control_software_v1_1_B.RateTransition_i[2] =
      Control_software_v1_1_B.AI_mot_slide_pos;
    Control_software_v1_1_B.RateTransition_i[3] =
      Control_software_v1_1_B.AI_mot_winch_pos;
    Control_software_v1_1_B.RateTransition_i[4] =
      Control_software_v1_1_B.AI_pot_pos;
    Control_software_v1_1_B.RateTransition_i[5] =
      Control_software_v1_1_B.DI_Enable;
    Control_software_v1_1_B.RateTransition_i[6] =
      Control_software_v1_1_B.DI_WinchMode;
    Control_software_v1_1_B.RateTransition_i[7] =
      Control_software_v1_1_B.DI_Takeoff;
    Control_software_v1_1_B.RateTransition_i[8] =
      Control_software_v1_1_B.DI_Landing;
    Control_software_v1_1_B.RateTransition_i[9] =
      Control_software_v1_1_B.DI_Operator;
    Control_software_v1_1_B.RateTransition_i[10] =
      Control_software_v1_1_B.DI_GliderPres;
    Control_software_v1_1_B.RateTransition_i[11] =
      Control_software_v1_1_B.DI_SlideLimitF;
    Control_software_v1_1_B.RateTransition_i[12] =
      Control_software_v1_1_B.DI_SlideLimitB;
    Control_software_v1_1_B.RateTransition_i[13] =
      Control_software_v1_1_B.CI_JoyS;
    Control_software_v1_1_B.RateTransition_i[14] =
      Control_software_v1_1_B.Sum1_o;
    Control_software_v1_1_B.RateTransition_i[15] =
      Control_software_v1_1_B.SlMotPosEst;
    Control_software_v1_1_B.RateTransition_i[16] =
      Control_software_v1_1_B.SlMotSpeedEst;
    Control_software_v1_1_B.RateTransition_i[17] =
      Control_software_v1_1_B.SlideMotTorqueEst;
    Control_software_v1_1_B.RateTransition_i[18] =
      Control_software_v1_1_B.DiscreteStateSpace_g[0];
    Control_software_v1_1_B.RateTransition_i[19] =
      Control_software_v1_1_B.WinchMotSpeedEst;
    Control_software_v1_1_B.RateTransition_i[20] =
      Control_software_v1_1_B.WinchMotTorqueEst;
    Control_software_v1_1_B.RateTransition_i[21] =
      Control_software_v1_1_B.CI_SlidePos;
    Control_software_v1_1_B.RateTransition_i[22] =
      Control_software_v1_1_B.CI_WinchPos;
    Control_software_v1_1_B.RateTransition_i[23] =
      Control_software_v1_1_B.CI_PotPos;
    Control_software_v1_1_B.RateTransition_i[24] =
      Control_software_v1_1_B.CI_PotSpd;
    Control_software_v1_1_B.RateTransition_i[25] =
      Control_software_v1_1_B.HLC_SlidePosRef;
    Control_software_v1_1_B.RateTransition_i[26] = Control_software_v1_1_B.Timer;
    Control_software_v1_1_B.RateTransition_i[27] =
      Control_software_v1_1_B.ReelTimer;
    Control_software_v1_1_B.RateTransition_i[28] =
      Control_software_v1_1_B.HLC_WinchSpdRef;
    Control_software_v1_1_B.RateTransition_i[29] =
      Control_software_v1_1_B.HLC_WinchMode;
    Control_software_v1_1_B.RateTransition_i[30] =
      Control_software_v1_1_B.PotZoneFlight;
    Control_software_v1_1_B.RateTransition_i[31] =
      Control_software_v1_1_B.PotZoneLanding;
    Control_software_v1_1_B.RateTransition_i[32] =
      Control_software_v1_1_B.HLC_State;
    Control_software_v1_1_B.RateTransition_i[33] =
      Control_software_v1_1_B.AO_SlideDriver;
    Control_software_v1_1_B.RateTransition_i[34] =
      Control_software_v1_1_B.AO_WinchDriver;
  }

  /* End of RateTransition: '<S87>/Rate Transition' */
  /* S-Function (scblock): '<S13>/S-Function' */
  /* ok to acquire for <S13>/S-Function */
  Control_software_v1_1_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* S-Function (scblock): '<S14>/S-Function' */
  /* ok to acquire for <S14>/S-Function */
  Control_software_v1_1_DW.SFunction_IWORK_c.AcquireOK = 1;

  /* S-Function (scblock): '<S15>/S-Function' */
  /* ok to acquire for <S15>/S-Function */
  Control_software_v1_1_DW.SFunction_IWORK_gr.AcquireOK = 1;

  /* Gain: '<S20>/Gain' */
  Control_software_v1_1_B.Gain_j = Control_software_v1_1_P.SlMotPosAIgain *
    Control_software_v1_1_B.AI_mot_slide_pos;

  /* SignalConversion: '<S20>/TmpSignal ConversionAtDiscrete State-SpaceInport1' */
  Control_software_v1_1_B.TmpSignalConversionAtDiscreteSt[0] =
    Control_software_v1_1_B.Gain_j;
  Control_software_v1_1_B.TmpSignalConversionAtDiscreteSt[1] =
    Control_software_v1_1_B.SlideMotTorqueEst;

  /* Sum: '<S21>/Sum' incorporates:
   *  Constant: '<S21>/Constant'
   */
  Control_software_v1_1_B.Sum_c = Control_software_v1_1_P.WinchVoltMax +
    Control_software_v1_1_B.AI_mot_winch_pos;

  /* Gain: '<S21>/Gain' */
  Control_software_v1_1_B.Gain_g = Control_software_v1_1_P.WinchMotPosAIgain *
    Control_software_v1_1_B.Sum_c;

  /* Sum: '<S21>/Sum1' incorporates:
   *  Constant: '<S21>/Constant1'
   */
  y = Control_software_v1_1_P.WinchTravelMin_m;
  TravelRefMinus = Control_software_v1_1_P.WinchDrumRad;
  y /= TravelRefMinus;
  Control_software_v1_1_B.Sum1_nr = y + Control_software_v1_1_B.Gain_g;

  /* SignalConversion: '<S21>/TmpSignal ConversionAtDiscrete State-SpaceInport1' */
  Control_software_v1_1_B.TmpSignalConversionAtDiscrete_e[0] =
    Control_software_v1_1_B.Sum1_nr;
  Control_software_v1_1_B.TmpSignalConversionAtDiscrete_e[1] =
    Control_software_v1_1_B.WinchMotTorqueEst;

  /* RateTransition: '<S28>/Rate Transition5' */
  Control_software_v1_1_B.RateTransition5 = Control_software_v1_1_B.FIFOwrite3;

  /* RateTransition: '<S28>/Rate Transition3' */
  Control_software_v1_1_B.RateTransition3 = Control_software_v1_1_B.FIFOwrite2;

  /* RateTransition: '<S25>/Rate Transition4' incorporates:
   *  RateTransition: '<S26>/Rate Transition4'
   */
  if (Control_software_v1_1_M->Timing.RateInteraction.TID0_3) {
    Control_software_v1_1_B.RateTransition4_p =
      Control_software_v1_1_B.RateTransition5;
    Control_software_v1_1_B.RateTransition4_d =
      Control_software_v1_1_B.RateTransition3;
  }

  /* End of RateTransition: '<S25>/Rate Transition4' */

  /* RateTransition: '<S28>/Rate Transition1' */
  Control_software_v1_1_B.RateTransition1 = Control_software_v1_1_B.FIFOwrite1;

  /* RateTransition: '<S27>/Rate Transition4' */
  if (Control_software_v1_1_M->Timing.RateInteraction.TID0_2) {
    Control_software_v1_1_B.RateTransition4_f =
      Control_software_v1_1_B.RateTransition1;
  }

  /* End of RateTransition: '<S27>/Rate Transition4' */

  /* RateTransition: '<S28>/Rate Transition7' */
  Control_software_v1_1_B.RateTransition7 = Control_software_v1_1_B.FIFOwrite4;

  /* S-Function (setupqua): '<S28>/Setup1' */

  /* Level2 S-Function Block: '<S28>/Setup1' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[39];
    sfcnOutputs(rts,0);
  }

  /* S-Function (setupqua): '<S28>/Setup2' */

  /* Level2 S-Function Block: '<S28>/Setup2' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[40];
    sfcnOutputs(rts,0);
  }

  /* S-Function (setupqua): '<S28>/Setup3' */

  /* Level2 S-Function Block: '<S28>/Setup3' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[41];
    sfcnOutputs(rts,0);
  }

  /* S-Function (setupqua): '<S28>/Setup4' */

  /* Level2 S-Function Block: '<S28>/Setup4' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[42];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<S6>/Constant1' */
  Control_software_v1_1_B.Constant1 = Control_software_v1_1_P.Constant1_Value_b;

  /* Constant: '<S6>/Constant3' */
  Control_software_v1_1_B.Constant3 = Control_software_v1_1_P.Constant3_Value_n;

  /* S-Function (pfidonipcim): '<S6>/PCI 6221 PFI DO ' */

  /* Level2 S-Function Block: '<S6>/PCI 6221 PFI DO ' (pfidonipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[43];
    sfcnOutputs(rts,0);
  }

  /* S-Function (danipcim): '<S6>/PCI-6221 DA' */

  /* Level2 S-Function Block: '<S6>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[44];
    sfcnOutputs(rts,0);
  }

  /* S-Function (donipcim): '<S6>/PCI-6221 DO' */

  /* Level2 S-Function Block: '<S6>/PCI-6221 DO' (donipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[45];
    sfcnOutputs(rts,0);
  }
}

/* Model update function for TID0 */
static void Control_software_v1_1_update0(void) /* Sample time: [0.001s, 0.0s] */
{
  real_T xnew;
  real_T xnew_0;
  real_T xnew_idx_0;

  /* Update for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
  Control_software_v1_1_DW.DiscreteTransferFcn_states[1] =
    Control_software_v1_1_DW.DiscreteTransferFcn_states[0];
  Control_software_v1_1_DW.DiscreteTransferFcn_states[0] =
    Control_software_v1_1_DW.DiscreteTransferFcn_tmp;

  /* Update for Delay: '<S9>/Delay' */
  Control_software_v1_1_DW.Delay_DSTATE = Control_software_v1_1_B.Sum1_o;

  /* Update for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
  Control_software_v1_1_DW.DiscreteTransferFcn1_states[1] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_states[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_states[0] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp;

  /* Update for Delay: '<S16>/Delay' */
  Control_software_v1_1_DW.Delay_DSTATE_f = Control_software_v1_1_B.Sum1_o;

  /* Update for Delay: '<S16>/Delay1' */
  Control_software_v1_1_DW.Delay1_DSTATE = Control_software_v1_1_B.Sum1_o;

  /* Update for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  xnew_0 = Control_software_v1_1_P.Afilt_Sl[0] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[0];
  xnew_0 += Control_software_v1_1_P.Afilt_Sl[2] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[1];
  xnew_0 += Control_software_v1_1_P.Bfilt_Sl[0] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscreteSt[0];
  xnew_0 += Control_software_v1_1_P.Bfilt_Sl[2] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscreteSt[1];
  xnew_idx_0 = xnew_0;
  xnew_0 = Control_software_v1_1_P.Afilt_Sl[1] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[0];
  xnew_0 += Control_software_v1_1_P.Afilt_Sl[3] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[1];
  xnew_0 += Control_software_v1_1_P.Bfilt_Sl[1] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscreteSt[0];
  xnew_0 += Control_software_v1_1_P.Bfilt_Sl[3] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscreteSt[1];

  /* Update for DiscreteTransferFcn: '<S20>/Discrete Transfer Fcn1' */
  Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[1] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[0] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_d;

  /* Update for DiscreteTransferFcn: '<S10>/Discrete Transfer Fcn2' */
  Control_software_v1_1_DW.DiscreteTransferFcn2_states[1] =
    Control_software_v1_1_DW.DiscreteTransferFcn2_states[0];
  Control_software_v1_1_DW.DiscreteTransferFcn2_states[0] =
    Control_software_v1_1_DW.DiscreteTransferFcn2_tmp;

  /* Update for DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn1' */
  Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[1] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[0] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_c;

  /* Update for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[0] = xnew_idx_0;

  /* Update for DiscreteStateSpace: '<S21>/Discrete State-Space' */
  xnew = Control_software_v1_1_P.Afilt_Winch[0] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[0];
  xnew += Control_software_v1_1_P.Afilt_Winch[2] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[1];
  xnew += Control_software_v1_1_P.Bfilt_Winch[0] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscrete_e[0];
  xnew += Control_software_v1_1_P.Bfilt_Winch[2] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscrete_e[1];
  xnew_idx_0 = xnew;

  /* Update for DiscreteStateSpace: '<S20>/Discrete State-Space' */
  Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[1] = xnew_0;

  /* Update for DiscreteStateSpace: '<S21>/Discrete State-Space' */
  xnew = Control_software_v1_1_P.Afilt_Winch[1] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[0];
  xnew += Control_software_v1_1_P.Afilt_Winch[3] *
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[1];
  xnew += Control_software_v1_1_P.Bfilt_Winch[1] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscrete_e[0];
  xnew += Control_software_v1_1_P.Bfilt_Winch[3] *
    Control_software_v1_1_B.TmpSignalConversionAtDiscrete_e[1];
  Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[0] = xnew_idx_0;
  Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[1] = xnew;

  /* Update for DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
  Control_software_v1_1_DW.DiscreteTransferFcn_states_n[1] =
    Control_software_v1_1_DW.DiscreteTransferFcn_states_n[0];
  Control_software_v1_1_DW.DiscreteTransferFcn_states_n[0] =
    Control_software_v1_1_DW.DiscreteTransferFcn_tmp_g;

  /* Update for DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
  Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[1] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[0];
  Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[0] =
    Control_software_v1_1_DW.DiscreteTransferFcn1_tmp_h;

  /* Update for Delay: '<S11>/Delay' */
  Control_software_v1_1_DW.Delay_DSTATE_b[0] =
    Control_software_v1_1_DW.Delay_DSTATE_b[1];
  Control_software_v1_1_DW.Delay_DSTATE_b[1] =
    Control_software_v1_1_DW.Delay_DSTATE_b[2];
  Control_software_v1_1_DW.Delay_DSTATE_b[2] = Control_software_v1_1_B.CI_PotPos;

  /* Update for UnitDelay: '<S2>/Unit Delay7' */
  Control_software_v1_1_DW.UnitDelay7_DSTATE = Control_software_v1_1_B.CI_PotSpd;

  /* Update for UnitDelay: '<S2>/Unit Delay1' */
  Control_software_v1_1_DW.UnitDelay1_DSTATE = Control_software_v1_1_B.HLC_State;

  /* Update for UnitDelay: '<S2>/Unit Delay2' */
  Control_software_v1_1_DW.UnitDelay2_DSTATE =
    Control_software_v1_1_B.HLC_SlidePosRef;

  /* Update for UnitDelay: '<S2>/Unit Delay4' */
  Control_software_v1_1_DW.UnitDelay4_DSTATE =
    Control_software_v1_1_B.HLC_WinchSpdRef;

  /* Update for UnitDelay: '<S2>/Unit Delay5' */
  Control_software_v1_1_DW.UnitDelay5_DSTATE =
    Control_software_v1_1_B.PotZoneFlight;

  /* Update for UnitDelay: '<S2>/Unit Delay6' */
  Control_software_v1_1_DW.UnitDelay6_DSTATE =
    Control_software_v1_1_B.PotZoneLanding;

  /* Update for UnitDelay: '<S2>/Unit Delay3' */
  Control_software_v1_1_DW.UnitDelay3_DSTATE = Control_software_v1_1_B.Flag_OK;

  /* Update for UnitDelay: '<S2>/Unit Delay' */
  Control_software_v1_1_DW.UnitDelay_DSTATE_k = Control_software_v1_1_B.Timer;

  /* Update for UnitDelay: '<S2>/Unit Delay8' */
  Control_software_v1_1_DW.UnitDelay8_DSTATE = Control_software_v1_1_B.ReelTimer;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Control_software_v1_1_M->Timing.clockTick0)) {
    ++Control_software_v1_1_M->Timing.clockTickH0;
  }

  Control_software_v1_1_M->Timing.t[0] =
    Control_software_v1_1_M->Timing.clockTick0 *
    Control_software_v1_1_M->Timing.stepSize0 +
    Control_software_v1_1_M->Timing.clockTickH0 *
    Control_software_v1_1_M->Timing.stepSize0 * 4294967296.0;
  switch (Control_software_v1_1_M->Timing.rtmDbBufReadBuf4) {
   case 0:
    Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4 = 1;
    break;

   case 1:
    Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4 = 0;
    break;

   default:
    Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4 =
      !Control_software_v1_1_M->Timing.rtmDbBufLastBufWr4;
    break;
  }

  Control_software_v1_1_M->Timing.rtmDbBufClockTick4
    [Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4] =
    Control_software_v1_1_M->Timing.clockTick0;
  Control_software_v1_1_M->Timing.rtmDbBufClockTickH4
    [Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4] =
    Control_software_v1_1_M->Timing.clockTickH0;
  Control_software_v1_1_M->Timing.rtmDbBufLastBufWr4 =
    Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4;
  Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4 = 0xFF;
}

/* Model output function for TID1 */
static void Control_software_v1_1_output1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* S-Function (scblock): '<S89>/S-Function' */
  /* ok to acquire for <S89>/S-Function */
  Control_software_v1_1_DW.SFunction_IWORK_k.AcquireOK = 1;
}

/* Model update function for TID1 */
static void Control_software_v1_1_update1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Control_software_v1_1_M->Timing.clockTick1)) {
    ++Control_software_v1_1_M->Timing.clockTickH1;
  }

  Control_software_v1_1_M->Timing.t[1] =
    Control_software_v1_1_M->Timing.clockTick1 *
    Control_software_v1_1_M->Timing.stepSize1 +
    Control_software_v1_1_M->Timing.clockTickH1 *
    Control_software_v1_1_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
static void Control_software_v1_1_output2(void) /* Sample time: [0.02s, 0.0s] */
{
  real_T crc_IMU;
  uint16_T crc;
  uint16_T carry;
  int32_T i;
  real_T vec1[8];
  real_T vec2[8];
  real_T temp[16];
  int32_T ind;

  /* Reset subsysRan breadcrumbs */
  srClearBC(Control_software_v1_1_DW.Data_validation_SubsysRanBC);

  /* S-Function (fiforeadhdr): '<S27>/FIFO ASCII read ' */

  /* Level2 S-Function Block: '<S27>/FIFO ASCII read ' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[30];
    sfcnOutputs(rts,2);
  }

  /* MATLAB Function: '<S31>/Embedded MATLAB Function' */
  /* MATLAB Function 'Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function': '<S34>:1' */
  /* CALCCRC pBuffer must be a uint8 array containing the buffer where the CRC */
  /* has to be computed. */
  /* '<S34>:1:6' */
  /* '<S34>:1:33' */
  Control_software_convert1word_p(Control_software_v1_1_B.FIFOASCIIread[144],
    vec1);

  /* '<S34>:1:34' */
  Control_software_convert1word_p(Control_software_v1_1_B.FIFOASCIIread[145],
    vec2);

  /* '<S34>:1:36' */
  for (ind = 0; ind < 8; ind++) {
    temp[ind] = vec1[ind];
    temp[ind + 8] = vec2[ind];
  }

  /* '<S34>:1:38' */
  /* '<S34>:1:42' */
  crc_IMU = 0.0;

  /* '<S34>:1:43' */
  for (ind = 0; ind < 16; ind++) {
    /* '<S34>:1:43' */
    /* '<S34>:1:44' */
    crc_IMU += rt_powd_snf(2.0, 16.0 - (1.0 + (real_T)ind)) * temp[ind];
  }

  /* '<S34>:1:9' */
  crc = 0U;

  /* '<S34>:1:10' */
  for (ind = 0; ind < 143; ind++) {
    /* '<S34>:1:10' */
    /* '<S34>:1:12' */
    crc ^= Control_software_v1_1_B.FIFOASCIIread[ind + 1];

    /* '<S34>:1:13' */
    for (i = 0; i < 8; i++) {
      /* '<S34>:1:13' */
      /* '<S34>:1:14' */
      carry = (uint16_T)(crc & 1);

      /* '<S34>:1:15' */
      crc = (uint16_T)((uint32_T)crc >> 1);
      if (carry != 0) {
        /* '<S34>:1:18' */
        crc ^= 33800U;
      }
    }
  }

  if (crc == crc_IMU) {
    /* '<S34>:1:24' */
    /* '<S34>:1:25' */
    ind = 1;
  } else {
    /* '<S34>:1:27' */
    ind = 0;
  }

  Control_software_v1_1_B.CRC_valid = ind;

  /* End of MATLAB Function: '<S31>/Embedded MATLAB Function' */

  /* MATLAB Function: '<S44>/Embedded MATLAB Function' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[4],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_g);

  /* MATLAB Function: '<S44>/Embedded MATLAB Function1' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[8],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1);

  /* MATLAB Function: '<S44>/Embedded MATLAB Function3' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[12],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3);

  /* MATLAB Function: '<S44>/Embedded MATLAB Function4' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[16],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4);

  /* MATLAB Function: '<S45>/Embedded MATLAB Function' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[20],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_d);

  /* MATLAB Function: '<S45>/Embedded MATLAB Function1' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[24],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_i);

  /* MATLAB Function: '<S45>/Embedded MATLAB Function3' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[28],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_p);

  /* MATLAB Function: '<S46>/Embedded MATLAB Function' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[32],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_f);

  /* MATLAB Function: '<S46>/Embedded MATLAB Function1' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[36],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_p);

  /* MATLAB Function: '<S46>/Embedded MATLAB Function3' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[40],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_a);

  /* MATLAB Function: '<S36>/Embedded MATLAB Function' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[44],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_b);

  /* MATLAB Function: '<S36>/Embedded MATLAB Function1' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[48],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_j);

  /* MATLAB Function: '<S36>/Embedded MATLAB Function3' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[52],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_ps);

  /* MATLAB Function: '<S38>/Embedded MATLAB Function' */
  Cont_EmbeddedMATLABFunction(&Control_software_v1_1_B.FIFOASCIIread[56],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_bf);

  /* MATLAB Function: '<S39>/Embedded MATLAB Function3' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[60],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_pw);

  /* MATLAB Function: '<S39>/Embedded MATLAB Function1' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[64],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_g);

  /* MATLAB Function: '<S39>/Embedded MATLAB Function2' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[68],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2);

  /* MATLAB Function: '<S40>/Embedded MATLAB Function2' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[72],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_n);

  /* MATLAB Function: '<S40>/Embedded MATLAB Function1' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[76],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_n);

  /* MATLAB Function: '<S40>/Embedded MATLAB Function3' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[80],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_o);

  /* MATLAB Function: '<S40>/Embedded MATLAB Function4' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[84],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_g);

  /* MATLAB Function: '<S35>/Embedded MATLAB Function' */
  Cont_EmbeddedMATLABFunction(&Control_software_v1_1_B.FIFOASCIIread[88],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_l);

  /* MATLAB Function: '<S35>/Embedded MATLAB Function1' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[92],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_e);

  /* MATLAB Function: '<S35>/Embedded MATLAB Function2' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[93],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_h);

  /* MATLAB Function: '<S41>/Embedded MATLAB Function2' */
  C_EmbeddedMATLABFunction1_g(&Control_software_v1_1_B.FIFOASCIIread[94],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_m);

  /* MATLAB Function: '<S42>/Embedded MATLAB Function' */
  Co_EmbeddedMATLABFunction_k(&Control_software_v1_1_B.FIFOASCIIread[98],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_k);

  /* MATLAB Function: '<S42>/Embedded MATLAB Function1' */
  Co_EmbeddedMATLABFunction_k(&Control_software_v1_1_B.FIFOASCIIread[106],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_a);

  /* MATLAB Function: '<S42>/Embedded MATLAB Function2' */
  Co_EmbeddedMATLABFunction_k(&Control_software_v1_1_B.FIFOASCIIread[114],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_g);

  /* MATLAB Function: '<S43>/Embedded MATLAB Function' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[122],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_j);

  /* MATLAB Function: '<S43>/Embedded MATLAB Function1' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[126],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_d);

  /* MATLAB Function: '<S43>/Embedded MATLAB Function3' */
  Co_EmbeddedMATLABFunction_b(&Control_software_v1_1_B.FIFOASCIIread[130],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_n);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[134],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction_a);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function2' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[135],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_p);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function3' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[136],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_k);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function4' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[137],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_h);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function5' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[138],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction5);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function6' */
  Con_EmbeddedMATLABFunction1(Control_software_v1_1_B.FIFOASCIIread[139],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction6);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function1' */
  Cont_EmbeddedMATLABFunction(&Control_software_v1_1_B.FIFOASCIIread[140],
    &Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_c);

  /* Outputs for Enabled SubSystem: '<S27>/Data_validation' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  if (Control_software_v1_1_B.CRC_valid > 0.0) {
    /* Inport: '<S32>/IMU_data' */
    Control_software_v1_1_B.IMU_data[0] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_g.sing_out;
    Control_software_v1_1_B.IMU_data[1] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1.sing_out;
    Control_software_v1_1_B.IMU_data[2] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3.sing_out;
    Control_software_v1_1_B.IMU_data[3] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction4.sing_out;
    Control_software_v1_1_B.IMU_data[4] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_d.sing_out;
    Control_software_v1_1_B.IMU_data[5] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_i.sing_out;
    Control_software_v1_1_B.IMU_data[6] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_p.sing_out;
    Control_software_v1_1_B.IMU_data[7] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_f.sing_out;
    Control_software_v1_1_B.IMU_data[8] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_p.sing_out;
    Control_software_v1_1_B.IMU_data[9] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_a.sing_out;
    Control_software_v1_1_B.IMU_data[10] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_b.sing_out;
    Control_software_v1_1_B.IMU_data[11] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_j.sing_out;
    Control_software_v1_1_B.IMU_data[12] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_ps.sing_out;
    Control_software_v1_1_B.IMU_data[13] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_bf.uint32_out;
    Control_software_v1_1_B.IMU_data[14] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_pw.int32_out;
    Control_software_v1_1_B.IMU_data[15] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_g.int32_out;
    Control_software_v1_1_B.IMU_data[16] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction2.int32_out;
    Control_software_v1_1_B.IMU_data[17] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_n.int32_out;
    Control_software_v1_1_B.IMU_data[18] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_n.int32_out;
    Control_software_v1_1_B.IMU_data[19] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_o.int32_out;
    Control_software_v1_1_B.IMU_data[20] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_g.int32_out;
    Control_software_v1_1_B.IMU_data[21] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_l.uint32_out;
    Control_software_v1_1_B.IMU_data[22] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_e.uint8_out;
    Control_software_v1_1_B.IMU_data[23] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_h.uint8_out;
    Control_software_v1_1_B.IMU_data[24] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_m.int32_out;
    Control_software_v1_1_B.IMU_data[25] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_k.double_out;
    Control_software_v1_1_B.IMU_data[26] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_a.double_out;
    Control_software_v1_1_B.IMU_data[27] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_g.double_out;
    Control_software_v1_1_B.IMU_data[28] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_j.sing_out;
    Control_software_v1_1_B.IMU_data[29] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_d.sing_out;
    Control_software_v1_1_B.IMU_data[30] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_n.sing_out;
    Control_software_v1_1_B.IMU_data[31] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction_a.uint8_out;
    Control_software_v1_1_B.IMU_data[32] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction2_p.uint8_out;
    Control_software_v1_1_B.IMU_data[33] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction3_k.uint8_out;
    Control_software_v1_1_B.IMU_data[34] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction4_h.uint8_out;
    Control_software_v1_1_B.IMU_data[35] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction5.uint8_out;
    Control_software_v1_1_B.IMU_data[36] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction6.uint8_out;
    Control_software_v1_1_B.IMU_data[37] =
      Control_software_v1_1_B.sf_EmbeddedMATLABFunction1_c.uint32_out;
    srUpdateBC(Control_software_v1_1_DW.Data_validation_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S27>/Data_validation' */
}

/* Model update function for TID2 */
static void Control_software_v1_1_update2(void) /* Sample time: [0.02s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Control_software_v1_1_M->Timing.clockTick2)) {
    ++Control_software_v1_1_M->Timing.clockTickH2;
  }

  Control_software_v1_1_M->Timing.t[2] =
    Control_software_v1_1_M->Timing.clockTick2 *
    Control_software_v1_1_M->Timing.stepSize2 +
    Control_software_v1_1_M->Timing.clockTickH2 *
    Control_software_v1_1_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output function for TID3 */
static void Control_software_v1_1_output3(void) /* Sample time: [1.0s, 0.0s] */
{
  int8_T ii_data[41];
  int32_T idx;
  real_T GU_Lon;
  real_T GU_h;
  real_T Geo_GU_h;
  char_T in_char[91];
  boolean_T x[91];
  int8_T ii_data_0[91];
  boolean_T b_x_data[90];
  int8_T c_ii_data[90];
  int32_T b_idx;
  int32_T d_ii;
  real_T y;
  char_T in_char_0;
  int32_T b_x_size_idx_0;
  boolean_T exitg1;

  /* S-Function (scblock): '<S92>/S-Function' */
  /* ok to acquire for <S92>/S-Function */
  Control_software_v1_1_DW.SFunction_IWORK.AcquireOK = 1;

  /* UnitDelay: '<S1>/Unit Delay' */
  Control_software_v1_1_B.UnitDelay = Control_software_v1_1_DW.UnitDelay_DSTATE;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Constat'
   */
  Control_software_v1_1_B.Sum = Control_software_v1_1_P.Ts_1s +
    Control_software_v1_1_B.UnitDelay;

  /* Switch: '<S91>/Switch1' incorporates:
   *  Constant: '<S91>/Constant2'
   */
  y = 12.0 * Control_software_v1_1_P.Ts_1s;
  if (Control_software_v1_1_B.Sum >= y) {
    Control_software_v1_1_B.Trigger_time =
      Control_software_v1_1_P.Constant2_Value_d;
  } else {
    /* Switch: '<S91>/Switch' incorporates:
     *  Constant: '<S91>/Constant'
     *  Constant: '<S91>/Constant1'
     */
    y = 2.0 * Control_software_v1_1_P.Ts_1s;
    if (Control_software_v1_1_B.Sum >= y) {
      Control_software_v1_1_B.Switch_k =
        Control_software_v1_1_P.Constant_Value_d;
    } else {
      Control_software_v1_1_B.Switch_k =
        Control_software_v1_1_P.Constant1_Value_p;
    }

    /* End of Switch: '<S91>/Switch' */
    Control_software_v1_1_B.Trigger_time = Control_software_v1_1_B.Switch_k;
  }

  /* End of Switch: '<S91>/Switch1' */

  /* S-Function (scblock): '<S90>/S-Function' */
  /* ok to acquire for <S90>/S-Function */
  Control_software_v1_1_DW.SFunction_IWORK_g.AcquireOK = 1;

  /* S-Function (fiforeadhdr): '<S25>/FIFO ASCII read 1' */

  /* Level2 S-Function Block: '<S25>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[28];
    sfcnOutputs(rts,3);
  }

  /* MATLAB Function: '<S25>/Embedded MATLAB Function' */
  /* MATLAB Function 'Inputs/RS232_read/Compass_read/Embedded MATLAB Function': '<S29>:1' */
  /*  Message frame: $C357.8P-5.77R1.18T21.8* */
  /*  Output: Ground unit Yaw in rad */
  /* '<S29>:1:7' */
  /* '<S29>:1:8' */
  Control_software_v1_1_B.GU_Yaw = 0.0;

  /* '<S29>:1:10' */
  idx = 0;
  b_idx = 1;
  exitg1 = false;
  while ((!exitg1) && (b_idx < 42)) {
    if (Control_software_v1_1_B.FIFOASCIIread1[b_idx - 1] == 80) {
      idx++;
      ii_data[idx - 1] = (int8_T)b_idx;
      if (idx >= 41) {
        exitg1 = true;
      } else {
        b_idx++;
      }
    } else {
      b_idx++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  if (!(idx == 0)) {
    /* '<S29>:1:12' */
    /* '<S29>:1:13' */
    if (ii_data[0] == 8) {
      /* '<S29>:1:14' */
      /* '<S29>:1:15' */
      Control_software_v1_1_B.GU_Yaw = ((((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[6] - 48.0) * 0.1 + ((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[4] - 48.0)) + ((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[3] - 48.0) * 10.0) + ((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[2] - 48.0) * 100.0;
    } else if (ii_data[0] == 7) {
      /* '<S29>:1:16' */
      /* '<S29>:1:17' */
      Control_software_v1_1_B.GU_Yaw = (((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[5] - 48.0) * 0.1 + ((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[3] - 48.0)) + ((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[2] - 48.0) * 10.0;
    } else if (ii_data[0] == 6) {
      /* '<S29>:1:18' */
      /* '<S29>:1:19' */
      Control_software_v1_1_B.GU_Yaw = ((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[4] - 48.0) * 0.1 + ((real_T)
        Control_software_v1_1_B.FIFOASCIIread1[2] - 48.0);
    } else {
      if (ii_data[0] == 5) {
        /* '<S29>:1:20' */
        /* '<S29>:1:21' */
        Control_software_v1_1_B.GU_Yaw = ((real_T)
          Control_software_v1_1_B.FIFOASCIIread1[4] - 48.0) * 0.1;
      }
    }
  }

  /* '<S29>:1:25' */
  Control_software_v1_1_B.GU_Yaw = Control_software_v1_1_B.GU_Yaw / 180.0 *
    3.1415926535897931;

  /* End of MATLAB Function: '<S25>/Embedded MATLAB Function' */

  /* Constant: '<S24>/Constant' */
  Control_software_v1_1_B.Constant = Control_software_v1_1_P.Constant_Value_b;

  /* Constant: '<S24>/Constant1' */
  Control_software_v1_1_B.Constant1_d =
    Control_software_v1_1_P.Constant1_Value_c;

  /* Constant: '<S24>/Constant2' */
  Control_software_v1_1_B.Constant2_j =
    Control_software_v1_1_P.Constant2_Value_jf;

  /* Constant: '<S24>/Constant3' */
  Control_software_v1_1_B.Constant3_h =
    Control_software_v1_1_P.Constant3_Value_d2;

  /* S-Function (fiforeadhdr): '<S26>/FIFO ASCII read 1' */

  /* Level2 S-Function Block: '<S26>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[29];
    sfcnOutputs(rts,3);
  }

  /* MATLAB Function: '<S26>/Embedded MATLAB Function' */
  /* MATLAB Function 'Inputs/RS232_read/GPS_read/Embedded MATLAB Function': '<S30>:1' */
  /*  Message frame: $GPGGA,time(hhmmss),Latitude(ddmm.mmmm),Hemisphere(N or S), */
  /*  Longitude(dddmm.mmmm),Hemisphere(W or E),GPS quality,Number of satellites, */
  /*  Horizontal dilution of precision,Antenna height(-9999.9 to 99999.9 m), */
  /*  Geoidal height(-999.9 to 9999.9 m),null,null *hh 0d 0a */
  /*  Output: Latitude in deg, Longitude in deg, height in m, Geoidal height in m */
  /*  >0 for North and West */
  /* '<S30>:1:11' */
  /* '<S30>:1:12' */
  /* '<S30>:1:13' */
  for (idx = 0; idx < 91; idx++) {
    in_char_0 = (int8_T)Control_software_v1_1_B.FIFOASCIIread1_k[idx];
    x[idx] = (in_char_0 == ',');
    in_char[idx] = in_char_0;
  }

  idx = 0;
  b_idx = 1;
  exitg1 = false;
  while ((!exitg1) && (b_idx < 92)) {
    if (x[b_idx - 1]) {
      idx++;
      ii_data_0[idx - 1] = (int8_T)b_idx;
      if (idx >= 91) {
        exitg1 = true;
      } else {
        b_idx++;
      }
    } else {
      b_idx++;
    }
  }

  if (in_char[0] == '$') {
    /* '<S30>:1:15' */
    if (ii_data_0[1] + 1 > ii_data_0[2] - 1) {
      b_idx = 1;
      idx = 0;
    } else {
      b_idx = ii_data_0[1] + 1;
      idx = ii_data_0[2] - 1;
    }

    /* '<S30>:1:17' */
    /* '<S30>:1:18' */
    d_ii = b_idx - 1;
    b_x_size_idx_0 = idx - d_ii;
    idx -= d_ii;
    for (b_idx = 0; b_idx < idx; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    idx = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= idx)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= idx) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S30>:1:19' */
    y = ((((((real_T)((Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[1] +
                c_ii_data[0]) - 3] - 48) * 10 +
                      Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[1] +
               c_ii_data[0]) - 2]) - 48.0) + ((real_T)
             Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[1] + c_ii_data[0]]
             - 48.0) * 0.1) + ((real_T)Control_software_v1_1_B.FIFOASCIIread1_k
            [(ii_data_0[1] + c_ii_data[0]) + 1] - 48.0) * 0.01) + ((real_T)
           Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[1] + c_ii_data[0])
           + 2] - 48.0) * 0.001) + ((real_T)
          Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[1] + c_ii_data[0])
          + 3] - 48.0) * 0.0001) / 60.0 + ((real_T)
      ((Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[1] + c_ii_data[0]) -
        5] - 48) * 10 + Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[1] +
      c_ii_data[0]) - 4]) - 48.0);

    /* '<S30>:1:27' */
    if (in_char[ii_data_0[2]] == 'S') {
      /* '<S30>:1:28' */
      /* '<S30>:1:29' */
      y = -y;
    }

    if (ii_data_0[3] + 1 > ii_data_0[4] - 1) {
      idx = 1;
      b_idx = 0;
    } else {
      idx = ii_data_0[3] + 1;
      b_idx = ii_data_0[4] - 1;
    }

    /* '<S30>:1:32' */
    /* '<S30>:1:33' */
    d_ii = idx - 1;
    b_x_size_idx_0 = b_idx - d_ii;
    idx = b_idx - d_ii;
    for (b_idx = 0; b_idx < idx; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    idx = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= idx)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= idx) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S30>:1:34' */
    GU_Lon = ((((((real_T)((Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0
      [3] + c_ii_data[0]) - 3] - 48) * 10 +
      Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[3] + c_ii_data[0]) - 2])
                  - 48.0) + ((real_T)
      Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[3] + c_ii_data[0]] -
      48.0) * 0.1) + ((real_T)Control_software_v1_1_B.FIFOASCIIread1_k
                      [(ii_data_0[3] + c_ii_data[0]) + 1] - 48.0) * 0.01) +
               ((real_T)Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[3] +
      c_ii_data[0]) + 2] - 48.0) * 0.001) + ((real_T)
               Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[3] +
                c_ii_data[0]) + 3] - 48.0) * 0.0001) / 60.0 + ((real_T)
      (((Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[3] + c_ii_data[0])
         - 6] - 48) * 100 + (Control_software_v1_1_B.FIFOASCIIread1_k
      [(ii_data_0[3] + c_ii_data[0]) - 5] - 48) * 10) +
       Control_software_v1_1_B.FIFOASCIIread1_k[(ii_data_0[3] + c_ii_data[0]) -
       4]) - 48.0);

    /* '<S30>:1:43' */
    if (in_char[ii_data_0[4]] == 'W') {
      /* '<S30>:1:44' */
      /* '<S30>:1:45' */
      GU_Lon = -GU_Lon;
    }

    if (ii_data_0[8] + 1 > ii_data_0[9] - 1) {
      idx = 1;
      b_idx = 0;
    } else {
      idx = ii_data_0[8] + 1;
      b_idx = ii_data_0[9] - 1;
    }

    /* '<S30>:1:48' */
    /* '<S30>:1:49' */
    d_ii = idx - 1;
    b_x_size_idx_0 = b_idx - d_ii;
    idx = b_idx - d_ii;
    for (b_idx = 0; b_idx < idx; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    idx = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= idx)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= idx) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S30>:1:50' */
    idx = c_ii_data[0];

    /* '<S30>:1:51' */
    GU_h = 0.0;
    if (Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[8]] == 45) {
      /* '<S30>:1:52' */
      b_idx = ((ii_data_0[8] + c_ii_data[0]) - ii_data_0[8]) - 2;

      /* '<S30>:1:53' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S30>:1:53' */
        b_x_size_idx_0 = (ii_data_0[8] + d_ii) + 2;

        /* '<S30>:1:54' */
        GU_h -= rt_powd_snf(10.0, (real_T)(((ii_data_0[8] + idx) -
          b_x_size_idx_0) - 1)) * ((real_T)
          Control_software_v1_1_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1] - 48.0);
      }

      /* '<S30>:1:57' */
      GU_h -= ((real_T)Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[8] +
               c_ii_data[0]] - 48.0) * 0.1;
    } else {
      b_idx = ((ii_data_0[8] + c_ii_data[0]) - ii_data_0[8]) - 1;

      /* '<S30>:1:59' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S30>:1:59' */
        b_x_size_idx_0 = (ii_data_0[8] + d_ii) + 1;

        /* '<S30>:1:60' */
        GU_h += rt_powd_snf(10.0, (real_T)(((ii_data_0[8] + idx) -
          b_x_size_idx_0) - 1)) * ((real_T)
          Control_software_v1_1_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1] - 48.0);
      }

      /* '<S30>:1:63' */
      GU_h += ((real_T)Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[8] +
               c_ii_data[0]] - 48.0) * 0.1;
    }

    if (ii_data_0[10] + 1 > ii_data_0[11] - 1) {
      idx = 1;
      b_idx = 0;
    } else {
      idx = ii_data_0[10] + 1;
      b_idx = ii_data_0[11] - 1;
    }

    /* '<S30>:1:66' */
    /* '<S30>:1:67' */
    d_ii = idx - 1;
    b_x_size_idx_0 = b_idx - d_ii;
    idx = b_idx - d_ii;
    for (b_idx = 0; b_idx < idx; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    idx = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= idx)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= idx) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S30>:1:68' */
    idx = c_ii_data[0];

    /* '<S30>:1:69' */
    Geo_GU_h = 0.0;
    if (Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[10]] == 45) {
      /* '<S30>:1:70' */
      b_idx = ((ii_data_0[10] + c_ii_data[0]) - ii_data_0[10]) - 2;

      /* '<S30>:1:71' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S30>:1:71' */
        b_x_size_idx_0 = (ii_data_0[10] + d_ii) + 2;

        /* '<S30>:1:72' */
        Geo_GU_h -= rt_powd_snf(10.0, (real_T)(((ii_data_0[10] + idx) -
          b_x_size_idx_0) - 1)) * ((real_T)
          Control_software_v1_1_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1] - 48.0);
      }

      /* '<S30>:1:75' */
      Geo_GU_h -= ((real_T)Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[10]
                   + c_ii_data[0]] - 48.0) * 0.1;
    } else {
      b_idx = ((ii_data_0[10] + c_ii_data[0]) - ii_data_0[10]) - 1;

      /* '<S30>:1:77' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S30>:1:77' */
        b_x_size_idx_0 = (ii_data_0[10] + d_ii) + 1;

        /* '<S30>:1:78' */
        Geo_GU_h += rt_powd_snf(10.0, (real_T)(((ii_data_0[10] + idx) -
          b_x_size_idx_0) - 1)) * ((real_T)
          Control_software_v1_1_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1] - 48.0);
      }

      /* '<S30>:1:81' */
      Geo_GU_h += ((real_T)Control_software_v1_1_B.FIFOASCIIread1_k[ii_data_0[10]
                   + c_ii_data[0]] - 48.0) * 0.1;
    }
  } else {
    /* '<S30>:1:84' */
    y = 0.0;

    /* '<S30>:1:85' */
    GU_Lon = 0.0;

    /* '<S30>:1:86' */
    GU_h = 0.0;

    /* '<S30>:1:87' */
    Geo_GU_h = 0.0;
  }

  Control_software_v1_1_B.GU_Lat = y;
  Control_software_v1_1_B.GU_Lon = GU_Lon;
  Control_software_v1_1_B.GU_h = GU_h;
  Control_software_v1_1_B.Geo_GU_h = Geo_GU_h;

  /* End of MATLAB Function: '<S26>/Embedded MATLAB Function' */

  /* S-Function (fifowrite): '<S28>/FIFO write 1' */

  /* Level2 S-Function Block: '<S28>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[31];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S28>/Enable TX 1' */

  /* Level2 S-Function Block: '<S28>/Enable TX 1' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[32];
    sfcnOutputs(rts,3);
  }

  /* S-Function (fifowrite): '<S28>/FIFO write 2' */

  /* Level2 S-Function Block: '<S28>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[33];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S28>/Enable TX 2' */

  /* Level2 S-Function Block: '<S28>/Enable TX 2' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[34];
    sfcnOutputs(rts,3);
  }

  /* S-Function (fifowrite): '<S28>/FIFO write 3' */

  /* Level2 S-Function Block: '<S28>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[35];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S28>/Enable TX 3' */

  /* Level2 S-Function Block: '<S28>/Enable TX 3' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[36];
    sfcnOutputs(rts,3);
  }

  /* S-Function (fifowrite): '<S28>/FIFO write 4' */

  /* Level2 S-Function Block: '<S28>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[37];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S28>/Enable TX 4' */

  /* Level2 S-Function Block: '<S28>/Enable TX 4' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[38];
    sfcnOutputs(rts,3);
  }
}

/* Model update function for TID3 */
static void Control_software_v1_1_update3(void) /* Sample time: [1.0s, 0.0s] */
{
  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Control_software_v1_1_DW.UnitDelay_DSTATE = Control_software_v1_1_B.Sum;

  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Control_software_v1_1_M->Timing.clockTick3)) {
    ++Control_software_v1_1_M->Timing.clockTickH3;
  }

  Control_software_v1_1_M->Timing.t[3] =
    Control_software_v1_1_M->Timing.clockTick3 *
    Control_software_v1_1_M->Timing.stepSize3 +
    Control_software_v1_1_M->Timing.clockTickH3 *
    Control_software_v1_1_M->Timing.stepSize3 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
static void Control_software_v1_1_output(int_T tid)
{
  switch (tid) {
   case 0 :
    Control_software_v1_1_output0();
    break;

   case 1 :
    Control_software_v1_1_output1();
    break;

   case 2 :
    Control_software_v1_1_output2();
    break;

   case 3 :
    Control_software_v1_1_output3();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
static void Control_software_v1_1_update(int_T tid)
{
  switch (tid) {
   case 0 :
    Control_software_v1_1_update0();
    break;

   case 1 :
    Control_software_v1_1_update1();
    break;

   case 2 :
    Control_software_v1_1_update2();
    break;

   case 3 :
    Control_software_v1_1_update3();
    break;

   default :
    break;
  }
}

/* Model initialize function */
static void Control_software_v1_1_initialize(void)
{
  /* Start for S-Function (scblock): '<S92>/S-Function' */

  /* S-Function Block: <S92>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,3)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Time_Scope_trigger/Switch1"));
        rl32eSetScope(4, 4, 10);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 2);
        xpceFSScopeSet(4, "Var_Time.dat", 1, 512, 0, 536870912);
        rl32eSetScope (4, 10, 0);
        rl32eSetScope(4, 1, 0.5);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        xpceScopeAcqOK(4, &Control_software_v1_1_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* Start for S-Function (scblock): '<S88>/S-Function' */

  /* S-Function Block: <S88>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,3)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eSetScope(1, 4, 1000);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        xpceFSScopeSet(1, "Var_MVLK.dat", 0, 512, 0, 536870912);
        rl32eSetScope (1, 10, 1);
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        xpceScopeAcqOK(1, &Control_software_v1_1_DW.SFunction_IWORK_h.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Start for S-Function (scblock): '<S89>/S-Function' */

  /* S-Function Block: <S89>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,3)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s2"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s3"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s4"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s5"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s6"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s7"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s8"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s9"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s10"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s11"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s12"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s13"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s14"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s15"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s16"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s17"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s18"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s19"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s20"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s21"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s22"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s23"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s24"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s25"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s26"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s27"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s28"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s29"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s30"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s31"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s32"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s33"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s34"));
        rl32eAddSignal(3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s35"));
        rl32eSetScope(3, 4, 1000);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        xpceFSScopeSet(3, "Var_100.dat", 1, 512, 0, 536870912);
        rl32eSetScope (3, 10, 1);
        rl32eSetScope(3, 3, rl32eGetSignalNo(
          "Logging/Log_conditioning/Rate Transition/s1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        xpceScopeAcqOK(3, &Control_software_v1_1_DW.SFunction_IWORK_k.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* Start for S-Function (scblock): '<S90>/S-Function' */

  /* S-Function Block: <S90>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,3)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo(
          "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1"));
        rl32eAddSignal(2, rl32eGetSignalNo(
          "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p2"));
        rl32eAddSignal(2, rl32eGetSignalNo(
          "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p3"));
        rl32eAddSignal(2, rl32eGetSignalNo(
          "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p4"));
        rl32eSetScope(2, 4, 1000);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        xpceFSScopeSet(2, "Var_1.dat", 1, 512, 0, 536870912);
        rl32eSetScope (2, 10, 1);
        rl32eSetScope(2, 3, rl32eGetSignalNo(
          "Inputs/RS232_read/GPS_read/Embedded MATLAB Function/p1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        xpceScopeAcqOK(2, &Control_software_v1_1_DW.SFunction_IWORK_g.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* Start for S-Function (adnipcim): '<S22>/PCI-6221 AD' */
  /* Level2 S-Function Block: '<S22>/PCI-6221 AD' (adnipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dinipcim): '<S23>/PCI-6221 DI' */
  /* Level2 S-Function Block: '<S23>/PCI-6221 DI' (dinipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (pfidinipcim): '<S23>/PCI 6221 PFI DI ' */
  /* Level2 S-Function Block: '<S23>/PCI 6221 PFI DI ' (pfidinipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S13>/S-Function' */

  /* S-Function Block: <S13>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo(
          "Input conditioning and estimators/Subsystem/Saturation1"));
        rl32eSetScope(5, 4, 250);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo(
          "Input conditioning and estimators/Subsystem/Saturation1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 11, -10.0);
        rl32eSetTargetScope(5, 10, 10.0);
        xpceScopeAcqOK(5, &Control_software_v1_1_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Start for S-Function (scblock): '<S14>/S-Function' */

  /* S-Function Block: <S14>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(8)) == 0) {
      if ((i = rl32eDefScope(8,2)) != 0) {
        printf("Error creating scope 8\n");
      } else {
        rl32eAddSignal(8, rl32eGetSignalNo("Inputs/Analog Inputs/PCI-6221 AD/p3"));
        rl32eSetScope(8, 4, 250);
        rl32eSetScope(8, 5, 0);
        rl32eSetScope(8, 6, 1);
        rl32eSetScope(8, 0, 0);
        rl32eSetScope(8, 3, rl32eGetSignalNo(
          "Inputs/Analog Inputs/PCI-6221 AD/p3"));
        rl32eSetScope(8, 1, 0.0);
        rl32eSetScope(8, 2, 0);
        rl32eSetScope(8, 9, 0);
        rl32eSetTargetScope(8, 11, -10.0);
        rl32eSetTargetScope(8, 10, 10.0);
        xpceScopeAcqOK(8, &Control_software_v1_1_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(8);
    }
  }

  /* Start for S-Function (scblock): '<S15>/S-Function' */

  /* S-Function Block: <S15>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo(
          "Input conditioning and estimators/Subsystem/damper/Sum1"));
        rl32eSetScope(6, 4, 250);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo(
          "Input conditioning and estimators/Subsystem/damper/Sum1"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 11, -10.0);
        rl32eSetTargetScope(6, 10, 10.0);
        xpceScopeAcqOK(6, &Control_software_v1_1_DW.SFunction_IWORK_gr.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* Start for S-Function (xpcinterrupt): '<S28>/IRQ Source' incorporates:
   *  Start for SubSystem: '<S28>/RS232 ISR'
   */
  Control_soft_RS232ISR_Start();

  /* End of Start for S-Function (xpcinterrupt): '<S28>/IRQ Source' */

  /* Start for S-Function (fiforeadhdr): '<S25>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S25>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S24>/Constant' */
  Control_software_v1_1_B.Constant = Control_software_v1_1_P.Constant_Value_b;

  /* Start for Constant: '<S24>/Constant1' */
  Control_software_v1_1_B.Constant1_d =
    Control_software_v1_1_P.Constant1_Value_c;

  /* Start for Constant: '<S24>/Constant2' */
  Control_software_v1_1_B.Constant2_j =
    Control_software_v1_1_P.Constant2_Value_jf;

  /* Start for Constant: '<S24>/Constant3' */
  Control_software_v1_1_B.Constant3_h =
    Control_software_v1_1_P.Constant3_Value_d2;

  /* Start for S-Function (fiforeadhdr): '<S26>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S26>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fiforeadhdr): '<S27>/FIFO ASCII read ' */
  /* Level2 S-Function Block: '<S27>/FIFO ASCII read ' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S28>/FIFO write 1' */
  /* Level2 S-Function Block: '<S28>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S28>/Enable TX 1' */
  /* Level2 S-Function Block: '<S28>/Enable TX 1' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S28>/FIFO write 2' */
  /* Level2 S-Function Block: '<S28>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[33];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S28>/Enable TX 2' */
  /* Level2 S-Function Block: '<S28>/Enable TX 2' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[34];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S28>/FIFO write 3' */
  /* Level2 S-Function Block: '<S28>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[35];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S28>/Enable TX 3' */
  /* Level2 S-Function Block: '<S28>/Enable TX 3' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[36];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S28>/FIFO write 4' */
  /* Level2 S-Function Block: '<S28>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[37];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S28>/Enable TX 4' */
  /* Level2 S-Function Block: '<S28>/Enable TX 4' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[38];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S28>/Setup1' */
  /* Level2 S-Function Block: '<S28>/Setup1' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[39];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S28>/Setup2' */
  /* Level2 S-Function Block: '<S28>/Setup2' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[40];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S28>/Setup3' */
  /* Level2 S-Function Block: '<S28>/Setup3' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[41];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S28>/Setup4' */
  /* Level2 S-Function Block: '<S28>/Setup4' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[42];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S6>/Constant1' */
  Control_software_v1_1_B.Constant1 = Control_software_v1_1_P.Constant1_Value_b;

  /* Start for Constant: '<S6>/Constant3' */
  Control_software_v1_1_B.Constant3 = Control_software_v1_1_P.Constant3_Value_n;

  /* Start for S-Function (pfidonipcim): '<S6>/PCI 6221 PFI DO ' */
  /* Level2 S-Function Block: '<S6>/PCI 6221 PFI DO ' (pfidonipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[43];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (danipcim): '<S6>/PCI-6221 DA' */
  /* Level2 S-Function Block: '<S6>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[44];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (donipcim): '<S6>/PCI-6221 DO' */
  /* Level2 S-Function Block: '<S6>/PCI-6221 DO' (donipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[45];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* user code (Start function Trailer) */
  {
    uint8_T irq = 2;
    uint32_T found = 0;
    uint32_T ind;
    uint16_T devid[2];
    devid[0] = (uint16_T)16;
    devid[1] = (uint16_T)368;

    /* Call xpcGetPCIDeviceInfo to fill in the structure */
    for (ind = 0 ; ind < 2 ; ind++ ) {
      if (xpcGetPCIDeviceInfo( (uint16_T)4956, devid[ind], (uint16_T)-1,
                              (uint16_T)-1, 0, -1, &xpcDev_1 ) == 0 ) {
        found = 1;
        break;
      }
    }

    if (found == 0 ) {
      rtmSetErrorStatus(Control_software_v1_1_M,
                        "Interrupting board at [0, -1]: Not present");
      return;
    }

    if (irq == 2 || irq == 16) {
      irq = (uint8_T)xpcDev_1.InterruptLine;
    }

    /* connect ISR system to config space irq */
    if (xpceRegisterISR( irq, xPCISR1,
                        NULL,
                        NULL, 0,
                        &xpcDev_1) == -1) {
      static uint8_T ermsg[100];
      sprintf( ermsg, "ISR reg failed for IRQ %d at [0, -1].", irq );
      rtmSetErrorStatus(Control_software_v1_1_M, ermsg);
      return;
    }
  }

  xpcOutpB( 0xA0, 0x20 );
  xpcOutpB( 0x20, 0x20 );

  {
    int32_T i;
    Control_software_v1_1_M->Timing.rtmDbBufReadBuf4 = 0xFF;
    Control_software_v1_1_M->Timing.rtmDbBufWriteBuf4 = 0xFF;
    Control_software_v1_1_M->Timing.rtmDbBufLastBufWr4 = 0;

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    Control_software_v1_1_DW.UnitDelay_DSTATE =
      Control_software_v1_1_P.UnitDelay_InitialCondition;

    /* InitializeConditions for Delay: '<S9>/Delay' */
    Control_software_v1_1_DW.Delay_DSTATE =
      Control_software_v1_1_P.Delay_InitialCondition;

    /* InitializeConditions for Delay: '<S16>/Delay' */
    Control_software_v1_1_DW.Delay_DSTATE_f =
      Control_software_v1_1_P.Delay_InitialCondition_p;

    /* InitializeConditions for Delay: '<S16>/Delay1' */
    Control_software_v1_1_DW.Delay1_DSTATE =
      Control_software_v1_1_P.Delay1_InitialCondition;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
    Control_software_v1_1_DW.DiscreteTransferFcn_states[0] =
      Control_software_v1_1_P.DiscreteTransferFcn_InitialStat;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states[0] =
      Control_software_v1_1_P.DiscreteTransferFcn1_InitialSta;

    /* InitializeConditions for DiscreteStateSpace: '<S20>/Discrete State-Space' */
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[0] =
      Control_software_v1_1_P.x0_Sl[0];

    /* InitializeConditions for DiscreteTransferFcn: '<S20>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[0] =
      Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_d;

    /* InitializeConditions for DiscreteTransferFcn: '<S10>/Discrete Transfer Fcn2' */
    Control_software_v1_1_DW.DiscreteTransferFcn2_states[0] =
      Control_software_v1_1_P.DiscreteTransferFcn2_InitialSta;

    /* InitializeConditions for DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[0] =
      Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_h;

    /* InitializeConditions for DiscreteStateSpace: '<S21>/Discrete State-Space' */
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[0] =
      Control_software_v1_1_P.x0_Winch[0];

    /* InitializeConditions for DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
    Control_software_v1_1_DW.DiscreteTransferFcn_states_n[0] =
      Control_software_v1_1_P.DiscreteTransferFcn_InitialSt_m;

    /* InitializeConditions for DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[0] =
      Control_software_v1_1_P.DiscreteTransferFcn1_Initial_dv;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
    Control_software_v1_1_DW.DiscreteTransferFcn_states[1] =
      Control_software_v1_1_P.DiscreteTransferFcn_InitialStat;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states[1] =
      Control_software_v1_1_P.DiscreteTransferFcn1_InitialSta;

    /* InitializeConditions for DiscreteStateSpace: '<S20>/Discrete State-Space' */
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE[1] =
      Control_software_v1_1_P.x0_Sl[1];

    /* InitializeConditions for DiscreteTransferFcn: '<S20>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_g[1] =
      Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_d;

    /* InitializeConditions for DiscreteTransferFcn: '<S10>/Discrete Transfer Fcn2' */
    Control_software_v1_1_DW.DiscreteTransferFcn2_states[1] =
      Control_software_v1_1_P.DiscreteTransferFcn2_InitialSta;

    /* InitializeConditions for DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_h[1] =
      Control_software_v1_1_P.DiscreteTransferFcn1_InitialS_h;

    /* InitializeConditions for DiscreteStateSpace: '<S21>/Discrete State-Space' */
    Control_software_v1_1_DW.DiscreteStateSpace_DSTATE_n[1] =
      Control_software_v1_1_P.x0_Winch[1];

    /* InitializeConditions for DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
    Control_software_v1_1_DW.DiscreteTransferFcn_states_n[1] =
      Control_software_v1_1_P.DiscreteTransferFcn_InitialSt_m;

    /* InitializeConditions for DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
    Control_software_v1_1_DW.DiscreteTransferFcn1_states_n[1] =
      Control_software_v1_1_P.DiscreteTransferFcn1_Initial_dv;

    /* InitializeConditions for Delay: '<S11>/Delay' */
    Control_software_v1_1_DW.Delay_DSTATE_b[0] =
      Control_software_v1_1_P.Delay_InitialCondition_m;
    Control_software_v1_1_DW.Delay_DSTATE_b[1] =
      Control_software_v1_1_P.Delay_InitialCondition_m;
    Control_software_v1_1_DW.Delay_DSTATE_b[2] =
      Control_software_v1_1_P.Delay_InitialCondition_m;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay7' */
    Control_software_v1_1_DW.UnitDelay7_DSTATE =
      Control_software_v1_1_P.UnitDelay7_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
    Control_software_v1_1_DW.UnitDelay1_DSTATE =
      Control_software_v1_1_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay2' */
    Control_software_v1_1_DW.UnitDelay2_DSTATE =
      Control_software_v1_1_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay4' */
    Control_software_v1_1_DW.UnitDelay4_DSTATE =
      Control_software_v1_1_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay5' */
    Control_software_v1_1_DW.UnitDelay5_DSTATE =
      Control_software_v1_1_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay6' */
    Control_software_v1_1_DW.UnitDelay6_DSTATE =
      Control_software_v1_1_P.UnitDelay6_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay3' */
    Control_software_v1_1_DW.UnitDelay3_DSTATE =
      Control_software_v1_1_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
    Control_software_v1_1_DW.UnitDelay_DSTATE_k =
      Control_software_v1_1_P.UnitDelay_InitialCondition_n;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay8' */
    Control_software_v1_1_DW.UnitDelay8_DSTATE =
      Control_software_v1_1_P.UnitDelay8_InitialCondition;

    /* SystemInitialize for Enabled SubSystem: '<S27>/Data_validation' */
    /* SystemInitialize for Outport: '<S32>/IMU_data_valid' */
    for (i = 0; i < 38; i++) {
      Control_software_v1_1_B.IMU_data[i] =
        Control_software_v1_1_P.IMU_data_valid_Y0;
    }

    /* End of SystemInitialize for Outport: '<S32>/IMU_data_valid' */
    /* End of SystemInitialize for SubSystem: '<S27>/Data_validation' */
  }
}

/* Model terminate function */
static void Control_software_v1_1_terminate(void)
{
  /* user code (Terminate function Header) */

  /* Stop first, then deregister, else the board could interrupt
   * after deregistering and before the stop.
   */
  /* disable interrupt for IRQ 2 */
  xpceDeRegisterISR( &xpcDev_1 );

  /* Terminate for S-Function (adnipcim): '<S22>/PCI-6221 AD' */
  /* Level2 S-Function Block: '<S22>/PCI-6221 AD' (adnipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dinipcim): '<S23>/PCI-6221 DI' */
  /* Level2 S-Function Block: '<S23>/PCI-6221 DI' (dinipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (pfidinipcim): '<S23>/PCI 6221 PFI DI ' */
  /* Level2 S-Function Block: '<S23>/PCI 6221 PFI DI ' (pfidinipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcinterrupt): '<S28>/IRQ Source' incorporates:
   *  Terminate for SubSystem: '<S28>/RS232 ISR'
   */
  Control_softw_RS232ISR_Term();

  /* End of Terminate for S-Function (xpcinterrupt): '<S28>/IRQ Source' */

  /* Terminate for S-Function (fiforeadhdr): '<S25>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S25>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforeadhdr): '<S26>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S26>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforeadhdr): '<S27>/FIFO ASCII read ' */
  /* Level2 S-Function Block: '<S27>/FIFO ASCII read ' (fiforeadhdr) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S28>/FIFO write 1' */
  /* Level2 S-Function Block: '<S28>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S28>/Enable TX 1' */
  /* Level2 S-Function Block: '<S28>/Enable TX 1' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S28>/FIFO write 2' */
  /* Level2 S-Function Block: '<S28>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S28>/Enable TX 2' */
  /* Level2 S-Function Block: '<S28>/Enable TX 2' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S28>/FIFO write 3' */
  /* Level2 S-Function Block: '<S28>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S28>/Enable TX 3' */
  /* Level2 S-Function Block: '<S28>/Enable TX 3' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S28>/FIFO write 4' */
  /* Level2 S-Function Block: '<S28>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S28>/Enable TX 4' */
  /* Level2 S-Function Block: '<S28>/Enable TX 4' (sertxenable) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[38];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S28>/Setup1' */
  /* Level2 S-Function Block: '<S28>/Setup1' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[39];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S28>/Setup2' */
  /* Level2 S-Function Block: '<S28>/Setup2' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[40];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S28>/Setup3' */
  /* Level2 S-Function Block: '<S28>/Setup3' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[41];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S28>/Setup4' */
  /* Level2 S-Function Block: '<S28>/Setup4' (setupqua) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[42];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (pfidonipcim): '<S6>/PCI 6221 PFI DO ' */
  /* Level2 S-Function Block: '<S6>/PCI 6221 PFI DO ' (pfidonipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[43];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (danipcim): '<S6>/PCI-6221 DA' */
  /* Level2 S-Function Block: '<S6>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[44];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (donipcim): '<S6>/PCI-6221 DO' */
  /* Level2 S-Function Block: '<S6>/PCI-6221 DO' (donipcim) */
  {
    SimStruct *rts = Control_software_v1_1_M->childSfunctions[45];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Control_software_v1_1_output(tid);
}

void MdlUpdate(int_T tid)
{
  Control_software_v1_1_update(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Control_software_v1_1_initialize();
}

void MdlTerminate(void)
{
  Control_software_v1_1_terminate();
}

/* Registration function */
RT_MODEL_Control_software_v1_1_T *Control_software_v1_1(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Control_software_v1_1_M, 0,
                sizeof(RT_MODEL_Control_software_v1_1_T));
  rtsiSetSolverName(&Control_software_v1_1_M->solverInfo,"FixedStepDiscrete");
  Control_software_v1_1_M->solverInfoPtr = (&Control_software_v1_1_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Control_software_v1_1_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    Control_software_v1_1_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Control_software_v1_1_M->Timing.sampleTimes =
      (&Control_software_v1_1_M->Timing.sampleTimesArray[0]);
    Control_software_v1_1_M->Timing.offsetTimes =
      (&Control_software_v1_1_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Control_software_v1_1_M->Timing.sampleTimes[0] = (0.001);
    Control_software_v1_1_M->Timing.sampleTimes[1] = (0.01);
    Control_software_v1_1_M->Timing.sampleTimes[2] = (0.02);
    Control_software_v1_1_M->Timing.sampleTimes[3] = (1.0);

    /* task offsets */
    Control_software_v1_1_M->Timing.offsetTimes[0] = (0.0);
    Control_software_v1_1_M->Timing.offsetTimes[1] = (0.0);
    Control_software_v1_1_M->Timing.offsetTimes[2] = (0.0);
    Control_software_v1_1_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(Control_software_v1_1_M, &Control_software_v1_1_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Control_software_v1_1_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      Control_software_v1_1_M->Timing.perTaskSampleHitsArray;
    Control_software_v1_1_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    Control_software_v1_1_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Control_software_v1_1_M, -1);
  Control_software_v1_1_M->Timing.stepSize0 = 0.001;
  Control_software_v1_1_M->Timing.stepSize1 = 0.01;
  Control_software_v1_1_M->Timing.stepSize2 = 0.02;
  Control_software_v1_1_M->Timing.stepSize3 = 1.0;
  Control_software_v1_1_M->Timing.stepSize4 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Control_software_v1_1_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Control_software_v1_1_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Control_software_v1_1_M->rtwLogInfo, (NULL));
    rtliSetLogT(Control_software_v1_1_M->rtwLogInfo, "");
    rtliSetLogX(Control_software_v1_1_M->rtwLogInfo, "");
    rtliSetLogXFinal(Control_software_v1_1_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Control_software_v1_1_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Control_software_v1_1_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(Control_software_v1_1_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Control_software_v1_1_M->rtwLogInfo, 1);
    rtliSetLogY(Control_software_v1_1_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Control_software_v1_1_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Control_software_v1_1_M->rtwLogInfo, (NULL));
  }

  Control_software_v1_1_M->solverInfoPtr = (&Control_software_v1_1_M->solverInfo);
  Control_software_v1_1_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Control_software_v1_1_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Control_software_v1_1_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  Control_software_v1_1_M->blockIO = ((void *) &Control_software_v1_1_B);
  (void) memset(((void *) &Control_software_v1_1_B), 0,
                sizeof(B_Control_software_v1_1_T));

  {
    Control_software_v1_1_B.RateTransition = serialfifoground;
    Control_software_v1_1_B.RateTransition2 = serialfifoground;
    Control_software_v1_1_B.RateTransition4 = serialfifoground;
    Control_software_v1_1_B.RateTransition6 = serialfifoground;
    Control_software_v1_1_B.RateTransition5 = serialfifoground;
    Control_software_v1_1_B.RateTransition4_p = serialfifoground;
    Control_software_v1_1_B.RateTransition3 = serialfifoground;
    Control_software_v1_1_B.RateTransition4_d = serialfifoground;
    Control_software_v1_1_B.RateTransition1 = serialfifoground;
    Control_software_v1_1_B.RateTransition4_f = serialfifoground;
    Control_software_v1_1_B.FIFOwrite1_o1 = serialfifoground;
    Control_software_v1_1_B.FIFOwrite2_o1 = serialfifoground;
    Control_software_v1_1_B.FIFOwrite3_o1 = serialfifoground;
    Control_software_v1_1_B.FIFOwrite4_o1 = serialfifoground;
    Control_software_v1_1_B.RateTransition7 = serialfifoground;
    Control_software_v1_1_B.FIFOwrite1 = serialfifoground;
    Control_software_v1_1_B.FIFOwrite2 = serialfifoground;
    Control_software_v1_1_B.FIFOwrite3 = serialfifoground;
    Control_software_v1_1_B.FIFOwrite4 = serialfifoground;
  }

  /* parameters */
  Control_software_v1_1_M->defaultParam = ((real_T *)&Control_software_v1_1_P);

  /* states (dwork) */
  Control_software_v1_1_M->dwork = ((void *) &Control_software_v1_1_DW);
  (void) memset((void *)&Control_software_v1_1_DW, 0,
                sizeof(DW_Control_software_v1_1_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Control_software_v1_1_InitializeDataMapInfo(Control_software_v1_1_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Control_software_v1_1_M->NonInlinedSFcns.sfcnInfo;
    Control_software_v1_1_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Control_software_v1_1_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Control_software_v1_1_M->Sizes.numSampTimes);
    Control_software_v1_1_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Control_software_v1_1_M)[0]);
    Control_software_v1_1_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (Control_software_v1_1_M)[1]);
    Control_software_v1_1_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (Control_software_v1_1_M)[2]);
    Control_software_v1_1_M->NonInlinedSFcns.taskTimePtrs[3] = &(rtmGetTPtr
      (Control_software_v1_1_M)[3]);
    Control_software_v1_1_M->NonInlinedSFcns.taskTimePtrs[4] = &(rtmGetTPtr
      (Control_software_v1_1_M)[4]);
    rtssSetTPtrPtr(sfcnInfo,
                   Control_software_v1_1_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Control_software_v1_1_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Control_software_v1_1_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Control_software_v1_1_M));
    rtssSetStepSizePtr(sfcnInfo, &Control_software_v1_1_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Control_software_v1_1_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Control_software_v1_1_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Control_software_v1_1_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &Control_software_v1_1_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Control_software_v1_1_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Control_software_v1_1_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Control_software_v1_1_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Control_software_v1_1_M->solverInfoPtr);
  }

  Control_software_v1_1_M->Sizes.numSFcns = (46);

  /* register each child */
  {
    (void) memset((void *)
                  &Control_software_v1_1_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  46*sizeof(SimStruct));
    Control_software_v1_1_M->childSfunctions =
      (&Control_software_v1_1_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 46; i++) {
        Control_software_v1_1_M->childSfunctions[i] =
          (&Control_software_v1_1_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Read Int Status1 (iqueryqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.ReadIntStatus1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read Int Status1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.ReadIntStatus1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.ReadIntStatus1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.ReadIntStatus1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.ReadIntStatus1_IWORK);
      }

      /* registration */
      iqueryqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason5 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason5");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason5_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO read 1 (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.RateTransition);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FilterIntReason5);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Control_software_v1_1_B.Constant1_p);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.FIFOread1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Control_software_v1_1_B.FIFOread1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Control_software_v1_1_P.FIFOread1_P8_Size);
      }

      /* registration */
      fiforead(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Write HW FIFO1 (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.FIFOread1_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FIFOread1_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO1_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.WriteHWFIFO1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.WriteHWFIFO1_IWORK);
      }

      /* registration */
      serwritequa(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 61);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason6 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason6");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason6_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO read 2 (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.RateTransition2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FilterIntReason6);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Control_software_v1_1_B.Constant2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.FIFOread2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Control_software_v1_1_B.FIFOread2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 2");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Control_software_v1_1_P.FIFOread2_P8_Size);
      }

      /* registration */
      fiforead(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Write HW FIFO2 (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.FIFOread2_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FIFOread2_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO2");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO2_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.WriteHWFIFO2_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.WriteHWFIFO2_IWORK);
      }

      /* registration */
      serwritequa(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 61);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason7 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason7));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason7");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason7_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO read 3 (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.RateTransition4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FilterIntReason7);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Control_software_v1_1_B.Constant3_o);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.FIFOread3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Control_software_v1_1_B.FIFOread3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 3");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Control_software_v1_1_P.FIFOread3_P8_Size);
      }

      /* registration */
      fiforead(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Write HW FIFO3 (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.FIFOread3_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FIFOread3_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO3");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO3_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.WriteHWFIFO3_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.WriteHWFIFO3_IWORK);
      }

      /* registration */
      serwritequa(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 61);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason8 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason8));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason8");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason8_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason8_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason8_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO read 4 (fiforead) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.RateTransition6);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FilterIntReason8);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Control_software_v1_1_B.Constant4);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.FIFOread4_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Control_software_v1_1_B.FIFOread4_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 4");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Control_software_v1_1_P.FIFOread4_P8_Size);
      }

      /* registration */
      fiforead(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Write HW FIFO4 (serwritequa) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.FIFOread4_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.FIFOread4_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO4");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.WriteHWFIFO4_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.WriteHWFIFO4_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.WriteHWFIFO4_IWORK);
      }

      /* registration */
      serwritequa(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 61);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason1 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason1_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Read HW FIFO1 (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FilterIntReason1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.ReadHWFIFO1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO1_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.ReadHWFIFO1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.ReadHWFIFO1_IWORK);
      }

      /* registration */
      serreadqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO write 1 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadHWFIFO1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite1));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite1_IWORK_n[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite1_PWORK_d);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite1_IWORK_n[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite1_PWORK_d);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason2 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason2");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason2_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Read HW FIFO2 (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FilterIntReason2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.ReadHWFIFO2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO2");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO2_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.ReadHWFIFO2_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.ReadHWFIFO2_IWORK);
      }

      /* registration */
      serreadqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO write 2 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadHWFIFO2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 2");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite2_IWORK_i[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite2_PWORK_g);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite2_IWORK_i[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite2_PWORK_g);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason3 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason3");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason3_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Read HW FIFO3 (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FilterIntReason3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.ReadHWFIFO3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO3");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO3_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.ReadHWFIFO3_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.ReadHWFIFO3_IWORK);
      }

      /* registration */
      serreadqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO write 3 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadHWFIFO3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite3));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 3");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite3_IWORK_g[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite3_PWORK_l);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite3_IWORK_g[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite3_PWORK_l);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Filter Int Reason4 (filterqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Control_software_v1_1_B.FilterIntReason4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason4");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FilterIntReason4_P3_Size);
      }

      /* registration */
      filterqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 4);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/Read HW FIFO4 (serreadqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [23]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FilterIntReason4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Control_software_v1_1_B.ReadHWFIFO4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO4");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.ReadHWFIFO4_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.ReadHWFIFO4_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.ReadHWFIFO4_IWORK);
      }

      /* registration */
      serreadqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S86>/FIFO write 4 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [24]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Control_software_v1_1_B.ReadHWFIFO4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite4));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 4");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite4_IWORK_f[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite4_PWORK_o);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite4_IWORK_f[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite4_PWORK_o);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 4;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 65);
      ssSetInputPortDataType(rts, 0, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S22>/PCI-6221 AD (adnipcim) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [25]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 5);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Control_software_v1_1_B.AI_Joy_W));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &Control_software_v1_1_B.AI_Joy_S));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &Control_software_v1_1_B.AI_mot_slide_pos));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &Control_software_v1_1_B.AI_mot_winch_pos));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &Control_software_v1_1_B.AI_pot_pos));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 AD");
      ssSetPath(rts, "Control_software_v1_1/Inputs/Analog Inputs/PCI-6221 AD");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.PCI6221AD_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.PCI6221AD_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.PCI6221AD_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.PCI6221AD_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.PCI6221AD_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.PCI6221AD_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.PCI6221AD_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.PCI6221AD_IWORK[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.PCI6221AD_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 41);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.PCI6221AD_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.PCI6221AD_PWORK);
      }

      /* registration */
      adnipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S23>/PCI-6221 DI (dinipcim) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [26]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn26.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 7);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Control_software_v1_1_B.DI_Enable));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &Control_software_v1_1_B.DI_WinchMode));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &Control_software_v1_1_B.DI_Takeoff));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &Control_software_v1_1_B.DI_Landing));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &Control_software_v1_1_B.DI_Operator));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            &Control_software_v1_1_B.DI_GliderPres));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *)
            &Control_software_v1_1_B.DI_SlideLimitF));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 DI");
      ssSetPath(rts, "Control_software_v1_1/Inputs/Digital Inputs/PCI-6221 DI");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.PCI6221DI_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.PCI6221DI_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.PCI6221DI_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.PCI6221DI_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.PCI6221DI_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.PCI6221DI_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.PCI6221DI_IWORK);
      }

      /* registration */
      dinipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S23>/PCI 6221 PFI DI  (pfidinipcim) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[27]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [27]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn27.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Control_software_v1_1_B.DI_SlideLimitB));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI 6221 PFI DI ");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/Digital Inputs/PCI 6221 PFI DI ");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDI_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDI_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDI_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDI_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDI_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.PCI6221PFIDI_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.PCI6221PFIDI_PWORK);
      }

      /* registration */
      pfidinipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S25>/FIFO ASCII read 1 (fiforeadhdr) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[28]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [28]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Control_software_v1_1_B.RateTransition4_p);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 41);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            Control_software_v1_1_B.FIFOASCIIread1));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO ASCII read 1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/Compass_read/FIFO ASCII read 1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOASCIIread1_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOASCIIread1_PWORK[0]);
      }

      /* registration */
      fiforeadhdr(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S26>/FIFO ASCII read 1 (fiforeadhdr) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[29]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [29]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Control_software_v1_1_B.RateTransition4_d);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 91);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            Control_software_v1_1_B.FIFOASCIIread1_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO ASCII read 1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/GPS_read/FIFO ASCII read 1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P5_Size_o);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P7_Size_c);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread1_P8_Size_l);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &Control_software_v1_1_DW.FIFOASCIIread1_PWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOASCIIread1_PWORK_c[0]);
      }

      /* registration */
      fiforeadhdr(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S27>/FIFO ASCII read  (fiforeadhdr) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[30]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [30]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Control_software_v1_1_B.RateTransition4_f);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1025);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            Control_software_v1_1_B.FIFOASCIIread));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO ASCII read ");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/IMU_read/FIFO ASCII read ");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Control_software_v1_1_P.FIFOASCIIread_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOASCIIread_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn30.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOASCIIread_PWORK[0]);
      }

      /* registration */
      fiforeadhdr(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/FIFO write 1 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[31]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [31]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.Constant);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Control_software_v1_1_B.FIFOwrite1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/FIFO write 1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite1_P5_Size_a);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite1_IWORK[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn31.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite1_PWORK);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Enable TX 1 (sertxenable) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[32]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [32]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[32]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn32.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FIFOwrite1_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 1");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Enable TX 1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.EnableTX1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.EnableTX1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.EnableTX1_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.EnableTX1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn32.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn32.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.EnableTX1_IWORK);
      }

      /* registration */
      sertxenable(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/FIFO write 2 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[33]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [33]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.Constant1_d);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Control_software_v1_1_B.FIFOwrite2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 2");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/FIFO write 2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P4_Size_k);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite2_P5_Size_g);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite2_IWORK[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn33.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite2_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite2_PWORK);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Enable TX 2 (sertxenable) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[34]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [34]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[34]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn34.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FIFOwrite2_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 2");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Enable TX 2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.EnableTX2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.EnableTX2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.EnableTX2_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.EnableTX2_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn34.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn34.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.EnableTX2_IWORK);
      }

      /* registration */
      sertxenable(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/FIFO write 3 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[35]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[35]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [35]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[35]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.Constant2_j);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Control_software_v1_1_B.FIFOwrite3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 3");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/FIFO write 3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite3_P5_Size_i);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite3_IWORK[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn35.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite3_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite3_PWORK);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Enable TX 3 (sertxenable) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[36]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[36]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [36]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FIFOwrite3_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 3");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Enable TX 3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.EnableTX3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.EnableTX3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.EnableTX3_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.EnableTX3_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn36.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn36.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.EnableTX3_IWORK);
      }

      /* registration */
      sertxenable(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/FIFO write 4 (fifowrite) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[37]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[37]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [37]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[37]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.Constant3_h);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Control_software_v1_1_B.FIFOwrite4_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Control_software_v1_1_B.FIFOwrite4_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 4");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/FIFO write 4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P4_Size_j);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.FIFOwrite4_P5_Size_h);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.FIFOwrite4_IWORK[0]);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.FIFOwrite4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn37.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.FIFOwrite4_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.FIFOwrite4_PWORK);
      }

      /* registration */
      fifowrite(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_UINT8);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Enable TX 4 (sertxenable) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[38];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn38.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn38.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn38.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[38]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[38]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[38]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[38]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [38]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[38]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn38.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.FIFOwrite4_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 4");
      ssSetPath(rts,
                "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Enable TX 4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn38.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.EnableTX4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.EnableTX4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.EnableTX4_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.EnableTX4_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn38.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn38.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.EnableTX4_IWORK);
      }

      /* registration */
      sertxenable(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Setup1 (setupqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[39];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn39.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn39.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn39.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[39]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[39]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[39]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[39]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [39]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[39]);
      }

      /* path info */
      ssSetModelName(rts, "Setup1");
      ssSetPath(rts, "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Setup1");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn39.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Control_software_v1_1_P.Setup1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Control_software_v1_1_P.Setup1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Control_software_v1_1_P.Setup1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Control_software_v1_1_P.Setup1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Control_software_v1_1_P.Setup1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Control_software_v1_1_P.Setup1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Control_software_v1_1_P.Setup1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Control_software_v1_1_P.Setup1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Control_software_v1_1_P.Setup1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Control_software_v1_1_P.Setup1_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.Setup1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn39.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn39.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.Setup1_IWORK[0]);
      }

      /* registration */
      setupqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Setup2 (setupqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[40];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn40.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn40.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn40.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[40]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[40]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[40]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[40]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [40]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[40]);
      }

      /* path info */
      ssSetModelName(rts, "Setup2");
      ssSetPath(rts, "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Setup2");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn40.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Control_software_v1_1_P.Setup2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Control_software_v1_1_P.Setup2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Control_software_v1_1_P.Setup2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Control_software_v1_1_P.Setup2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Control_software_v1_1_P.Setup2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Control_software_v1_1_P.Setup2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Control_software_v1_1_P.Setup2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Control_software_v1_1_P.Setup2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Control_software_v1_1_P.Setup2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Control_software_v1_1_P.Setup2_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.Setup2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn40.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn40.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.Setup2_IWORK[0]);
      }

      /* registration */
      setupqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Setup3 (setupqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[41];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn41.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn41.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn41.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[41]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[41]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[41]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[41]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [41]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[41]);
      }

      /* path info */
      ssSetModelName(rts, "Setup3");
      ssSetPath(rts, "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Setup3");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn41.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Control_software_v1_1_P.Setup3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Control_software_v1_1_P.Setup3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Control_software_v1_1_P.Setup3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Control_software_v1_1_P.Setup3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Control_software_v1_1_P.Setup3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Control_software_v1_1_P.Setup3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Control_software_v1_1_P.Setup3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Control_software_v1_1_P.Setup3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Control_software_v1_1_P.Setup3_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Control_software_v1_1_P.Setup3_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.Setup3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn41.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn41.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.Setup3_IWORK[0]);
      }

      /* registration */
      setupqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S28>/Setup4 (setupqua) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[42];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn42.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn42.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn42.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[42]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[42]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[42]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[42]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [42]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[42]);
      }

      /* path info */
      ssSetModelName(rts, "Setup4");
      ssSetPath(rts, "Control_software_v1_1/Inputs/RS232_read/QSC-100 F/Setup4");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn42.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Control_software_v1_1_P.Setup4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Control_software_v1_1_P.Setup4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Control_software_v1_1_P.Setup4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Control_software_v1_1_P.Setup4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Control_software_v1_1_P.Setup4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Control_software_v1_1_P.Setup4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Control_software_v1_1_P.Setup4_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Control_software_v1_1_P.Setup4_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Control_software_v1_1_P.Setup4_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Control_software_v1_1_P.Setup4_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.Setup4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn42.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn42.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.Setup4_IWORK[0]);
      }

      /* registration */
      setupqua(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S6>/PCI 6221 PFI DO  (pfidonipcim) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[43];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn43.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn43.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn43.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[43]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[43]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[43]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[43]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [43]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[43]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn43.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Control_software_v1_1_B.Constant1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Control_software_v1_1_B.Constant3);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Control_software_v1_1_B.DI_Enable);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI 6221 PFI DO ");
      ssSetPath(rts, "Control_software_v1_1/Outputs/PCI 6221 PFI DO ");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn43.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDO_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDO_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDO_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDO_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDO_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDO_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.PCI6221PFIDO_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.PCI6221PFIDO_IWORK);
      ssSetPWork(rts, (void **) &Control_software_v1_1_DW.PCI6221PFIDO_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn43.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn43.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.PCI6221PFIDO_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.PCI6221PFIDO_PWORK);
      }

      /* registration */
      pfidonipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S6>/PCI-6221 DA (danipcim) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[44];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[44]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[44]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[44]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[44]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [44]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[44]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.UPtrs0;
          sfcnUPtrs[0] = &Control_software_v1_1_B.AO_SlideDriver;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.UPtrs1;
          sfcnUPtrs[0] = &Control_software_v1_1_B.AO_WinchDriver;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 DA");
      ssSetPath(rts, "Control_software_v1_1/Outputs/PCI-6221 DA");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.PCI6221DA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.PCI6221DA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.PCI6221DA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.PCI6221DA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.PCI6221DA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.PCI6221DA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.PCI6221DA_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Control_software_v1_1_DW.PCI6221DA_RWORK[0]);
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.PCI6221DA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn44.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.PCI6221DA_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 41);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Control_software_v1_1_DW.PCI6221DA_IWORK[0]);
      }

      /* registration */
      danipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: Control_software_v1_1/<S6>/PCI-6221 DO (donipcim) */
    {
      SimStruct *rts = Control_software_v1_1_M->childSfunctions[45];

      /* timing info */
      time_T *sfcnPeriod =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.sfcnPeriod;
      time_T *sfcnOffset =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.sfcnOffset;
      int_T *sfcnTsMap =
        Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Control_software_v1_1_M->
                         NonInlinedSFcns.blkInfo2[45]);
      }

      ssSetRTWSfcnInfo(rts, Control_software_v1_1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods2[45]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods3[45]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Control_software_v1_1_M->NonInlinedSFcns.methods4[45]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Control_software_v1_1_M->NonInlinedSFcns.statesInfo2
                         [45]);
        ssSetPeriodicStatesInfo(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.periodicStatesInfo[45]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.UPtrs0;
          sfcnUPtrs[0] = &Control_software_v1_1_B.DI_Enable;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 DO");
      ssSetPath(rts, "Control_software_v1_1/Outputs/PCI-6221 DO");
      ssSetRTModel(rts,Control_software_v1_1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Control_software_v1_1_P.PCI6221DO_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Control_software_v1_1_P.PCI6221DO_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Control_software_v1_1_P.PCI6221DO_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Control_software_v1_1_P.PCI6221DO_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Control_software_v1_1_P.PCI6221DO_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Control_software_v1_1_P.PCI6221DO_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Control_software_v1_1_P.PCI6221DO_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Control_software_v1_1_DW.PCI6221DO_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Control_software_v1_1_M->NonInlinedSFcns.Sfcn45.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Control_software_v1_1_DW.PCI6221DO_IWORK);
      }

      /* registration */
      donipcim(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  Control_software_v1_1_M->Sizes.numContStates = (0);/* Number of continuous states */
  Control_software_v1_1_M->Sizes.numY = (0);/* Number of model outputs */
  Control_software_v1_1_M->Sizes.numU = (0);/* Number of model inputs */
  Control_software_v1_1_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Control_software_v1_1_M->Sizes.numSampTimes = (4);/* Number of sample times */
  Control_software_v1_1_M->Sizes.numBlocks = (301);/* Number of blocks */
  Control_software_v1_1_M->Sizes.numBlockIO = (210);/* Number of block outputs */
  Control_software_v1_1_M->Sizes.numBlockPrms = (1197);/* Sum of parameter "widths" */
  return Control_software_v1_1_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/