/*
 * speedgoat_test_SN2593_R2016b.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "speedgoat_test_SN2593_R2016b".
 *
 * Model version              : 1.49
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Mon Apr 10 16:16:46 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "speedgoat_test_SN2593_R2016b_capi.h"
#include "speedgoat_test_SN2593_R2016b.h"
#include "speedgoat_test_SN2593_R2016b_private.h"

/* Block signals (auto storage) */
B_speedgoat_test_SN2593_R2016b_T speedgoat_test_SN2593_R2016b_B;

/* Block states (auto storage) */
DW_speedgoat_test_SN2593_R2016b_T speedgoat_test_SN2593_R2016b_DW;

/* Real-time model */
RT_MODEL_speedgoat_test_SN2593_R2016b_T speedgoat_test_SN2593_R2016b_M_;
RT_MODEL_speedgoat_test_SN2593_R2016b_T *const speedgoat_test_SN2593_R2016b_M =
  &speedgoat_test_SN2593_R2016b_M_;

/* Model output function */
static void speedgoat_test_SN2593_R2016b_output(void)
{
  /* S-Function (sg_IO751_setup_s): '<S1>/PNM Setup1' */

  /* Level2 S-Function Block: '<S1>/PNM Setup1' (sg_IO751_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* UnitDelay: '<S3>/Output' */
  speedgoat_test_SN2593_R2016b_B.Output =
    speedgoat_test_SN2593_R2016b_DW.Output_DSTATE;

  /* UnitDelay: '<S4>/Output' */
  speedgoat_test_SN2593_R2016b_B.Output_f =
    speedgoat_test_SN2593_R2016b_DW.Output_DSTATE_n;

  /* S-Function (any2byte): '<S1>/Byte Pack' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   */

  /* Pack: <S1>/Byte Pack */
  (void) memcpy(&speedgoat_test_SN2593_R2016b_B.BytePack[0],
                &speedgoat_test_SN2593_R2016b_B.Output,
                1);
  (void) memcpy(&speedgoat_test_SN2593_R2016b_B.BytePack[1],
                &speedgoat_test_SN2593_R2016b_B.Output_f,
                1);
  (void) memcpy(&speedgoat_test_SN2593_R2016b_B.BytePack[2],
                &speedgoat_test_SN2593_R2016b_P.Constant1_Value,
                1);
  (void) memcpy(&speedgoat_test_SN2593_R2016b_B.BytePack[3],
                &speedgoat_test_SN2593_R2016b_P.Constant_Value,
                1);

  /* S-Function (sg_IO751_send_s): '<S1>/PNM Send1' */

  /* Level2 S-Function Block: '<S1>/PNM Send1' (sg_IO751_send_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[1];
    sfcnOutputs(rts,1);
  }

  /* S-Function (scblock): '<S6>/S-Function' */
  /* ok to acquire for <S6>/S-Function */
  speedgoat_test_SN2593_R2016b_DW.SFunction_IWORK.AcquireOK = 1;

  /* Sum: '<S7>/FixPt Sum1' incorporates:
   *  Constant: '<S7>/FixPt Constant'
   */
  speedgoat_test_SN2593_R2016b_B.FixPtSum1 = (uint8_T)((uint32_T)
    speedgoat_test_SN2593_R2016b_B.Output +
    speedgoat_test_SN2593_R2016b_P.FixPtConstant_Value);

  /* Switch: '<S8>/FixPt Switch' incorporates:
   *  Constant: '<S8>/Constant'
   */
  if (speedgoat_test_SN2593_R2016b_B.FixPtSum1 >
      speedgoat_test_SN2593_R2016b_P.WrapToZero_Threshold) {
    speedgoat_test_SN2593_R2016b_B.FixPtSwitch =
      speedgoat_test_SN2593_R2016b_P.Constant_Value_f;
  } else {
    speedgoat_test_SN2593_R2016b_B.FixPtSwitch =
      speedgoat_test_SN2593_R2016b_B.FixPtSum1;
  }

  /* End of Switch: '<S8>/FixPt Switch' */

  /* Sum: '<S9>/FixPt Sum1' incorporates:
   *  Constant: '<S9>/FixPt Constant'
   */
  speedgoat_test_SN2593_R2016b_B.FixPtSum1_m = (uint8_T)((uint32_T)
    speedgoat_test_SN2593_R2016b_B.Output_f +
    speedgoat_test_SN2593_R2016b_P.FixPtConstant_Value_k);

  /* Switch: '<S10>/FixPt Switch' incorporates:
   *  Constant: '<S10>/Constant'
   */
  if (speedgoat_test_SN2593_R2016b_B.FixPtSum1_m >
      speedgoat_test_SN2593_R2016b_P.WrapToZero_Threshold_c) {
    speedgoat_test_SN2593_R2016b_B.FixPtSwitch_j =
      speedgoat_test_SN2593_R2016b_P.Constant_Value_e;
  } else {
    speedgoat_test_SN2593_R2016b_B.FixPtSwitch_j =
      speedgoat_test_SN2593_R2016b_B.FixPtSum1_m;
  }

  /* End of Switch: '<S10>/FixPt Switch' */

  /* S-Function (scblock): '<S5>/S-Function' */
  /* ok to acquire for <S5>/S-Function */
  speedgoat_test_SN2593_R2016b_DW.SFunction_IWORK_o.AcquireOK = 1;

  /* S-Function (sg_IO751_receive_s): '<S1>/PNM Receive' */

  /* Level2 S-Function Block: '<S1>/PNM Receive' (sg_IO751_receive_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[2];
    sfcnOutputs(rts,1);
  }

  /* S-Function (byte2any): '<S1>/Byte Unpack1' */

  /* Unpack: <S1>/Byte Unpack1 */
  (void) memcpy(&speedgoat_test_SN2593_R2016b_B.ByteUnpack1,
                &speedgoat_test_SN2593_R2016b_B.PNMReceive[0],
                4);
}

/* Model update function */
static void speedgoat_test_SN2593_R2016b_update(void)
{
  /* Update for UnitDelay: '<S3>/Output' */
  speedgoat_test_SN2593_R2016b_DW.Output_DSTATE =
    speedgoat_test_SN2593_R2016b_B.FixPtSwitch;

  /* Update for UnitDelay: '<S4>/Output' */
  speedgoat_test_SN2593_R2016b_DW.Output_DSTATE_n =
    speedgoat_test_SN2593_R2016b_B.FixPtSwitch_j;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speedgoat_test_SN2593_R2016b_M->Timing.clockTick0)) {
    ++speedgoat_test_SN2593_R2016b_M->Timing.clockTickH0;
  }

  speedgoat_test_SN2593_R2016b_M->Timing.t[0] =
    speedgoat_test_SN2593_R2016b_M->Timing.clockTick0 *
    speedgoat_test_SN2593_R2016b_M->Timing.stepSize0 +
    speedgoat_test_SN2593_R2016b_M->Timing.clockTickH0 *
    speedgoat_test_SN2593_R2016b_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++speedgoat_test_SN2593_R2016b_M->Timing.clockTick1)) {
      ++speedgoat_test_SN2593_R2016b_M->Timing.clockTickH1;
    }

    speedgoat_test_SN2593_R2016b_M->Timing.t[1] =
      speedgoat_test_SN2593_R2016b_M->Timing.clockTick1 *
      speedgoat_test_SN2593_R2016b_M->Timing.stepSize1 +
      speedgoat_test_SN2593_R2016b_M->Timing.clockTickH1 *
      speedgoat_test_SN2593_R2016b_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void speedgoat_test_SN2593_R2016b_initialize(void)
{
  /* Start for S-Function (sg_IO751_setup_s): '<S1>/PNM Setup1' */
  /* Level2 S-Function Block: '<S1>/PNM Setup1' (sg_IO751_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO751_send_s): '<S1>/PNM Send1' */
  /* Level2 S-Function Block: '<S1>/PNM Send1' (sg_IO751_send_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S6>/S-Function' */

  /* S-Function Block: <S6>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("IO751/Byte Pack/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo("IO751/Byte Pack/s2"));
        rl32eAddSignal(3, rl32eGetSignalNo("IO751/Byte Pack/s3"));
        rl32eAddSignal(3, rl32eGetSignalNo("IO751/Byte Pack/s4"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("IO751/Byte Pack/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("IO751/Byte Pack/s2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("IO751/Byte Pack/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("IO751/Byte Pack/s4"),
          "%15.6f");
        rl32eSetScope(3, 4, 3);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("IO751/Byte Pack/s1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3,
                       &speedgoat_test_SN2593_R2016b_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* Start for S-Function (scblock): '<S5>/S-Function' */

  /* S-Function Block: <S5>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("IO751/Byte Unpack1"));
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("IO751/Byte Unpack1"),
          "%15.6f");
        rl32eSetScope(4, 4, 3);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("IO751/Byte Unpack1"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 0.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 0.0);
        xpceScopeAcqOK(4,
                       &speedgoat_test_SN2593_R2016b_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* Start for S-Function (sg_IO751_receive_s): '<S1>/PNM Receive' */
  /* Level2 S-Function Block: '<S1>/PNM Receive' (sg_IO751_receive_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for UnitDelay: '<S3>/Output' */
  speedgoat_test_SN2593_R2016b_DW.Output_DSTATE =
    speedgoat_test_SN2593_R2016b_P.Output_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Output' */
  speedgoat_test_SN2593_R2016b_DW.Output_DSTATE_n =
    speedgoat_test_SN2593_R2016b_P.Output_InitialCondition_n;
}

/* Model terminate function */
static void speedgoat_test_SN2593_R2016b_terminate(void)
{
  /* Terminate for S-Function (sg_IO751_setup_s): '<S1>/PNM Setup1' */
  /* Level2 S-Function Block: '<S1>/PNM Setup1' (sg_IO751_setup_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO751_send_s): '<S1>/PNM Send1' */
  /* Level2 S-Function Block: '<S1>/PNM Send1' (sg_IO751_send_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO751_receive_s): '<S1>/PNM Receive' */
  /* Level2 S-Function Block: '<S1>/PNM Receive' (sg_IO751_receive_s) */
  {
    SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  speedgoat_test_SN2593_R2016b_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  speedgoat_test_SN2593_R2016b_update();
  UNUSED_PARAMETER(tid);
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
  speedgoat_test_SN2593_R2016b_initialize();
}

void MdlTerminate(void)
{
  speedgoat_test_SN2593_R2016b_terminate();
}

/* Registration function */
RT_MODEL_speedgoat_test_SN2593_R2016b_T *speedgoat_test_SN2593_R2016b(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)speedgoat_test_SN2593_R2016b_M, 0,
                sizeof(RT_MODEL_speedgoat_test_SN2593_R2016b_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&speedgoat_test_SN2593_R2016b_M->solverInfo,
                          &speedgoat_test_SN2593_R2016b_M->Timing.simTimeStep);
    rtsiSetTPtr(&speedgoat_test_SN2593_R2016b_M->solverInfo, &rtmGetTPtr
                (speedgoat_test_SN2593_R2016b_M));
    rtsiSetStepSizePtr(&speedgoat_test_SN2593_R2016b_M->solverInfo,
                       &speedgoat_test_SN2593_R2016b_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&speedgoat_test_SN2593_R2016b_M->solverInfo,
                          (&rtmGetErrorStatus(speedgoat_test_SN2593_R2016b_M)));
    rtsiSetRTModelPtr(&speedgoat_test_SN2593_R2016b_M->solverInfo,
                      speedgoat_test_SN2593_R2016b_M);
  }

  rtsiSetSimTimeStep(&speedgoat_test_SN2593_R2016b_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&speedgoat_test_SN2593_R2016b_M->solverInfo,
                    "FixedStepDiscrete");
  speedgoat_test_SN2593_R2016b_M->solverInfoPtr =
    (&speedgoat_test_SN2593_R2016b_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      speedgoat_test_SN2593_R2016b_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    speedgoat_test_SN2593_R2016b_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    speedgoat_test_SN2593_R2016b_M->Timing.sampleTimes =
      (&speedgoat_test_SN2593_R2016b_M->Timing.sampleTimesArray[0]);
    speedgoat_test_SN2593_R2016b_M->Timing.offsetTimes =
      (&speedgoat_test_SN2593_R2016b_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speedgoat_test_SN2593_R2016b_M->Timing.sampleTimes[0] = (0.0);
    speedgoat_test_SN2593_R2016b_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    speedgoat_test_SN2593_R2016b_M->Timing.offsetTimes[0] = (0.0);
    speedgoat_test_SN2593_R2016b_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(speedgoat_test_SN2593_R2016b_M,
             &speedgoat_test_SN2593_R2016b_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = speedgoat_test_SN2593_R2016b_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    speedgoat_test_SN2593_R2016b_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speedgoat_test_SN2593_R2016b_M, -1);
  speedgoat_test_SN2593_R2016b_M->Timing.stepSize0 = 0.01;
  speedgoat_test_SN2593_R2016b_M->Timing.stepSize1 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    speedgoat_test_SN2593_R2016b_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, (NULL));
    rtliSetLogT(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, "tout");
    rtliSetLogX(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, "");
    rtliSetLogXFinal(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, 1);
    rtliSetLogY(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(speedgoat_test_SN2593_R2016b_M->rtwLogInfo, (NULL));
  }

  speedgoat_test_SN2593_R2016b_M->solverInfoPtr =
    (&speedgoat_test_SN2593_R2016b_M->solverInfo);
  speedgoat_test_SN2593_R2016b_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&speedgoat_test_SN2593_R2016b_M->solverInfo, 0.01);
  rtsiSetSolverMode(&speedgoat_test_SN2593_R2016b_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  speedgoat_test_SN2593_R2016b_M->blockIO = ((void *)
    &speedgoat_test_SN2593_R2016b_B);
  (void) memset(((void *) &speedgoat_test_SN2593_R2016b_B), 0,
                sizeof(B_speedgoat_test_SN2593_R2016b_T));

  /* parameters */
  speedgoat_test_SN2593_R2016b_M->defaultParam = ((real_T *)
    &speedgoat_test_SN2593_R2016b_P);

  /* states (dwork) */
  speedgoat_test_SN2593_R2016b_M->dwork = ((void *)
    &speedgoat_test_SN2593_R2016b_DW);
  (void) memset((void *)&speedgoat_test_SN2593_R2016b_DW, 0,
                sizeof(DW_speedgoat_test_SN2593_R2016b_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  speedgoat_test_SN2593_R2016b_InitializeDataMapInfo
    (speedgoat_test_SN2593_R2016b_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.sfcnInfo;
    speedgoat_test_SN2593_R2016b_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (speedgoat_test_SN2593_R2016b_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speedgoat_test_SN2593_R2016b_M->Sizes.numSampTimes);
    speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(speedgoat_test_SN2593_R2016b_M)[0]);
    speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(speedgoat_test_SN2593_R2016b_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(speedgoat_test_SN2593_R2016b_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(speedgoat_test_SN2593_R2016b_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speedgoat_test_SN2593_R2016b_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &speedgoat_test_SN2593_R2016b_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speedgoat_test_SN2593_R2016b_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN2593_R2016b_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_test_SN2593_R2016b_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo,
      &speedgoat_test_SN2593_R2016b_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &speedgoat_test_SN2593_R2016b_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speedgoat_test_SN2593_R2016b_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speedgoat_test_SN2593_R2016b_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &speedgoat_test_SN2593_R2016b_M->solverInfoPtr);
  }

  speedgoat_test_SN2593_R2016b_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)
                  &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  3*sizeof(SimStruct));
    speedgoat_test_SN2593_R2016b_M->childSfunctions =
      (&speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    speedgoat_test_SN2593_R2016b_M->childSfunctions[0] =
      (&speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.childSFunctions[0]);
    speedgoat_test_SN2593_R2016b_M->childSfunctions[1] =
      (&speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.childSFunctions[1]);
    speedgoat_test_SN2593_R2016b_M->childSfunctions[2] =
      (&speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: speedgoat_test_SN2593_R2016b/<S1>/PNM Setup1 (sg_IO751_setup_s) */
    {
      SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      ssSetRTWSfcnInfo(rts, speedgoat_test_SN2593_R2016b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "PNM Setup1");
      ssSetPath(rts, "speedgoat_test_SN2593_R2016b/IO751/PNM Setup1");
      ssSetRTModel(rts,speedgoat_test_SN2593_R2016b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSetup1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSetup1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSetup1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSetup1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSetup1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSetup1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSetup1_P7_Size);
      }

      /* registration */
      sg_IO751_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_test_SN2593_R2016b/<S1>/PNM Send1 (sg_IO751_send_s) */
    {
      SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      ssSetRTWSfcnInfo(rts, speedgoat_test_SN2593_R2016b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, speedgoat_test_SN2593_R2016b_B.BytePack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 4);
        }
      }

      /* path info */
      ssSetModelName(rts, "PNM Send1");
      ssSetPath(rts, "speedgoat_test_SN2593_R2016b/IO751/PNM Send1");
      ssSetRTModel(rts,speedgoat_test_SN2593_R2016b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSend1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSend1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSend1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMSend1_P4_Size);
      }

      /* registration */
      sg_IO751_send_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_test_SN2593_R2016b/<S1>/PNM Receive (sg_IO751_receive_s) */
    {
      SimStruct *rts = speedgoat_test_SN2593_R2016b_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      ssSetRTWSfcnInfo(rts, speedgoat_test_SN2593_R2016b_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 4);
          ssSetOutputPortSignal(rts, 0, ((uint8_T *)
            speedgoat_test_SN2593_R2016b_B.PNMReceive));
        }
      }

      /* path info */
      ssSetModelName(rts, "PNM Receive");
      ssSetPath(rts, "speedgoat_test_SN2593_R2016b/IO751/PNM Receive");
      ssSetRTModel(rts,speedgoat_test_SN2593_R2016b_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_test_SN2593_R2016b_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMReceive_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMReceive_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMReceive_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_test_SN2593_R2016b_P.PNMReceive_P4_Size);
      }

      /* registration */
      sg_IO751_receive_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  speedgoat_test_SN2593_R2016b_M->Sizes.numContStates = (0);/* Number of continuous states */
  speedgoat_test_SN2593_R2016b_M->Sizes.numY = (0);/* Number of model outputs */
  speedgoat_test_SN2593_R2016b_M->Sizes.numU = (0);/* Number of model inputs */
  speedgoat_test_SN2593_R2016b_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  speedgoat_test_SN2593_R2016b_M->Sizes.numSampTimes = (2);/* Number of sample times */
  speedgoat_test_SN2593_R2016b_M->Sizes.numBlocks = (25);/* Number of blocks */
  speedgoat_test_SN2593_R2016b_M->Sizes.numBlockIO = (9);/* Number of block outputs */
  speedgoat_test_SN2593_R2016b_M->Sizes.numBlockPrms = (56);/* Sum of parameter "widths" */
  return speedgoat_test_SN2593_R2016b_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
