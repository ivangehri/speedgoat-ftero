/*
 * Analog_Solution.c
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

#include "rt_logging_mmi.h"
#include "Analog_Solution_capi.h"
#include "Analog_Solution.h"
#include "Analog_Solution_private.h"

const real_T Analog_Solution_RGND = 0.0;/* real_T ground */

/* Block signals (auto storage) */
B_Analog_Solution_T Analog_Solution_B;

/* Block states (auto storage) */
DW_Analog_Solution_T Analog_Solution_DW;

/* Real-time model */
RT_MODEL_Analog_Solution_T Analog_Solution_M_;
RT_MODEL_Analog_Solution_T *const Analog_Solution_M = &Analog_Solution_M_;

/* Forward declaration for local functions */
static void Analog_Solution_convert1word(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Analog_Solution_convert1word_e(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Analog_Solution_convert1word_i(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Analog_Solution_convert1word_b(uint8_T in, real_T vec[8]);

/* Forward declaration for local functions */
static void Analog_Solution_convert1word_p(uint8_T in, real_T vec[8]);
static void rate_monotonic_scheduler(void);

/* xPC Target Async Interrupt Block '<S20>/IRQ Source' */
void xPCISR1(void)
{
  {
    /* Reset subsysRan breadcrumbs */
    srClearBC(Analog_Solution_DW.RS232ISR_SubsysRanBC);

    /* RateTransition: '<S20>/Rate Transition' */
    Analog_Solution_B.RateTransition = Analog_Solution_B.FIFOwrite1_o1;

    /* RateTransition: '<S20>/Rate Transition2' */
    Analog_Solution_B.RateTransition2 = Analog_Solution_B.FIFOwrite2_o1;

    /* RateTransition: '<S20>/Rate Transition4' */
    Analog_Solution_B.RateTransition4 = Analog_Solution_B.FIFOwrite3_o1;

    /* RateTransition: '<S20>/Rate Transition6' */
    Analog_Solution_B.RateTransition6 = Analog_Solution_B.FIFOwrite4_o1;

    /* S-Function (xpcinterrupt): '<S20>/IRQ Source' */
    Analog_Solution_RS232ISR();

    /* End of Outputs for S-Function (xpcinterrupt): '<S20>/IRQ Source' */
  }

  xpceDAQUpdateTimeStamp(4, Analog_Solution_M->Timing.t[4]);
  xpceDAQPostEvent(4);
}

time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(Analog_Solution_M, 1);
  rtmSampleHitPtr[2] = rtmStepTask(Analog_Solution_M, 2);
  rtmSampleHitPtr[3] = rtmStepTask(Analog_Solution_M, 3);
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
  Analog_Solution_M->Timing.RateInteraction.TID0_1 =
    (Analog_Solution_M->Timing.TaskCounters.TID[1] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  Analog_Solution_M->Timing.perTaskSampleHits[1] =
    Analog_Solution_M->Timing.RateInteraction.TID0_1;
  Analog_Solution_M->Timing.RateInteraction.TID0_2 =
    (Analog_Solution_M->Timing.TaskCounters.TID[2] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  Analog_Solution_M->Timing.perTaskSampleHits[2] =
    Analog_Solution_M->Timing.RateInteraction.TID0_2;
  Analog_Solution_M->Timing.RateInteraction.TID0_3 =
    (Analog_Solution_M->Timing.TaskCounters.TID[3] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  Analog_Solution_M->Timing.perTaskSampleHits[3] =
    Analog_Solution_M->Timing.RateInteraction.TID0_3;

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Analog_Solution_M->Timing.TaskCounters.TID[1])++;
  if ((Analog_Solution_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.01s, 0.0s] */
    Analog_Solution_M->Timing.TaskCounters.TID[1] = 0;
  }

  (Analog_Solution_M->Timing.TaskCounters.TID[2])++;
  if ((Analog_Solution_M->Timing.TaskCounters.TID[2]) > 19) {/* Sample time: [0.02s, 0.0s] */
    Analog_Solution_M->Timing.TaskCounters.TID[2] = 0;
  }

  (Analog_Solution_M->Timing.TaskCounters.TID[3])++;
  if ((Analog_Solution_M->Timing.TaskCounters.TID[3]) > 999) {/* Sample time: [1.0s, 0.0s] */
    Analog_Solution_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Function for MATLAB Function: '<S27>/Embedded MATLAB Function' */
static void Analog_Solution_convert1word(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S39>:1:20' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S39>:1:21' */
  ind = 7U;
  while (in > 0) {
    /* '<S39>:1:23' */
    /* '<S39>:1:24' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S39>:1:25' */
      /* '<S39>:1:26' */
      vec[7 - ind] = 1.0;

      /* '<S39>:1:27' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S39>:1:29' */
      vec[7 - ind] = 0.0;
    }

    /* '<S39>:1:31' */
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
 *    '<S27>/Embedded MATLAB Function'
 *    '<S29>/Embedded MATLAB Function1'
 *    '<S30>/Embedded MATLAB Function'
 */
void Anal_EmbeddedMATLABFunction(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction_Anal_T *localB)
{
  real_T uint32_out;
  real_T vec1[8];
  real_T vec2[8];
  real_T vec3[8];
  real_T vec4[8];
  real_T temp[32];
  int32_T ind;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function': '<S39>:1' */
  /* '<S39>:1:3' */
  Analog_Solution_convert1word(rtu_in[0], vec1);

  /* '<S39>:1:4' */
  Analog_Solution_convert1word(rtu_in[1], vec2);

  /* '<S39>:1:5' */
  Analog_Solution_convert1word(rtu_in[2], vec3);

  /* '<S39>:1:6' */
  Analog_Solution_convert1word(rtu_in[3], vec4);

  /* '<S39>:1:8' */
  for (ind = 0; ind < 8; ind++) {
    temp[ind] = vec1[ind];
    temp[ind + 8] = vec2[ind];
    temp[ind + 16] = vec3[ind];
    temp[ind + 24] = vec4[ind];
  }

  /* '<S39>:1:10' */
  /* '<S39>:1:14' */
  uint32_out = 0.0;

  /* '<S39>:1:15' */
  for (ind = 0; ind < 32; ind++) {
    /* '<S39>:1:15' */
    /* '<S39>:1:16' */
    uint32_out += rt_powd_snf(2.0, 32.0 - (1.0 + (real_T)ind)) * temp[ind];
  }

  localB->uint32_out = uint32_out;
}

/*
 * Output and update for atomic system:
 *    '<S27>/Embedded MATLAB Function1'
 *    '<S27>/Embedded MATLAB Function2'
 *    '<S29>/Embedded MATLAB Function'
 *    '<S29>/Embedded MATLAB Function2'
 *    '<S29>/Embedded MATLAB Function3'
 *    '<S29>/Embedded MATLAB Function4'
 *    '<S29>/Embedded MATLAB Function5'
 *    '<S29>/Embedded MATLAB Function6'
 */
void Ana_EmbeddedMATLABFunction1(uint8_T rtu_in, B_EmbeddedMATLABFunction1_Ana_T
  *localB)
{
  int8_T vec1[8];
  uint8_T in;
  uint8_T ind;
  uint8_T a;
  int32_T b_ind;
  uint32_T qY;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1': '<S40>:1' */
  /* '<S40>:1:3' */
  in = rtu_in;

  /* '<S40>:1:17' */
  for (b_ind = 0; b_ind < 8; b_ind++) {
    vec1[b_ind] = 0;
  }

  /* '<S40>:1:18' */
  ind = 7U;
  while (in > 0) {
    /* '<S40>:1:20' */
    /* '<S40>:1:21' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S40>:1:22' */
      /* '<S40>:1:23' */
      vec1[7 - ind] = 1;

      /* '<S40>:1:24' */
      b_ind = in;
      qY = (uint32_T)b_ind - a;
      if (qY > (uint32_T)b_ind) {
        qY = 0U;
      }

      b_ind = (int32_T)qY;
      in = (uint8_T)b_ind;
    } else {
      /* '<S40>:1:26' */
      vec1[7 - ind] = 0;
    }

    /* '<S40>:1:28' */
    b_ind = ind;
    qY = b_ind - 1U;
    if (qY > (uint32_T)b_ind) {
      qY = 0U;
    }

    b_ind = (int32_T)qY;
    ind = (uint8_T)b_ind;
  }

  /* '<S40>:1:7' */
  /* '<S40>:1:11' */
  localB->uint8_out = 0.0;

  /* '<S40>:1:12' */
  for (b_ind = 0; b_ind < 8; b_ind++) {
    /* '<S40>:1:12' */
    /* '<S40>:1:13' */
    localB->uint8_out += rt_powd_snf(2.0, 8.0 - (1.0 + (real_T)b_ind)) * (real_T)
      vec1[b_ind];
  }
}

/* Function for MATLAB Function: '<S28>/Embedded MATLAB Function' */
static void Analog_Solution_convert1word_e(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S42>:1:19' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S42>:1:20' */
  ind = 7U;
  while (in > 0) {
    /* '<S42>:1:22' */
    /* '<S42>:1:23' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S42>:1:24' */
      /* '<S42>:1:25' */
      vec[7 - ind] = 1.0;

      /* '<S42>:1:26' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S42>:1:28' */
      vec[7 - ind] = 0.0;
    }

    /* '<S42>:1:30' */
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
 *    '<S28>/Embedded MATLAB Function'
 *    '<S28>/Embedded MATLAB Function1'
 *    '<S28>/Embedded MATLAB Function3'
 *    '<S35>/Embedded MATLAB Function'
 *    '<S35>/Embedded MATLAB Function1'
 *    '<S35>/Embedded MATLAB Function3'
 *    '<S36>/Embedded MATLAB Function'
 *    '<S36>/Embedded MATLAB Function1'
 *    '<S36>/Embedded MATLAB Function3'
 *    '<S36>/Embedded MATLAB Function4'
 *    ...
 */
void An_EmbeddedMATLABFunction_b(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction_An_o_T *localB)
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

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function': '<S42>:1' */
  /* '<S42>:1:3' */
  Analog_Solution_convert1word_e(rtu_in[0], vec1);

  /* '<S42>:1:4' */
  Analog_Solution_convert1word_e(rtu_in[1], vec2);

  /* '<S42>:1:5' */
  Analog_Solution_convert1word_e(rtu_in[2], vec3);

  /* '<S42>:1:6' */
  Analog_Solution_convert1word_e(rtu_in[3], vec4);

  /* '<S42>:1:8' */
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
    /* '<S42>:1:10' */
    y = temp[9];
    for (k = 0; k < 22; k++) {
      y += temp[k + 10];
    }

    if (y == 0.0) {
      /* '<S42>:1:10' */
      /* '<S42>:1:11' */
      /* '<S42>:1:34' */
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
      /* '<S42>:1:12' */
      y = temp[9];
      for (k = 0; k < 22; k++) {
        y += temp[k + 10];
      }

      if (y > 0.0) {
        /* '<S42>:1:12' */
        /* '<S42>:1:13' */
        y = (rtNaN);
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    /* '<S42>:1:15' */
    /* '<S42>:1:34' */
    /* '<S42>:1:37' */
    y = 0.0;

    /* '<S42>:1:38' */
    for (k = 0; k < 8; k++) {
      /* '<S42>:1:38' */
      /* '<S42>:1:39' */
      y += rt_powd_snf(2.0, 8.0 - (1.0 + (real_T)k)) * temp[1 + k];
    }

    /* '<S42>:1:41' */
    y -= 127.0;

    /* '<S42>:1:44' */
    b_vec = 0.0;

    /* '<S42>:1:45' */
    for (k = 0; k < 23; k++) {
      /* '<S42>:1:45' */
      /* '<S42>:1:46' */
      b_vec += temp[9 + k] * rt_powd_snf(2.0, -(1.0 + (real_T)k));
    }

    y = rt_powd_snf(-1.0, temp[0]) * rt_powd_snf(2.0, y) * (1.0 + b_vec);
  }

  localB->sing_out = y;
}

/* Function for MATLAB Function: '<S31>/Embedded MATLAB Function1' */
static void Analog_Solution_convert1word_i(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S53>:1:20' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S53>:1:21' */
  ind = 7U;
  while (in > 0) {
    /* '<S53>:1:23' */
    /* '<S53>:1:24' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S53>:1:25' */
      /* '<S53>:1:26' */
      vec[7 - ind] = 1.0;

      /* '<S53>:1:27' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S53>:1:29' */
      vec[7 - ind] = 0.0;
    }

    /* '<S53>:1:31' */
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
 *    '<S31>/Embedded MATLAB Function1'
 *    '<S31>/Embedded MATLAB Function2'
 *    '<S31>/Embedded MATLAB Function3'
 *    '<S32>/Embedded MATLAB Function1'
 *    '<S32>/Embedded MATLAB Function2'
 *    '<S32>/Embedded MATLAB Function3'
 *    '<S32>/Embedded MATLAB Function4'
 *    '<S33>/Embedded MATLAB Function2'
 */
void A_EmbeddedMATLABFunction1_g(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction1_A_k_T *localB)
{
  real_T vec1[8];
  real_T vec2[8];
  real_T vec3[8];
  real_T vec4[8];
  real_T temp[32];
  real_T vec;
  int32_T ind;

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1': '<S53>:1' */
  /*  in=double(in); */
  /* '<S53>:1:4' */
  Analog_Solution_convert1word_i(rtu_in[0], vec1);

  /* '<S53>:1:5' */
  Analog_Solution_convert1word_i(rtu_in[1], vec2);

  /* '<S53>:1:6' */
  Analog_Solution_convert1word_i(rtu_in[2], vec3);

  /* '<S53>:1:7' */
  Analog_Solution_convert1word_i(rtu_in[3], vec4);

  /* '<S53>:1:9' */
  for (ind = 0; ind < 8; ind++) {
    temp[ind] = vec1[ind];
    temp[ind + 8] = vec2[ind];
    temp[ind + 16] = vec3[ind];
    temp[ind + 24] = vec4[ind];
  }

  /* '<S53>:1:11' */
  /* '<S53>:1:14' */
  vec = 0.0;

  /* '<S53>:1:15' */
  for (ind = 0; ind < 31; ind++) {
    /* '<S53>:1:15' */
    /* '<S53>:1:16' */
    vec += rt_powd_snf(2.0, 31.0 - (1.0 + (real_T)ind)) * temp[1 + ind];
  }

  localB->int32_out = vec - temp[0] * 2.147483648E+9;
}

/* Function for MATLAB Function: '<S34>/Embedded MATLAB Function' */
static void Analog_Solution_convert1word_b(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S61>:1:35' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S61>:1:36' */
  ind = 7U;
  while (in > 0) {
    /* '<S61>:1:38' */
    /* '<S61>:1:39' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S61>:1:40' */
      /* '<S61>:1:41' */
      vec[7 - ind] = 1.0;

      /* '<S61>:1:42' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S61>:1:44' */
      vec[7 - ind] = 0.0;
    }

    /* '<S61>:1:46' */
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
 *    '<S34>/Embedded MATLAB Function'
 *    '<S34>/Embedded MATLAB Function1'
 *    '<S34>/Embedded MATLAB Function2'
 */
void An_EmbeddedMATLABFunction_k(const uint8_T rtu_in[8],
  B_EmbeddedMATLABFunction_An_l_T *localB)
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

  /* MATLAB Function 'Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function': '<S61>:1' */
  /* '<S61>:1:3' */
  Analog_Solution_convert1word_b(rtu_in[0], vec1);

  /* '<S61>:1:4' */
  Analog_Solution_convert1word_b(rtu_in[1], vec2);

  /* '<S61>:1:5' */
  Analog_Solution_convert1word_b(rtu_in[2], vec3);

  /* '<S61>:1:6' */
  Analog_Solution_convert1word_b(rtu_in[3], vec4);

  /* '<S61>:1:7' */
  Analog_Solution_convert1word_b(rtu_in[4], vec5);

  /* '<S61>:1:8' */
  Analog_Solution_convert1word_b(rtu_in[5], vec6);

  /* '<S61>:1:9' */
  Analog_Solution_convert1word_b(rtu_in[6], vec7);

  /* '<S61>:1:10' */
  Analog_Solution_convert1word_b(rtu_in[7], vec8);

  /* '<S61>:1:12' */
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

  /* '<S61>:1:14' */
  /* '<S61>:1:53' */
  exponent = 0.0;

  /* '<S61>:1:54' */
  for (ind = 0; ind < 11; ind++) {
    /* '<S61>:1:54' */
    /* '<S61>:1:55' */
    exponent += rt_powd_snf(2.0, 11.0 - (1.0 + (real_T)ind)) * temp[1 + ind];
  }

  /* '<S61>:1:57' */
  exponent -= 1023.0;

  /* '<S61>:1:15' */
  /* '<S61>:1:60' */
  signif = 0.0;

  /* '<S61>:1:61' */
  for (ind = 0; ind < 52; ind++) {
    /* '<S61>:1:61' */
    /* '<S61>:1:62' */
    signif += temp[12 + ind] * rt_powd_snf(2.0, -(1.0 + (real_T)ind));
  }

  /* '<S61>:1:16' */
  /* '<S61>:1:50' */
  signum = rt_powd_snf(-1.0, temp[0]);
  if (exponent == -1023.0) {
    /* '<S61>:1:18' */
    if (signif == 0.0) {
      /* '<S61>:1:19' */
      /* '<S61>:1:20' */
      exponent = signum * 0.0;
    } else {
      /* '<S61>:1:22' */
      exponent = signum * 2.2250738585072014E-308 * signif;
    }
  } else if (exponent == 1024.0) {
    /* '<S61>:1:24' */
    if (signif != 0.0) {
      /* '<S61>:1:25' */
      /* '<S61>:1:26' */
      exponent = (rtNaN);
    } else {
      /* '<S61>:1:28' */
      exponent = signum * (rtInf);
    }
  } else {
    /* '<S61>:1:31' */
    exponent = signum * rt_powd_snf(2.0, exponent) * (1.0 + signif);
  }

  localB->double_out = exponent;
}

/* Start for function-call system: '<S20>/RS232 ISR' */
void Analog_Solut_RS232ISR_Start(void)
{
  /* Start for Iterator SubSystem: '<S77>/While Iterator Subsystem' */
  /* Start for S-Function (iqueryqua): '<S78>/Read Int Status1' */
  /* Level2 S-Function Block: '<S78>/Read Int Status1' (iqueryqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason5' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason5' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S78>/Constant1' */
  Analog_Solution_B.Constant1_p = Analog_Solution_P.Constant1_Value_be;

  /* Start for S-Function (fiforead): '<S78>/FIFO read 1' */
  /* Level2 S-Function Block: '<S78>/FIFO read 1' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S78>/Write HW FIFO1' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO1' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason6' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason6' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S78>/Constant2' */
  Analog_Solution_B.Constant2 = Analog_Solution_P.Constant2_Value_n;

  /* Start for S-Function (fiforead): '<S78>/FIFO read 2' */
  /* Level2 S-Function Block: '<S78>/FIFO read 2' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S78>/Write HW FIFO2' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO2' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason7' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason7' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S78>/Constant3' */
  Analog_Solution_B.Constant3_o = Analog_Solution_P.Constant3_Value_d;

  /* Start for S-Function (fiforead): '<S78>/FIFO read 3' */
  /* Level2 S-Function Block: '<S78>/FIFO read 3' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S78>/Write HW FIFO3' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO3' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason8' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason8' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S78>/Constant4' */
  Analog_Solution_B.Constant4 = Analog_Solution_P.Constant4_Value_b;

  /* Start for S-Function (fiforead): '<S78>/FIFO read 4' */
  /* Level2 S-Function Block: '<S78>/FIFO read 4' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serwritequa): '<S78>/Write HW FIFO4' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO4' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason1' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason1' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S78>/Read HW FIFO1' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO1' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S78>/FIFO write 1' */
  /* Level2 S-Function Block: '<S78>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason2' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason2' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S78>/Read HW FIFO2' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO2' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S78>/FIFO write 2' */
  /* Level2 S-Function Block: '<S78>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason3' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason3' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S78>/Read HW FIFO3' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO3' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S78>/FIFO write 3' */
  /* Level2 S-Function Block: '<S78>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (filterqua): '<S78>/Filter Int Reason4' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason4' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (serreadqua): '<S78>/Read HW FIFO4' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO4' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S78>/FIFO write 4' */
  /* Level2 S-Function Block: '<S78>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S77>/While Iterator Subsystem' */
}

/* Output and update for function-call system: '<S20>/RS232 ISR' */
void Analog_Solution_RS232ISR(void)
{
  int32_T s78_iter;

  /* Asynchronous task (with no priority assigned)
   * reads absolute time */
  switch (Analog_Solution_M->Timing.rtmDbBufWriteBuf4) {
   case 0:
    Analog_Solution_M->Timing.rtmDbBufReadBuf4 = 1;
    break;

   case 1:
    Analog_Solution_M->Timing.rtmDbBufReadBuf4 = 0;
    break;

   default:
    Analog_Solution_M->Timing.rtmDbBufReadBuf4 =
      Analog_Solution_M->Timing.rtmDbBufLastBufWr4;
    break;
  }

  Analog_Solution_M->Timing.clockTick4 =
    Analog_Solution_M->Timing.rtmDbBufClockTick4
    [Analog_Solution_M->Timing.rtmDbBufReadBuf4];
  Analog_Solution_M->Timing.clockTickH4 =
    Analog_Solution_M->Timing.rtmDbBufClockTickH4
    [Analog_Solution_M->Timing.rtmDbBufReadBuf4];
  Analog_Solution_M->Timing.rtmDbBufReadBuf4 = 0xFF;
  Analog_Solution_M->Timing.t[4] = Analog_Solution_M->Timing.clockTick4 *
    Analog_Solution_M->Timing.stepSize4 + Analog_Solution_M->Timing.clockTickH4 *
    Analog_Solution_M->Timing.stepSize4 * 4294967296.0;

  /* Outputs for Iterator SubSystem: '<S77>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S78>/While Iterator'
   */
  s78_iter = 1;
  do {
    /* Level2 S-Function Block: '<S78>/Read Int Status1' (iqueryqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[0];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Filter Int Reason5' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[1];
      sfcnOutputs(rts,4);
    }

    Analog_Solution_B.Constant1_p = Analog_Solution_P.Constant1_Value_be;

    /* Level2 S-Function Block: '<S78>/FIFO read 1' (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[2];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Write HW FIFO1' (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[3];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Filter Int Reason6' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[4];
      sfcnOutputs(rts,4);
    }

    Analog_Solution_B.Constant2 = Analog_Solution_P.Constant2_Value_n;

    /* Level2 S-Function Block: '<S78>/FIFO read 2' (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[5];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Write HW FIFO2' (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[6];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Filter Int Reason7' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[7];
      sfcnOutputs(rts,4);
    }

    Analog_Solution_B.Constant3_o = Analog_Solution_P.Constant3_Value_d;

    /* Level2 S-Function Block: '<S78>/FIFO read 3' (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[8];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Write HW FIFO3' (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[9];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Filter Int Reason8' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[10];
      sfcnOutputs(rts,4);
    }

    Analog_Solution_B.Constant4 = Analog_Solution_P.Constant4_Value_b;

    /* Level2 S-Function Block: '<S78>/FIFO read 4' (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[11];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Write HW FIFO4' (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[12];
      sfcnOutputs(rts,4);
    }

    Analog_Solution_B.BitwiseLogicalOperator[0] =
      Analog_Solution_B.ReadIntStatus1[0] &
      Analog_Solution_P.BitwiseLogicalOperator_BitMask;
    Analog_Solution_B.BitwiseLogicalOperator[1] =
      Analog_Solution_B.ReadIntStatus1[1] &
      Analog_Solution_P.BitwiseLogicalOperator_BitMask;
    Analog_Solution_B.BitwiseLogicalOperator[2] =
      Analog_Solution_B.ReadIntStatus1[2] &
      Analog_Solution_P.BitwiseLogicalOperator_BitMask;
    Analog_Solution_B.BitwiseLogicalOperator[3] =
      Analog_Solution_B.ReadIntStatus1[3] &
      Analog_Solution_P.BitwiseLogicalOperator_BitMask;

    /* Level2 S-Function Block: '<S78>/Filter Int Reason1' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[13];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Read HW FIFO1' (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[14];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/FIFO write 1' (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[15];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Filter Int Reason2' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[16];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Read HW FIFO2' (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[17];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/FIFO write 2' (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[18];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Filter Int Reason3' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[19];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Read HW FIFO3' (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[20];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/FIFO write 3' (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[21];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Filter Int Reason4' (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[22];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/Read HW FIFO4' (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[23];
      sfcnOutputs(rts,4);
    }

    /* Level2 S-Function Block: '<S78>/FIFO write 4' (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[24];
      sfcnOutputs(rts,4);
    }

    Analog_Solution_B.RelationalOperator_m[0] =
      (Analog_Solution_P.Constant9_Value_o !=
       Analog_Solution_B.BitwiseLogicalOperator[0]);
    Analog_Solution_B.RelationalOperator_m[1] =
      (Analog_Solution_P.Constant9_Value_o !=
       Analog_Solution_B.BitwiseLogicalOperator[1]);
    Analog_Solution_B.RelationalOperator_m[2] =
      (Analog_Solution_P.Constant9_Value_o !=
       Analog_Solution_B.BitwiseLogicalOperator[2]);
    Analog_Solution_B.RelationalOperator_m[3] =
      (Analog_Solution_P.Constant9_Value_o !=
       Analog_Solution_B.BitwiseLogicalOperator[3]);
    Analog_Solution_B.LogicalOperator_c =
      (Analog_Solution_B.RelationalOperator_m[0] ||
       Analog_Solution_B.RelationalOperator_m[1] ||
       Analog_Solution_B.RelationalOperator_m[2] ||
       Analog_Solution_B.RelationalOperator_m[3]);
    s78_iter++;
  } while (Analog_Solution_B.LogicalOperator_c && (s78_iter <= 65));

  /* End of Outputs for SubSystem: '<S77>/While Iterator Subsystem' */
  Analog_Solution_DW.RS232ISR_SubsysRanBC = 4;
}

/* Termination for function-call system: '<S20>/RS232 ISR' */
void Analog_Soluti_RS232ISR_Term(void)
{
  /* Terminate for Iterator SubSystem: '<S77>/While Iterator Subsystem' */

  /* Terminate for S-Function (iqueryqua): '<S78>/Read Int Status1' */
  /* Level2 S-Function Block: '<S78>/Read Int Status1' (iqueryqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason5' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason5' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S78>/FIFO read 1' */
  /* Level2 S-Function Block: '<S78>/FIFO read 1' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S78>/Write HW FIFO1' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO1' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason6' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason6' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S78>/FIFO read 2' */
  /* Level2 S-Function Block: '<S78>/FIFO read 2' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S78>/Write HW FIFO2' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO2' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason7' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason7' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S78>/FIFO read 3' */
  /* Level2 S-Function Block: '<S78>/FIFO read 3' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S78>/Write HW FIFO3' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO3' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason8' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason8' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforead): '<S78>/FIFO read 4' */
  /* Level2 S-Function Block: '<S78>/FIFO read 4' (fiforead) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serwritequa): '<S78>/Write HW FIFO4' */
  /* Level2 S-Function Block: '<S78>/Write HW FIFO4' (serwritequa) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason1' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason1' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S78>/Read HW FIFO1' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO1' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S78>/FIFO write 1' */
  /* Level2 S-Function Block: '<S78>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason2' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason2' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S78>/Read HW FIFO2' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO2' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S78>/FIFO write 2' */
  /* Level2 S-Function Block: '<S78>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason3' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason3' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S78>/Read HW FIFO3' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO3' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S78>/FIFO write 3' */
  /* Level2 S-Function Block: '<S78>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (filterqua): '<S78>/Filter Int Reason4' */
  /* Level2 S-Function Block: '<S78>/Filter Int Reason4' (filterqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (serreadqua): '<S78>/Read HW FIFO4' */
  /* Level2 S-Function Block: '<S78>/Read HW FIFO4' (serreadqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S78>/FIFO write 4' */
  /* Level2 S-Function Block: '<S78>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S77>/While Iterator Subsystem' */
}

/* Function for MATLAB Function: '<S23>/Embedded MATLAB Function' */
static void Analog_Solution_convert1word_p(uint8_T in, real_T vec[8])
{
  uint8_T ind;
  uint8_T a;
  int32_T q0;
  uint32_T qY;

  /* '<S26>:1:48' */
  memset(&vec[0], 0, sizeof(real_T) << 3U);

  /* '<S26>:1:49' */
  ind = 7U;
  while (in > 0) {
    /* '<S26>:1:51' */
    /* '<S26>:1:52' */
    a = (uint8_T)(1 << ind);
    if (in >= a) {
      /* '<S26>:1:53' */
      /* '<S26>:1:54' */
      vec[7 - ind] = 1.0;

      /* '<S26>:1:55' */
      q0 = in;
      qY = (uint32_T)q0 - a;
      if (qY > (uint32_T)q0) {
        qY = 0U;
      }

      q0 = (int32_T)qY;
      in = (uint8_T)q0;
    } else {
      /* '<S26>:1:57' */
      vec[7 - ind] = 0.0;
    }

    /* '<S26>:1:59' */
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
static void Analog_Solution_output0(void) /* Sample time: [0.001s, 0.0s] */
{
  real_T y;
  real_T u0;
  real_T u2;

  {                                    /* Sample time: [0.001s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (scblock): '<S80>/S-Function' */
  /* ok to acquire for <S80>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_h.AcquireOK = 1;

  /* S-Function (adnipcim): '<S14>/PCI-6221 AD' */

  /* Level2 S-Function Block: '<S14>/PCI-6221 AD' (adnipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dinipcim): '<S15>/PCI-6221 DI' */

  /* Level2 S-Function Block: '<S15>/PCI-6221 DI' (dinipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[27];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<S9>/Sum' incorporates:
   *  Constant: '<S9>/Constant'
   */
  Analog_Solution_B.Sum_n = Analog_Solution_P.JoyS_ofst +
    Analog_Solution_B.AI_Joy_S;

  /* Gain: '<S9>/Gain' */
  Analog_Solution_B.Gain = Analog_Solution_P.JoyS_gain * Analog_Solution_B.Sum_n;

  /* DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
  y = Analog_Solution_B.Gain;
  y -= Analog_Solution_P.JoyFiltDen[1] *
    Analog_Solution_DW.DiscreteTransferFcn_states[0];
  y -= Analog_Solution_P.JoyFiltDen[2] *
    Analog_Solution_DW.DiscreteTransferFcn_states[1];
  y /= Analog_Solution_P.JoyFiltDen[0];
  Analog_Solution_DW.DiscreteTransferFcn_tmp = y;
  y = Analog_Solution_P.JoyFiltNum[0] *
    Analog_Solution_DW.DiscreteTransferFcn_tmp;
  y += Analog_Solution_P.JoyFiltNum[1] *
    Analog_Solution_DW.DiscreteTransferFcn_states[0];
  y += Analog_Solution_P.JoyFiltNum[2] *
    Analog_Solution_DW.DiscreteTransferFcn_states[1];
  Analog_Solution_B.DiscreteTransferFcn = y;

  /* Saturate: '<S9>/Saturation' */
  y = -Analog_Solution_P.JoyS_sat;
  u0 = Analog_Solution_B.DiscreteTransferFcn;
  u2 = Analog_Solution_P.JoyS_sat;
  if (u0 > u2) {
    Analog_Solution_B.CI_JoyS = u2;
  } else if (u0 < y) {
    Analog_Solution_B.CI_JoyS = y;
  } else {
    Analog_Solution_B.CI_JoyS = u0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* Sum: '<S9>/Sum1' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  Analog_Solution_B.Sum1 = Analog_Solution_B.AI_Joy_W +
    Analog_Solution_P.JoyW_ofst;

  /* Gain: '<S9>/Gain1' */
  Analog_Solution_B.Gain1 = Analog_Solution_P.JoyW_gain * Analog_Solution_B.Sum1;

  /* DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
  y = Analog_Solution_B.Gain1;
  y -= Analog_Solution_P.JoyFiltDen[1] *
    Analog_Solution_DW.DiscreteTransferFcn1_states[0];
  y -= Analog_Solution_P.JoyFiltDen[2] *
    Analog_Solution_DW.DiscreteTransferFcn1_states[1];
  y /= Analog_Solution_P.JoyFiltDen[0];
  Analog_Solution_DW.DiscreteTransferFcn1_tmp = y;
  y = Analog_Solution_P.JoyFiltNum[0] *
    Analog_Solution_DW.DiscreteTransferFcn1_tmp;
  y += Analog_Solution_P.JoyFiltNum[1] *
    Analog_Solution_DW.DiscreteTransferFcn1_states[0];
  y += Analog_Solution_P.JoyFiltNum[2] *
    Analog_Solution_DW.DiscreteTransferFcn1_states[1];
  Analog_Solution_B.DiscreteTransferFcn1 = y;

  /* Saturate: '<S9>/Saturation1' */
  u0 = Analog_Solution_B.DiscreteTransferFcn1;
  y = Analog_Solution_P.Saturation1_LowerSat;
  u2 = Analog_Solution_P.Saturation1_UpperSat;
  if (u0 > u2) {
    Analog_Solution_B.CI_JoyW = u2;
  } else if (u0 < y) {
    Analog_Solution_B.CI_JoyW = y;
  } else {
    Analog_Solution_B.CI_JoyW = u0;
  }

  /* End of Saturate: '<S9>/Saturation1' */

  /* DiscreteStateSpace: '<S13>/Discrete State-Space' */
  Analog_Solution_B.DiscreteStateSpace[0] = 0.0;
  Analog_Solution_B.DiscreteStateSpace[0] += Analog_Solution_P.Cfilt_Winch[0] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[0];
  Analog_Solution_B.DiscreteStateSpace[0] += Analog_Solution_P.Cfilt_Winch[2] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[1];
  Analog_Solution_B.DiscreteStateSpace[1] = 0.0;
  Analog_Solution_B.DiscreteStateSpace[1] += Analog_Solution_P.Cfilt_Winch[1] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[0];
  Analog_Solution_B.DiscreteStateSpace[1] += Analog_Solution_P.Cfilt_Winch[3] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[1];

  /* DiscreteTransferFcn: '<S13>/Discrete Transfer Fcn' */
  y = Analog_Solution_B.DiscreteStateSpace[1];
  y -= Analog_Solution_P.WinchSpdEstFiltDen[1] *
    Analog_Solution_DW.DiscreteTransferFcn_states_n[0];
  y -= Analog_Solution_P.WinchSpdEstFiltDen[2] *
    Analog_Solution_DW.DiscreteTransferFcn_states_n[1];
  y /= Analog_Solution_P.WinchSpdEstFiltDen[0];
  Analog_Solution_DW.DiscreteTransferFcn_tmp_g = y;
  y = Analog_Solution_P.WinchSpdEstFiltNum[0] *
    Analog_Solution_DW.DiscreteTransferFcn_tmp_g;
  y += Analog_Solution_P.WinchSpdEstFiltNum[1] *
    Analog_Solution_DW.DiscreteTransferFcn_states_n[0];
  y += Analog_Solution_P.WinchSpdEstFiltNum[2] *
    Analog_Solution_DW.DiscreteTransferFcn_states_n[1];
  Analog_Solution_B.WinchMotSpeedEst = y;

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Constant2'
   */
  if (Analog_Solution_B.DI_Enable > Analog_Solution_P.Switch_Threshold_h) {
    /* Gain: '<S10>/Gain' */
    Analog_Solution_B.Gain_k = Analog_Solution_P.Gain_Gain *
      Analog_Solution_B.CI_JoyW;

    /* Saturate: '<S13>/Saturation1' */
    y = -Analog_Solution_P.WinchRefSpdSup;
    u0 = Analog_Solution_B.Gain_k;
    u2 = Analog_Solution_P.WinchRefSpdSup;
    if (u0 > u2) {
      Analog_Solution_B.Saturation1 = u2;
    } else if (u0 < y) {
      Analog_Solution_B.Saturation1 = y;
    } else {
      Analog_Solution_B.Saturation1 = u0;
    }

    /* End of Saturate: '<S13>/Saturation1' */

    /* Sum: '<S13>/Sum2' */
    Analog_Solution_B.Sum2_a = Analog_Solution_B.Saturation1 -
      Analog_Solution_B.DiscreteStateSpace[1];

    /* Gain: '<S13>/Gain1' */
    Analog_Solution_B.Gain1_d = Analog_Solution_P.KspdWinch *
      Analog_Solution_B.Sum2_a;

    /* Saturate: '<S13>/Saturation' */
    y = -Analog_Solution_P.WinchMotTorqueMax;
    u0 = Analog_Solution_B.Gain1_d;
    u2 = Analog_Solution_P.WinchMotTorqueMax;
    if (u0 > u2) {
      Analog_Solution_B.Saturation = u2;
    } else if (u0 < y) {
      Analog_Solution_B.Saturation = y;
    } else {
      Analog_Solution_B.Saturation = u0;
    }

    /* End of Saturate: '<S13>/Saturation' */
    Analog_Solution_B.WinchMotTorqueEst = Analog_Solution_B.Saturation;
  } else {
    Analog_Solution_B.WinchMotTorqueEst = Analog_Solution_P.Constant2_Value;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Sum: '<S12>/Sum' incorporates:
   *  Constant: '<S12>/Constant'
   */
  Analog_Solution_B.Sum_p = Analog_Solution_P.WinchVoltMax +
    Analog_Solution_B.AI_mot_winch_pos;

  /* Gain: '<S12>/Gain' */
  Analog_Solution_B.Gain_m = Analog_Solution_P.WinchMotPosAIgain *
    Analog_Solution_B.Sum_p;

  /* Sum: '<S12>/Sum1' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  y = Analog_Solution_P.WinchTravelMin_m;
  u0 = Analog_Solution_P.WinchDrumRad;
  y /= u0;
  Analog_Solution_B.Sum1_n = y + Analog_Solution_B.Gain_m;

  /* DiscreteTransferFcn: '<S12>/Discrete Transfer Fcn1' */
  y = Analog_Solution_B.Sum1_n;
  y -= Analog_Solution_P.WinchPosFiltDen[1] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_h[0];
  y -= Analog_Solution_P.WinchPosFiltDen[2] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_h[1];
  y /= Analog_Solution_P.WinchPosFiltDen[0];
  Analog_Solution_DW.DiscreteTransferFcn1_tmp_c = y;
  y = Analog_Solution_P.WinchPosFiltNum[0] *
    Analog_Solution_DW.DiscreteTransferFcn1_tmp_c;
  y += Analog_Solution_P.WinchPosFiltNum[1] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_h[0];
  y += Analog_Solution_P.WinchPosFiltNum[2] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_h[1];
  Analog_Solution_B.CI_WinchPos = y;

  /* Gain: '<S11>/Gain' */
  Analog_Solution_B.Gain_f = Analog_Solution_P.Pot_gain *
    Analog_Solution_B.AI_Kraftsensor;

  /* Sum: '<S11>/Sum' incorporates:
   *  Constant: '<S11>/Constant'
   */
  Analog_Solution_B.Sum_b = Analog_Solution_P.Pot_ofst +
    Analog_Solution_B.Gain_f;

  /* DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
  y = Analog_Solution_B.Sum_b;
  y -= Analog_Solution_P.PotPosFiltDen[1] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_n[0];
  y -= Analog_Solution_P.PotPosFiltDen[2] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_n[1];
  y /= Analog_Solution_P.PotPosFiltDen[0];
  Analog_Solution_DW.DiscreteTransferFcn1_tmp_h = y;
  y = Analog_Solution_P.PotPosFiltNum[0] *
    Analog_Solution_DW.DiscreteTransferFcn1_tmp_h;
  y += Analog_Solution_P.PotPosFiltNum[1] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_n[0];
  y += Analog_Solution_P.PotPosFiltNum[2] *
    Analog_Solution_DW.DiscreteTransferFcn1_states_n[1];
  Analog_Solution_B.DiscreteTransferFcn1_c = y;

  /* Saturate: '<S11>/Saturation' */
  u0 = Analog_Solution_B.DiscreteTransferFcn1_c;
  y = Analog_Solution_P.Pot_min;
  u2 = Analog_Solution_P.Pot_max;
  if (u0 > u2) {
    Analog_Solution_B.CI_PotPos = u2;
  } else if (u0 < y) {
    Analog_Solution_B.CI_PotPos = y;
  } else {
    Analog_Solution_B.CI_PotPos = u0;
  }

  /* End of Saturate: '<S11>/Saturation' */

  /* Delay: '<S11>/Delay' */
  Analog_Solution_B.Delay = Analog_Solution_DW.Delay_DSTATE[0];

  /* Sum: '<S11>/Sum1' */
  Analog_Solution_B.Sum1_b = Analog_Solution_B.CI_PotPos -
    Analog_Solution_B.Delay;

  /* Gain: '<S11>/Gain1' */
  u0 = Analog_Solution_P.NPotSpdEst * Analog_Solution_P.Ts_1ms;
  y = 1.0 / u0;
  Analog_Solution_B.CI_PotSpd = y * Analog_Solution_B.Sum1_b;

  /* Delay: '<S6>/Delay1' */
  Analog_Solution_B.Delay1 = Analog_Solution_DW.Delay1_DSTATE;

  /* RelationalOperator: '<S6>/Relational Operator3' incorporates:
   *  Constant: '<S6>/Constant14'
   */
  Analog_Solution_B.RelationalOperator3 = (Analog_Solution_B.Delay1 ==
    Analog_Solution_P.Constant14_Value);

  /* Switch: '<S6>/Switch3' incorporates:
   *  Constant: '<S6>/Constant2'
   *  Switch: '<S6>/Switch2'
   */
  if (Analog_Solution_B.DI_SpoolingGrenze1 >
      Analog_Solution_P.Switch3_Threshold_m) {
    Analog_Solution_B.Switch3 = Analog_Solution_P.Constant2_Value_i;
  } else {
    if (Analog_Solution_B.DI_SpoolingGrenze2 >
        Analog_Solution_P.Switch2_Threshold) {
      /* Switch: '<S6>/Switch2' incorporates:
       *  Constant: '<S6>/Constant'
       */
      Analog_Solution_B.Switch2_p = Analog_Solution_P.Constant_Value;
    } else {
      /* Switch: '<S6>/Switch2' incorporates:
       *  Constant: '<S6>/Constant1'
       */
      Analog_Solution_B.Switch2_p = Analog_Solution_P.Constant1_Value;
    }

    Analog_Solution_B.Switch3 = Analog_Solution_B.Switch2_p;
  }

  /* End of Switch: '<S6>/Switch3' */

  /* RelationalOperator: '<S6>/Relational Operator5' incorporates:
   *  Constant: '<S6>/Constant4'
   */
  Analog_Solution_B.RelationalOperator5 = (Analog_Solution_B.Switch3 ==
    Analog_Solution_P.Constant4_Value_e);

  /* Delay: '<S6>/Delay' */
  Analog_Solution_B.Delay_b = Analog_Solution_DW.Delay_DSTATE_c;

  /* RelationalOperator: '<S6>/Relational Operator7' incorporates:
   *  Constant: '<S6>/Constant6'
   */
  Analog_Solution_B.RelationalOperator7 = (Analog_Solution_P.Constant6_Value_h ==
    Analog_Solution_B.Delay_b);

  /* Logic: '<S6>/Logical Operator' */
  Analog_Solution_B.LogicalOperator = (Analog_Solution_B.RelationalOperator3 &&
    Analog_Solution_B.RelationalOperator5 &&
    Analog_Solution_B.RelationalOperator7);

  /* RelationalOperator: '<S6>/Relational Operator8' incorporates:
   *  Constant: '<S6>/Constant7'
   */
  Analog_Solution_B.RelationalOperator8 = (Analog_Solution_P.Constant7_Value_m ==
    Analog_Solution_B.Delay_b);

  /* Switch: '<S6>/Switch4' incorporates:
   *  Constant: '<S6>/Constant3'
   */
  if (Analog_Solution_B.LogicalOperator) {
    Analog_Solution_B.SpoolingEbene = Analog_Solution_P.Constant3_Value;
  } else {
    /* Logic: '<S6>/Logical Operator3' */
    Analog_Solution_B.LogicalOperator3_o =
      (Analog_Solution_B.RelationalOperator8 &&
       Analog_Solution_B.RelationalOperator5 &&
       Analog_Solution_B.RelationalOperator3);

    /* Switch: '<S6>/Switch8' incorporates:
     *  Constant: '<S6>/Constant13'
     */
    if (Analog_Solution_B.LogicalOperator3_o) {
      Analog_Solution_B.Switch8_c = Analog_Solution_P.Constant13_Value;
    } else {
      Analog_Solution_B.Switch8_c = Analog_Solution_B.Delay_b;
    }

    /* End of Switch: '<S6>/Switch8' */
    Analog_Solution_B.SpoolingEbene = Analog_Solution_B.Switch8_c;
  }

  /* End of Switch: '<S6>/Switch4' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Switch: '<S6>/Switch7'
   */
  if (Analog_Solution_B.DI_Takeoff > Analog_Solution_P.Switch1_Threshold_g) {
    /* RelationalOperator: '<S89>/Relational Operator1' incorporates:
     *  Constant: '<S89>/untere Grenze'
     */
    Analog_Solution_B.RelationalOperator1_j = (Analog_Solution_B.CI_JoyW <
      Analog_Solution_P.untereGrenze_Value);

    /* Switch: '<S89>/Switch1' */
    if (Analog_Solution_B.RelationalOperator1_j) {
      /* Gain: '<S89>/Gain' incorporates:
       *  Constant: '<S89>/Speed'
       */
      Analog_Solution_B.Gain_o = Analog_Solution_P.Gain_Gain_d *
        Analog_Solution_P.Speed_Value;
      Analog_Solution_B.Switch1_j = Analog_Solution_B.Gain_o;
    } else {
      /* RelationalOperator: '<S89>/Relational Operator' incorporates:
       *  Constant: '<S89>/obere Grenze'
       */
      Analog_Solution_B.RelationalOperator_f = (Analog_Solution_B.CI_JoyW >=
        Analog_Solution_P.obereGrenze_Value);

      /* Switch: '<S89>/Switch' incorporates:
       *  Constant: '<S89>/Const'
       *  Constant: '<S89>/Speed'
       */
      if (Analog_Solution_B.RelationalOperator_f) {
        Analog_Solution_B.Switch_e = Analog_Solution_P.Speed_Value;
      } else {
        Analog_Solution_B.Switch_e = Analog_Solution_P.Const_Value_n;
      }

      /* End of Switch: '<S89>/Switch' */
      Analog_Solution_B.Switch1_j = Analog_Solution_B.Switch_e;
    }

    /* End of Switch: '<S89>/Switch1' */
    Analog_Solution_B.SpoolingOut = Analog_Solution_B.Switch1_j;
  } else {
    if (Analog_Solution_B.SpoolingEbene > Analog_Solution_P.Switch7_Threshold) {
      /* Switch: '<S6>/Switch7' incorporates:
       *  Constant: '<S6>/Constant11'
       */
      Analog_Solution_B.Switch7_i = Analog_Solution_P.Constant11_Value;
    } else {
      /* Switch: '<S6>/Switch7' incorporates:
       *  Constant: '<S6>/Constant12'
       */
      Analog_Solution_B.Switch7_i = Analog_Solution_P.Constant12_Value;
    }

    /* Switch: '<S6>/Switch' */
    if (Analog_Solution_B.Switch7_i > Analog_Solution_P.Switch_Threshold) {
      Analog_Solution_B.Switch_kf = Analog_Solution_B.AI_mot_SiemensMotor_Speed;
    } else {
      /* Gain: '<S6>/Gain' */
      Analog_Solution_B.Gain_b = Analog_Solution_P.Gain_Gain_j *
        Analog_Solution_B.AI_mot_SiemensMotor_Speed;
      Analog_Solution_B.Switch_kf = Analog_Solution_B.Gain_b;
    }

    /* End of Switch: '<S6>/Switch' */

    /* Saturate: '<S5>/Saturation1' */
    y = -Analog_Solution_P.AOsat;
    u0 = Analog_Solution_B.Switch_kf;
    u2 = Analog_Solution_P.AOsat;
    if (u0 > u2) {
      Analog_Solution_B.SpoolingOutput = u2;
    } else if (u0 < y) {
      Analog_Solution_B.SpoolingOutput = y;
    } else {
      Analog_Solution_B.SpoolingOutput = u0;
    }

    /* End of Saturate: '<S5>/Saturation1' */
    Analog_Solution_B.SpoolingOut = Analog_Solution_B.SpoolingOutput;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Delay: '<S8>/Delay' */
  Analog_Solution_B.Delay_c = Analog_Solution_DW.Delay_DSTATE_h;

  /* Delay: '<S100>/Delay3' */
  Analog_Solution_B.Delay3 = Analog_Solution_DW.Delay3_DSTATE;

  /* Delay: '<S100>/Delay1' */
  Analog_Solution_B.Delay1_m = Analog_Solution_DW.Delay1_DSTATE_p;

  /* Delay: '<S100>/Delay4' */
  Analog_Solution_B.Delay4 = Analog_Solution_DW.Delay4_DSTATE;

  /* Switch: '<S100>/Switch5' incorporates:
   *  Constant: '<S100>/Constant3'
   */
  if (Analog_Solution_B.DI_Enable > Analog_Solution_P.Switch5_Threshold) {
    /* Switch: '<S100>/Switch2' incorporates:
     *  Constant: '<S100>/Constant2'
     *  Constant: '<S100>/Constant3'
     */
    if (Analog_Solution_B.DI_Operator > Analog_Solution_P.Switch2_Threshold_n) {
      Analog_Solution_B.Switch2_nt = Analog_Solution_P.Constant2_Value_k;
    } else {
      Analog_Solution_B.Switch2_nt = Analog_Solution_P.Constant3_Value_j;
    }

    /* End of Switch: '<S100>/Switch2' */
    Analog_Solution_B.Switch5 = Analog_Solution_B.Switch2_nt;
  } else {
    Analog_Solution_B.Switch5 = Analog_Solution_P.Constant3_Value_j;
  }

  /* End of Switch: '<S100>/Switch5' */

  /* Switch: '<S100>/Switch7' incorporates:
   *  Constant: '<S100>/Constant3'
   *  Switch: '<S100>/Switch6'
   */
  if (Analog_Solution_B.DI_Enable > Analog_Solution_P.Switch7_Threshold_o) {
    Analog_Solution_B.Switch7 = Analog_Solution_P.Constant3_Value_j;
  } else {
    if (Analog_Solution_B.DI_Operator > Analog_Solution_P.Switch6_Threshold) {
      /* Switch: '<S100>/Switch6' incorporates:
       *  Constant: '<S100>/Constant2'
       */
      Analog_Solution_B.Switch6 = Analog_Solution_P.Constant2_Value_k;
    } else {
      /* Switch: '<S100>/Switch6' incorporates:
       *  Constant: '<S100>/Constant3'
       */
      Analog_Solution_B.Switch6 = Analog_Solution_P.Constant3_Value_j;
    }

    Analog_Solution_B.Switch7 = Analog_Solution_B.Switch6;
  }

  /* End of Switch: '<S100>/Switch7' */

  /* Delay: '<S97>/Delay' */
  Analog_Solution_B.Delay_k = Analog_Solution_DW.Delay_DSTATE_p;

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  if (Analog_Solution_B.DI_Takeoff > Analog_Solution_P.Switch2_Threshold_h) {
    Analog_Solution_B.Switch2 = Analog_Solution_P.Constant1_Value_p;
  } else {
    Analog_Solution_B.Switch2 = Analog_Solution_B.CI_JoyW;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* RelationalOperator: '<S102>/Relational Operator1' incorporates:
   *  Constant: '<S102>/untere Grenze'
   */
  Analog_Solution_B.RelationalOperator1 = (Analog_Solution_B.Switch2 <
    Analog_Solution_P.untereGrenze_Value_p);

  /* Switch: '<S102>/Switch1' */
  if (Analog_Solution_B.RelationalOperator1) {
    /* Gain: '<S102>/Gain' incorporates:
     *  Constant: '<S102>/Beschleunigung'
     */
    Analog_Solution_B.Gain_mz = Analog_Solution_P.Gain_Gain_a *
      Analog_Solution_P.Beschleunigung_Value_i;

    /* Sum: '<S102>/Sum1' */
    Analog_Solution_B.Sum1_k = Analog_Solution_B.Gain_mz +
      Analog_Solution_B.Delay_k;
    Analog_Solution_B.Switch1 = Analog_Solution_B.Sum1_k;
  } else {
    /* RelationalOperator: '<S102>/Relational Operator' incorporates:
     *  Constant: '<S102>/obere Grenze'
     */
    Analog_Solution_B.RelationalOperator_a = (Analog_Solution_B.Switch2 >=
      Analog_Solution_P.obereGrenze_Value_p);

    /* Switch: '<S102>/Switch' */
    if (Analog_Solution_B.RelationalOperator_a) {
      /* Sum: '<S102>/Sum' incorporates:
       *  Constant: '<S102>/Beschleunigung'
       */
      Analog_Solution_B.Sum_my = Analog_Solution_P.Beschleunigung_Value_i +
        Analog_Solution_B.Delay_k;
      Analog_Solution_B.Switch_k = Analog_Solution_B.Sum_my;
    } else {
      Analog_Solution_B.Switch_k = Analog_Solution_B.Delay_k;
    }

    /* End of Switch: '<S102>/Switch' */
    Analog_Solution_B.Switch1 = Analog_Solution_B.Switch_k;
  }

  /* End of Switch: '<S102>/Switch1' */

  /* Delay: '<S103>/Delay' */
  Analog_Solution_B.Delay_c3 = Analog_Solution_DW.Delay_DSTATE_p2;

  /* Sum: '<S103>/Sum' */
  Analog_Solution_B.Sum_j = Analog_Solution_B.Switch1 -
    Analog_Solution_B.Delay_c3;

  /* RelationalOperator: '<S105>/Compare' incorporates:
   *  Constant: '<S105>/Constant'
   */
  Analog_Solution_B.Compare = (Analog_Solution_B.Sum_j <
    Analog_Solution_P.Constant_Value_m);

  /* Switch: '<S103>/Switch1' */
  if (Analog_Solution_B.Compare) {
    /* Gain: '<S103>/Gain' incorporates:
     *  Constant: '<S103>/Beschleunigung'
     */
    Analog_Solution_B.Gain_mu = Analog_Solution_P.Gain_Gain_e *
      Analog_Solution_P.Beschleunigung_Value_p;
    Analog_Solution_B.Switch1_i = Analog_Solution_B.Gain_mu;
  } else {
    /* RelationalOperator: '<S104>/Compare' incorporates:
     *  Constant: '<S104>/Constant'
     */
    Analog_Solution_B.Compare_b = (Analog_Solution_B.Sum_j >
      Analog_Solution_P.Constant_Value_h);

    /* Switch: '<S103>/Switch' incorporates:
     *  Constant: '<S103>/Beschleunigung'
     *  Constant: '<S103>/Constant1'
     */
    if (Analog_Solution_B.Compare_b) {
      Analog_Solution_B.Switch_d = Analog_Solution_P.Beschleunigung_Value_p;
    } else {
      Analog_Solution_B.Switch_d = Analog_Solution_P.Constant1_Value_pr;
    }

    /* End of Switch: '<S103>/Switch' */
    Analog_Solution_B.Switch1_i = Analog_Solution_B.Switch_d;
  }

  /* End of Switch: '<S103>/Switch1' */

  /* Delay: '<S103>/Delay1' */
  Analog_Solution_B.Delay1_h = Analog_Solution_DW.Delay1_DSTATE_b;

  /* Sum: '<S103>/Sum1' */
  Analog_Solution_B.Sum1_l = Analog_Solution_B.Switch1_i +
    Analog_Solution_B.Delay1_h;

  /* Sum: '<S8>/Sum2' incorporates:
   *  Constant: '<S8>/konstante Ausrollgeschw.1'
   */
  Analog_Solution_B.Sum2 = Analog_Solution_B.Sum1_l +
    Analog_Solution_P.konstanteAusrollgeschw1_Value;

  /* Delay: '<S100>/Delay2' */
  Analog_Solution_B.Delay2 = Analog_Solution_DW.Delay2_DSTATE;

  /* Switch: '<S100>/Switch4' incorporates:
   *  Constant: '<S100>/Constant3'
   */
  if (Analog_Solution_B.DI_Enable > Analog_Solution_P.Switch4_Threshold) {
    /* Switch: '<S100>/Switch3' incorporates:
     *  Constant: '<S100>/Constant2'
     *  Constant: '<S100>/Constant3'
     */
    if (Analog_Solution_B.DI_Operator > Analog_Solution_P.Switch3_Threshold) {
      Analog_Solution_B.Switch3_b = Analog_Solution_P.Constant3_Value_j;
    } else {
      Analog_Solution_B.Switch3_b = Analog_Solution_P.Constant2_Value_k;
    }

    /* End of Switch: '<S100>/Switch3' */
    Analog_Solution_B.Switch4 = Analog_Solution_B.Switch3_b;
  } else {
    Analog_Solution_B.Switch4 = Analog_Solution_P.Constant3_Value_j;
  }

  /* End of Switch: '<S100>/Switch4' */

  /* Switch: '<S100>/Switch' incorporates:
   *  Constant: '<S100>/Constant3'
   *  Switch: '<S100>/Switch1'
   */
  if (Analog_Solution_B.DI_Enable > Analog_Solution_P.Switch_Threshold_h2) {
    Analog_Solution_B.Switch = Analog_Solution_P.Constant3_Value_j;
  } else {
    if (Analog_Solution_B.DI_Operator > Analog_Solution_P.Switch1_Threshold_e) {
      /* Switch: '<S100>/Switch1' incorporates:
       *  Constant: '<S100>/Constant3'
       */
      Analog_Solution_B.Switch1_p = Analog_Solution_P.Constant3_Value_j;
    } else {
      /* Switch: '<S100>/Switch1' incorporates:
       *  Constant: '<S100>/Constant2'
       */
      Analog_Solution_B.Switch1_p = Analog_Solution_P.Constant2_Value_k;
    }

    Analog_Solution_B.Switch = Analog_Solution_B.Switch1_p;
  }

  /* End of Switch: '<S100>/Switch' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Switch: '<S8>/Switch'
   */
  if (Analog_Solution_B.DI_WinchMode > Analog_Solution_P.Switch1_Threshold_f) {
    /* RelationalOperator: '<S96>/Relational Operator1' incorporates:
     *  Constant: '<S96>/untere Kraftsensor Grenze'
     */
    Analog_Solution_B.RelationalOperator1_b = (Analog_Solution_B.AI_Kraftsensor <
      Analog_Solution_P.untereKraftsensorGrenze_Value);

    /* Switch: '<S96>/Switch1' */
    if (Analog_Solution_B.RelationalOperator1_b) {
      /* Gain: '<S96>/Gain' incorporates:
       *  Constant: '<S96>/Beschleunigung'
       */
      Analog_Solution_B.Gain_jo = Analog_Solution_P.Gain_Gain_p *
        Analog_Solution_P.Beschleunigung_Value_o;

      /* Sum: '<S96>/Sum1' */
      Analog_Solution_B.Sum1_j = Analog_Solution_B.Gain_jo +
        Analog_Solution_B.Delay_c;
      Analog_Solution_B.Switch1_o = Analog_Solution_B.Sum1_j;
    } else {
      /* RelationalOperator: '<S96>/Relational Operator' incorporates:
       *  Constant: '<S96>/obere Kraftsensor Grenze'
       */
      Analog_Solution_B.RelationalOperator_j = (Analog_Solution_B.AI_Kraftsensor
        > Analog_Solution_P.obereKraftsensorGrenze_Value);

      /* Switch: '<S96>/Switch' */
      if (Analog_Solution_B.RelationalOperator_j) {
        /* Sum: '<S96>/Sum' incorporates:
         *  Constant: '<S96>/Beschleunigung'
         */
        Analog_Solution_B.Sum_no = Analog_Solution_P.Beschleunigung_Value_o +
          Analog_Solution_B.Delay_c;
        Analog_Solution_B.Switch_h = Analog_Solution_B.Sum_no;
      } else {
        Analog_Solution_B.Switch_h = Analog_Solution_B.Delay_c;
      }

      /* End of Switch: '<S96>/Switch' */
      Analog_Solution_B.Switch1_o = Analog_Solution_B.Switch_h;
    }

    /* End of Switch: '<S96>/Switch1' */
    Analog_Solution_B.Switch1_i3 = Analog_Solution_B.Switch1_o;
  } else {
    if (Analog_Solution_B.DI_Takeoff > Analog_Solution_P.Switch_Threshold_a) {
      /* Switch: '<S8>/Switch' incorporates:
       *  Constant: '<S8>/Constant2'
       */
      Analog_Solution_B.Switch_dl = Analog_Solution_P.Constant2_Value_h;
    } else {
      /* Logic: '<S100>/Logical Operator2' incorporates:
       *  Switch: '<S8>/Switch'
       */
      Analog_Solution_B.LogicalOperator2 = ((Analog_Solution_B.Delay3 != 0.0) ||
        (Analog_Solution_B.Delay1_m != 0.0) || (Analog_Solution_B.Delay4 != 0.0));

      /* Logic: '<S100>/Logical Operator3' incorporates:
       *  Switch: '<S8>/Switch'
       */
      Analog_Solution_B.LogicalOperator3 = (Analog_Solution_B.LogicalOperator2 &&
        (Analog_Solution_B.Switch5 != 0.0));

      /* Switch: '<S8>/Switch11' incorporates:
       *  Constant: '<S8>/Constant3'
       *  Switch: '<S8>/Switch'
       */
      if (Analog_Solution_B.LogicalOperator3) {
        Analog_Solution_B.Switch11 = Analog_Solution_P.Constant3_Value_a;
      } else {
        /* Logic: '<S100>/Logical Operator4' */
        Analog_Solution_B.LogicalOperator4 = ((Analog_Solution_B.Delay3 != 0.0) ||
          (Analog_Solution_B.Delay4 != 0.0));

        /* Logic: '<S100>/Logical Operator5' */
        Analog_Solution_B.LogicalOperator5 = (Analog_Solution_B.LogicalOperator4
          && (Analog_Solution_B.Switch7 != 0.0));

        /* Switch: '<S8>/Switch10' incorporates:
         *  Constant: '<S8>/konstante Einrollgeschw.'
         */
        if (Analog_Solution_B.LogicalOperator5) {
          Analog_Solution_B.Switch10 =
            Analog_Solution_P.konstanteEinrollgeschw_Value;
        } else {
          /* Logic: '<S100>/Logical Operator' */
          Analog_Solution_B.LogicalOperator_k = ((Analog_Solution_B.Delay2 !=
            0.0) || (Analog_Solution_B.Delay1_m != 0.0) ||
            (Analog_Solution_B.Delay3 != 0.0));

          /* Logic: '<S100>/Logical Operator1' */
          Analog_Solution_B.TractionAdvanced =
            (Analog_Solution_B.LogicalOperator_k && (Analog_Solution_B.Switch4
              != 0.0));

          /* Switch: '<S8>/Switch9' */
          if (Analog_Solution_B.TractionAdvanced) {
            /* Sum: '<S8>/Sum' incorporates:
             *  Constant: '<S8>/konstante Ausrollgeschw.'
             */
            Analog_Solution_B.Sum_k = Analog_Solution_B.Sum2 +
              Analog_Solution_P.konstanteAusrollgeschw_Value;
            Analog_Solution_B.Switch9 = Analog_Solution_B.Sum_k;
          } else {
            /* Logic: '<S100>/Logical Operator6' */
            Analog_Solution_B.LogicalOperator6 = ((Analog_Solution_B.Delay1_m !=
              0.0) || (Analog_Solution_B.Delay2 != 0.0));

            /* Logic: '<S100>/Logical Operator7' */
            Analog_Solution_B.LogicalOperator7 = ((Analog_Solution_B.Switch !=
              0.0) && Analog_Solution_B.LogicalOperator6);

            /* Switch: '<S8>/Switch8' incorporates:
             *  Constant: '<S8>/Constant'
             */
            if (Analog_Solution_B.LogicalOperator7) {
              Analog_Solution_B.Switch8 = Analog_Solution_B.Sum2;
            } else {
              Analog_Solution_B.Switch8 = Analog_Solution_P.Constant_Value_n;
            }

            /* End of Switch: '<S8>/Switch8' */
            Analog_Solution_B.Switch9 = Analog_Solution_B.Switch8;
          }

          /* End of Switch: '<S8>/Switch9' */
          Analog_Solution_B.Switch10 = Analog_Solution_B.Switch9;
        }

        /* End of Switch: '<S8>/Switch10' */
        Analog_Solution_B.Switch11 = Analog_Solution_B.Switch10;
      }

      /* End of Switch: '<S8>/Switch11' */

      /* Switch: '<S8>/Switch' */
      Analog_Solution_B.Switch_dl = Analog_Solution_B.Switch11;
    }

    Analog_Solution_B.Switch1_i3 = Analog_Solution_B.Switch_dl;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Delay: '<S101>/Delay' */
  Analog_Solution_B.Delay_kl = Analog_Solution_DW.Delay_DSTATE_i;

  /* Sum: '<S101>/Sum' */
  Analog_Solution_B.Sum_m = Analog_Solution_B.Switch1_i3 -
    Analog_Solution_B.Delay_kl;

  /* RelationalOperator: '<S107>/Compare' incorporates:
   *  Constant: '<S107>/Constant'
   */
  Analog_Solution_B.Compare_m = (Analog_Solution_B.Sum_m <
    Analog_Solution_P.Constant_Value_i);

  /* Switch: '<S101>/Switch1' */
  if (Analog_Solution_B.Compare_m) {
    /* Gain: '<S101>/Gain' incorporates:
     *  Constant: '<S101>/Beschleunigung'
     */
    Analog_Solution_B.Gain_fi = Analog_Solution_P.Gain_Gain_f *
      Analog_Solution_P.Beschleunigung_Value;
    Analog_Solution_B.Switch1_d = Analog_Solution_B.Gain_fi;
  } else {
    /* RelationalOperator: '<S106>/Compare' incorporates:
     *  Constant: '<S106>/Constant'
     */
    Analog_Solution_B.Compare_k = (Analog_Solution_B.Sum_m >
      Analog_Solution_P.Constant_Value_m0);

    /* Switch: '<S101>/Switch' incorporates:
     *  Constant: '<S101>/Beschleunigung'
     *  Constant: '<S101>/Constant1'
     */
    if (Analog_Solution_B.Compare_k) {
      Analog_Solution_B.Switch_c = Analog_Solution_P.Beschleunigung_Value;
    } else {
      Analog_Solution_B.Switch_c = Analog_Solution_P.Constant1_Value_gd;
    }

    /* End of Switch: '<S101>/Switch' */
    Analog_Solution_B.Switch1_d = Analog_Solution_B.Switch_c;
  }

  /* End of Switch: '<S101>/Switch1' */

  /* Delay: '<S101>/Delay1' */
  Analog_Solution_B.Delay1_j = Analog_Solution_DW.Delay1_DSTATE_n;

  /* Sum: '<S101>/Sum1' */
  Analog_Solution_B.Sum1_e = Analog_Solution_B.Switch1_d +
    Analog_Solution_B.Delay1_j;

  /* RelationalOperator: '<S6>/Relational Operator6' incorporates:
   *  Constant: '<S6>/Constant5'
   */
  Analog_Solution_B.RelationalOperator6 = (Analog_Solution_B.Switch3 ==
    Analog_Solution_P.Constant5_Value_m);

  /* Logic: '<S6>/Logical Operator1' */
  Analog_Solution_B.LogicalOperator1 = (Analog_Solution_B.RelationalOperator7 &&
    Analog_Solution_B.RelationalOperator6);

  /* Switch: '<S6>/Switch5' incorporates:
   *  Constant: '<S6>/Constant8'
   */
  if (Analog_Solution_B.LogicalOperator1) {
    Analog_Solution_B.Spooling_Grenze = Analog_Solution_P.Constant8_Value_e;
  } else {
    /* Logic: '<S6>/Logical Operator2' */
    Analog_Solution_B.LogicalOperator2_g =
      (Analog_Solution_B.RelationalOperator6 &&
       Analog_Solution_B.RelationalOperator8);

    /* Switch: '<S6>/Switch6' incorporates:
     *  Constant: '<S6>/Constant10'
     *  Constant: '<S6>/Constant9'
     */
    if (Analog_Solution_B.LogicalOperator2_g) {
      Analog_Solution_B.Switch6_i = Analog_Solution_P.Constant9_Value;
    } else {
      Analog_Solution_B.Switch6_i = Analog_Solution_P.Constant10_Value;
    }

    /* End of Switch: '<S6>/Switch6' */
    Analog_Solution_B.Spooling_Grenze = Analog_Solution_B.Switch6_i;
  }

  /* End of Switch: '<S6>/Switch5' */

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  if (Analog_Solution_B.DI_Takeoff > Analog_Solution_P.Switch2_Threshold_hu) {
    Analog_Solution_B.SiemensOut = Analog_Solution_P.Constant4_Value;
  } else {
    /* RelationalOperator: '<S88>/Relational Operator4' incorporates:
     *  Constant: '<S88>/Constant5'
     */
    Analog_Solution_B.RelationalOperator4 = (Analog_Solution_B.Spooling_Grenze ==
      Analog_Solution_P.Constant5_Value);

    /* Switch: '<S88>/Switch4' */
    if (Analog_Solution_B.RelationalOperator4) {
      Analog_Solution_B.Switch4_a = Analog_Solution_B.Sum1_e;
    } else {
      /* RelationalOperator: '<S88>/Relational Operator2' incorporates:
       *  Constant: '<S88>/Untere Grenze'
       */
      Analog_Solution_B.RelationalOperator2_d =
        (Analog_Solution_B.Spooling_Grenze ==
         Analog_Solution_P.UntereGrenze_Value);

      /* Switch: '<S88>/Switch2' */
      if (Analog_Solution_B.RelationalOperator2_d) {
        /* RelationalOperator: '<S88>/Relational Operator3' incorporates:
         *  Constant: '<S88>/Constant'
         */
        Analog_Solution_B.RelationalOperator3_m = (Analog_Solution_B.Sum1_e >
          Analog_Solution_P.Constant_Value_c);

        /* Switch: '<S88>/Switch3' incorporates:
         *  Constant: '<S88>/Constant'
         */
        if (Analog_Solution_B.RelationalOperator3_m) {
          Analog_Solution_B.Switch3_a = Analog_Solution_B.Sum1_e;
        } else {
          Analog_Solution_B.Switch3_a = Analog_Solution_P.Constant_Value_c;
        }

        /* End of Switch: '<S88>/Switch3' */
        Analog_Solution_B.Switch2_a = Analog_Solution_B.Switch3_a;
      } else {
        /* RelationalOperator: '<S88>/Relational Operator1' incorporates:
         *  Constant: '<S88>/Obere Grenze'
         */
        Analog_Solution_B.RelationalOperator1_d =
          (Analog_Solution_B.Spooling_Grenze ==
           Analog_Solution_P.ObereGrenze_Value);

        /* Switch: '<S88>/Switch' */
        if (Analog_Solution_B.RelationalOperator1_d) {
          /* RelationalOperator: '<S88>/Relational Operator' incorporates:
           *  Constant: '<S88>/Constant'
           */
          Analog_Solution_B.RelationalOperator_ih = (Analog_Solution_B.Sum1_e <
            Analog_Solution_P.Constant_Value_c);

          /* Switch: '<S88>/Switch1' incorporates:
           *  Constant: '<S88>/Constant'
           */
          if (Analog_Solution_B.RelationalOperator_ih) {
            Analog_Solution_B.Switch1_pc = Analog_Solution_B.Sum1_e;
          } else {
            Analog_Solution_B.Switch1_pc = Analog_Solution_P.Constant_Value_c;
          }

          /* End of Switch: '<S88>/Switch1' */
          Analog_Solution_B.Siemens_Motor = Analog_Solution_B.Switch1_pc;
        } else {
          Analog_Solution_B.Siemens_Motor = Analog_Solution_B.Sum1_e;
        }

        /* End of Switch: '<S88>/Switch' */
        Analog_Solution_B.Switch2_a = Analog_Solution_B.Siemens_Motor;
      }

      /* End of Switch: '<S88>/Switch2' */
      Analog_Solution_B.Switch4_a = Analog_Solution_B.Switch2_a;
    }

    /* End of Switch: '<S88>/Switch4' */

    /* Saturate: '<S5>/Saturation2' */
    y = -Analog_Solution_P.AOsat;
    u0 = Analog_Solution_B.Switch4_a;
    u2 = Analog_Solution_P.AOsat;
    if (u0 > u2) {
      Analog_Solution_B.Siemens_Output = u2;
    } else if (u0 < y) {
      Analog_Solution_B.Siemens_Output = y;
    } else {
      Analog_Solution_B.Siemens_Output = u0;
    }

    /* End of Saturate: '<S5>/Saturation2' */
    Analog_Solution_B.SiemensOut = Analog_Solution_B.Siemens_Output;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* RateTransition: '<S79>/Rate Transition' */
  if (Analog_Solution_M->Timing.RateInteraction.TID0_1) {
    Analog_Solution_B.RateTransition_i[0] = Analog_Solution_B.AI_Joy_W;
    Analog_Solution_B.RateTransition_i[1] = Analog_Solution_B.AI_Joy_S;
    Analog_Solution_B.RateTransition_i[2] =
      Analog_Solution_B.AI_mot_SiemensMotor_Speed;
    Analog_Solution_B.RateTransition_i[3] = Analog_Solution_B.AI_mot_winch_pos;
    Analog_Solution_B.RateTransition_i[4] = Analog_Solution_B.AI_Kraftsensor;
    Analog_Solution_B.RateTransition_i[5] = Analog_Solution_B.DI_Enable;
    Analog_Solution_B.RateTransition_i[6] = Analog_Solution_B.DI_WinchMode;
    Analog_Solution_B.RateTransition_i[7] = Analog_Solution_B.DI_Takeoff;
    Analog_Solution_B.RateTransition_i[8] = Analog_Solution_B.DI_Landing;
    Analog_Solution_B.RateTransition_i[9] = Analog_Solution_B.DI_Operator;
    Analog_Solution_B.RateTransition_i[10] =
      Analog_Solution_B.DI_SpoolingGrenze1;
    Analog_Solution_B.RateTransition_i[11] =
      Analog_Solution_B.DI_SpoolingGrenze2;
    Analog_Solution_B.RateTransition_i[12] = Analog_Solution_B.CI_JoyS;
    Analog_Solution_B.RateTransition_i[13] = Analog_Solution_B.CI_JoyW;
    Analog_Solution_B.RateTransition_i[14] =
      Analog_Solution_B.DiscreteStateSpace[0];
    Analog_Solution_B.RateTransition_i[15] = Analog_Solution_B.WinchMotSpeedEst;
    Analog_Solution_B.RateTransition_i[16] = Analog_Solution_B.WinchMotTorqueEst;
    Analog_Solution_B.RateTransition_i[17] = Analog_Solution_B.CI_WinchPos;
    Analog_Solution_B.RateTransition_i[18] = Analog_Solution_B.CI_PotPos;
    Analog_Solution_B.RateTransition_i[19] = Analog_Solution_B.CI_PotSpd;
    Analog_Solution_B.RateTransition_i[20] = Analog_Solution_B.SpoolingOut;
    Analog_Solution_B.RateTransition_i[21] = Analog_Solution_B.SiemensOut;
  }

  /* End of RateTransition: '<S79>/Rate Transition' */

  /* Sum: '<S13>/Sum' incorporates:
   *  Constant: '<S13>/Constant'
   */
  Analog_Solution_B.Sum_c = Analog_Solution_P.WinchVoltMax +
    Analog_Solution_B.AI_mot_winch_pos;

  /* Gain: '<S13>/Gain' */
  Analog_Solution_B.Gain_g = Analog_Solution_P.WinchMotPosAIgain *
    Analog_Solution_B.Sum_c;

  /* Sum: '<S13>/Sum1' incorporates:
   *  Constant: '<S13>/Constant1'
   */
  y = Analog_Solution_P.WinchTravelMin_m;
  u0 = Analog_Solution_P.WinchDrumRad;
  y /= u0;
  Analog_Solution_B.Sum1_nr = y + Analog_Solution_B.Gain_g;

  /* SignalConversion: '<S13>/TmpSignal ConversionAtDiscrete State-SpaceInport1' */
  Analog_Solution_B.TmpSignalConversionAtDiscreteSt[0] =
    Analog_Solution_B.Sum1_nr;
  Analog_Solution_B.TmpSignalConversionAtDiscreteSt[1] =
    Analog_Solution_B.WinchMotTorqueEst;

  /* S-Function (pfidinipcim): '<S15>/PCI 6221 PFI DI ' */

  /* Level2 S-Function Block: '<S15>/PCI 6221 PFI DI ' (pfidinipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[28];
    sfcnOutputs(rts,0);
  }

  /* RateTransition: '<S20>/Rate Transition5' */
  Analog_Solution_B.RateTransition5 = Analog_Solution_B.FIFOwrite3;

  /* RateTransition: '<S20>/Rate Transition3' */
  Analog_Solution_B.RateTransition3 = Analog_Solution_B.FIFOwrite2;

  /* RateTransition: '<S17>/Rate Transition4' incorporates:
   *  RateTransition: '<S18>/Rate Transition4'
   */
  if (Analog_Solution_M->Timing.RateInteraction.TID0_3) {
    Analog_Solution_B.RateTransition4_p = Analog_Solution_B.RateTransition5;
    Analog_Solution_B.RateTransition4_d = Analog_Solution_B.RateTransition3;
  }

  /* End of RateTransition: '<S17>/Rate Transition4' */

  /* RateTransition: '<S20>/Rate Transition1' */
  Analog_Solution_B.RateTransition1 = Analog_Solution_B.FIFOwrite1;

  /* RateTransition: '<S19>/Rate Transition4' */
  if (Analog_Solution_M->Timing.RateInteraction.TID0_2) {
    Analog_Solution_B.RateTransition4_f = Analog_Solution_B.RateTransition1;
  }

  /* End of RateTransition: '<S19>/Rate Transition4' */

  /* RateTransition: '<S20>/Rate Transition7' */
  Analog_Solution_B.RateTransition7 = Analog_Solution_B.FIFOwrite4;

  /* S-Function (setupqua): '<S20>/Setup1' */

  /* Level2 S-Function Block: '<S20>/Setup1' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[40];
    sfcnOutputs(rts,0);
  }

  /* S-Function (setupqua): '<S20>/Setup2' */

  /* Level2 S-Function Block: '<S20>/Setup2' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[41];
    sfcnOutputs(rts,0);
  }

  /* S-Function (setupqua): '<S20>/Setup3' */

  /* Level2 S-Function Block: '<S20>/Setup3' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[42];
    sfcnOutputs(rts,0);
  }

  /* S-Function (setupqua): '<S20>/Setup4' */

  /* Level2 S-Function Block: '<S20>/Setup4' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[43];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<S5>/Constant1' */
  Analog_Solution_B.Constant1 = Analog_Solution_P.Constant1_Value_b;

  /* Constant: '<S5>/Constant3' */
  Analog_Solution_B.Constant3 = Analog_Solution_P.Constant3_Value_n;

  /* S-Function (pfidonipcim): '<S5>/PCI 6221 PFI DO ' */

  /* Level2 S-Function Block: '<S5>/PCI 6221 PFI DO ' (pfidonipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[44];
    sfcnOutputs(rts,0);
  }

  /* S-Function (danipcim): '<S5>/PCI-6221 DA' */

  /* Level2 S-Function Block: '<S5>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[45];
    sfcnOutputs(rts,0);
  }

  /* S-Function (scblock): '<S86>/S-Function' */
  /* ok to acquire for <S86>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_n.AcquireOK = 1;

  /* S-Function (scblock): '<S87>/S-Function' */
  /* ok to acquire for <S87>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_f.AcquireOK = 1;

  /* RelationalOperator: '<S95>/Relational Operator1' incorporates:
   *  Constant: '<S95>/Constant1'
   */
  Analog_Solution_B.RelationalOperator1_l = (Analog_Solution_B.AI_mot_winch_pos >=
    Analog_Solution_P.Constant1_Value_n);

  /* Switch: '<S94>/Switch1' incorporates:
   *  Constant: '<S94>/Constant1'
   *  Constant: '<S94>/Constant2'
   */
  if (Analog_Solution_B.DI_SpoolingGrenze1 >
      Analog_Solution_P.Switch1_Threshold_n) {
    Analog_Solution_B.Switch1_c = Analog_Solution_P.Constant1_Value_e;
  } else {
    Analog_Solution_B.Switch1_c = Analog_Solution_P.Constant2_Value_l;
  }

  /* End of Switch: '<S94>/Switch1' */

  /* Delay: '<S94>/Delay' */
  Analog_Solution_B.Delay_j = Analog_Solution_DW.Delay_DSTATE_a;

  /* Sum: '<S94>/Sum' */
  Analog_Solution_B.Sum_cc = Analog_Solution_B.Switch1_c +
    Analog_Solution_B.Delay_j;

  /* RelationalOperator: '<S94>/Relational Operator' incorporates:
   *  Constant: '<S94>/Constant1'
   */
  Analog_Solution_B.RelationalOperator = (Analog_Solution_P.Constant1_Value_e <=
    Analog_Solution_B.Sum_cc);

  /* Switch: '<S94>/Switch2' incorporates:
   *  Constant: '<S94>/Constant1'
   *  Constant: '<S94>/Constant2'
   */
  if (Analog_Solution_B.RelationalOperator) {
    Analog_Solution_B.Switch2_n = Analog_Solution_P.Constant1_Value_e;
  } else {
    Analog_Solution_B.Switch2_n = Analog_Solution_P.Constant2_Value_l;
  }

  /* End of Switch: '<S94>/Switch2' */

  /* Logic: '<S95>/Logical Operator' */
  Analog_Solution_B.LogicalOperator_i = (Analog_Solution_B.RelationalOperator1_l
    && (Analog_Solution_B.Switch2_n != 0.0));

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant2'
   */
  if (Analog_Solution_B.LogicalOperator_i) {
    /* RelationalOperator: '<S5>/Relational Operator5' incorporates:
     *  Constant: '<S5>/Constant6'
     */
    Analog_Solution_B.RelationalOperator5_d = (Analog_Solution_B.SiemensOut <=
      Analog_Solution_P.Constant6_Value);

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S5>/Constant7'
     *  Constant: '<S5>/Constant8'
     */
    if (Analog_Solution_B.RelationalOperator5_d) {
      Analog_Solution_B.Switch5_g = Analog_Solution_P.Constant7_Value;
    } else {
      Analog_Solution_B.Switch5_g = Analog_Solution_P.Constant8_Value;
    }

    /* End of Switch: '<S5>/Switch5' */
    Analog_Solution_B.Switch_o = Analog_Solution_B.Switch5_g;
  } else {
    Analog_Solution_B.Switch_o = Analog_Solution_P.Constant2_Value_f;
  }

  /* End of Switch: '<S5>/Switch' */

  /* S-Function (donipcim): '<S5>/PCI-6221 DO' */

  /* Level2 S-Function Block: '<S5>/PCI-6221 DO' (donipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[46];
    sfcnOutputs(rts,0);
  }

  /* S-Function (scblock): '<S90>/S-Function' */
  /* ok to acquire for <S90>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_gb.AcquireOK = 1;

  /* S-Function (scblock): '<S91>/S-Function' */
  /* ok to acquire for <S91>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_i.AcquireOK = 1;

  /* Delay: '<S92>/Delay' */
  Analog_Solution_B.Delay_e = Analog_Solution_DW.Delay_DSTATE_j;

  /* Delay: '<S95>/Delay' */
  Analog_Solution_B.Delay_o = Analog_Solution_DW.Delay_DSTATE_ag;

  /* Abs: '<S95>/Abs' */
  Analog_Solution_B.Abs = fabs(Analog_Solution_B.Delay_o);

  /* RelationalOperator: '<S95>/Relational Operator' incorporates:
   *  Constant: '<S95>/Constant'
   */
  Analog_Solution_B.RelationalOperator_i = (Analog_Solution_B.Abs >
    Analog_Solution_P.Constant_Value_md);

  /* Switch: '<S95>/Switch2' incorporates:
   *  Constant: '<S95>/Constant'
   *  Switch: '<S95>/Switch1'
   */
  if (Analog_Solution_B.RelationalOperator_i) {
    Analog_Solution_B.Switch2_o = Analog_Solution_P.Constant_Value_md;
  } else {
    if (Analog_Solution_B.Switch2_n > Analog_Solution_P.Switch1_Threshold) {
      /* Switch: '<S95>/Switch1' */
      Analog_Solution_B.Switch1_f = Analog_Solution_B.AI_mot_winch_pos;
    } else {
      /* Switch: '<S95>/Switch1' incorporates:
       *  Constant: '<S95>/Constant'
       */
      Analog_Solution_B.Switch1_f = Analog_Solution_P.Constant_Value_md;
    }

    Analog_Solution_B.Switch2_o = Analog_Solution_B.Switch1_f;
  }

  /* End of Switch: '<S95>/Switch2' */

  /* Sum: '<S95>/Sum' */
  Analog_Solution_B.Sum_m1 = Analog_Solution_B.Switch2_o +
    Analog_Solution_B.Delay_o;

  /* Gain: '<S93>/Gain' */
  Analog_Solution_B.Gain_j = Analog_Solution_P.Gain_Gain_j0 *
    Analog_Solution_B.Sum_m1;

  /* Delay: '<S92>/Delay1' */
  Analog_Solution_B.Delay1_f = Analog_Solution_DW.Delay1_DSTATE_c;

  /* Abs: '<S92>/Abs1' */
  Analog_Solution_B.Abs1 = fabs(Analog_Solution_B.Delay1_f);

  /* RelationalOperator: '<S92>/Relational Operator1' */
  Analog_Solution_B.RelationalOperator1_h = (Analog_Solution_B.Gain_j ==
    Analog_Solution_B.Abs1);

  /* Switch: '<S92>/Switch2' incorporates:
   *  Switch: '<S92>/Switch1'
   */
  if (Analog_Solution_B.RelationalOperator1_h) {
    /* Gain: '<S6>/Umrechnung' */
    Analog_Solution_B.WinchSpeedrads = Analog_Solution_P.Umrechnung_Gain *
      Analog_Solution_B.AI_mot_SiemensMotor_Speed;

    /* Abs: '<S92>/Abs' */
    Analog_Solution_B.Abs_l = fabs(Analog_Solution_B.WinchSpeedrads);

    /* RelationalOperator: '<S92>/Relational Operator' incorporates:
     *  Constant: '<S92>/Constant'
     */
    Analog_Solution_B.RelationalOperator_n = (Analog_Solution_B.Abs_l >=
      Analog_Solution_P.Constant_Value_b);

    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S92>/Constant1'
     */
    if (Analog_Solution_B.RelationalOperator_n) {
      Analog_Solution_B.Switch_p = Analog_Solution_B.WinchSpeedrads;
    } else {
      Analog_Solution_B.Switch_p = Analog_Solution_P.Constant1_Value_g;
    }

    /* End of Switch: '<S92>/Switch' */

    /* Gain: '<S92>/Sample Zeit' */
    Analog_Solution_B.UmdrehungSampleTime = Analog_Solution_P.SampleZeit_Gain *
      Analog_Solution_B.Switch_p;

    /* Sum: '<S92>/Sum' */
    Analog_Solution_B.Sum_bi = Analog_Solution_B.UmdrehungSampleTime +
      Analog_Solution_B.Delay_e;
    Analog_Solution_B.Switch2_e = Analog_Solution_B.Sum_bi;
  } else {
    if (Analog_Solution_B.RelationalOperator1_h) {
      /* Switch: '<S92>/Switch1' incorporates:
       *  Constant: '<S92>/Constant2'
       */
      Analog_Solution_B.Switch1_g = Analog_Solution_P.Constant2_Value_d;
    } else {
      /* Switch: '<S92>/Switch1' */
      Analog_Solution_B.Switch1_g = Analog_Solution_B.Gain_j;
    }

    Analog_Solution_B.Switch2_e = Analog_Solution_B.Switch1_g;
  }

  /* End of Switch: '<S92>/Switch2' */

  /* RelationalOperator: '<S6>/Relational Operator' incorporates:
   *  Constant: '<S6>/erste Spooling Grenze'
   */
  Analog_Solution_B.RelationalOperator_l = (Analog_Solution_B.Switch2_e <
    Analog_Solution_P.ersteSpoolingGrenze_Value);

  /* Gain: '<S6>/zweite Spooling Grenze' incorporates:
   *  Constant: '<S6>/erste Spooling Grenze'
   */
  Analog_Solution_B.zweiteSpoolingGrenze =
    Analog_Solution_P.zweiteSpoolingGrenze_Gain *
    Analog_Solution_P.ersteSpoolingGrenze_Value;

  /* RelationalOperator: '<S6>/Relational Operator1' */
  Analog_Solution_B.RelationalOperator1_h4 = (Analog_Solution_B.Switch2_e >
    Analog_Solution_B.zweiteSpoolingGrenze);

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/Const.'
   */
  if (Analog_Solution_B.RelationalOperator1_h4) {
    Analog_Solution_B.uobereGrenze0keineGrenze1untere =
      Analog_Solution_P.Const_Value;
  } else {
    /* RelationalOperator: '<S6>/Relational Operator2' incorporates:
     *  Constant: '<S6>/untere Spooling Grenze'
     */
    Analog_Solution_B.RelationalOperator2 = (Analog_Solution_B.Switch2_e <
      Analog_Solution_P.untereSpoolingGrenze_Value);

    /* Gain: '<S6>/Gain1' */
    Analog_Solution_B.Gain1_c = (int8_T)(Analog_Solution_B.RelationalOperator2 ?
      (int32_T)Analog_Solution_P.Gain1_Gain : 0);
    Analog_Solution_B.uobereGrenze0keineGrenze1untere = (real_T)
      Analog_Solution_B.Gain1_c * 0.0078125;
  }

  /* End of Switch: '<S6>/Switch1' */

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/Constant'
   *  Switch: '<S7>/Switch1'
   */
  if (Analog_Solution_B.LogicalOperator_i) {
    Analog_Solution_B.Switch_m = 0.0;
    Analog_Solution_B.Switch1_dc = 0.0;
  } else {
    Analog_Solution_B.Switch_m = Analog_Solution_P.Constant_Value_e;

    /* Switch: '<S95>/Switch3' incorporates:
     *  Constant: '<S7>/Constant'
     *  Constant: '<S95>/Constant1'
     *  Switch: '<S95>/Switch'
     */
    if (Analog_Solution_B.LogicalOperator_i) {
      Analog_Solution_B.Switch3_e = Analog_Solution_P.Constant1_Value_n;
    } else {
      if (Analog_Solution_B.Switch2_n > Analog_Solution_P.Switch_Threshold_o) {
        /* Switch: '<S95>/Switch' incorporates:
         *  Constant: '<S95>/Konstante Geschw. zum Spooling Grenze finden'
         */
        Analog_Solution_B.Switch_b =
          Analog_Solution_P.KonstanteGeschwzumSpoolingGrenz;
      } else {
        /* Gain: '<S95>/Gain' incorporates:
         *  Constant: '<S95>/Konstante Geschw. zum Spooling Grenze finden'
         *  Switch: '<S95>/Switch'
         */
        Analog_Solution_B.Gain_a = Analog_Solution_P.Gain_Gain_dq *
          Analog_Solution_P.KonstanteGeschwzumSpoolingGrenz;

        /* Switch: '<S95>/Switch' */
        Analog_Solution_B.Switch_b = Analog_Solution_B.Gain_a;
      }

      Analog_Solution_B.Switch3_e = Analog_Solution_B.Switch_b;
    }

    /* End of Switch: '<S95>/Switch3' */
    Analog_Solution_B.Switch1_dc = Analog_Solution_B.Switch3_e;
  }

  /* End of Switch: '<S7>/Switch' */

  /* S-Function (scblock): '<S98>/S-Function' */
  /* ok to acquire for <S98>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_o.AcquireOK = 1;

  /* S-Function (scblock): '<S99>/S-Function' */
  /* ok to acquire for <S99>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_e.AcquireOK = 1;
}

/* Model update function for TID0 */
static void Analog_Solution_update0(void) /* Sample time: [0.001s, 0.0s] */
{
  real_T xnew;
  real_T xnew_idx_0;

  /* Update for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
  Analog_Solution_DW.DiscreteTransferFcn_states[1] =
    Analog_Solution_DW.DiscreteTransferFcn_states[0];
  Analog_Solution_DW.DiscreteTransferFcn_states[0] =
    Analog_Solution_DW.DiscreteTransferFcn_tmp;

  /* Update for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
  Analog_Solution_DW.DiscreteTransferFcn1_states[1] =
    Analog_Solution_DW.DiscreteTransferFcn1_states[0];
  Analog_Solution_DW.DiscreteTransferFcn1_states[0] =
    Analog_Solution_DW.DiscreteTransferFcn1_tmp;

  /* Update for DiscreteStateSpace: '<S13>/Discrete State-Space' */
  xnew = Analog_Solution_P.Afilt_Winch[0] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[0];
  xnew += Analog_Solution_P.Afilt_Winch[2] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[1];
  xnew += Analog_Solution_P.Bfilt_Winch[0] *
    Analog_Solution_B.TmpSignalConversionAtDiscreteSt[0];
  xnew += Analog_Solution_P.Bfilt_Winch[2] *
    Analog_Solution_B.TmpSignalConversionAtDiscreteSt[1];
  xnew_idx_0 = xnew;
  xnew = Analog_Solution_P.Afilt_Winch[1] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[0];
  xnew += Analog_Solution_P.Afilt_Winch[3] *
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[1];
  xnew += Analog_Solution_P.Bfilt_Winch[1] *
    Analog_Solution_B.TmpSignalConversionAtDiscreteSt[0];
  xnew += Analog_Solution_P.Bfilt_Winch[3] *
    Analog_Solution_B.TmpSignalConversionAtDiscreteSt[1];
  Analog_Solution_DW.DiscreteStateSpace_DSTATE[0] = xnew_idx_0;
  Analog_Solution_DW.DiscreteStateSpace_DSTATE[1] = xnew;

  /* Update for DiscreteTransferFcn: '<S13>/Discrete Transfer Fcn' */
  Analog_Solution_DW.DiscreteTransferFcn_states_n[1] =
    Analog_Solution_DW.DiscreteTransferFcn_states_n[0];
  Analog_Solution_DW.DiscreteTransferFcn_states_n[0] =
    Analog_Solution_DW.DiscreteTransferFcn_tmp_g;

  /* Update for DiscreteTransferFcn: '<S12>/Discrete Transfer Fcn1' */
  Analog_Solution_DW.DiscreteTransferFcn1_states_h[1] =
    Analog_Solution_DW.DiscreteTransferFcn1_states_h[0];
  Analog_Solution_DW.DiscreteTransferFcn1_states_h[0] =
    Analog_Solution_DW.DiscreteTransferFcn1_tmp_c;

  /* Update for DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
  Analog_Solution_DW.DiscreteTransferFcn1_states_n[1] =
    Analog_Solution_DW.DiscreteTransferFcn1_states_n[0];
  Analog_Solution_DW.DiscreteTransferFcn1_states_n[0] =
    Analog_Solution_DW.DiscreteTransferFcn1_tmp_h;

  /* Update for Delay: '<S11>/Delay' */
  Analog_Solution_DW.Delay_DSTATE[0] = Analog_Solution_DW.Delay_DSTATE[1];
  Analog_Solution_DW.Delay_DSTATE[1] = Analog_Solution_DW.Delay_DSTATE[2];
  Analog_Solution_DW.Delay_DSTATE[2] = Analog_Solution_B.CI_PotPos;

  /* Update for Delay: '<S6>/Delay1' */
  Analog_Solution_DW.Delay1_DSTATE = Analog_Solution_B.Switch3;

  /* Update for Delay: '<S6>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_c = Analog_Solution_B.SpoolingEbene;

  /* Update for Delay: '<S8>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_h = Analog_Solution_B.Sum1_e;

  /* Update for Delay: '<S100>/Delay3' */
  Analog_Solution_DW.Delay3_DSTATE = Analog_Solution_B.Switch5;

  /* Update for Delay: '<S100>/Delay1' */
  Analog_Solution_DW.Delay1_DSTATE_p = Analog_Solution_B.Switch4;

  /* Update for Delay: '<S100>/Delay4' */
  Analog_Solution_DW.Delay4_DSTATE = Analog_Solution_B.Switch7;

  /* Update for Delay: '<S97>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_p = Analog_Solution_B.Sum1_l;

  /* Update for Delay: '<S103>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_p2 = Analog_Solution_B.Sum1_l;

  /* Update for Delay: '<S103>/Delay1' */
  Analog_Solution_DW.Delay1_DSTATE_b = Analog_Solution_B.Sum1_l;

  /* Update for Delay: '<S100>/Delay2' */
  Analog_Solution_DW.Delay2_DSTATE = Analog_Solution_B.Switch;

  /* Update for Delay: '<S101>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_i = Analog_Solution_B.Sum1_e;

  /* Update for Delay: '<S101>/Delay1' */
  Analog_Solution_DW.Delay1_DSTATE_n = Analog_Solution_B.Sum1_e;

  /* Update for Delay: '<S94>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_a = Analog_Solution_B.Sum_cc;

  /* Update for Delay: '<S92>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_j = Analog_Solution_B.Switch2_e;

  /* Update for Delay: '<S95>/Delay' */
  Analog_Solution_DW.Delay_DSTATE_ag = Analog_Solution_B.Sum_m1;

  /* Update for Delay: '<S92>/Delay1' */
  Analog_Solution_DW.Delay1_DSTATE_c = Analog_Solution_B.Gain_j;

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Analog_Solution_M->Timing.clockTick0)) {
    ++Analog_Solution_M->Timing.clockTickH0;
  }

  Analog_Solution_M->Timing.t[0] = Analog_Solution_M->Timing.clockTick0 *
    Analog_Solution_M->Timing.stepSize0 + Analog_Solution_M->Timing.clockTickH0 *
    Analog_Solution_M->Timing.stepSize0 * 4294967296.0;
  switch (Analog_Solution_M->Timing.rtmDbBufReadBuf4) {
   case 0:
    Analog_Solution_M->Timing.rtmDbBufWriteBuf4 = 1;
    break;

   case 1:
    Analog_Solution_M->Timing.rtmDbBufWriteBuf4 = 0;
    break;

   default:
    Analog_Solution_M->Timing.rtmDbBufWriteBuf4 =
      !Analog_Solution_M->Timing.rtmDbBufLastBufWr4;
    break;
  }

  Analog_Solution_M->Timing.rtmDbBufClockTick4
    [Analog_Solution_M->Timing.rtmDbBufWriteBuf4] =
    Analog_Solution_M->Timing.clockTick0;
  Analog_Solution_M->Timing.rtmDbBufClockTickH4
    [Analog_Solution_M->Timing.rtmDbBufWriteBuf4] =
    Analog_Solution_M->Timing.clockTickH0;
  Analog_Solution_M->Timing.rtmDbBufLastBufWr4 =
    Analog_Solution_M->Timing.rtmDbBufWriteBuf4;
  Analog_Solution_M->Timing.rtmDbBufWriteBuf4 = 0xFF;
}

/* Model output function for TID1 */
static void Analog_Solution_output1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* S-Function (scblock): '<S81>/S-Function' */
  /* ok to acquire for <S81>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_k.AcquireOK = 1;
}

/* Model update function for TID1 */
static void Analog_Solution_update1(void) /* Sample time: [0.01s, 0.0s] */
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
  if (!(++Analog_Solution_M->Timing.clockTick1)) {
    ++Analog_Solution_M->Timing.clockTickH1;
  }

  Analog_Solution_M->Timing.t[1] = Analog_Solution_M->Timing.clockTick1 *
    Analog_Solution_M->Timing.stepSize1 + Analog_Solution_M->Timing.clockTickH1 *
    Analog_Solution_M->Timing.stepSize1 * 4294967296.0;
}

/* Model output function for TID2 */
static void Analog_Solution_output2(void) /* Sample time: [0.02s, 0.0s] */
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
  srClearBC(Analog_Solution_DW.Data_validation_SubsysRanBC);

  /* S-Function (fiforeadhdr): '<S19>/FIFO ASCII read ' */

  /* Level2 S-Function Block: '<S19>/FIFO ASCII read ' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[31];
    sfcnOutputs(rts,2);
  }

  /* MATLAB Function: '<S23>/Embedded MATLAB Function' */
  /* MATLAB Function 'Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function': '<S26>:1' */
  /* CALCCRC pBuffer must be a uint8 array containing the buffer where the CRC */
  /* has to be computed. */
  /* '<S26>:1:6' */
  /* '<S26>:1:33' */
  Analog_Solution_convert1word_p(Analog_Solution_B.FIFOASCIIread[144], vec1);

  /* '<S26>:1:34' */
  Analog_Solution_convert1word_p(Analog_Solution_B.FIFOASCIIread[145], vec2);

  /* '<S26>:1:36' */
  for (ind = 0; ind < 8; ind++) {
    temp[ind] = vec1[ind];
    temp[ind + 8] = vec2[ind];
  }

  /* '<S26>:1:38' */
  /* '<S26>:1:42' */
  crc_IMU = 0.0;

  /* '<S26>:1:43' */
  for (ind = 0; ind < 16; ind++) {
    /* '<S26>:1:43' */
    /* '<S26>:1:44' */
    crc_IMU += rt_powd_snf(2.0, 16.0 - (1.0 + (real_T)ind)) * temp[ind];
  }

  /* '<S26>:1:9' */
  crc = 0U;

  /* '<S26>:1:10' */
  for (ind = 0; ind < 143; ind++) {
    /* '<S26>:1:10' */
    /* '<S26>:1:12' */
    crc ^= Analog_Solution_B.FIFOASCIIread[ind + 1];

    /* '<S26>:1:13' */
    for (i = 0; i < 8; i++) {
      /* '<S26>:1:13' */
      /* '<S26>:1:14' */
      carry = (uint16_T)(crc & 1);

      /* '<S26>:1:15' */
      crc = (uint16_T)((uint32_T)crc >> 1);
      if (carry != 0) {
        /* '<S26>:1:18' */
        crc ^= 33800U;
      }
    }
  }

  if (crc == crc_IMU) {
    /* '<S26>:1:24' */
    /* '<S26>:1:25' */
    ind = 1;
  } else {
    /* '<S26>:1:27' */
    ind = 0;
  }

  Analog_Solution_B.CRC_valid = ind;

  /* End of MATLAB Function: '<S23>/Embedded MATLAB Function' */

  /* MATLAB Function: '<S36>/Embedded MATLAB Function' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[4],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_g);

  /* MATLAB Function: '<S36>/Embedded MATLAB Function1' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[8],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1);

  /* MATLAB Function: '<S36>/Embedded MATLAB Function3' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[12],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3);

  /* MATLAB Function: '<S36>/Embedded MATLAB Function4' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[16],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction4);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[20],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_d);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function1' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[24],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_i);

  /* MATLAB Function: '<S37>/Embedded MATLAB Function3' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[28],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3_p);

  /* MATLAB Function: '<S38>/Embedded MATLAB Function' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[32],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_f);

  /* MATLAB Function: '<S38>/Embedded MATLAB Function1' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[36],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_p);

  /* MATLAB Function: '<S38>/Embedded MATLAB Function3' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[40],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3_a);

  /* MATLAB Function: '<S28>/Embedded MATLAB Function' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[44],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_b);

  /* MATLAB Function: '<S28>/Embedded MATLAB Function1' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[48],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_j);

  /* MATLAB Function: '<S28>/Embedded MATLAB Function3' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[52],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3_ps);

  /* MATLAB Function: '<S30>/Embedded MATLAB Function' */
  Anal_EmbeddedMATLABFunction(&Analog_Solution_B.FIFOASCIIread[56],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_bf);

  /* MATLAB Function: '<S31>/Embedded MATLAB Function3' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[60],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3_pw);

  /* MATLAB Function: '<S31>/Embedded MATLAB Function1' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[64],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_g);

  /* MATLAB Function: '<S31>/Embedded MATLAB Function2' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[68],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction2);

  /* MATLAB Function: '<S32>/Embedded MATLAB Function2' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[72],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction2_n);

  /* MATLAB Function: '<S32>/Embedded MATLAB Function1' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[76],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_n);

  /* MATLAB Function: '<S32>/Embedded MATLAB Function3' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[80],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3_o);

  /* MATLAB Function: '<S32>/Embedded MATLAB Function4' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[84],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction4_g);

  /* MATLAB Function: '<S27>/Embedded MATLAB Function' */
  Anal_EmbeddedMATLABFunction(&Analog_Solution_B.FIFOASCIIread[88],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_l);

  /* MATLAB Function: '<S27>/Embedded MATLAB Function1' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[92],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_e);

  /* MATLAB Function: '<S27>/Embedded MATLAB Function2' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[93],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction2_h);

  /* MATLAB Function: '<S33>/Embedded MATLAB Function2' */
  A_EmbeddedMATLABFunction1_g(&Analog_Solution_B.FIFOASCIIread[94],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction2_m);

  /* MATLAB Function: '<S34>/Embedded MATLAB Function' */
  An_EmbeddedMATLABFunction_k(&Analog_Solution_B.FIFOASCIIread[98],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_k);

  /* MATLAB Function: '<S34>/Embedded MATLAB Function1' */
  An_EmbeddedMATLABFunction_k(&Analog_Solution_B.FIFOASCIIread[106],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_a);

  /* MATLAB Function: '<S34>/Embedded MATLAB Function2' */
  An_EmbeddedMATLABFunction_k(&Analog_Solution_B.FIFOASCIIread[114],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction2_g);

  /* MATLAB Function: '<S35>/Embedded MATLAB Function' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[122],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_j);

  /* MATLAB Function: '<S35>/Embedded MATLAB Function1' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[126],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_d);

  /* MATLAB Function: '<S35>/Embedded MATLAB Function3' */
  An_EmbeddedMATLABFunction_b(&Analog_Solution_B.FIFOASCIIread[130],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3_n);

  /* MATLAB Function: '<S29>/Embedded MATLAB Function' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[134],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction_a);

  /* MATLAB Function: '<S29>/Embedded MATLAB Function2' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[135],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction2_p);

  /* MATLAB Function: '<S29>/Embedded MATLAB Function3' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[136],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction3_k);

  /* MATLAB Function: '<S29>/Embedded MATLAB Function4' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[137],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction4_h);

  /* MATLAB Function: '<S29>/Embedded MATLAB Function5' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[138],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction5);

  /* MATLAB Function: '<S29>/Embedded MATLAB Function6' */
  Ana_EmbeddedMATLABFunction1(Analog_Solution_B.FIFOASCIIread[139],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction6);

  /* MATLAB Function: '<S29>/Embedded MATLAB Function1' */
  Anal_EmbeddedMATLABFunction(&Analog_Solution_B.FIFOASCIIread[140],
    &Analog_Solution_B.sf_EmbeddedMATLABFunction1_c);

  /* Outputs for Enabled SubSystem: '<S19>/Data_validation' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  if (Analog_Solution_B.CRC_valid > 0.0) {
    /* Inport: '<S24>/IMU_data' */
    Analog_Solution_B.IMU_data[0] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_g.sing_out;
    Analog_Solution_B.IMU_data[1] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1.sing_out;
    Analog_Solution_B.IMU_data[2] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3.sing_out;
    Analog_Solution_B.IMU_data[3] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction4.sing_out;
    Analog_Solution_B.IMU_data[4] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_d.sing_out;
    Analog_Solution_B.IMU_data[5] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_i.sing_out;
    Analog_Solution_B.IMU_data[6] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3_p.sing_out;
    Analog_Solution_B.IMU_data[7] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_f.sing_out;
    Analog_Solution_B.IMU_data[8] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_p.sing_out;
    Analog_Solution_B.IMU_data[9] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3_a.sing_out;
    Analog_Solution_B.IMU_data[10] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_b.sing_out;
    Analog_Solution_B.IMU_data[11] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_j.sing_out;
    Analog_Solution_B.IMU_data[12] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3_ps.sing_out;
    Analog_Solution_B.IMU_data[13] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_bf.uint32_out;
    Analog_Solution_B.IMU_data[14] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3_pw.int32_out;
    Analog_Solution_B.IMU_data[15] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_g.int32_out;
    Analog_Solution_B.IMU_data[16] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction2.int32_out;
    Analog_Solution_B.IMU_data[17] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction2_n.int32_out;
    Analog_Solution_B.IMU_data[18] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_n.int32_out;
    Analog_Solution_B.IMU_data[19] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3_o.int32_out;
    Analog_Solution_B.IMU_data[20] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction4_g.int32_out;
    Analog_Solution_B.IMU_data[21] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_l.uint32_out;
    Analog_Solution_B.IMU_data[22] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_e.uint8_out;
    Analog_Solution_B.IMU_data[23] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction2_h.uint8_out;
    Analog_Solution_B.IMU_data[24] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction2_m.int32_out;
    Analog_Solution_B.IMU_data[25] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_k.double_out;
    Analog_Solution_B.IMU_data[26] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_a.double_out;
    Analog_Solution_B.IMU_data[27] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction2_g.double_out;
    Analog_Solution_B.IMU_data[28] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_j.sing_out;
    Analog_Solution_B.IMU_data[29] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_d.sing_out;
    Analog_Solution_B.IMU_data[30] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3_n.sing_out;
    Analog_Solution_B.IMU_data[31] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction_a.uint8_out;
    Analog_Solution_B.IMU_data[32] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction2_p.uint8_out;
    Analog_Solution_B.IMU_data[33] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction3_k.uint8_out;
    Analog_Solution_B.IMU_data[34] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction4_h.uint8_out;
    Analog_Solution_B.IMU_data[35] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction5.uint8_out;
    Analog_Solution_B.IMU_data[36] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction6.uint8_out;
    Analog_Solution_B.IMU_data[37] =
      Analog_Solution_B.sf_EmbeddedMATLABFunction1_c.uint32_out;
    srUpdateBC(Analog_Solution_DW.Data_validation_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S19>/Data_validation' */
}

/* Model update function for TID2 */
static void Analog_Solution_update2(void) /* Sample time: [0.02s, 0.0s] */
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
  if (!(++Analog_Solution_M->Timing.clockTick2)) {
    ++Analog_Solution_M->Timing.clockTickH2;
  }

  Analog_Solution_M->Timing.t[2] = Analog_Solution_M->Timing.clockTick2 *
    Analog_Solution_M->Timing.stepSize2 + Analog_Solution_M->Timing.clockTickH2 *
    Analog_Solution_M->Timing.stepSize2 * 4294967296.0;
}

/* Model output function for TID3 */
static void Analog_Solution_output3(void) /* Sample time: [1.0s, 0.0s] */
{
  int8_T ii_data[41];
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
  int32_T i;
  char_T in_char_0;
  int32_T b_x_size_idx_0;
  boolean_T exitg1;

  /* S-Function (scblock): '<S84>/S-Function' */
  /* ok to acquire for <S84>/S-Function */
  Analog_Solution_DW.SFunction_IWORK.AcquireOK = 1;

  /* S-Function (xpcwalltime): '<S4>/Wall Time 1' */

  /* Level2 S-Function Block: '<S4>/Wall Time 1' (xpcwalltime) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[25];
    sfcnOutputs(rts,3);
  }

  /* DataTypeConversion: '<S4>/Data Type Conversion1' */
  for (i = 0; i < 6; i++) {
    Analog_Solution_B.DataTypeConversion1[i] = Analog_Solution_B.WallTime1[i];
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion1' */

  /* UnitDelay: '<S1>/Unit Delay' */
  Analog_Solution_B.UnitDelay = Analog_Solution_DW.UnitDelay_DSTATE;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/Constat'
   */
  Analog_Solution_B.Sum = Analog_Solution_P.Ts_1s + Analog_Solution_B.UnitDelay;

  /* Switch: '<S83>/Switch1' incorporates:
   *  Constant: '<S83>/Constant2'
   */
  y = 12.0 * Analog_Solution_P.Ts_1s;
  if (Analog_Solution_B.Sum >= y) {
    Analog_Solution_B.Trigger_time = Analog_Solution_P.Constant2_Value_dl;
  } else {
    /* Switch: '<S83>/Switch' incorporates:
     *  Constant: '<S83>/Constant'
     *  Constant: '<S83>/Constant1'
     */
    y = 2.0 * Analog_Solution_P.Ts_1s;
    if (Analog_Solution_B.Sum >= y) {
      Analog_Solution_B.Switch_ku = Analog_Solution_P.Constant_Value_d;
    } else {
      Analog_Solution_B.Switch_ku = Analog_Solution_P.Constant1_Value_po;
    }

    /* End of Switch: '<S83>/Switch' */
    Analog_Solution_B.Trigger_time = Analog_Solution_B.Switch_ku;
  }

  /* End of Switch: '<S83>/Switch1' */

  /* S-Function (scblock): '<S82>/S-Function' */
  /* ok to acquire for <S82>/S-Function */
  Analog_Solution_DW.SFunction_IWORK_g.AcquireOK = 1;

  /* S-Function (fiforeadhdr): '<S17>/FIFO ASCII read 1' */

  /* Level2 S-Function Block: '<S17>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[29];
    sfcnOutputs(rts,3);
  }

  /* MATLAB Function: '<S17>/Embedded MATLAB Function' */
  /* MATLAB Function 'Inputs/RS232_read/Compass_read/Embedded MATLAB Function': '<S21>:1' */
  /*  Message frame: $C357.8P-5.77R1.18T21.8* */
  /*  Output: Ground unit Yaw in rad */
  /* '<S21>:1:7' */
  /* '<S21>:1:8' */
  Analog_Solution_B.GU_Yaw = 0.0;

  /* '<S21>:1:10' */
  i = 0;
  b_idx = 1;
  exitg1 = false;
  while ((!exitg1) && (b_idx < 42)) {
    if (Analog_Solution_B.FIFOASCIIread1[b_idx - 1] == 80) {
      i++;
      ii_data[i - 1] = (int8_T)b_idx;
      if (i >= 41) {
        exitg1 = true;
      } else {
        b_idx++;
      }
    } else {
      b_idx++;
    }
  }

  if (1 > i) {
    i = 0;
  }

  if (!(i == 0)) {
    /* '<S21>:1:12' */
    /* '<S21>:1:13' */
    if (ii_data[0] == 8) {
      /* '<S21>:1:14' */
      /* '<S21>:1:15' */
      Analog_Solution_B.GU_Yaw = ((((real_T)Analog_Solution_B.FIFOASCIIread1[6]
        - 48.0) * 0.1 + ((real_T)Analog_Solution_B.FIFOASCIIread1[4] - 48.0)) +
        ((real_T)Analog_Solution_B.FIFOASCIIread1[3] - 48.0) * 10.0) + ((real_T)
        Analog_Solution_B.FIFOASCIIread1[2] - 48.0) * 100.0;
    } else if (ii_data[0] == 7) {
      /* '<S21>:1:16' */
      /* '<S21>:1:17' */
      Analog_Solution_B.GU_Yaw = (((real_T)Analog_Solution_B.FIFOASCIIread1[5] -
        48.0) * 0.1 + ((real_T)Analog_Solution_B.FIFOASCIIread1[3] - 48.0)) +
        ((real_T)Analog_Solution_B.FIFOASCIIread1[2] - 48.0) * 10.0;
    } else if (ii_data[0] == 6) {
      /* '<S21>:1:18' */
      /* '<S21>:1:19' */
      Analog_Solution_B.GU_Yaw = ((real_T)Analog_Solution_B.FIFOASCIIread1[4] -
        48.0) * 0.1 + ((real_T)Analog_Solution_B.FIFOASCIIread1[2] - 48.0);
    } else {
      if (ii_data[0] == 5) {
        /* '<S21>:1:20' */
        /* '<S21>:1:21' */
        Analog_Solution_B.GU_Yaw = ((real_T)Analog_Solution_B.FIFOASCIIread1[4]
          - 48.0) * 0.1;
      }
    }
  }

  /* '<S21>:1:25' */
  Analog_Solution_B.GU_Yaw = Analog_Solution_B.GU_Yaw / 180.0 *
    3.1415926535897931;

  /* End of MATLAB Function: '<S17>/Embedded MATLAB Function' */

  /* Constant: '<S16>/Constant' */
  Analog_Solution_B.Constant = Analog_Solution_P.Constant_Value_bd;

  /* Constant: '<S16>/Constant1' */
  Analog_Solution_B.Constant1_d = Analog_Solution_P.Constant1_Value_c;

  /* Constant: '<S16>/Constant2' */
  Analog_Solution_B.Constant2_j = Analog_Solution_P.Constant2_Value_j;

  /* Constant: '<S16>/Constant3' */
  Analog_Solution_B.Constant3_h = Analog_Solution_P.Constant3_Value_d2;

  /* S-Function (fiforeadhdr): '<S18>/FIFO ASCII read 1' */

  /* Level2 S-Function Block: '<S18>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[30];
    sfcnOutputs(rts,3);
  }

  /* MATLAB Function: '<S18>/Embedded MATLAB Function' */
  /* MATLAB Function 'Inputs/RS232_read/GPS_read/Embedded MATLAB Function': '<S22>:1' */
  /*  Message frame: $GPGGA,time(hhmmss),Latitude(ddmm.mmmm),Hemisphere(N or S), */
  /*  Longitude(dddmm.mmmm),Hemisphere(W or E),GPS quality,Number of satellites, */
  /*  Horizontal dilution of precision,Antenna height(-9999.9 to 99999.9 m), */
  /*  Geoidal height(-999.9 to 9999.9 m),null,null *hh 0d 0a */
  /*  Output: Latitude in deg, Longitude in deg, height in m, Geoidal height in m */
  /*  >0 for North and West */
  /* '<S22>:1:11' */
  /* '<S22>:1:12' */
  /* '<S22>:1:13' */
  for (i = 0; i < 91; i++) {
    in_char_0 = (int8_T)Analog_Solution_B.FIFOASCIIread1_k[i];
    x[i] = (in_char_0 == ',');
    in_char[i] = in_char_0;
  }

  i = 0;
  b_idx = 1;
  exitg1 = false;
  while ((!exitg1) && (b_idx < 92)) {
    if (x[b_idx - 1]) {
      i++;
      ii_data_0[i - 1] = (int8_T)b_idx;
      if (i >= 91) {
        exitg1 = true;
      } else {
        b_idx++;
      }
    } else {
      b_idx++;
    }
  }

  if (in_char[0] == '$') {
    /* '<S22>:1:15' */
    if (ii_data_0[1] + 1 > ii_data_0[2] - 1) {
      b_idx = 1;
      i = 0;
    } else {
      b_idx = ii_data_0[1] + 1;
      i = ii_data_0[2] - 1;
    }

    /* '<S22>:1:17' */
    /* '<S22>:1:18' */
    d_ii = b_idx - 1;
    b_x_size_idx_0 = i - d_ii;
    i -= d_ii;
    for (b_idx = 0; b_idx < i; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    i = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= i)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= i) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S22>:1:19' */
    y = ((((((real_T)((Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[1] +
                c_ii_data[0]) - 3] - 48) * 10 +
                      Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[1] +
               c_ii_data[0]) - 2]) - 48.0) + ((real_T)
             Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[1] + c_ii_data[0]] -
             48.0) * 0.1) + ((real_T)Analog_Solution_B.FIFOASCIIread1_k
            [(ii_data_0[1] + c_ii_data[0]) + 1] - 48.0) * 0.01) + ((real_T)
           Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[1] + c_ii_data[0]) + 2]
           - 48.0) * 0.001) + ((real_T)Analog_Solution_B.FIFOASCIIread1_k
          [(ii_data_0[1] + c_ii_data[0]) + 3] - 48.0) * 0.0001) / 60.0 +
      ((real_T)((Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[1] + c_ii_data[0])
                 - 5] - 48) * 10 + Analog_Solution_B.FIFOASCIIread1_k
                [(ii_data_0[1] + c_ii_data[0]) - 4]) - 48.0);

    /* '<S22>:1:27' */
    if (in_char[ii_data_0[2]] == 'S') {
      /* '<S22>:1:28' */
      /* '<S22>:1:29' */
      y = -y;
    }

    if (ii_data_0[3] + 1 > ii_data_0[4] - 1) {
      i = 1;
      b_idx = 0;
    } else {
      i = ii_data_0[3] + 1;
      b_idx = ii_data_0[4] - 1;
    }

    /* '<S22>:1:32' */
    /* '<S22>:1:33' */
    d_ii = i - 1;
    b_x_size_idx_0 = b_idx - d_ii;
    i = b_idx - d_ii;
    for (b_idx = 0; b_idx < i; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    i = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= i)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= i) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S22>:1:34' */
    GU_Lon = ((((((real_T)((Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[3] +
      c_ii_data[0]) - 3] - 48) * 10 + Analog_Solution_B.FIFOASCIIread1_k
      [(ii_data_0[3] + c_ii_data[0]) - 2]) - 48.0) + ((real_T)
      Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[3] + c_ii_data[0]] - 48.0) *
                 0.1) + ((real_T)Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[3]
      + c_ii_data[0]) + 1] - 48.0) * 0.01) + ((real_T)
                Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[3] + c_ii_data[0])
                + 2] - 48.0) * 0.001) + ((real_T)
               Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[3] + c_ii_data[0])
               + 3] - 48.0) * 0.0001) / 60.0 + ((real_T)
      (((Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[3] + c_ii_data[0]) - 6] -
         48) * 100 + (Analog_Solution_B.FIFOASCIIread1_k[(ii_data_0[3] +
      c_ii_data[0]) - 5] - 48) * 10) + Analog_Solution_B.FIFOASCIIread1_k
       [(ii_data_0[3] + c_ii_data[0]) - 4]) - 48.0);

    /* '<S22>:1:43' */
    if (in_char[ii_data_0[4]] == 'W') {
      /* '<S22>:1:44' */
      /* '<S22>:1:45' */
      GU_Lon = -GU_Lon;
    }

    if (ii_data_0[8] + 1 > ii_data_0[9] - 1) {
      i = 1;
      b_idx = 0;
    } else {
      i = ii_data_0[8] + 1;
      b_idx = ii_data_0[9] - 1;
    }

    /* '<S22>:1:48' */
    /* '<S22>:1:49' */
    d_ii = i - 1;
    b_x_size_idx_0 = b_idx - d_ii;
    i = b_idx - d_ii;
    for (b_idx = 0; b_idx < i; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    i = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= i)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= i) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S22>:1:50' */
    i = c_ii_data[0];

    /* '<S22>:1:51' */
    GU_h = 0.0;
    if (Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[8]] == 45) {
      /* '<S22>:1:52' */
      b_idx = ((ii_data_0[8] + c_ii_data[0]) - ii_data_0[8]) - 2;

      /* '<S22>:1:53' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S22>:1:53' */
        b_x_size_idx_0 = (ii_data_0[8] + d_ii) + 2;

        /* '<S22>:1:54' */
        GU_h -= rt_powd_snf(10.0, (real_T)(((ii_data_0[8] + i) - b_x_size_idx_0)
          - 1)) * ((real_T)Analog_Solution_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1]
                   - 48.0);
      }

      /* '<S22>:1:57' */
      GU_h -= ((real_T)Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[8] +
               c_ii_data[0]] - 48.0) * 0.1;
    } else {
      b_idx = ((ii_data_0[8] + c_ii_data[0]) - ii_data_0[8]) - 1;

      /* '<S22>:1:59' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S22>:1:59' */
        b_x_size_idx_0 = (ii_data_0[8] + d_ii) + 1;

        /* '<S22>:1:60' */
        GU_h += rt_powd_snf(10.0, (real_T)(((ii_data_0[8] + i) - b_x_size_idx_0)
          - 1)) * ((real_T)Analog_Solution_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1]
                   - 48.0);
      }

      /* '<S22>:1:63' */
      GU_h += ((real_T)Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[8] +
               c_ii_data[0]] - 48.0) * 0.1;
    }

    if (ii_data_0[10] + 1 > ii_data_0[11] - 1) {
      i = 1;
      b_idx = 0;
    } else {
      i = ii_data_0[10] + 1;
      b_idx = ii_data_0[11] - 1;
    }

    /* '<S22>:1:66' */
    /* '<S22>:1:67' */
    d_ii = i - 1;
    b_x_size_idx_0 = b_idx - d_ii;
    i = b_idx - d_ii;
    for (b_idx = 0; b_idx < i; b_idx++) {
      b_x_data[b_idx] = (in_char[d_ii + b_idx] == '.');
    }

    i = b_x_size_idx_0;
    b_idx = 0;
    d_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (d_ii <= i)) {
      if (b_x_data[d_ii - 1]) {
        b_idx++;
        c_ii_data[b_idx - 1] = (int8_T)d_ii;
        if (b_idx >= i) {
          exitg1 = true;
        } else {
          d_ii++;
        }
      } else {
        d_ii++;
      }
    }

    /* '<S22>:1:68' */
    i = c_ii_data[0];

    /* '<S22>:1:69' */
    Geo_GU_h = 0.0;
    if (Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[10]] == 45) {
      /* '<S22>:1:70' */
      b_idx = ((ii_data_0[10] + c_ii_data[0]) - ii_data_0[10]) - 2;

      /* '<S22>:1:71' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S22>:1:71' */
        b_x_size_idx_0 = (ii_data_0[10] + d_ii) + 2;

        /* '<S22>:1:72' */
        Geo_GU_h -= rt_powd_snf(10.0, (real_T)(((ii_data_0[10] + i) -
          b_x_size_idx_0) - 1)) * ((real_T)
          Analog_Solution_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1] - 48.0);
      }

      /* '<S22>:1:75' */
      Geo_GU_h -= ((real_T)Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[10] +
                   c_ii_data[0]] - 48.0) * 0.1;
    } else {
      b_idx = ((ii_data_0[10] + c_ii_data[0]) - ii_data_0[10]) - 1;

      /* '<S22>:1:77' */
      for (d_ii = 0; d_ii < b_idx; d_ii++) {
        /* '<S22>:1:77' */
        b_x_size_idx_0 = (ii_data_0[10] + d_ii) + 1;

        /* '<S22>:1:78' */
        Geo_GU_h += rt_powd_snf(10.0, (real_T)(((ii_data_0[10] + i) -
          b_x_size_idx_0) - 1)) * ((real_T)
          Analog_Solution_B.FIFOASCIIread1_k[b_x_size_idx_0 - 1] - 48.0);
      }

      /* '<S22>:1:81' */
      Geo_GU_h += ((real_T)Analog_Solution_B.FIFOASCIIread1_k[ii_data_0[10] +
                   c_ii_data[0]] - 48.0) * 0.1;
    }
  } else {
    /* '<S22>:1:84' */
    y = 0.0;

    /* '<S22>:1:85' */
    GU_Lon = 0.0;

    /* '<S22>:1:86' */
    GU_h = 0.0;

    /* '<S22>:1:87' */
    Geo_GU_h = 0.0;
  }

  Analog_Solution_B.GU_Lat = y;
  Analog_Solution_B.GU_Lon = GU_Lon;
  Analog_Solution_B.GU_h = GU_h;
  Analog_Solution_B.Geo_GU_h = Geo_GU_h;

  /* End of MATLAB Function: '<S18>/Embedded MATLAB Function' */

  /* S-Function (fifowrite): '<S20>/FIFO write 1' */

  /* Level2 S-Function Block: '<S20>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[32];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S20>/Enable TX 1' */

  /* Level2 S-Function Block: '<S20>/Enable TX 1' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[33];
    sfcnOutputs(rts,3);
  }

  /* S-Function (fifowrite): '<S20>/FIFO write 2' */

  /* Level2 S-Function Block: '<S20>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[34];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S20>/Enable TX 2' */

  /* Level2 S-Function Block: '<S20>/Enable TX 2' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[35];
    sfcnOutputs(rts,3);
  }

  /* S-Function (fifowrite): '<S20>/FIFO write 3' */

  /* Level2 S-Function Block: '<S20>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[36];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S20>/Enable TX 3' */

  /* Level2 S-Function Block: '<S20>/Enable TX 3' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[37];
    sfcnOutputs(rts,3);
  }

  /* S-Function (fifowrite): '<S20>/FIFO write 4' */

  /* Level2 S-Function Block: '<S20>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[38];
    sfcnOutputs(rts,3);
  }

  /* S-Function (sertxenable): '<S20>/Enable TX 4' */

  /* Level2 S-Function Block: '<S20>/Enable TX 4' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[39];
    sfcnOutputs(rts,3);
  }
}

/* Model update function for TID3 */
static void Analog_Solution_update3(void) /* Sample time: [1.0s, 0.0s] */
{
  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Analog_Solution_DW.UnitDelay_DSTATE = Analog_Solution_B.Sum;

  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick3"
   * and "Timing.stepSize3". Size of "clockTick3" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Analog_Solution_M->Timing.clockTick3)) {
    ++Analog_Solution_M->Timing.clockTickH3;
  }

  Analog_Solution_M->Timing.t[3] = Analog_Solution_M->Timing.clockTick3 *
    Analog_Solution_M->Timing.stepSize3 + Analog_Solution_M->Timing.clockTickH3 *
    Analog_Solution_M->Timing.stepSize3 * 4294967296.0;
}

/* Model output wrapper function for compatibility with a static main program */
static void Analog_Solution_output(int_T tid)
{
  switch (tid) {
   case 0 :
    Analog_Solution_output0();
    break;

   case 1 :
    Analog_Solution_output1();
    break;

   case 2 :
    Analog_Solution_output2();
    break;

   case 3 :
    Analog_Solution_output3();
    break;

   default :
    break;
  }
}

/* Model update wrapper function for compatibility with a static main program */
static void Analog_Solution_update(int_T tid)
{
  switch (tid) {
   case 0 :
    Analog_Solution_update0();
    break;

   case 1 :
    Analog_Solution_update1();
    break;

   case 2 :
    Analog_Solution_update2();
    break;

   case 3 :
    Analog_Solution_update3();
    break;

   default :
    break;
  }
}

/* Model initialize function */
static void Analog_Solution_initialize(void)
{
  /* Start for S-Function (scblock): '<S84>/S-Function' */

  /* S-Function Block: <S84>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,3)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Data Type Conversion1/s1"));
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Data Type Conversion1/s2"));
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Data Type Conversion1/s3"));
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Data Type Conversion1/s4"));
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Data Type Conversion1/s5"));
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Data Type Conversion1/s6"));
        rl32eAddSignal(4, rl32eGetSignalNo("Logging/Time_Scope_trigger/Switch1"));
        rl32eSetScope(4, 4, 10);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 2);
        xpceFSScopeSet(4, "Var_Time.dat", 1, 512, 0, 536870912);
        rl32eSetScope (4, 10, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Logging/Data Type Conversion1/s2"));
        rl32eSetScope(4, 1, 0.5);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        xpceScopeAcqOK(4, &Analog_Solution_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* Start for S-Function (xpcwalltime): '<S4>/Wall Time 1' */
  /* Level2 S-Function Block: '<S4>/Wall Time 1' (xpcwalltime) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S80>/S-Function' */

  /* S-Function Block: <S80>/S-Function (scblock) */
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
        xpceScopeAcqOK(1, &Analog_Solution_DW.SFunction_IWORK_h.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* Start for S-Function (scblock): '<S81>/S-Function' */

  /* S-Function Block: <S81>/S-Function (scblock) */
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
        xpceScopeAcqOK(3, &Analog_Solution_DW.SFunction_IWORK_k.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* Start for S-Function (scblock): '<S82>/S-Function' */

  /* S-Function Block: <S82>/S-Function (scblock) */
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
        xpceScopeAcqOK(2, &Analog_Solution_DW.SFunction_IWORK_g.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* Start for S-Function (adnipcim): '<S14>/PCI-6221 AD' */
  /* Level2 S-Function Block: '<S14>/PCI-6221 AD' (adnipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dinipcim): '<S15>/PCI-6221 DI' */
  /* Level2 S-Function Block: '<S15>/PCI-6221 DI' (dinipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (pfidinipcim): '<S15>/PCI 6221 PFI DI ' */
  /* Level2 S-Function Block: '<S15>/PCI 6221 PFI DI ' (pfidinipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (xpcinterrupt): '<S20>/IRQ Source' incorporates:
   *  Start for SubSystem: '<S20>/RS232 ISR'
   */
  Analog_Solut_RS232ISR_Start();

  /* End of Start for S-Function (xpcinterrupt): '<S20>/IRQ Source' */

  /* Start for S-Function (fiforeadhdr): '<S17>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S17>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S16>/Constant' */
  Analog_Solution_B.Constant = Analog_Solution_P.Constant_Value_bd;

  /* Start for Constant: '<S16>/Constant1' */
  Analog_Solution_B.Constant1_d = Analog_Solution_P.Constant1_Value_c;

  /* Start for Constant: '<S16>/Constant2' */
  Analog_Solution_B.Constant2_j = Analog_Solution_P.Constant2_Value_j;

  /* Start for Constant: '<S16>/Constant3' */
  Analog_Solution_B.Constant3_h = Analog_Solution_P.Constant3_Value_d2;

  /* Start for S-Function (fiforeadhdr): '<S18>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S18>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fiforeadhdr): '<S19>/FIFO ASCII read ' */
  /* Level2 S-Function Block: '<S19>/FIFO ASCII read ' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S20>/FIFO write 1' */
  /* Level2 S-Function Block: '<S20>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S20>/Enable TX 1' */
  /* Level2 S-Function Block: '<S20>/Enable TX 1' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[33];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S20>/FIFO write 2' */
  /* Level2 S-Function Block: '<S20>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[34];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S20>/Enable TX 2' */
  /* Level2 S-Function Block: '<S20>/Enable TX 2' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[35];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S20>/FIFO write 3' */
  /* Level2 S-Function Block: '<S20>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[36];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S20>/Enable TX 3' */
  /* Level2 S-Function Block: '<S20>/Enable TX 3' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[37];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (fifowrite): '<S20>/FIFO write 4' */
  /* Level2 S-Function Block: '<S20>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[38];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sertxenable): '<S20>/Enable TX 4' */
  /* Level2 S-Function Block: '<S20>/Enable TX 4' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[39];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S20>/Setup1' */
  /* Level2 S-Function Block: '<S20>/Setup1' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[40];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S20>/Setup2' */
  /* Level2 S-Function Block: '<S20>/Setup2' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[41];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S20>/Setup3' */
  /* Level2 S-Function Block: '<S20>/Setup3' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[42];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (setupqua): '<S20>/Setup4' */
  /* Level2 S-Function Block: '<S20>/Setup4' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[43];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S5>/Constant1' */
  Analog_Solution_B.Constant1 = Analog_Solution_P.Constant1_Value_b;

  /* Start for Constant: '<S5>/Constant3' */
  Analog_Solution_B.Constant3 = Analog_Solution_P.Constant3_Value_n;

  /* Start for S-Function (pfidonipcim): '<S5>/PCI 6221 PFI DO ' */
  /* Level2 S-Function Block: '<S5>/PCI 6221 PFI DO ' (pfidonipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[44];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (danipcim): '<S5>/PCI-6221 DA' */
  /* Level2 S-Function Block: '<S5>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[45];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S86>/S-Function' */

  /* S-Function Block: <S86>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Outputs/Switch2"));
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Outputs/Switch2"),"%15.6f");
        rl32eSetScope(5, 4, 250);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("Outputs/Switch2"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 0.0);
        rl32eSetTargetScope(5, 11, -10.0);
        rl32eSetTargetScope(5, 10, 10.0);
        xpceScopeAcqOK(5, &Analog_Solution_DW.SFunction_IWORK_n.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Start for S-Function (scblock): '<S87>/S-Function' */

  /* S-Function Block: <S87>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("Outputs/Switch1"));
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Outputs/Switch1"),"%15.6f");
        rl32eSetScope(6, 4, 250);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("Outputs/Switch1"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 1, 0.0);
        rl32eSetTargetScope(6, 11, -10.0);
        rl32eSetTargetScope(6, 10, 10.0);
        xpceScopeAcqOK(6, &Analog_Solution_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* Start for S-Function (donipcim): '<S5>/PCI-6221 DO' */
  /* Level2 S-Function Block: '<S5>/PCI-6221 DO' (donipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[46];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S90>/S-Function' */

  /* S-Function Block: <S90>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(7)) == 0) {
      if ((i = rl32eDefScope(7,2)) != 0) {
        printf("Error creating scope 7\n");
      } else {
        rl32eAddSignal(7, rl32eGetSignalNo("Spooling_Speed_Controlled/Switch5"));
        rl32eSetTargetScopeSigFt(7,rl32eGetSignalNo(
          "Spooling_Speed_Controlled/Switch5"),"%15.6f");
        rl32eSetScope(7, 4, 250);
        rl32eSetScope(7, 5, 0);
        rl32eSetScope(7, 6, 1);
        rl32eSetScope(7, 0, 0);
        rl32eSetScope(7, 3, rl32eGetSignalNo("Spooling_Speed_Controlled/Switch5"));
        rl32eSetScope(7, 1, 0.0);
        rl32eSetScope(7, 2, 0);
        rl32eSetScope(7, 9, 0);
        rl32eSetTargetScope(7, 1, 0.0);
        rl32eSetTargetScope(7, 11, 0.0);
        rl32eSetTargetScope(7, 10, 0.0);
        xpceScopeAcqOK(7, &Analog_Solution_DW.SFunction_IWORK_gb.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* Start for S-Function (scblock): '<S91>/S-Function' */

  /* S-Function Block: <S91>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(14)) == 0) {
      if ((i = rl32eDefScope(14,2)) != 0) {
        printf("Error creating scope 14\n");
      } else {
        rl32eAddSignal(14, rl32eGetSignalNo("Spooling_Speed_Controlled/Switch4"));
        rl32eSetTargetScopeSigFt(14,rl32eGetSignalNo(
          "Spooling_Speed_Controlled/Switch4"),"%15.6f");
        rl32eSetScope(14, 4, 250);
        rl32eSetScope(14, 5, 0);
        rl32eSetScope(14, 6, 1);
        rl32eSetScope(14, 0, 0);
        rl32eSetScope(14, 3, rl32eGetSignalNo(
          "Spooling_Speed_Controlled/Switch4"));
        rl32eSetScope(14, 1, 0.0);
        rl32eSetScope(14, 2, 0);
        rl32eSetScope(14, 9, 0);
        rl32eSetTargetScope(14, 1, 0.0);
        rl32eSetTargetScope(14, 11, 0.0);
        rl32eSetTargetScope(14, 10, 0.0);
        xpceScopeAcqOK(14, &Analog_Solution_DW.SFunction_IWORK_i.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(14);
    }
  }

  /* Start for S-Function (scblock): '<S98>/S-Function' */

  /* S-Function Block: <S98>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(15)) == 0) {
      if ((i = rl32eDefScope(15,2)) != 0) {
        printf("Error creating scope 15\n");
      } else {
        rl32eAddSignal(15, rl32eGetSignalNo("Winch_Conrtol/damper/Sum1"));
        rl32eSetTargetScopeSigFt(15,rl32eGetSignalNo("Winch_Conrtol/damper/Sum1"),
          "%15.6f");
        rl32eSetScope(15, 4, 250);
        rl32eSetScope(15, 5, 0);
        rl32eSetScope(15, 6, 1);
        rl32eSetScope(15, 0, 0);
        rl32eSetScope(15, 3, rl32eGetSignalNo("Winch_Conrtol/damper/Sum1"));
        rl32eSetScope(15, 1, 0.0);
        rl32eSetScope(15, 2, 0);
        rl32eSetScope(15, 9, 0);
        rl32eSetTargetScope(15, 1, 0.0);
        rl32eSetTargetScope(15, 11, 0.0);
        rl32eSetTargetScope(15, 10, 0.0);
        xpceScopeAcqOK(15, &Analog_Solution_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(15);
    }
  }

  /* Start for S-Function (scblock): '<S99>/S-Function' */

  /* S-Function Block: <S99>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(16)) == 0) {
      if ((i = rl32eDefScope(16,2)) != 0) {
        printf("Error creating scope 16\n");
      } else {
        rl32eAddSignal(16, rl32eGetSignalNo(
          "Inputs/Analog Inputs/PCI-6221 AD/p5"));
        rl32eSetTargetScopeSigFt(16,rl32eGetSignalNo(
          "Inputs/Analog Inputs/PCI-6221 AD/p5"),"%15.6f");
        rl32eSetScope(16, 4, 250);
        rl32eSetScope(16, 5, 0);
        rl32eSetScope(16, 6, 1);
        rl32eSetScope(16, 0, 0);
        rl32eSetScope(16, 3, rl32eGetSignalNo(
          "Inputs/Analog Inputs/PCI-6221 AD/p5"));
        rl32eSetScope(16, 1, 0.0);
        rl32eSetScope(16, 2, 0);
        rl32eSetScope(16, 9, 0);
        rl32eSetTargetScope(16, 1, 0.0);
        rl32eSetTargetScope(16, 11, 0.0);
        rl32eSetTargetScope(16, 10, 0.0);
        xpceScopeAcqOK(16, &Analog_Solution_DW.SFunction_IWORK_e.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(16);
    }
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
      rtmSetErrorStatus(Analog_Solution_M,
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
      rtmSetErrorStatus(Analog_Solution_M, ermsg);
      return;
    }
  }

  xpcOutpB( 0xA0, 0x20 );
  xpcOutpB( 0x20, 0x20 );

  {
    int32_T i;
    Analog_Solution_M->Timing.rtmDbBufReadBuf4 = 0xFF;
    Analog_Solution_M->Timing.rtmDbBufWriteBuf4 = 0xFF;
    Analog_Solution_M->Timing.rtmDbBufLastBufWr4 = 0;

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    Analog_Solution_DW.UnitDelay_DSTATE =
      Analog_Solution_P.UnitDelay_InitialCondition;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
    Analog_Solution_DW.DiscreteTransferFcn_states[0] =
      Analog_Solution_P.DiscreteTransferFcn_InitialStat;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
    Analog_Solution_DW.DiscreteTransferFcn1_states[0] =
      Analog_Solution_P.DiscreteTransferFcn1_InitialSta;

    /* InitializeConditions for DiscreteStateSpace: '<S13>/Discrete State-Space' */
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[0] =
      Analog_Solution_P.x0_Winch[0];

    /* InitializeConditions for DiscreteTransferFcn: '<S13>/Discrete Transfer Fcn' */
    Analog_Solution_DW.DiscreteTransferFcn_states_n[0] =
      Analog_Solution_P.DiscreteTransferFcn_InitialSt_m;

    /* InitializeConditions for DiscreteTransferFcn: '<S12>/Discrete Transfer Fcn1' */
    Analog_Solution_DW.DiscreteTransferFcn1_states_h[0] =
      Analog_Solution_P.DiscreteTransferFcn1_InitialS_h;

    /* InitializeConditions for DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
    Analog_Solution_DW.DiscreteTransferFcn1_states_n[0] =
      Analog_Solution_P.DiscreteTransferFcn1_InitialS_d;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn' */
    Analog_Solution_DW.DiscreteTransferFcn_states[1] =
      Analog_Solution_P.DiscreteTransferFcn_InitialStat;

    /* InitializeConditions for DiscreteTransferFcn: '<S9>/Discrete Transfer Fcn1' */
    Analog_Solution_DW.DiscreteTransferFcn1_states[1] =
      Analog_Solution_P.DiscreteTransferFcn1_InitialSta;

    /* InitializeConditions for DiscreteStateSpace: '<S13>/Discrete State-Space' */
    Analog_Solution_DW.DiscreteStateSpace_DSTATE[1] =
      Analog_Solution_P.x0_Winch[1];

    /* InitializeConditions for DiscreteTransferFcn: '<S13>/Discrete Transfer Fcn' */
    Analog_Solution_DW.DiscreteTransferFcn_states_n[1] =
      Analog_Solution_P.DiscreteTransferFcn_InitialSt_m;

    /* InitializeConditions for DiscreteTransferFcn: '<S12>/Discrete Transfer Fcn1' */
    Analog_Solution_DW.DiscreteTransferFcn1_states_h[1] =
      Analog_Solution_P.DiscreteTransferFcn1_InitialS_h;

    /* InitializeConditions for DiscreteTransferFcn: '<S11>/Discrete Transfer Fcn1' */
    Analog_Solution_DW.DiscreteTransferFcn1_states_n[1] =
      Analog_Solution_P.DiscreteTransferFcn1_InitialS_d;

    /* InitializeConditions for Delay: '<S11>/Delay' */
    Analog_Solution_DW.Delay_DSTATE[0] =
      Analog_Solution_P.Delay_InitialCondition;
    Analog_Solution_DW.Delay_DSTATE[1] =
      Analog_Solution_P.Delay_InitialCondition;
    Analog_Solution_DW.Delay_DSTATE[2] =
      Analog_Solution_P.Delay_InitialCondition;

    /* InitializeConditions for Delay: '<S6>/Delay1' */
    Analog_Solution_DW.Delay1_DSTATE = Analog_Solution_P.Delay1_InitialCondition;

    /* InitializeConditions for Delay: '<S6>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_c =
      Analog_Solution_P.Delay_InitialCondition_b;

    /* InitializeConditions for Delay: '<S8>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_h =
      Analog_Solution_P.Delay_InitialCondition_a;

    /* InitializeConditions for Delay: '<S100>/Delay3' */
    Analog_Solution_DW.Delay3_DSTATE = Analog_Solution_P.Delay3_InitialCondition;

    /* InitializeConditions for Delay: '<S100>/Delay1' */
    Analog_Solution_DW.Delay1_DSTATE_p =
      Analog_Solution_P.Delay1_InitialCondition_a;

    /* InitializeConditions for Delay: '<S100>/Delay4' */
    Analog_Solution_DW.Delay4_DSTATE = Analog_Solution_P.Delay4_InitialCondition;

    /* InitializeConditions for Delay: '<S97>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_p =
      Analog_Solution_P.Delay_InitialCondition_b5;

    /* InitializeConditions for Delay: '<S103>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_p2 =
      Analog_Solution_P.Delay_InitialCondition_au;

    /* InitializeConditions for Delay: '<S103>/Delay1' */
    Analog_Solution_DW.Delay1_DSTATE_b =
      Analog_Solution_P.Delay1_InitialCondition_n;

    /* InitializeConditions for Delay: '<S100>/Delay2' */
    Analog_Solution_DW.Delay2_DSTATE = Analog_Solution_P.Delay2_InitialCondition;

    /* InitializeConditions for Delay: '<S101>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_i =
      Analog_Solution_P.Delay_InitialCondition_c;

    /* InitializeConditions for Delay: '<S101>/Delay1' */
    Analog_Solution_DW.Delay1_DSTATE_n =
      Analog_Solution_P.Delay1_InitialCondition_a0;

    /* InitializeConditions for Delay: '<S94>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_a =
      Analog_Solution_P.Delay_InitialCondition_aq;

    /* InitializeConditions for Delay: '<S92>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_j =
      Analog_Solution_P.Delay_InitialCondition_bo;

    /* InitializeConditions for Delay: '<S95>/Delay' */
    Analog_Solution_DW.Delay_DSTATE_ag =
      Analog_Solution_P.Delay_InitialCondition_m;

    /* InitializeConditions for Delay: '<S92>/Delay1' */
    Analog_Solution_DW.Delay1_DSTATE_c =
      Analog_Solution_P.Delay1_InitialCondition_n4;

    /* SystemInitialize for Enabled SubSystem: '<S19>/Data_validation' */
    /* SystemInitialize for Outport: '<S24>/IMU_data_valid' */
    for (i = 0; i < 38; i++) {
      Analog_Solution_B.IMU_data[i] = Analog_Solution_P.IMU_data_valid_Y0;
    }

    /* End of SystemInitialize for Outport: '<S24>/IMU_data_valid' */
    /* End of SystemInitialize for SubSystem: '<S19>/Data_validation' */
  }
}

/* Model terminate function */
static void Analog_Solution_terminate(void)
{
  /* user code (Terminate function Header) */

  /* Stop first, then deregister, else the board could interrupt
   * after deregistering and before the stop.
   */
  /* disable interrupt for IRQ 2 */
  xpceDeRegisterISR( &xpcDev_1 );

  /* Terminate for S-Function (xpcwalltime): '<S4>/Wall Time 1' */
  /* Level2 S-Function Block: '<S4>/Wall Time 1' (xpcwalltime) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (adnipcim): '<S14>/PCI-6221 AD' */
  /* Level2 S-Function Block: '<S14>/PCI-6221 AD' (adnipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dinipcim): '<S15>/PCI-6221 DI' */
  /* Level2 S-Function Block: '<S15>/PCI-6221 DI' (dinipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (pfidinipcim): '<S15>/PCI 6221 PFI DI ' */
  /* Level2 S-Function Block: '<S15>/PCI 6221 PFI DI ' (pfidinipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcinterrupt): '<S20>/IRQ Source' incorporates:
   *  Terminate for SubSystem: '<S20>/RS232 ISR'
   */
  Analog_Soluti_RS232ISR_Term();

  /* End of Terminate for S-Function (xpcinterrupt): '<S20>/IRQ Source' */

  /* Terminate for S-Function (fiforeadhdr): '<S17>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S17>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforeadhdr): '<S18>/FIFO ASCII read 1' */
  /* Level2 S-Function Block: '<S18>/FIFO ASCII read 1' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fiforeadhdr): '<S19>/FIFO ASCII read ' */
  /* Level2 S-Function Block: '<S19>/FIFO ASCII read ' (fiforeadhdr) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S20>/FIFO write 1' */
  /* Level2 S-Function Block: '<S20>/FIFO write 1' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S20>/Enable TX 1' */
  /* Level2 S-Function Block: '<S20>/Enable TX 1' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S20>/FIFO write 2' */
  /* Level2 S-Function Block: '<S20>/FIFO write 2' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S20>/Enable TX 2' */
  /* Level2 S-Function Block: '<S20>/Enable TX 2' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S20>/FIFO write 3' */
  /* Level2 S-Function Block: '<S20>/FIFO write 3' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S20>/Enable TX 3' */
  /* Level2 S-Function Block: '<S20>/Enable TX 3' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (fifowrite): '<S20>/FIFO write 4' */
  /* Level2 S-Function Block: '<S20>/FIFO write 4' (fifowrite) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[38];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sertxenable): '<S20>/Enable TX 4' */
  /* Level2 S-Function Block: '<S20>/Enable TX 4' (sertxenable) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[39];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S20>/Setup1' */
  /* Level2 S-Function Block: '<S20>/Setup1' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[40];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S20>/Setup2' */
  /* Level2 S-Function Block: '<S20>/Setup2' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[41];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S20>/Setup3' */
  /* Level2 S-Function Block: '<S20>/Setup3' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[42];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (setupqua): '<S20>/Setup4' */
  /* Level2 S-Function Block: '<S20>/Setup4' (setupqua) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[43];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (pfidonipcim): '<S5>/PCI 6221 PFI DO ' */
  /* Level2 S-Function Block: '<S5>/PCI 6221 PFI DO ' (pfidonipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[44];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (danipcim): '<S5>/PCI-6221 DA' */
  /* Level2 S-Function Block: '<S5>/PCI-6221 DA' (danipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[45];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (donipcim): '<S5>/PCI-6221 DO' */
  /* Level2 S-Function Block: '<S5>/PCI-6221 DO' (donipcim) */
  {
    SimStruct *rts = Analog_Solution_M->childSfunctions[46];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Analog_Solution_output(tid);
}

void MdlUpdate(int_T tid)
{
  Analog_Solution_update(tid);
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
  Analog_Solution_initialize();
}

void MdlTerminate(void)
{
  Analog_Solution_terminate();
}

/* Registration function */
RT_MODEL_Analog_Solution_T *Analog_Solution(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Analog_Solution_M, 0,
                sizeof(RT_MODEL_Analog_Solution_T));
  rtsiSetSolverName(&Analog_Solution_M->solverInfo,"FixedStepDiscrete");
  Analog_Solution_M->solverInfoPtr = (&Analog_Solution_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Analog_Solution_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    Analog_Solution_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Analog_Solution_M->Timing.sampleTimes =
      (&Analog_Solution_M->Timing.sampleTimesArray[0]);
    Analog_Solution_M->Timing.offsetTimes =
      (&Analog_Solution_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Analog_Solution_M->Timing.sampleTimes[0] = (0.001);
    Analog_Solution_M->Timing.sampleTimes[1] = (0.01);
    Analog_Solution_M->Timing.sampleTimes[2] = (0.02);
    Analog_Solution_M->Timing.sampleTimes[3] = (1.0);

    /* task offsets */
    Analog_Solution_M->Timing.offsetTimes[0] = (0.0);
    Analog_Solution_M->Timing.offsetTimes[1] = (0.0);
    Analog_Solution_M->Timing.offsetTimes[2] = (0.0);
    Analog_Solution_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(Analog_Solution_M, &Analog_Solution_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Analog_Solution_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      Analog_Solution_M->Timing.perTaskSampleHitsArray;
    Analog_Solution_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    Analog_Solution_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Analog_Solution_M, -1);
  Analog_Solution_M->Timing.stepSize0 = 0.001;
  Analog_Solution_M->Timing.stepSize1 = 0.01;
  Analog_Solution_M->Timing.stepSize2 = 0.02;
  Analog_Solution_M->Timing.stepSize3 = 1.0;
  Analog_Solution_M->Timing.stepSize4 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Analog_Solution_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Analog_Solution_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Analog_Solution_M->rtwLogInfo, (NULL));
    rtliSetLogT(Analog_Solution_M->rtwLogInfo, "");
    rtliSetLogX(Analog_Solution_M->rtwLogInfo, "");
    rtliSetLogXFinal(Analog_Solution_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Analog_Solution_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Analog_Solution_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(Analog_Solution_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Analog_Solution_M->rtwLogInfo, 1);
    rtliSetLogY(Analog_Solution_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Analog_Solution_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Analog_Solution_M->rtwLogInfo, (NULL));
  }

  Analog_Solution_M->solverInfoPtr = (&Analog_Solution_M->solverInfo);
  Analog_Solution_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Analog_Solution_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Analog_Solution_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  Analog_Solution_M->blockIO = ((void *) &Analog_Solution_B);
  (void) memset(((void *) &Analog_Solution_B), 0,
                sizeof(B_Analog_Solution_T));

  {
    Analog_Solution_B.RateTransition = serialfifoground;
    Analog_Solution_B.RateTransition2 = serialfifoground;
    Analog_Solution_B.RateTransition4 = serialfifoground;
    Analog_Solution_B.RateTransition6 = serialfifoground;
    Analog_Solution_B.RateTransition5 = serialfifoground;
    Analog_Solution_B.RateTransition4_p = serialfifoground;
    Analog_Solution_B.RateTransition3 = serialfifoground;
    Analog_Solution_B.RateTransition4_d = serialfifoground;
    Analog_Solution_B.RateTransition1 = serialfifoground;
    Analog_Solution_B.RateTransition4_f = serialfifoground;
    Analog_Solution_B.FIFOwrite1_o1 = serialfifoground;
    Analog_Solution_B.FIFOwrite2_o1 = serialfifoground;
    Analog_Solution_B.FIFOwrite3_o1 = serialfifoground;
    Analog_Solution_B.FIFOwrite4_o1 = serialfifoground;
    Analog_Solution_B.RateTransition7 = serialfifoground;
    Analog_Solution_B.FIFOwrite1 = serialfifoground;
    Analog_Solution_B.FIFOwrite2 = serialfifoground;
    Analog_Solution_B.FIFOwrite3 = serialfifoground;
    Analog_Solution_B.FIFOwrite4 = serialfifoground;
  }

  /* parameters */
  Analog_Solution_M->defaultParam = ((real_T *)&Analog_Solution_P);

  /* states (dwork) */
  Analog_Solution_M->dwork = ((void *) &Analog_Solution_DW);
  (void) memset((void *)&Analog_Solution_DW, 0,
                sizeof(DW_Analog_Solution_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  Analog_Solution_InitializeDataMapInfo(Analog_Solution_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Analog_Solution_M->NonInlinedSFcns.sfcnInfo;
    Analog_Solution_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Analog_Solution_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &Analog_Solution_M->Sizes.numSampTimes);
    Analog_Solution_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Analog_Solution_M)[0]);
    Analog_Solution_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (Analog_Solution_M)[1]);
    Analog_Solution_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (Analog_Solution_M)[2]);
    Analog_Solution_M->NonInlinedSFcns.taskTimePtrs[3] = &(rtmGetTPtr
      (Analog_Solution_M)[3]);
    Analog_Solution_M->NonInlinedSFcns.taskTimePtrs[4] = &(rtmGetTPtr
      (Analog_Solution_M)[4]);
    rtssSetTPtrPtr(sfcnInfo,Analog_Solution_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Analog_Solution_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Analog_Solution_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Analog_Solution_M));
    rtssSetStepSizePtr(sfcnInfo, &Analog_Solution_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(Analog_Solution_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Analog_Solution_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &Analog_Solution_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &Analog_Solution_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &Analog_Solution_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Analog_Solution_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Analog_Solution_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Analog_Solution_M->solverInfoPtr);
  }

  Analog_Solution_M->Sizes.numSFcns = (47);

  /* register each child */
  {
    (void) memset((void *)&Analog_Solution_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  47*sizeof(SimStruct));
    Analog_Solution_M->childSfunctions =
      (&Analog_Solution_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 47; i++) {
        Analog_Solution_M->childSfunctions[i] =
          (&Analog_Solution_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Analog_Solution/<S78>/Read Int Status1 (iqueryqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.ReadIntStatus1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read Int Status1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read Int Status1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.ReadIntStatus1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.ReadIntStatus1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.ReadIntStatus1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.ReadIntStatus1_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason5 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason5");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason5");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason5_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason5_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason5_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO read 1 (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.RateTransition);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FilterIntReason5);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Analog_Solution_B.Constant1_p);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.FIFOread1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Analog_Solution_B.FIFOread1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOread1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOread1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOread1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOread1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOread1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.FIFOread1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.FIFOread1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.FIFOread1_P8_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Write HW FIFO1 (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.FIFOread1_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FIFOread1_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.WriteHWFIFO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.WriteHWFIFO1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.WriteHWFIFO1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.WriteHWFIFO1_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.WriteHWFIFO1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.WriteHWFIFO1_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason6 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[4]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason6");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason6");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason6_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason6_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason6_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO read 2 (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[5]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.RateTransition2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FilterIntReason6);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Analog_Solution_B.Constant2);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.FIFOread2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Analog_Solution_B.FIFOread2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 2");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOread2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOread2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOread2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOread2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOread2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.FIFOread2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.FIFOread2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.FIFOread2_P8_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Write HW FIFO2 (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[6]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.FIFOread2_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FIFOread2_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO2");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.WriteHWFIFO2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.WriteHWFIFO2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.WriteHWFIFO2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.WriteHWFIFO2_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.WriteHWFIFO2_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.WriteHWFIFO2_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason7 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[7]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason7));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason7");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason7");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason7_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason7_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason7_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO read 3 (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[8]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.RateTransition4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FilterIntReason7);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Analog_Solution_B.Constant3_o);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.FIFOread3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Analog_Solution_B.FIFOread3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 3");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOread3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOread3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOread3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOread3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOread3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.FIFOread3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.FIFOread3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.FIFOread3_P8_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Write HW FIFO3 (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[9]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.FIFOread3_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FIFOread3_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO3");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.WriteHWFIFO3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.WriteHWFIFO3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.WriteHWFIFO3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.WriteHWFIFO3_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.WriteHWFIFO3_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.WriteHWFIFO3_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason8 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[10]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[10]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason8));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason8");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason8");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason8_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason8_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason8_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO read 4 (fiforead) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[11]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[11]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.RateTransition6);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FilterIntReason8);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Analog_Solution_B.Constant4);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 61);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.FIFOread4_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &Analog_Solution_B.FIFOread4_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO read 4");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO read 4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOread4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOread4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOread4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOread4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOread4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.FIFOread4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.FIFOread4_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.FIFOread4_P8_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Write HW FIFO4 (serwritequa) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[12]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[12]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.FIFOread4_o1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 61);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.FIFOread4_o2);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write HW FIFO4");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Write HW FIFO4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.WriteHWFIFO4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.WriteHWFIFO4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.WriteHWFIFO4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.WriteHWFIFO4_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.WriteHWFIFO4_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.WriteHWFIFO4_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason1 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[13]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[13]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason1_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Read HW FIFO1 (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[14]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[14]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FilterIntReason1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.ReadHWFIFO1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.ReadHWFIFO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.ReadHWFIFO1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.ReadHWFIFO1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.ReadHWFIFO1_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.ReadHWFIFO1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.ReadHWFIFO1_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO write 1 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[15]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[15]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadHWFIFO1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite1));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite1_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite1_IWORK_n[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite1_PWORK_d);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite1_IWORK_n[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite1_PWORK_d);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason2 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[16]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[16]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason2");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason2_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Read HW FIFO2 (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[17]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[17]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FilterIntReason2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.ReadHWFIFO2));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO2");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.ReadHWFIFO2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.ReadHWFIFO2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.ReadHWFIFO2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.ReadHWFIFO2_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.ReadHWFIFO2_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.ReadHWFIFO2_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO write 2 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[18]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[18]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadHWFIFO2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 2");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite2_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite2_IWORK_i[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite2_PWORK_g);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite2_IWORK_i[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite2_PWORK_g);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason3 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[19]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[19]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason3");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason3_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Read HW FIFO3 (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[20]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[20]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FilterIntReason3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.ReadHWFIFO3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO3");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.ReadHWFIFO3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.ReadHWFIFO3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.ReadHWFIFO3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.ReadHWFIFO3_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.ReadHWFIFO3_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.ReadHWFIFO3_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO write 3 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[21]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[21]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadHWFIFO3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite3));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 3");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite3_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite3_IWORK_g[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite3_PWORK_l);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite3_IWORK_g[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite3_PWORK_l);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Filter Int Reason4 (filterqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[22]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[22]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadIntStatus1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &Analog_Solution_B.FilterIntReason4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Filter Int Reason4");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Filter Int Reason4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FilterIntReason4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FilterIntReason4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FilterIntReason4_P3_Size);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/Read HW FIFO4 (serreadqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[23]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[23]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FilterIntReason4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 65);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            Analog_Solution_B.ReadHWFIFO4));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read HW FIFO4");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/Read HW FIFO4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.ReadHWFIFO4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.ReadHWFIFO4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.ReadHWFIFO4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.ReadHWFIFO4_P4_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.ReadHWFIFO4_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.ReadHWFIFO4_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S78>/FIFO write 4 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[24]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[24]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, Analog_Solution_B.ReadHWFIFO4);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 65);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn24.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite4));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 4");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem/FIFO write 4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite4_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite4_IWORK_f[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite4_PWORK_o);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite4_IWORK_f[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite4_PWORK_o);
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

    /* Level2 S-Function Block: Analog_Solution/<S4>/Wall Time 1 (xpcwalltime) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[25]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[25]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 6);
          ssSetOutputPortSignal(rts, 0, ((uint16_T *)
            Analog_Solution_B.WallTime1));
        }
      }

      /* path info */
      ssSetModelName(rts, "Wall Time 1");
      ssSetPath(rts, "Analog_Solution/Logging/Wall Time 1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.WallTime1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.WallTime1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.WallTime1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.WallTime1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.WallTime1_P5_Size);
      }

      /* registration */
      xpcwalltime(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 1.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 3;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Analog_Solution/<S14>/PCI-6221 AD (adnipcim) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[26]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[26]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn26.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 5);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Analog_Solution_B.AI_Joy_W));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &Analog_Solution_B.AI_Joy_S));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &Analog_Solution_B.AI_mot_SiemensMotor_Speed));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &Analog_Solution_B.AI_mot_winch_pos));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &Analog_Solution_B.AI_Kraftsensor));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 AD");
      ssSetPath(rts, "Analog_Solution/Inputs/Analog Inputs/PCI-6221 AD");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.PCI6221AD_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.PCI6221AD_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.PCI6221AD_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.PCI6221AD_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.PCI6221AD_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.PCI6221AD_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.PCI6221AD_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.PCI6221AD_IWORK[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.PCI6221AD_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 41);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.PCI6221AD_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.PCI6221AD_PWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S15>/PCI-6221 DI (dinipcim) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[27]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[27]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn27.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 7);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &Analog_Solution_B.DI_Enable));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &Analog_Solution_B.DI_WinchMode));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &Analog_Solution_B.DI_Takeoff));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &Analog_Solution_B.DI_Landing));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &Analog_Solution_B.DI_Operator));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            &Analog_Solution_B.DI_SpoolingGrenze1));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *)
            &Analog_Solution_B.DI_SpoolingGrenze2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 DI");
      ssSetPath(rts, "Analog_Solution/Inputs/Digital Inputs/PCI-6221 DI");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.PCI6221DI_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.PCI6221DI_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.PCI6221DI_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.PCI6221DI_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.PCI6221DI_P5_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.PCI6221DI_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.PCI6221DI_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S15>/PCI 6221 PFI DI  (pfidinipcim) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[28]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[28]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn28.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Analog_Solution_B.DI_SlideLimitB));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI 6221 PFI DI ");
      ssSetPath(rts, "Analog_Solution/Inputs/Digital Inputs/PCI 6221 PFI DI ");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.PCI6221PFIDI_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.PCI6221PFIDI_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.PCI6221PFIDI_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.PCI6221PFIDI_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.PCI6221PFIDI_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Analog_Solution_DW.PCI6221PFIDI_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.PCI6221PFIDI_PWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S17>/FIFO ASCII read 1 (fiforeadhdr) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[29]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[29]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.RateTransition4_p);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn29.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 41);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            Analog_Solution_B.FIFOASCIIread1));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO ASCII read 1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/Compass_read/FIFO ASCII read 1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOASCIIread1_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOASCIIread1_PWORK[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S18>/FIFO ASCII read 1 (fiforeadhdr) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[30]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[30]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn30.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.RateTransition4_d);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn30.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 91);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            Analog_Solution_B.FIFOASCIIread1_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO ASCII read 1");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/GPS_read/FIFO ASCII read 1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P4_Size_c);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P5_Size_o);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P6_Size_n);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P7_Size_c);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Analog_Solution_P.FIFOASCIIread1_P8_Size_l);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOASCIIread1_PWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn30.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn30.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOASCIIread1_PWORK_c[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S19>/FIFO ASCII read  (fiforeadhdr) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[31]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[31]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.RateTransition4_f);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn31.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1025);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            Analog_Solution_B.FIFOASCIIread));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO ASCII read ");
      ssSetPath(rts,
                "Analog_Solution/Inputs/RS232_read/IMU_read/FIFO ASCII read ");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 8);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOASCIIread_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOASCIIread_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOASCIIread_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOASCIIread_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOASCIIread_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.FIFOASCIIread_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.FIFOASCIIread_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.FIFOASCIIread_P8_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOASCIIread_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn31.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn31.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOASCIIread_PWORK[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/FIFO write 1 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[32]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[32]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[32]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn32.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.Constant);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn32.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Analog_Solution_B.FIFOwrite1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 1");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/FIFO write 1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite1_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite1_P2_Size_e);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite1_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite1_P4_Size_m);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite1_P5_Size_a);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite1_IWORK[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn32.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn32.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite1_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite1_PWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Enable TX 1 (sertxenable) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[33]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[33]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FIFOwrite1_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 1");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Enable TX 1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.EnableTX1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.EnableTX1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.EnableTX1_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.EnableTX1_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn33.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn33.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.EnableTX1_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/FIFO write 2 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[34]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[34]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[34]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn34.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.Constant1_d);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn34.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Analog_Solution_B.FIFOwrite2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 2");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/FIFO write 2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite2_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite2_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite2_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite2_P4_Size_k);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite2_P5_Size_g);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite2_IWORK[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn34.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn34.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite2_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite2_PWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Enable TX 2 (sertxenable) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[35]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[35]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[35]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[35]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn35.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FIFOwrite2_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 2");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Enable TX 2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.EnableTX2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.EnableTX2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.EnableTX2_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.EnableTX2_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn35.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn35.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.EnableTX2_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/FIFO write 3 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[36]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[36]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[36]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.Constant2_j);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn36.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Analog_Solution_B.FIFOwrite3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 3");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/FIFO write 3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite3_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite3_P2_Size_f);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite3_P3_Size_j);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite3_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite3_P5_Size_i);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite3_IWORK[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn36.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn36.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite3_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite3_PWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Enable TX 3 (sertxenable) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[37]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[37]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[37]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[37]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn37.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FIFOwrite3_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 3");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Enable TX 3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.EnableTX3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.EnableTX3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.EnableTX3_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.EnableTX3_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn37.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn37.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.EnableTX3_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/FIFO write 4 (fifowrite) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[38];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn38.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn38.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn38.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[38]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[38]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[38]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[38]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[38]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[38]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn38.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.Constant3_h);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn38.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((serialfifoptr *)
            &Analog_Solution_B.FIFOwrite4_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &Analog_Solution_B.FIFOwrite4_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "FIFO write 4");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/FIFO write 4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn38.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.FIFOwrite4_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.FIFOwrite4_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.FIFOwrite4_P3_Size_g);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.FIFOwrite4_P4_Size_j);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.FIFOwrite4_P5_Size_h);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.FIFOwrite4_IWORK[0]);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.FIFOwrite4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn38.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn38.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.FIFOwrite4_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.FIFOwrite4_PWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Enable TX 4 (sertxenable) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[39];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn39.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn39.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn39.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[39]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[39]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[39]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[39]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[39]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[39]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn39.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.FIFOwrite4_o2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Enable TX 4");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Enable TX 4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn39.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.EnableTX4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.EnableTX4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.EnableTX4_P3_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.EnableTX4_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn39.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn39.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.EnableTX4_IWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Setup1 (setupqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[40];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn40.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn40.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn40.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[40]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[40]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[40]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[40]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[40]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[40]);
      }

      /* path info */
      ssSetModelName(rts, "Setup1");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Setup1");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn40.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.Setup1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.Setup1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.Setup1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.Setup1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.Setup1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.Setup1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.Setup1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.Setup1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Analog_Solution_P.Setup1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Analog_Solution_P.Setup1_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.Setup1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn40.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn40.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.Setup1_IWORK[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Setup2 (setupqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[41];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn41.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn41.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn41.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[41]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[41]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[41]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[41]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[41]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[41]);
      }

      /* path info */
      ssSetModelName(rts, "Setup2");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Setup2");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn41.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.Setup2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.Setup2_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.Setup2_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.Setup2_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.Setup2_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.Setup2_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.Setup2_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.Setup2_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Analog_Solution_P.Setup2_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Analog_Solution_P.Setup2_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.Setup2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn41.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn41.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.Setup2_IWORK[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Setup3 (setupqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[42];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn42.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn42.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn42.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[42]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[42]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[42]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[42]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[42]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[42]);
      }

      /* path info */
      ssSetModelName(rts, "Setup3");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Setup3");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn42.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.Setup3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.Setup3_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.Setup3_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.Setup3_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.Setup3_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.Setup3_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.Setup3_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.Setup3_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Analog_Solution_P.Setup3_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Analog_Solution_P.Setup3_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.Setup3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn42.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn42.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.Setup3_IWORK[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S20>/Setup4 (setupqua) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[43];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn43.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn43.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn43.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[43]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[43]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[43]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[43]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[43]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[43]);
      }

      /* path info */
      ssSetModelName(rts, "Setup4");
      ssSetPath(rts, "Analog_Solution/Inputs/RS232_read/QSC-100 F/Setup4");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn43.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.Setup4_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.Setup4_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.Setup4_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.Setup4_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.Setup4_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.Setup4_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.Setup4_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)Analog_Solution_P.Setup4_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)Analog_Solution_P.Setup4_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)Analog_Solution_P.Setup4_P10_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.Setup4_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn43.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn43.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.Setup4_IWORK[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S5>/PCI 6221 PFI DO  (pfidonipcim) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[44];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn44.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn44.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn44.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[44]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[44]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[44]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[44]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[44]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[44]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn44.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Analog_Solution_B.Constant1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &Analog_Solution_B.Constant3);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &Analog_Solution_B.DI_Landing);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI 6221 PFI DO ");
      ssSetPath(rts, "Analog_Solution/Outputs/PCI 6221 PFI DO ");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn44.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.PCI6221PFIDO_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.PCI6221PFIDO_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.PCI6221PFIDO_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.PCI6221PFIDO_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.PCI6221PFIDO_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.PCI6221PFIDO_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.PCI6221PFIDO_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.PCI6221PFIDO_IWORK);
      ssSetPWork(rts, (void **) &Analog_Solution_DW.PCI6221PFIDO_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn44.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn44.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.PCI6221PFIDO_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.PCI6221PFIDO_PWORK);
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

    /* Level2 S-Function Block: Analog_Solution/<S5>/PCI-6221 DA (danipcim) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[45];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn45.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn45.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn45.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[45]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[45]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[45]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[45]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[45]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[45]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn45.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Analog_Solution_M->NonInlinedSFcns.Sfcn45.UPtrs0;
          sfcnUPtrs[0] = &Analog_Solution_B.SiemensOut;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Analog_Solution_M->NonInlinedSFcns.Sfcn45.UPtrs1;
          sfcnUPtrs[0] = &Analog_Solution_B.SpoolingOut;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 DA");
      ssSetPath(rts, "Analog_Solution/Outputs/PCI-6221 DA");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn45.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.PCI6221DA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.PCI6221DA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.PCI6221DA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.PCI6221DA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.PCI6221DA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.PCI6221DA_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.PCI6221DA_P7_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Analog_Solution_DW.PCI6221DA_RWORK[0]);
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.PCI6221DA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn45.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn45.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.PCI6221DA_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 41);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &Analog_Solution_DW.PCI6221DA_IWORK[0]);
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

    /* Level2 S-Function Block: Analog_Solution/<S5>/PCI-6221 DO (donipcim) */
    {
      SimStruct *rts = Analog_Solution_M->childSfunctions[46];

      /* timing info */
      time_T *sfcnPeriod = Analog_Solution_M->NonInlinedSFcns.Sfcn46.sfcnPeriod;
      time_T *sfcnOffset = Analog_Solution_M->NonInlinedSFcns.Sfcn46.sfcnOffset;
      int_T *sfcnTsMap = Analog_Solution_M->NonInlinedSFcns.Sfcn46.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &Analog_Solution_M->NonInlinedSFcns.blkInfo2[46]);
      }

      ssSetRTWSfcnInfo(rts, Analog_Solution_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &Analog_Solution_M->NonInlinedSFcns.methods2[46]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &Analog_Solution_M->NonInlinedSFcns.methods3[46]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &Analog_Solution_M->NonInlinedSFcns.methods4[46]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &Analog_Solution_M->NonInlinedSFcns.statesInfo2[46]);
        ssSetPeriodicStatesInfo(rts,
          &Analog_Solution_M->NonInlinedSFcns.periodicStatesInfo[46]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &Analog_Solution_M->NonInlinedSFcns.Sfcn46.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Analog_Solution_M->NonInlinedSFcns.Sfcn46.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&Analog_Solution_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Analog_Solution_M->NonInlinedSFcns.Sfcn46.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&Analog_Solution_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6221 DO");
      ssSetPath(rts, "Analog_Solution/Outputs/PCI-6221 DO");
      ssSetRTModel(rts,Analog_Solution_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn46.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Analog_Solution_P.PCI6221DO_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)Analog_Solution_P.PCI6221DO_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)Analog_Solution_P.PCI6221DO_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)Analog_Solution_P.PCI6221DO_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)Analog_Solution_P.PCI6221DO_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)Analog_Solution_P.PCI6221DO_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)Analog_Solution_P.PCI6221DO_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Analog_Solution_DW.PCI6221DO_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn46.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Analog_Solution_M->NonInlinedSFcns.Sfcn46.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Analog_Solution_DW.PCI6221DO_IWORK);
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
      _ssSetInputPortConnected(rts, 0, 0);
      _ssSetInputPortConnected(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Initialize Sizes */
  Analog_Solution_M->Sizes.numContStates = (0);/* Number of continuous states */
  Analog_Solution_M->Sizes.numY = (0); /* Number of model outputs */
  Analog_Solution_M->Sizes.numU = (0); /* Number of model inputs */
  Analog_Solution_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Analog_Solution_M->Sizes.numSampTimes = (4);/* Number of sample times */
  Analog_Solution_M->Sizes.numBlocks = (459);/* Number of blocks */
  Analog_Solution_M->Sizes.numBlockIO = (298);/* Number of block outputs */
  Analog_Solution_M->Sizes.numBlockPrms = (1276);/* Sum of parameter "widths" */
  return Analog_Solution_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
