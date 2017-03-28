/*
 * Control_software_v1_1.h
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

#ifndef RTW_HEADER_Control_software_v1_1_h_
#define RTW_HEADER_Control_software_v1_1_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef Control_software_v1_1_COMMON_INCLUDES_
# define Control_software_v1_1_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpctarget.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* Control_software_v1_1_COMMON_INCLUDES_ */

#include "Control_software_v1_1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_Control_software_v1_1  RT_MODEL_Control_software_v1_1_T

/* Definition for use in the target main file */
#define Control_software_v1_1_rtModel  RT_MODEL_Control_software_v1_1_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S29>/Embedded MATLAB Function' */
typedef struct {
  real_T uint32_out;                   /* '<S29>/Embedded MATLAB Function' */
} B_EmbeddedMATLABFunction_Cont_T;

/* Block signals for system '<S29>/Embedded MATLAB Function1' */
typedef struct {
  real_T uint8_out;                    /* '<S29>/Embedded MATLAB Function1' */
} B_EmbeddedMATLABFunction1_Con_T;

/* Block signals for system '<S30>/Embedded MATLAB Function' */
typedef struct {
  real_T sing_out;                     /* '<S30>/Embedded MATLAB Function' */
} B_EmbeddedMATLABFunction_Co_o_T;

/* Block signals for system '<S33>/Embedded MATLAB Function1' */
typedef struct {
  real_T int32_out;                    /* '<S33>/Embedded MATLAB Function1' */
} B_EmbeddedMATLABFunction1_C_k_T;

/* Block signals for system '<S36>/Embedded MATLAB Function' */
typedef struct {
  real_T double_out;                   /* '<S36>/Embedded MATLAB Function' */
} B_EmbeddedMATLABFunction_Co_l_T;

/* Block signals (auto storage) */
typedef struct {
  serialfifoptr RateTransition;        /* '<S22>/Rate Transition' */
  serialfifoptr RateTransition2;       /* '<S22>/Rate Transition2' */
  serialfifoptr RateTransition4;       /* '<S22>/Rate Transition4' */
  serialfifoptr RateTransition6;       /* '<S22>/Rate Transition6' */
  serialfifoptr RateTransition5;       /* '<S22>/Rate Transition5' */
  serialfifoptr RateTransition4_p;     /* '<S19>/Rate Transition4' */
  serialfifoptr RateTransition3;       /* '<S22>/Rate Transition3' */
  serialfifoptr RateTransition4_d;     /* '<S20>/Rate Transition4' */
  serialfifoptr RateTransition1;       /* '<S22>/Rate Transition1' */
  serialfifoptr RateTransition4_f;     /* '<S21>/Rate Transition4' */
  serialfifoptr FIFOwrite1_o1;         /* '<S22>/FIFO write 1' */
  serialfifoptr FIFOwrite2_o1;         /* '<S22>/FIFO write 2' */
  serialfifoptr FIFOwrite3_o1;         /* '<S22>/FIFO write 3' */
  serialfifoptr FIFOwrite4_o1;         /* '<S22>/FIFO write 4' */
  serialfifoptr RateTransition7;       /* '<S22>/Rate Transition7' */
  serialfifoptr FIFOwrite1;            /* '<S80>/FIFO write 1' */
  serialfifoptr FIFOwrite2;            /* '<S80>/FIFO write 2' */
  serialfifoptr FIFOwrite3;            /* '<S80>/FIFO write 3' */
  serialfifoptr FIFOwrite4;            /* '<S80>/FIFO write 4' */
  real_T UnitDelay;                    /* '<S1>/Unit Delay' */
  real_T Sum;                          /* '<S1>/Sum' */
  real_T Trigger_time;                 /* '<S85>/Switch1' */
  real_T AI_Joy_W;                     /* '<S16>/PCI-6221 AD' */
  real_T AI_Joy_S;                     /* '<S16>/PCI-6221 AD' */
  real_T AI_mot_slide_pos;             /* '<S16>/PCI-6221 AD' */
  real_T AI_mot_winch_pos;             /* '<S16>/PCI-6221 AD' */
  real_T AI_pot_pos;                   /* '<S16>/PCI-6221 AD' */
  real_T DI_Enable;                    /* '<S17>/PCI-6221 DI' */
  real_T DI_WinchMode;                 /* '<S17>/PCI-6221 DI' */
  real_T DI_Takeoff;                   /* '<S17>/PCI-6221 DI' */
  real_T DI_Landing;                   /* '<S17>/PCI-6221 DI' */
  real_T DI_Operator;                  /* '<S17>/PCI-6221 DI' */
  real_T DI_GliderPres;                /* '<S17>/PCI-6221 DI' */
  real_T DI_SlideLimitF;               /* '<S17>/PCI-6221 DI' */
  real_T DI_SlideLimitB;               /* '<S17>/PCI 6221 PFI DI ' */
  real_T Sum_n;                        /* '<S10>/Sum' */
  real_T Gain;                         /* '<S10>/Gain' */
  real_T DiscreteTransferFcn;          /* '<S10>/Discrete Transfer Fcn' */
  real_T CI_JoyS;                      /* '<S10>/Saturation' */
  real_T Sum1;                         /* '<S10>/Sum1' */
  real_T Gain1;                        /* '<S10>/Gain1' */
  real_T DiscreteTransferFcn1;         /* '<S10>/Discrete Transfer Fcn1' */
  real_T CI_JoyW;                      /* '<S10>/Saturation1' */
  real_T DiscreteStateSpace[2];        /* '<S14>/Discrete State-Space' */
  real_T SlMotPosEst;                  /* '<S14>/Gain2' */
  real_T SlMotSpeedEst;                /* '<S14>/Discrete Transfer Fcn1' */
  real_T CI_SlidePos;                  /* '<S11>/Discrete Transfer Fcn2' */
  real_T Sum_p;                        /* '<S13>/Sum' */
  real_T Gain_m;                       /* '<S13>/Gain' */
  real_T Sum1_n;                       /* '<S13>/Sum1' */
  real_T CI_WinchPos;                  /* '<S13>/Discrete Transfer Fcn1' */
  real_T DiscreteStateSpace_g[2];      /* '<S15>/Discrete State-Space' */
  real_T WinchMotSpeedEst;             /* '<S15>/Discrete Transfer Fcn' */
  real_T Gain_f;                       /* '<S12>/Gain' */
  real_T Sum_b;                        /* '<S12>/Sum' */
  real_T DiscreteTransferFcn1_c;       /* '<S12>/Discrete Transfer Fcn1' */
  real_T CI_PotPos;                    /* '<S12>/Saturation' */
  real_T Delay;                        /* '<S12>/Delay' */
  real_T Sum1_b;                       /* '<S12>/Sum1' */
  real_T CI_PotSpd;                    /* '<S12>/Gain1' */
  real_T UnitDelay7;                   /* '<S2>/Unit Delay7' */
  real_T UnitDelay1;                   /* '<S2>/Unit Delay1' */
  real_T UnitDelay2;                   /* '<S2>/Unit Delay2' */
  real_T UnitDelay4;                   /* '<S2>/Unit Delay4' */
  real_T UnitDelay5;                   /* '<S2>/Unit Delay5' */
  real_T UnitDelay6;                   /* '<S2>/Unit Delay6' */
  real_T UnitDelay3;                   /* '<S2>/Unit Delay3' */
  real_T UnitDelay_b;                  /* '<S2>/Unit Delay' */
  real_T UnitDelay8;                   /* '<S2>/Unit Delay8' */
  real_T SlideMotTorqueEst;            /* '<S14>/Switch' */
  real_T WinchMotTorqueEst;            /* '<S15>/Switch' */
  real_T Switch;                       /* '<S6>/Switch' */
  real_T AO_SlideDriver;               /* '<S6>/Saturation1' */
  real_T Delay_c;                      /* '<S7>/Delay' */
  real_T Delay3;                       /* '<S90>/Delay3' */
  real_T Delay1;                       /* '<S90>/Delay1' */
  real_T Delay4;                       /* '<S90>/Delay4' */
  real_T Switch5;                      /* '<S90>/Switch5' */
  real_T Delay5;                       /* '<S90>/Delay5' */
  real_T Switch7;                      /* '<S90>/Switch7' */
  real_T Delay_i;                      /* '<S92>/Delay' */
  real_T Switch1;                      /* '<S98>/Switch1' */
  real_T Delay_f;                      /* '<S99>/Delay' */
  real_T Sum_a;                        /* '<S99>/Sum' */
  real_T Switch1_k;                    /* '<S99>/Switch1' */
  real_T Delay1_g;                     /* '<S99>/Delay1' */
  real_T Sum1_j;                       /* '<S99>/Sum1' */
  real_T Delay2;                       /* '<S90>/Delay2' */
  real_T Switch4;                      /* '<S90>/Switch4' */
  real_T Delay_cy;                     /* '<S91>/Delay' */
  real_T Switch1_j;                    /* '<S94>/Switch1' */
  real_T Delay_j;                      /* '<S95>/Delay' */
  real_T Sum_e;                        /* '<S95>/Sum' */
  real_T Switch1_d;                    /* '<S95>/Switch1' */
  real_T Delay1_p;                     /* '<S95>/Delay1' */
  real_T Sum1_k;                       /* '<S95>/Sum1' */
  real_T Switch_m;                     /* '<S90>/Switch' */
  real_T Switch1_i;                    /* '<S7>/Switch1' */
  real_T Delay_k;                      /* '<S93>/Delay' */
  real_T Sum_m;                        /* '<S93>/Sum' */
  real_T Switch1_dn;                   /* '<S93>/Switch1' */
  real_T Delay1_j;                     /* '<S93>/Delay1' */
  real_T Sum1_e;                       /* '<S93>/Sum1' */
  real_T Switch1_n;                    /* '<S6>/Switch1' */
  real_T AO_WinchDriver;               /* '<S6>/Saturation' */
  real_T RateTransition_i[35];         /* '<S81>/Rate Transition' */
  real_T Gain_j;                       /* '<S14>/Gain' */
  real_T TmpSignalConversionAtDiscreteSt[2];
  real_T Sum_c;                        /* '<S15>/Sum' */
  real_T Gain_g;                       /* '<S15>/Gain' */
  real_T Sum1_nr;                      /* '<S15>/Sum1' */
  real_T TmpSignalConversionAtDiscrete_e[2];
  real_T Constant1;                    /* '<S6>/Constant1' */
  real_T Constant3;                    /* '<S6>/Constant3' */
  real_T Gain_j2;                      /* '<S6>/Gain' */
  real_T Gain_fi;                      /* '<S93>/Gain' */
  real_T Switch_c;                     /* '<S93>/Switch' */
  real_T Gain_p;                       /* '<S99>/Gain' */
  real_T Switch_d;                     /* '<S99>/Switch' */
  real_T Gain_m3;                      /* '<S98>/Gain' */
  real_T Sum1_kj;                      /* '<S98>/Sum1' */
  real_T Switch_b;                     /* '<S98>/Switch' */
  real_T Sum_o;                        /* '<S98>/Sum' */
  real_T Gain_c;                       /* '<S95>/Gain' */
  real_T Switch_i;                     /* '<S95>/Switch' */
  real_T Gain_gc;                      /* '<S94>/Gain' */
  real_T Sum1_d;                       /* '<S94>/Sum1' */
  real_T Switch_b5;                    /* '<S94>/Switch' */
  real_T Sum_ol;                       /* '<S94>/Sum' */
  real_T Switch1_p;                    /* '<S90>/Switch1' */
  real_T Switch3;                      /* '<S90>/Switch3' */
  real_T Switch2;                      /* '<S90>/Switch2' */
  real_T Switch6;                      /* '<S90>/Switch6' */
  real_T Switch1_o;                    /* '<S88>/Switch1' */
  real_T Gain_jo;                      /* '<S88>/Gain' */
  real_T Sum1_j4;                      /* '<S88>/Sum1' */
  real_T Switch_h;                     /* '<S88>/Switch' */
  real_T Sum_no;                       /* '<S88>/Sum' */
  real_T Switch_dl;                    /* '<S7>/Switch' */
  real_T Switch11;                     /* '<S7>/Switch11' */
  real_T Switch10;                     /* '<S7>/Switch10' */
  real_T Switch9;                      /* '<S7>/Switch9' */
  real_T Sum1_bw;                      /* '<S7>/Sum1' */
  real_T Switch8;                      /* '<S7>/Switch8' */
  real_T Sum_ot;                       /* '<S7>/Sum' */
  real_T Switch_k;                     /* '<S85>/Switch' */
  real_T IMU_data[38];                 /* '<S26>/IMU_data' */
  real_T CRC_valid;                    /* '<S25>/Embedded MATLAB Function' */
  real_T GU_Lat;                       /* '<S20>/Embedded MATLAB Function' */
  real_T GU_Lon;                       /* '<S20>/Embedded MATLAB Function' */
  real_T GU_h;                         /* '<S20>/Embedded MATLAB Function' */
  real_T Geo_GU_h;                     /* '<S20>/Embedded MATLAB Function' */
  real_T GU_Yaw;                       /* '<S19>/Embedded MATLAB Function' */
  real_T Saturation1;                  /* '<S15>/Saturation1' */
  real_T Sum2;                         /* '<S15>/Sum2' */
  real_T Gain1_d;                      /* '<S15>/Gain1' */
  real_T Saturation;                   /* '<S15>/Saturation' */
  real_T Sum2_j;                       /* '<S14>/Sum2' */
  real_T Gain4;                        /* '<S14>/Gain4' */
  real_T Gain1_g;                      /* '<S14>/Gain1' */
  real_T Sum_n3;                       /* '<S14>/Sum' */
  real_T Gain3;                        /* '<S14>/Gain3' */
  real_T Sum1_bn;                      /* '<S14>/Sum1' */
  real_T Saturation_m;                 /* '<S14>/Saturation' */
  real_T TmpSignalConversionAtSFunctionI[39];/* '<S2>/MATLAB Function' */
  real_T HLC_State;                    /* '<S2>/MATLAB Function' */
  real_T HLC_SlidePosRef;              /* '<S2>/MATLAB Function' */
  real_T HLC_WinchSpdRef;              /* '<S2>/MATLAB Function' */
  real_T PotZoneFlight;                /* '<S2>/MATLAB Function' */
  real_T PotZoneLanding;               /* '<S2>/MATLAB Function' */
  real_T HLC_WinchMode;                /* '<S2>/MATLAB Function' */
  real_T Flag_OK;                      /* '<S2>/MATLAB Function' */
  real_T Timer;                        /* '<S2>/MATLAB Function' */
  real_T ReelTimer;                    /* '<S2>/MATLAB Function' */
  uint32_T ReadIntStatus1[4];          /* '<S80>/Read Int Status1' */
  uint32_T FilterIntReason5;           /* '<S80>/Filter Int Reason5' */
  uint32_T Constant1_p;                /* '<S80>/Constant1' */
  uint32_T FIFOread1_o1[61];           /* '<S80>/FIFO read 1' */
  uint32_T FIFOread1_o2;               /* '<S80>/FIFO read 1' */
  uint32_T FilterIntReason6;           /* '<S80>/Filter Int Reason6' */
  uint32_T Constant2;                  /* '<S80>/Constant2' */
  uint32_T FIFOread2_o1[61];           /* '<S80>/FIFO read 2' */
  uint32_T FIFOread2_o2;               /* '<S80>/FIFO read 2' */
  uint32_T FilterIntReason7;           /* '<S80>/Filter Int Reason7' */
  uint32_T Constant3_o;                /* '<S80>/Constant3' */
  uint32_T FIFOread3_o1[61];           /* '<S80>/FIFO read 3' */
  uint32_T FIFOread3_o2;               /* '<S80>/FIFO read 3' */
  uint32_T FilterIntReason8;           /* '<S80>/Filter Int Reason8' */
  uint32_T Constant4;                  /* '<S80>/Constant4' */
  uint32_T FIFOread4_o1[61];           /* '<S80>/FIFO read 4' */
  uint32_T FIFOread4_o2;               /* '<S80>/FIFO read 4' */
  uint32_T BitwiseLogicalOperator[4];  /* '<S80>/Bitwise Logical Operator' */
  uint32_T FilterIntReason1;           /* '<S80>/Filter Int Reason1' */
  uint32_T ReadHWFIFO1[65];            /* '<S80>/Read HW FIFO1' */
  uint32_T FilterIntReason2;           /* '<S80>/Filter Int Reason2' */
  uint32_T ReadHWFIFO2[65];            /* '<S80>/Read HW FIFO2' */
  uint32_T FilterIntReason3;           /* '<S80>/Filter Int Reason3' */
  uint32_T ReadHWFIFO3[65];            /* '<S80>/Read HW FIFO3' */
  uint32_T FilterIntReason4;           /* '<S80>/Filter Int Reason4' */
  uint32_T ReadHWFIFO4[65];            /* '<S80>/Read HW FIFO4' */
  uint8_T FIFOASCIIread1[41];          /* '<S19>/FIFO ASCII read 1' */
  uint8_T Constant;                    /* '<S18>/Constant' */
  uint8_T Constant1_d;                 /* '<S18>/Constant1' */
  uint8_T Constant2_j;                 /* '<S18>/Constant2' */
  uint8_T Constant3_h;                 /* '<S18>/Constant3' */
  uint8_T FIFOASCIIread1_k[91];        /* '<S20>/FIFO ASCII read 1' */
  uint8_T FIFOASCIIread[1025];         /* '<S21>/FIFO ASCII read ' */
  boolean_T RelationalOperator1;       /* '<S98>/Relational Operator1' */
  boolean_T Compare;                   /* '<S101>/Compare' */
  boolean_T RelationalOperator1_d;     /* '<S94>/Relational Operator1' */
  boolean_T Compare_p;                 /* '<S97>/Compare' */
  boolean_T Compare_m;                 /* '<S103>/Compare' */
  boolean_T FIFOwrite1_o2;             /* '<S22>/FIFO write 1' */
  boolean_T FIFOwrite2_o2;             /* '<S22>/FIFO write 2' */
  boolean_T FIFOwrite3_o2;             /* '<S22>/FIFO write 3' */
  boolean_T FIFOwrite4_o2;             /* '<S22>/FIFO write 4' */
  boolean_T Compare_k;                 /* '<S102>/Compare' */
  boolean_T Compare_j;                 /* '<S100>/Compare' */
  boolean_T RelationalOperator;        /* '<S98>/Relational Operator' */
  boolean_T Compare_f;                 /* '<S96>/Compare' */
  boolean_T RelationalOperator_k;      /* '<S94>/Relational Operator' */
  boolean_T RelationalOperator1_b;     /* '<S88>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S88>/Relational Operator' */
  boolean_T LogicalOperator2;          /* '<S90>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S90>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S90>/Logical Operator4' */
  boolean_T LogicalOperator5;          /* '<S90>/Logical Operator5' */
  boolean_T LogicalOperator;           /* '<S90>/Logical Operator' */
  boolean_T LogicalOperator1;          /* '<S90>/Logical Operator1' */
  boolean_T LogicalOperator6;          /* '<S90>/Logical Operator6' */
  boolean_T LogicalOperator7;          /* '<S90>/Logical Operator7' */
  boolean_T RelationalOperator_m[4];   /* '<S80>/Relational Operator' */
  boolean_T LogicalOperator_c;         /* '<S80>/Logical Operator' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction3_a;/* '<S40>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction1_p;/* '<S40>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction_f;/* '<S40>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction3_p;/* '<S39>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction1_i;/* '<S39>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction_d;/* '<S39>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction4;/* '<S38>/Embedded MATLAB Function4' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction3;/* '<S38>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction1;/* '<S38>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction_g;/* '<S38>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction3_n;/* '<S37>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction1_d;/* '<S37>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction_j;/* '<S37>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction_Co_l_T sf_EmbeddedMATLABFunction2_g;/* '<S36>/Embedded MATLAB Function2' */
  B_EmbeddedMATLABFunction_Co_l_T sf_EmbeddedMATLABFunction1_a;/* '<S36>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Co_l_T sf_EmbeddedMATLABFunction_k;/* '<S36>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction2_m;/* '<S35>/Embedded MATLAB Function2' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction4_g;/* '<S34>/Embedded MATLAB Function4' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction3_o;/* '<S34>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction2_n;/* '<S34>/Embedded MATLAB Function2' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction1_n;/* '<S34>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction3_pw;/* '<S33>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction2;/* '<S33>/Embedded MATLAB Function2' */
  B_EmbeddedMATLABFunction1_C_k_T sf_EmbeddedMATLABFunction1_g;/* '<S33>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Cont_T sf_EmbeddedMATLABFunction_bf;/* '<S32>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction6;/* '<S31>/Embedded MATLAB Function6' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction5;/* '<S31>/Embedded MATLAB Function5' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction4_h;/* '<S31>/Embedded MATLAB Function4' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction3_k;/* '<S31>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction2_p;/* '<S31>/Embedded MATLAB Function2' */
  B_EmbeddedMATLABFunction_Cont_T sf_EmbeddedMATLABFunction1_c;/* '<S31>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction_a;/* '<S31>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction3_ps;/* '<S30>/Embedded MATLAB Function3' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction1_j;/* '<S30>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Co_o_T sf_EmbeddedMATLABFunction_b;/* '<S30>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction2_h;/* '<S29>/Embedded MATLAB Function2' */
  B_EmbeddedMATLABFunction1_Con_T sf_EmbeddedMATLABFunction1_e;/* '<S29>/Embedded MATLAB Function1' */
  B_EmbeddedMATLABFunction_Cont_T sf_EmbeddedMATLABFunction_l;/* '<S29>/Embedded MATLAB Function' */
} B_Control_software_v1_1_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T DiscreteTransferFcn_states[2];/* '<S10>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn1_states[2];/* '<S10>/Discrete Transfer Fcn1' */
  real_T DiscreteStateSpace_DSTATE[2]; /* '<S14>/Discrete State-Space' */
  real_T DiscreteTransferFcn1_states_g[2];/* '<S14>/Discrete Transfer Fcn1' */
  real_T DiscreteTransferFcn2_states[2];/* '<S11>/Discrete Transfer Fcn2' */
  real_T DiscreteTransferFcn1_states_h[2];/* '<S13>/Discrete Transfer Fcn1' */
  real_T DiscreteStateSpace_DSTATE_n[2];/* '<S15>/Discrete State-Space' */
  real_T DiscreteTransferFcn_states_n[2];/* '<S15>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn1_states_n[2];/* '<S12>/Discrete Transfer Fcn1' */
  real_T Delay_DSTATE[3];              /* '<S12>/Delay' */
  real_T UnitDelay7_DSTATE;            /* '<S2>/Unit Delay7' */
  real_T UnitDelay1_DSTATE;            /* '<S2>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S2>/Unit Delay2' */
  real_T UnitDelay4_DSTATE;            /* '<S2>/Unit Delay4' */
  real_T UnitDelay5_DSTATE;            /* '<S2>/Unit Delay5' */
  real_T UnitDelay6_DSTATE;            /* '<S2>/Unit Delay6' */
  real_T UnitDelay3_DSTATE;            /* '<S2>/Unit Delay3' */
  real_T UnitDelay_DSTATE_k;           /* '<S2>/Unit Delay' */
  real_T UnitDelay8_DSTATE;            /* '<S2>/Unit Delay8' */
  real_T Delay_DSTATE_h;               /* '<S7>/Delay' */
  real_T Delay3_DSTATE;                /* '<S90>/Delay3' */
  real_T Delay1_DSTATE;                /* '<S90>/Delay1' */
  real_T Delay4_DSTATE;                /* '<S90>/Delay4' */
  real_T Delay5_DSTATE;                /* '<S90>/Delay5' */
  real_T Delay_DSTATE_hx;              /* '<S92>/Delay' */
  real_T Delay_DSTATE_b;               /* '<S99>/Delay' */
  real_T Delay1_DSTATE_i;              /* '<S99>/Delay1' */
  real_T Delay2_DSTATE;                /* '<S90>/Delay2' */
  real_T Delay_DSTATE_bd;              /* '<S91>/Delay' */
  real_T Delay_DSTATE_e;               /* '<S95>/Delay' */
  real_T Delay1_DSTATE_h;              /* '<S95>/Delay1' */
  real_T Delay_DSTATE_i;               /* '<S93>/Delay' */
  real_T Delay1_DSTATE_n;              /* '<S93>/Delay1' */
  real_T DiscreteTransferFcn_tmp;      /* '<S10>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn1_tmp;     /* '<S10>/Discrete Transfer Fcn1' */
  real_T DiscreteTransferFcn1_tmp_d;   /* '<S14>/Discrete Transfer Fcn1' */
  real_T DiscreteTransferFcn2_tmp;     /* '<S11>/Discrete Transfer Fcn2' */
  real_T DiscreteTransferFcn1_tmp_c;   /* '<S13>/Discrete Transfer Fcn1' */
  real_T DiscreteTransferFcn_tmp_g;    /* '<S15>/Discrete Transfer Fcn' */
  real_T DiscreteTransferFcn1_tmp_h;   /* '<S12>/Discrete Transfer Fcn1' */
  real_T PCI6221DA_RWORK[6];           /* '<S6>/PCI-6221 DA' */
  void *PCI6221AD_PWORK;               /* '<S16>/PCI-6221 AD' */
  void *PCI6221PFIDI_PWORK;            /* '<S17>/PCI 6221 PFI DI ' */
  void *FIFOASCIIread1_PWORK[3];       /* '<S19>/FIFO ASCII read 1' */
  void *FIFOASCIIread1_PWORK_c[3];     /* '<S20>/FIFO ASCII read 1' */
  void *FIFOASCIIread_PWORK[3];        /* '<S21>/FIFO ASCII read ' */
  void *FIFOwrite1_PWORK;              /* '<S22>/FIFO write 1' */
  void *FIFOwrite2_PWORK;              /* '<S22>/FIFO write 2' */
  void *FIFOwrite3_PWORK;              /* '<S22>/FIFO write 3' */
  void *FIFOwrite4_PWORK;              /* '<S22>/FIFO write 4' */
  void *PCI6221PFIDO_PWORK;            /* '<S6>/PCI 6221 PFI DO ' */
  void *FIFOwrite1_PWORK_d;            /* '<S80>/FIFO write 1' */
  void *FIFOwrite2_PWORK_g;            /* '<S80>/FIFO write 2' */
  void *FIFOwrite3_PWORK_l;            /* '<S80>/FIFO write 3' */
  void *FIFOwrite4_PWORK_o;            /* '<S80>/FIFO write 4' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S86>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_h;                 /* '<S82>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_k;                 /* '<S83>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_g;                 /* '<S84>/S-Function' */

  int_T PCI6221AD_IWORK[41];           /* '<S16>/PCI-6221 AD' */
  int_T PCI6221DI_IWORK;               /* '<S17>/PCI-6221 DI' */
  int_T FIFOwrite1_IWORK[3];           /* '<S22>/FIFO write 1' */
  int_T EnableTX1_IWORK;               /* '<S22>/Enable TX 1' */
  int_T FIFOwrite2_IWORK[3];           /* '<S22>/FIFO write 2' */
  int_T EnableTX2_IWORK;               /* '<S22>/Enable TX 2' */
  int_T FIFOwrite3_IWORK[3];           /* '<S22>/FIFO write 3' */
  int_T EnableTX3_IWORK;               /* '<S22>/Enable TX 3' */
  int_T FIFOwrite4_IWORK[3];           /* '<S22>/FIFO write 4' */
  int_T EnableTX4_IWORK;               /* '<S22>/Enable TX 4' */
  int_T Setup1_IWORK[2];               /* '<S22>/Setup1' */
  int_T Setup2_IWORK[2];               /* '<S22>/Setup2' */
  int_T Setup3_IWORK[2];               /* '<S22>/Setup3' */
  int_T Setup4_IWORK[2];               /* '<S22>/Setup4' */
  int_T PCI6221PFIDO_IWORK;            /* '<S6>/PCI 6221 PFI DO ' */
  int_T PCI6221DA_IWORK[41];           /* '<S6>/PCI-6221 DA' */
  int_T PCI6221DO_IWORK;               /* '<S6>/PCI-6221 DO' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK_hi;                /* '<S87>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_hy;                /* '<S89>/S-Function' */

  int_T ReadIntStatus1_IWORK;          /* '<S80>/Read Int Status1' */
  int_T WriteHWFIFO1_IWORK;            /* '<S80>/Write HW FIFO1' */
  int_T WriteHWFIFO2_IWORK;            /* '<S80>/Write HW FIFO2' */
  int_T WriteHWFIFO3_IWORK;            /* '<S80>/Write HW FIFO3' */
  int_T WriteHWFIFO4_IWORK;            /* '<S80>/Write HW FIFO4' */
  int_T ReadHWFIFO1_IWORK;             /* '<S80>/Read HW FIFO1' */
  int_T FIFOwrite1_IWORK_n[3];         /* '<S80>/FIFO write 1' */
  int_T ReadHWFIFO2_IWORK;             /* '<S80>/Read HW FIFO2' */
  int_T FIFOwrite2_IWORK_i[3];         /* '<S80>/FIFO write 2' */
  int_T ReadHWFIFO3_IWORK;             /* '<S80>/Read HW FIFO3' */
  int_T FIFOwrite3_IWORK_g[3];         /* '<S80>/FIFO write 3' */
  int_T ReadHWFIFO4_IWORK;             /* '<S80>/Read HW FIFO4' */
  int_T FIFOwrite4_IWORK_f[3];         /* '<S80>/FIFO write 4' */
  int8_T RS232ISR_SubsysRanBC;         /* '<S22>/RS232 ISR' */
  int8_T Data_validation_SubsysRanBC;  /* '<S21>/Data_validation' */
} DW_Control_software_v1_1_T;

/* Backward compatible GRT Identifiers */
#define rtB                            Control_software_v1_1_B
#define BlockIO                        B_Control_software_v1_1_T
#define rtP                            Control_software_v1_1_P
#define Parameters                     P_Control_software_v1_1_T
#define rtDWork                        Control_software_v1_1_DW
#define D_Work                         DW_Control_software_v1_1_T

/* Parameters (auto storage) */
struct P_Control_software_v1_1_T_ {
  struct_H3iKTmzQIZmmrWuxBo9E9D HLC_Param;/* Variable: HLC_Param
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
  real_T AOsat;                        /* Variable: AOsat
                                        * Referenced by:
                                        *   '<S6>/Saturation'
                                        *   '<S6>/Saturation1'
                                        */
  real_T Afilt_Sl[4];                  /* Variable: Afilt_Sl
                                        * Referenced by: '<S14>/Discrete State-Space'
                                        */
  real_T Afilt_Winch[4];               /* Variable: Afilt_Winch
                                        * Referenced by: '<S15>/Discrete State-Space'
                                        */
  real_T Bfilt_Sl[4];                  /* Variable: Bfilt_Sl
                                        * Referenced by: '<S14>/Discrete State-Space'
                                        */
  real_T Bfilt_Winch[4];               /* Variable: Bfilt_Winch
                                        * Referenced by: '<S15>/Discrete State-Space'
                                        */
  real_T Cfilt_Sl[4];                  /* Variable: Cfilt_Sl
                                        * Referenced by: '<S14>/Discrete State-Space'
                                        */
  real_T Cfilt_Winch[4];               /* Variable: Cfilt_Winch
                                        * Referenced by: '<S15>/Discrete State-Space'
                                        */
  real_T Dfilt_Sl[4];                  /* Variable: Dfilt_Sl
                                        * Referenced by: '<S14>/Discrete State-Space'
                                        */
  real_T Dfilt_Winch[4];               /* Variable: Dfilt_Winch
                                        * Referenced by: '<S15>/Discrete State-Space'
                                        */
  real_T JoyFiltDen[3];                /* Variable: JoyFiltDen
                                        * Referenced by:
                                        *   '<S10>/Discrete Transfer Fcn'
                                        *   '<S10>/Discrete Transfer Fcn1'
                                        */
  real_T JoyFiltNum[3];                /* Variable: JoyFiltNum
                                        * Referenced by:
                                        *   '<S10>/Discrete Transfer Fcn'
                                        *   '<S10>/Discrete Transfer Fcn1'
                                        */
  real_T JoyS_gain;                    /* Variable: JoyS_gain
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T JoyS_ofst;                    /* Variable: JoyS_ofst
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T JoyS_sat;                     /* Variable: JoyS_sat
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T JoyW_gain;                    /* Variable: JoyW_gain
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real_T JoyW_ofst;                    /* Variable: JoyW_ofst
                                        * Referenced by: '<S10>/Constant1'
                                        */
  real_T Kpos;                         /* Variable: Kpos
                                        * Referenced by: '<S14>/Gain3'
                                        */
  real_T Kspd;                         /* Variable: Kspd
                                        * Referenced by: '<S14>/Gain4'
                                        */
  real_T KspdWinch;                    /* Variable: KspdWinch
                                        * Referenced by: '<S15>/Gain1'
                                        */
  real_T NPotSpdEst;                   /* Variable: NPotSpdEst
                                        * Referenced by: '<S12>/Gain1'
                                        */
  real_T PotPosFiltDen[3];             /* Variable: PotPosFiltDen
                                        * Referenced by: '<S12>/Discrete Transfer Fcn1'
                                        */
  real_T PotPosFiltNum[3];             /* Variable: PotPosFiltNum
                                        * Referenced by: '<S12>/Discrete Transfer Fcn1'
                                        */
  real_T Pot_gain;                     /* Variable: Pot_gain
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T Pot_max;                      /* Variable: Pot_max
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T Pot_min;                      /* Variable: Pot_min
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T Pot_ofst;                     /* Variable: Pot_ofst
                                        * Referenced by: '<S12>/Constant'
                                        */
  real_T SlMotPosAIgain;               /* Variable: SlMotPosAIgain
                                        * Referenced by:
                                        *   '<S14>/Gain'
                                        *   '<S14>/Gain1'
                                        *   '<S14>/Gain2'
                                        */
  real_T SlideMotTorqueMax;            /* Variable: SlideMotTorqueMax
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T SlidePosFiltDen[3];           /* Variable: SlidePosFiltDen
                                        * Referenced by: '<S11>/Discrete Transfer Fcn2'
                                        */
  real_T SlidePosFiltNum[3];           /* Variable: SlidePosFiltNum
                                        * Referenced by: '<S11>/Discrete Transfer Fcn2'
                                        */
  real_T SlideSpdEstFiltDen[3];        /* Variable: SlideSpdEstFiltDen
                                        * Referenced by: '<S14>/Discrete Transfer Fcn1'
                                        */
  real_T SlideSpdEstFiltNum[3];        /* Variable: SlideSpdEstFiltNum
                                        * Referenced by: '<S14>/Discrete Transfer Fcn1'
                                        */
  real_T Ts_1ms;                       /* Variable: Ts_1ms
                                        * Referenced by:
                                        *   '<S2>/Constant2'
                                        *   '<S12>/Gain1'
                                        */
  real_T Ts_1s;                        /* Variable: Ts_1s
                                        * Referenced by:
                                        *   '<S1>/Constat'
                                        *   '<S85>/Switch'
                                        *   '<S85>/Switch1'
                                        */
  real_T WinchDrumRad;                 /* Variable: WinchDrumRad
                                        * Referenced by:
                                        *   '<S13>/Constant1'
                                        *   '<S15>/Constant1'
                                        */
  real_T WinchMotPosAIgain;            /* Variable: WinchMotPosAIgain
                                        * Referenced by:
                                        *   '<S13>/Gain'
                                        *   '<S15>/Gain'
                                        */
  real_T WinchMotTorqueMax;            /* Variable: WinchMotTorqueMax
                                        * Referenced by: '<S15>/Saturation'
                                        */
  real_T WinchPosFiltDen[3];           /* Variable: WinchPosFiltDen
                                        * Referenced by: '<S13>/Discrete Transfer Fcn1'
                                        */
  real_T WinchPosFiltNum[3];           /* Variable: WinchPosFiltNum
                                        * Referenced by: '<S13>/Discrete Transfer Fcn1'
                                        */
  real_T WinchRefSpdSup;               /* Variable: WinchRefSpdSup
                                        * Referenced by:
                                        *   '<S6>/Gain'
                                        *   '<S15>/Saturation1'
                                        */
  real_T WinchSpdEstFiltDen[3];        /* Variable: WinchSpdEstFiltDen
                                        * Referenced by: '<S15>/Discrete Transfer Fcn'
                                        */
  real_T WinchSpdEstFiltNum[3];        /* Variable: WinchSpdEstFiltNum
                                        * Referenced by: '<S15>/Discrete Transfer Fcn'
                                        */
  real_T WinchTravelMin_m;             /* Variable: WinchTravelMin_m
                                        * Referenced by:
                                        *   '<S13>/Constant1'
                                        *   '<S15>/Constant1'
                                        */
  real_T WinchVoltMax;                 /* Variable: WinchVoltMax
                                        * Referenced by:
                                        *   '<S6>/Gain'
                                        *   '<S13>/Constant'
                                        *   '<S15>/Constant'
                                        */
  real_T x0_Sl[2];                     /* Variable: x0_Sl
                                        * Referenced by: '<S14>/Discrete State-Space'
                                        */
  real_T x0_Winch[2];                  /* Variable: x0_Winch
                                        * Referenced by: '<S15>/Discrete State-Space'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S14>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real_T Constant2_Value_e;            /* Expression: 0
                                        * Referenced by: '<S15>/Constant2'
                                        */
  real_T IMU_data_valid_Y0;            /* Computed Parameter: IMU_data_valid_Y0
                                        * Referenced by: '<S26>/IMU_data_valid'
                                        */
  real_T ReadIntStatus1_P1_Size[2];    /* Computed Parameter: ReadIntStatus1_P1_Size
                                        * Referenced by: '<S80>/Read Int Status1'
                                        */
  real_T ReadIntStatus1_P1;            /* Expression: slot
                                        * Referenced by: '<S80>/Read Int Status1'
                                        */
  real_T ReadIntStatus1_P2_Size[2];    /* Computed Parameter: ReadIntStatus1_P2_Size
                                        * Referenced by: '<S80>/Read Int Status1'
                                        */
  real_T ReadIntStatus1_P2;            /* Expression: 1
                                        * Referenced by: '<S80>/Read Int Status1'
                                        */
  real_T FilterIntReason5_P1_Size[2];  /* Computed Parameter: FilterIntReason5_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */
  real_T FilterIntReason5_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */
  real_T FilterIntReason5_P2_Size[2];  /* Computed Parameter: FilterIntReason5_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */
  real_T FilterIntReason5_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */
  real_T FilterIntReason5_P3_Size[2];  /* Computed Parameter: FilterIntReason5_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */
  real_T FilterIntReason5_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason5'
                                        */
  real_T FIFOread1_P1_Size[2];         /* Computed Parameter: FIFOread1_P1_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P1;                 /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P2_Size[2];         /* Computed Parameter: FIFOread1_P2_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P2;                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P3_Size[2];         /* Computed Parameter: FIFOread1_P3_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P3;                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P4_Size[2];         /* Computed Parameter: FIFOread1_P4_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P4;                 /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P5_Size[2];         /* Computed Parameter: FIFOread1_P5_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P5;                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P6_Size[2];         /* Computed Parameter: FIFOread1_P6_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P6;                 /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P7_Size[2];         /* Computed Parameter: FIFOread1_P7_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P7;                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P8_Size[2];         /* Computed Parameter: FIFOread1_P8_Size
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T FIFOread1_P8;                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 1'
                                        */
  real_T WriteHWFIFO1_P1_Size[2];      /* Computed Parameter: WriteHWFIFO1_P1_Size
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T WriteHWFIFO1_P1;              /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T WriteHWFIFO1_P2_Size[2];      /* Computed Parameter: WriteHWFIFO1_P2_Size
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T WriteHWFIFO1_P2;              /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T WriteHWFIFO1_P3_Size[2];      /* Computed Parameter: WriteHWFIFO1_P3_Size
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T WriteHWFIFO1_P3;              /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T WriteHWFIFO1_P4_Size[2];      /* Computed Parameter: WriteHWFIFO1_P4_Size
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T WriteHWFIFO1_P4;              /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO1'
                                        */
  real_T FilterIntReason6_P1_Size[2];  /* Computed Parameter: FilterIntReason6_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */
  real_T FilterIntReason6_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */
  real_T FilterIntReason6_P2_Size[2];  /* Computed Parameter: FilterIntReason6_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */
  real_T FilterIntReason6_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */
  real_T FilterIntReason6_P3_Size[2];  /* Computed Parameter: FilterIntReason6_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */
  real_T FilterIntReason6_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason6'
                                        */
  real_T FIFOread2_P1_Size[2];         /* Computed Parameter: FIFOread2_P1_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P1;                 /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P2_Size[2];         /* Computed Parameter: FIFOread2_P2_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P2;                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P3_Size[2];         /* Computed Parameter: FIFOread2_P3_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P3;                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P4_Size[2];         /* Computed Parameter: FIFOread2_P4_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P4;                 /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P5_Size[2];         /* Computed Parameter: FIFOread2_P5_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P5;                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P6_Size[2];         /* Computed Parameter: FIFOread2_P6_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P6;                 /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P7_Size[2];         /* Computed Parameter: FIFOread2_P7_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P7;                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P8_Size[2];         /* Computed Parameter: FIFOread2_P8_Size
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T FIFOread2_P8;                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 2'
                                        */
  real_T WriteHWFIFO2_P1_Size[2];      /* Computed Parameter: WriteHWFIFO2_P1_Size
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T WriteHWFIFO2_P1;              /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T WriteHWFIFO2_P2_Size[2];      /* Computed Parameter: WriteHWFIFO2_P2_Size
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T WriteHWFIFO2_P2;              /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T WriteHWFIFO2_P3_Size[2];      /* Computed Parameter: WriteHWFIFO2_P3_Size
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T WriteHWFIFO2_P3;              /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T WriteHWFIFO2_P4_Size[2];      /* Computed Parameter: WriteHWFIFO2_P4_Size
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T WriteHWFIFO2_P4;              /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO2'
                                        */
  real_T FilterIntReason7_P1_Size[2];  /* Computed Parameter: FilterIntReason7_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */
  real_T FilterIntReason7_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */
  real_T FilterIntReason7_P2_Size[2];  /* Computed Parameter: FilterIntReason7_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */
  real_T FilterIntReason7_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */
  real_T FilterIntReason7_P3_Size[2];  /* Computed Parameter: FilterIntReason7_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */
  real_T FilterIntReason7_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason7'
                                        */
  real_T FIFOread3_P1_Size[2];         /* Computed Parameter: FIFOread3_P1_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P1;                 /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P2_Size[2];         /* Computed Parameter: FIFOread3_P2_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P2;                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P3_Size[2];         /* Computed Parameter: FIFOread3_P3_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P3;                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P4_Size[2];         /* Computed Parameter: FIFOread3_P4_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P4;                 /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P5_Size[2];         /* Computed Parameter: FIFOread3_P5_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P5;                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P6_Size[2];         /* Computed Parameter: FIFOread3_P6_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P6;                 /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P7_Size[2];         /* Computed Parameter: FIFOread3_P7_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P7;                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P8_Size[2];         /* Computed Parameter: FIFOread3_P8_Size
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T FIFOread3_P8;                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 3'
                                        */
  real_T WriteHWFIFO3_P1_Size[2];      /* Computed Parameter: WriteHWFIFO3_P1_Size
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T WriteHWFIFO3_P1;              /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T WriteHWFIFO3_P2_Size[2];      /* Computed Parameter: WriteHWFIFO3_P2_Size
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T WriteHWFIFO3_P2;              /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T WriteHWFIFO3_P3_Size[2];      /* Computed Parameter: WriteHWFIFO3_P3_Size
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T WriteHWFIFO3_P3;              /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T WriteHWFIFO3_P4_Size[2];      /* Computed Parameter: WriteHWFIFO3_P4_Size
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T WriteHWFIFO3_P4;              /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO3'
                                        */
  real_T FilterIntReason8_P1_Size[2];  /* Computed Parameter: FilterIntReason8_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */
  real_T FilterIntReason8_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */
  real_T FilterIntReason8_P2_Size[2];  /* Computed Parameter: FilterIntReason8_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */
  real_T FilterIntReason8_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */
  real_T FilterIntReason8_P3_Size[2];  /* Computed Parameter: FilterIntReason8_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */
  real_T FilterIntReason8_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason8'
                                        */
  real_T FIFOread4_P1_Size[2];         /* Computed Parameter: FIFOread4_P1_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P1;                 /* Expression: maxsize
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P2_Size[2];         /* Computed Parameter: FIFOread4_P2_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P2;                 /* Expression: minsize
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P3_Size[2];         /* Computed Parameter: FIFOread4_P3_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P3;                 /* Expression: usedelimiter
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P4_Size[2];         /* Computed Parameter: FIFOread4_P4_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P4;                 /* Expression: delimiter
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P5_Size[2];         /* Computed Parameter: FIFOread4_P5_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P5;                 /* Expression: outputtype
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P6_Size[2];         /* Computed Parameter: FIFOread4_P6_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P6;                 /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P7_Size[2];         /* Computed Parameter: FIFOread4_P7_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P7;                 /* Expression: enable
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P8_Size[2];         /* Computed Parameter: FIFOread4_P8_Size
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T FIFOread4_P8;                 /* Expression: enableout
                                        * Referenced by: '<S80>/FIFO read 4'
                                        */
  real_T WriteHWFIFO4_P1_Size[2];      /* Computed Parameter: WriteHWFIFO4_P1_Size
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T WriteHWFIFO4_P1;              /* Expression: slot
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T WriteHWFIFO4_P2_Size[2];      /* Computed Parameter: WriteHWFIFO4_P2_Size
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T WriteHWFIFO4_P2;              /* Expression: port
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T WriteHWFIFO4_P3_Size[2];      /* Computed Parameter: WriteHWFIFO4_P3_Size
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T WriteHWFIFO4_P3;              /* Expression: 1
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T WriteHWFIFO4_P4_Size[2];      /* Computed Parameter: WriteHWFIFO4_P4_Size
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T WriteHWFIFO4_P4;              /* Expression: 0
                                        * Referenced by: '<S80>/Write HW FIFO4'
                                        */
  real_T FilterIntReason1_P1_Size[2];  /* Computed Parameter: FilterIntReason1_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */
  real_T FilterIntReason1_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */
  real_T FilterIntReason1_P2_Size[2];  /* Computed Parameter: FilterIntReason1_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */
  real_T FilterIntReason1_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */
  real_T FilterIntReason1_P3_Size[2];  /* Computed Parameter: FilterIntReason1_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */
  real_T FilterIntReason1_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason1'
                                        */
  real_T ReadHWFIFO1_P1_Size[2];       /* Computed Parameter: ReadHWFIFO1_P1_Size
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T ReadHWFIFO1_P1;               /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T ReadHWFIFO1_P2_Size[2];       /* Computed Parameter: ReadHWFIFO1_P2_Size
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T ReadHWFIFO1_P2;               /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T ReadHWFIFO1_P3_Size[2];       /* Computed Parameter: ReadHWFIFO1_P3_Size
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T ReadHWFIFO1_P3;               /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T ReadHWFIFO1_P4_Size[2];       /* Computed Parameter: ReadHWFIFO1_P4_Size
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T ReadHWFIFO1_P4;               /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO1'
                                        */
  real_T FIFOwrite1_P1_Size[2];        /* Computed Parameter: FIFOwrite1_P1_Size
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P1;                /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P2_Size[2];        /* Computed Parameter: FIFOwrite1_P2_Size
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P2;                /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P3_Size[2];        /* Computed Parameter: FIFOwrite1_P3_Size
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P3;                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P4_Size[2];        /* Computed Parameter: FIFOwrite1_P4_Size
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P4;                /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P5_Size[2];        /* Computed Parameter: FIFOwrite1_P5_Size
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P5[34];            /* Computed Parameter: FIFOwrite1_P5
                                        * Referenced by: '<S80>/FIFO write 1'
                                        */
  real_T FilterIntReason2_P1_Size[2];  /* Computed Parameter: FilterIntReason2_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */
  real_T FilterIntReason2_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */
  real_T FilterIntReason2_P2_Size[2];  /* Computed Parameter: FilterIntReason2_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */
  real_T FilterIntReason2_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */
  real_T FilterIntReason2_P3_Size[2];  /* Computed Parameter: FilterIntReason2_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */
  real_T FilterIntReason2_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason2'
                                        */
  real_T ReadHWFIFO2_P1_Size[2];       /* Computed Parameter: ReadHWFIFO2_P1_Size
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T ReadHWFIFO2_P1;               /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T ReadHWFIFO2_P2_Size[2];       /* Computed Parameter: ReadHWFIFO2_P2_Size
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T ReadHWFIFO2_P2;               /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T ReadHWFIFO2_P3_Size[2];       /* Computed Parameter: ReadHWFIFO2_P3_Size
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T ReadHWFIFO2_P3;               /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T ReadHWFIFO2_P4_Size[2];       /* Computed Parameter: ReadHWFIFO2_P4_Size
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T ReadHWFIFO2_P4;               /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO2'
                                        */
  real_T FIFOwrite2_P1_Size[2];        /* Computed Parameter: FIFOwrite2_P1_Size
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P1;                /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P2_Size[2];        /* Computed Parameter: FIFOwrite2_P2_Size
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P2;                /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P3_Size[2];        /* Computed Parameter: FIFOwrite2_P3_Size
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P3;                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P4_Size[2];        /* Computed Parameter: FIFOwrite2_P4_Size
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P4;                /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P5_Size[2];        /* Computed Parameter: FIFOwrite2_P5_Size
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P5[34];            /* Computed Parameter: FIFOwrite2_P5
                                        * Referenced by: '<S80>/FIFO write 2'
                                        */
  real_T FilterIntReason3_P1_Size[2];  /* Computed Parameter: FilterIntReason3_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */
  real_T FilterIntReason3_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */
  real_T FilterIntReason3_P2_Size[2];  /* Computed Parameter: FilterIntReason3_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */
  real_T FilterIntReason3_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */
  real_T FilterIntReason3_P3_Size[2];  /* Computed Parameter: FilterIntReason3_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */
  real_T FilterIntReason3_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason3'
                                        */
  real_T ReadHWFIFO3_P1_Size[2];       /* Computed Parameter: ReadHWFIFO3_P1_Size
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T ReadHWFIFO3_P1;               /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T ReadHWFIFO3_P2_Size[2];       /* Computed Parameter: ReadHWFIFO3_P2_Size
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T ReadHWFIFO3_P2;               /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T ReadHWFIFO3_P3_Size[2];       /* Computed Parameter: ReadHWFIFO3_P3_Size
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T ReadHWFIFO3_P3;               /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T ReadHWFIFO3_P4_Size[2];       /* Computed Parameter: ReadHWFIFO3_P4_Size
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T ReadHWFIFO3_P4;               /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO3'
                                        */
  real_T FIFOwrite3_P1_Size[2];        /* Computed Parameter: FIFOwrite3_P1_Size
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P1;                /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P2_Size[2];        /* Computed Parameter: FIFOwrite3_P2_Size
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P2;                /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P3_Size[2];        /* Computed Parameter: FIFOwrite3_P3_Size
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P3;                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P4_Size[2];        /* Computed Parameter: FIFOwrite3_P4_Size
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P4;                /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P5_Size[2];        /* Computed Parameter: FIFOwrite3_P5_Size
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P5[34];            /* Computed Parameter: FIFOwrite3_P5
                                        * Referenced by: '<S80>/FIFO write 3'
                                        */
  real_T FilterIntReason4_P1_Size[2];  /* Computed Parameter: FilterIntReason4_P1_Size
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */
  real_T FilterIntReason4_P1;          /* Expression: port
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */
  real_T FilterIntReason4_P2_Size[2];  /* Computed Parameter: FilterIntReason4_P2_Size
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */
  real_T FilterIntReason4_P2;          /* Expression: 1
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */
  real_T FilterIntReason4_P3_Size[2];  /* Computed Parameter: FilterIntReason4_P3_Size
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */
  real_T FilterIntReason4_P3;          /* Expression: value
                                        * Referenced by: '<S80>/Filter Int Reason4'
                                        */
  real_T ReadHWFIFO4_P1_Size[2];       /* Computed Parameter: ReadHWFIFO4_P1_Size
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T ReadHWFIFO4_P1;               /* Expression: slot
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T ReadHWFIFO4_P2_Size[2];       /* Computed Parameter: ReadHWFIFO4_P2_Size
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T ReadHWFIFO4_P2;               /* Expression: port
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T ReadHWFIFO4_P3_Size[2];       /* Computed Parameter: ReadHWFIFO4_P3_Size
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T ReadHWFIFO4_P3;               /* Expression: 1
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T ReadHWFIFO4_P4_Size[2];       /* Computed Parameter: ReadHWFIFO4_P4_Size
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T ReadHWFIFO4_P4;               /* Expression: flush
                                        * Referenced by: '<S80>/Read HW FIFO4'
                                        */
  real_T FIFOwrite4_P1_Size[2];        /* Computed Parameter: FIFOwrite4_P1_Size
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P1;                /* Expression: size
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P2_Size[2];        /* Computed Parameter: FIFOwrite4_P2_Size
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P2;                /* Expression: inputtype
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P3_Size[2];        /* Computed Parameter: FIFOwrite4_P3_Size
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P3;                /* Expression: sampletime
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P4_Size[2];        /* Computed Parameter: FIFOwrite4_P4_Size
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P4;                /* Expression: present
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P5_Size[2];        /* Computed Parameter: FIFOwrite4_P5_Size
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P5[34];            /* Computed Parameter: FIFOwrite4_P5
                                        * Referenced by: '<S80>/FIFO write 4'
                                        */
  real_T Constant2_Value_j;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Constant_Value_n;             /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T konstanteAusrollgeschw_Value; /* Expression: 0.5
                                        * Referenced by: '<S7>/konstante Ausrollgeschw.'
                                        */
  real_T Constant1_Value_m;            /* Expression: 1
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T konstanteEinrollgeschw_Value; /* Expression: -0.5
                                        * Referenced by: '<S7>/konstante Einrollgeschw.'
                                        */
  real_T Constant3_Value;              /* Expression: -1
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S7>/Switch'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S88>/Gain'
                                        */
  real_T Switch6_Threshold;            /* Expression: 0
                                        * Referenced by: '<S90>/Switch6'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S90>/Switch2'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S90>/Switch3'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S90>/Switch1'
                                        */
  real_T Gain_Gain_e;                  /* Expression: -1
                                        * Referenced by: '<S94>/Gain'
                                        */
  real_T Gain_Gain_i;                  /* Expression: -1
                                        * Referenced by: '<S95>/Gain'
                                        */
  real_T Gain_Gain_g;                  /* Expression: -1
                                        * Referenced by: '<S98>/Gain'
                                        */
  real_T Gain_Gain_in;                 /* Expression: -1
                                        * Referenced by: '<S99>/Gain'
                                        */
  real_T Gain_Gain_f;                  /* Expression: -1
                                        * Referenced by: '<S93>/Gain'
                                        */
  real_T Constant_Value_d;             /* Expression: 1
                                        * Referenced by: '<S85>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S85>/Constant1'
                                        */
  real_T Constant2_Value_d;            /* Expression: 0
                                        * Referenced by: '<S85>/Constant2'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T PCI6221AD_P1_Size[2];         /* Computed Parameter: PCI6221AD_P1_Size
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P1[5];              /* Expression: channel
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P2_Size[2];         /* Computed Parameter: PCI6221AD_P2_Size
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P2[5];              /* Expression: range
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P3_Size[2];         /* Computed Parameter: PCI6221AD_P3_Size
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P3[5];              /* Expression: coupling
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P4_Size[2];         /* Computed Parameter: PCI6221AD_P4_Size
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P4;                 /* Expression: scantime
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P5_Size[2];         /* Computed Parameter: PCI6221AD_P5_Size
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P5;                 /* Expression: sampletime
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P6_Size[2];         /* Computed Parameter: PCI6221AD_P6_Size
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P6;                 /* Expression: slot
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P7_Size[2];         /* Computed Parameter: PCI6221AD_P7_Size
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221AD_P7;                 /* Expression: boardType
                                        * Referenced by: '<S16>/PCI-6221 AD'
                                        */
  real_T PCI6221DI_P1_Size[2];         /* Computed Parameter: PCI6221DI_P1_Size
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P1[7];              /* Expression: channel
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P2_Size[2];         /* Computed Parameter: PCI6221DI_P2_Size
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P2;                 /* Expression: sampletime
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P3_Size[2];         /* Computed Parameter: PCI6221DI_P3_Size
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P3;                 /* Expression: slot
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P4_Size[2];         /* Computed Parameter: PCI6221DI_P4_Size
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P4;                 /* Expression: control
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P5_Size[2];         /* Computed Parameter: PCI6221DI_P5_Size
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221DI_P5;                 /* Expression: boardType
                                        * Referenced by: '<S17>/PCI-6221 DI'
                                        */
  real_T PCI6221PFIDI_P1_Size[2];      /* Computed Parameter: PCI6221PFIDI_P1_Size
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P1;              /* Expression: device
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P2_Size[2];      /* Computed Parameter: PCI6221PFIDI_P2_Size
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P2;              /* Expression: channel
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P3_Size[2];      /* Computed Parameter: PCI6221PFIDI_P3_Size
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P3;              /* Expression: outmask
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P4_Size[2];      /* Computed Parameter: PCI6221PFIDI_P4_Size
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P4;              /* Expression: sampleTime
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P5_Size[2];      /* Computed Parameter: PCI6221PFIDI_P5_Size
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T PCI6221PFIDI_P5;              /* Expression: slot
                                        * Referenced by: '<S17>/PCI 6221 PFI DI '
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S10>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn1_InitialSta;/* Expression: 0
                                          * Referenced by: '<S10>/Discrete Transfer Fcn1'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: JoyW_sat
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -JoyW_sat
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T DiscreteTransferFcn1_InitialS_d;/* Expression: 0
                                          * Referenced by: '<S14>/Discrete Transfer Fcn1'
                                          */
  real_T Constant3_Value_f;            /* Expression: 1
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T DiscreteTransferFcn2_InitialSta;/* Expression: 0
                                          * Referenced by: '<S11>/Discrete Transfer Fcn2'
                                          */
  real_T DiscreteTransferFcn1_InitialS_h;/* Expression: 0
                                          * Referenced by: '<S13>/Discrete Transfer Fcn1'
                                          */
  real_T DiscreteTransferFcn_InitialSt_m;/* Expression: 0
                                          * Referenced by: '<S15>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn1_Initial_dv;/* Expression: 0
                                          * Referenced by: '<S12>/Discrete Transfer Fcn1'
                                          */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S12>/Delay'
                                        */
  real_T UnitDelay7_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay7'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay1'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay2'
                                        */
  real_T UnitDelay4_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay4'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay5'
                                        */
  real_T UnitDelay6_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay6'
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay3'
                                        */
  real_T UnitDelay_InitialCondition_n; /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  real_T UnitDelay8_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay8'
                                        */
  real_T Switch_Threshold_l;           /* Expression: 0.5
                                        * Referenced by: '<S14>/Switch'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0.5
                                        * Referenced by: '<S15>/Switch'
                                        */
  real_T Constant_Value_p;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Constant1_Value_b;            /* Expression: 11
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 0.5
                                        * Referenced by: '<S6>/Switch'
                                        */
  real_T Beschleunigung_Value;         /* Expression: 0.0025
                                        * Referenced by: '<S93>/Beschleunigung'
                                        */
  real_T Beschleunigung_Value_o;       /* Expression: 0.00125
                                        * Referenced by: '<S88>/Beschleunigung'
                                        */
  real_T Delay_InitialCondition_a;     /* Expression: 0
                                        * Referenced by: '<S7>/Delay'
                                        */
  real_T untereKraftsensorGrenze_Value;/* Expression: -1
                                        * Referenced by: '<S88>/untere Kraftsensor Grenze'
                                        */
  real_T obereKraftsensorGrenze_Value; /* Expression: 1
                                        * Referenced by: '<S88>/obere Kraftsensor Grenze'
                                        */
  real_T Delay3_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S90>/Delay3'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S90>/Delay1'
                                        */
  real_T Delay4_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S90>/Delay4'
                                        */
  real_T Constant2_Value_k;            /* Expression: 1
                                        * Referenced by: '<S90>/Constant2'
                                        */
  real_T Constant3_Value_j;            /* Expression: 0
                                        * Referenced by: '<S90>/Constant3'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0
                                        * Referenced by: '<S90>/Switch5'
                                        */
  real_T Delay5_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S90>/Delay5'
                                        */
  real_T Switch7_Threshold;            /* Expression: 0
                                        * Referenced by: '<S90>/Switch7'
                                        */
  real_T Beschleunigung_Value_l;       /* Expression: 0.00125
                                        * Referenced by: '<S99>/Beschleunigung'
                                        */
  real_T Beschleunigung_Value_j;       /* Expression: 0.00125
                                        * Referenced by: '<S98>/Beschleunigung'
                                        */
  real_T Delay_InitialCondition_j;     /* Expression: 0
                                        * Referenced by: '<S92>/Delay'
                                        */
  real_T untereKraftsensorGrenze_Value_i;/* Expression: -1
                                          * Referenced by: '<S98>/untere Kraftsensor Grenze'
                                          */
  real_T obereKraftsensorGrenze_Value_n;/* Expression: 1
                                         * Referenced by: '<S98>/obere Kraftsensor Grenze'
                                         */
  real_T Delay_InitialCondition_n;     /* Expression: 0
                                        * Referenced by: '<S99>/Delay'
                                        */
  real_T Constant_Value_i;             /* Expression: 0
                                        * Referenced by: '<S101>/Constant'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S100>/Constant'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S99>/Constant1'
                                        */
  real_T Delay1_InitialCondition_c;    /* Expression: 0
                                        * Referenced by: '<S99>/Delay1'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S90>/Delay2'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0
                                        * Referenced by: '<S90>/Switch4'
                                        */
  real_T Beschleunigung_Value_p;       /* Expression: 0.00125
                                        * Referenced by: '<S95>/Beschleunigung'
                                        */
  real_T Beschleunigung_Value_l5;      /* Expression: 0.00125
                                        * Referenced by: '<S94>/Beschleunigung'
                                        */
  real_T Delay_InitialCondition_e;     /* Expression: 0
                                        * Referenced by: '<S91>/Delay'
                                        */
  real_T untereKraftsensorGrenze_Value_m;/* Expression: -1
                                          * Referenced by: '<S94>/untere Kraftsensor Grenze'
                                          */
  real_T obereKraftsensorGrenze_Value_m;/* Expression: 1
                                         * Referenced by: '<S94>/obere Kraftsensor Grenze'
                                         */
  real_T Delay_InitialCondition_m;     /* Expression: 0
                                        * Referenced by: '<S95>/Delay'
                                        */
  real_T Constant_Value_o;             /* Expression: 0
                                        * Referenced by: '<S97>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S96>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S95>/Constant1'
                                        */
  real_T Delay1_InitialCondition_f;    /* Expression: 0
                                        * Referenced by: '<S95>/Delay1'
                                        */
  real_T Switch_Threshold_h2;          /* Expression: 0
                                        * Referenced by: '<S90>/Switch'
                                        */
  real_T Switch1_Threshold_f;          /* Expression: 0
                                        * Referenced by: '<S7>/Switch1'
                                        */
  real_T Delay_InitialCondition_c;     /* Expression: 0
                                        * Referenced by: '<S93>/Delay'
                                        */
  real_T Constant_Value_id;            /* Expression: 0
                                        * Referenced by: '<S103>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S102>/Constant'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S93>/Constant1'
                                        */
  real_T Delay1_InitialCondition_a;    /* Expression: 0
                                        * Referenced by: '<S93>/Delay1'
                                        */
  real_T Switch1_Threshold_g;          /* Expression: 0.5
                                        * Referenced by: '<S6>/Switch1'
                                        */
  real_T FIFOASCIIread1_P1_Size[2];    /* Computed Parameter: FIFOASCIIread1_P1_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P1;            /* Expression: maxsize
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P2_Size[2];    /* Computed Parameter: FIFOASCIIread1_P2_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P2;            /* Expression: outputtype
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P3_Size[2];    /* Computed Parameter: FIFOASCIIread1_P3_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P3;            /* Expression: sampletime
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P4_Size[2];    /* Computed Parameter: FIFOASCIIread1_P4_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P4[2];         /* Computed Parameter: FIFOASCIIread1_P4
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P5_Size[2];    /* Computed Parameter: FIFOASCIIread1_P5_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P5;            /* Expression: hlengths
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P6_Size[2];    /* Computed Parameter: FIFOASCIIread1_P6_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P6;            /* Computed Parameter: FIFOASCIIread1_P6
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P7_Size[2];    /* Computed Parameter: FIFOASCIIread1_P7_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P7;            /* Expression: hold
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P8_Size[2];    /* Computed Parameter: FIFOASCIIread1_P8_Size
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P8;            /* Expression: enable
                                        * Referenced by: '<S19>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P1_Size_c[2];  /* Computed Parameter: FIFOASCIIread1_P1_Size_c
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P1_l;          /* Expression: maxsize
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P2_Size_c[2];  /* Computed Parameter: FIFOASCIIread1_P2_Size_c
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P2_b;          /* Expression: outputtype
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P3_Size_j[2];  /* Computed Parameter: FIFOASCIIread1_P3_Size_j
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P3_n;          /* Expression: sampletime
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P4_Size_c[2];  /* Computed Parameter: FIFOASCIIread1_P4_Size_c
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P4_e[6];       /* Computed Parameter: FIFOASCIIread1_P4_e
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P5_Size_o[2];  /* Computed Parameter: FIFOASCIIread1_P5_Size_o
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P5_o;          /* Expression: hlengths
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P6_Size_n[2];  /* Computed Parameter: FIFOASCIIread1_P6_Size_n
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P6_i[2];       /* Computed Parameter: FIFOASCIIread1_P6_i
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P7_Size_c[2];  /* Computed Parameter: FIFOASCIIread1_P7_Size_c
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P7_i;          /* Expression: hold
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P8_Size_l[2];  /* Computed Parameter: FIFOASCIIread1_P8_Size_l
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread1_P8_n;          /* Expression: enable
                                        * Referenced by: '<S20>/FIFO ASCII read 1'
                                        */
  real_T FIFOASCIIread_P1_Size[2];     /* Computed Parameter: FIFOASCIIread_P1_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P1;             /* Expression: maxsize
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P2_Size[2];     /* Computed Parameter: FIFOASCIIread_P2_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P2;             /* Expression: outputtype
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P3_Size[2];     /* Computed Parameter: FIFOASCIIread_P3_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P3;             /* Expression: sampletime
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P4_Size[2];     /* Computed Parameter: FIFOASCIIread_P4_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P4[4];          /* Computed Parameter: FIFOASCIIread_P4
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P5_Size[2];     /* Computed Parameter: FIFOASCIIread_P5_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P5;             /* Expression: hlengths
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P6_Size[2];     /* Computed Parameter: FIFOASCIIread_P6_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P6[2];          /* Computed Parameter: FIFOASCIIread_P6
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P7_Size[2];     /* Computed Parameter: FIFOASCIIread_P7_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P7;             /* Expression: hold
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P8_Size[2];     /* Computed Parameter: FIFOASCIIread_P8_Size
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOASCIIread_P8;             /* Expression: enable
                                        * Referenced by: '<S21>/FIFO ASCII read '
                                        */
  real_T FIFOwrite1_P1_Size_m[2];      /* Computed Parameter: FIFOwrite1_P1_Size_m
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P1_n;              /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P2_Size_e[2];      /* Computed Parameter: FIFOwrite1_P2_Size_e
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P2_o;              /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P3_Size_g[2];      /* Computed Parameter: FIFOwrite1_P3_Size_g
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P3_n;              /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P4_Size_m[2];      /* Computed Parameter: FIFOwrite1_P4_Size_m
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P4_j;              /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P5_Size_a[2];      /* Computed Parameter: FIFOwrite1_P5_Size_a
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T FIFOwrite1_P5_o[34];          /* Computed Parameter: FIFOwrite1_P5_o
                                        * Referenced by: '<S22>/FIFO write 1'
                                        */
  real_T EnableTX1_P1_Size[2];         /* Computed Parameter: EnableTX1_P1_Size
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */
  real_T EnableTX1_P1;                 /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */
  real_T EnableTX1_P2_Size[2];         /* Computed Parameter: EnableTX1_P2_Size
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */
  real_T EnableTX1_P2;                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */
  real_T EnableTX1_P3_Size[2];         /* Computed Parameter: EnableTX1_P3_Size
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */
  real_T EnableTX1_P3;                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 1'
                                        */
  real_T FIFOwrite2_P1_Size_i[2];      /* Computed Parameter: FIFOwrite2_P1_Size_i
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P1_l;              /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P2_Size_l[2];      /* Computed Parameter: FIFOwrite2_P2_Size_l
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P2_i;              /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P3_Size_j[2];      /* Computed Parameter: FIFOwrite2_P3_Size_j
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P3_h;              /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P4_Size_k[2];      /* Computed Parameter: FIFOwrite2_P4_Size_k
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P4_d;              /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P5_Size_g[2];      /* Computed Parameter: FIFOwrite2_P5_Size_g
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T FIFOwrite2_P5_g[34];          /* Computed Parameter: FIFOwrite2_P5_g
                                        * Referenced by: '<S22>/FIFO write 2'
                                        */
  real_T EnableTX2_P1_Size[2];         /* Computed Parameter: EnableTX2_P1_Size
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */
  real_T EnableTX2_P1;                 /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */
  real_T EnableTX2_P2_Size[2];         /* Computed Parameter: EnableTX2_P2_Size
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */
  real_T EnableTX2_P2;                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */
  real_T EnableTX2_P3_Size[2];         /* Computed Parameter: EnableTX2_P3_Size
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */
  real_T EnableTX2_P3;                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 2'
                                        */
  real_T FIFOwrite3_P1_Size_m[2];      /* Computed Parameter: FIFOwrite3_P1_Size_m
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P1_p;              /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P2_Size_f[2];      /* Computed Parameter: FIFOwrite3_P2_Size_f
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P2_n;              /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P3_Size_j[2];      /* Computed Parameter: FIFOwrite3_P3_Size_j
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P3_k;              /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P4_Size_e[2];      /* Computed Parameter: FIFOwrite3_P4_Size_e
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P4_m;              /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P5_Size_i[2];      /* Computed Parameter: FIFOwrite3_P5_Size_i
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T FIFOwrite3_P5_a[34];          /* Computed Parameter: FIFOwrite3_P5_a
                                        * Referenced by: '<S22>/FIFO write 3'
                                        */
  real_T EnableTX3_P1_Size[2];         /* Computed Parameter: EnableTX3_P1_Size
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */
  real_T EnableTX3_P1;                 /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */
  real_T EnableTX3_P2_Size[2];         /* Computed Parameter: EnableTX3_P2_Size
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */
  real_T EnableTX3_P2;                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */
  real_T EnableTX3_P3_Size[2];         /* Computed Parameter: EnableTX3_P3_Size
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */
  real_T EnableTX3_P3;                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 3'
                                        */
  real_T FIFOwrite4_P1_Size_f[2];      /* Computed Parameter: FIFOwrite4_P1_Size_f
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P1_e;              /* Expression: size
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P2_Size_b[2];      /* Computed Parameter: FIFOwrite4_P2_Size_b
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P2_n;              /* Expression: inputtype
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P3_Size_g[2];      /* Computed Parameter: FIFOwrite4_P3_Size_g
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P3_p;              /* Expression: sampletime
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P4_Size_j[2];      /* Computed Parameter: FIFOwrite4_P4_Size_j
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P4_f;              /* Expression: present
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P5_Size_h[2];      /* Computed Parameter: FIFOwrite4_P5_Size_h
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T FIFOwrite4_P5_e[34];          /* Computed Parameter: FIFOwrite4_P5_e
                                        * Referenced by: '<S22>/FIFO write 4'
                                        */
  real_T EnableTX4_P1_Size[2];         /* Computed Parameter: EnableTX4_P1_Size
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */
  real_T EnableTX4_P1;                 /* Expression: slot
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */
  real_T EnableTX4_P2_Size[2];         /* Computed Parameter: EnableTX4_P2_Size
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */
  real_T EnableTX4_P2;                 /* Expression: port
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */
  real_T EnableTX4_P3_Size[2];         /* Computed Parameter: EnableTX4_P3_Size
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */
  real_T EnableTX4_P3;                 /* Expression: 1
                                        * Referenced by: '<S22>/Enable TX 4'
                                        */
  real_T Setup1_P1_Size[2];            /* Computed Parameter: Setup1_P1_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P1;                    /* Expression: slot
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P2_Size[2];            /* Computed Parameter: Setup1_P2_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P2;                    /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P3_Size[2];            /* Computed Parameter: Setup1_P3_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P3;                    /* Expression: port
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P4_Size[2];            /* Computed Parameter: Setup1_P4_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P4;                    /* Expression: baud
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P5_Size[2];            /* Computed Parameter: Setup1_P5_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P5;                    /* Expression: width
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P6_Size[2];            /* Computed Parameter: Setup1_P6_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P6;                    /* Expression: nstop
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P7_Size[2];            /* Computed Parameter: Setup1_P7_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P7;                    /* Expression: parity
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P8_Size[2];            /* Computed Parameter: Setup1_P8_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P8;                    /* Expression: fmode
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P9_Size[2];            /* Computed Parameter: Setup1_P9_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P9;                    /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P10_Size[2];           /* Computed Parameter: Setup1_P10_Size
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup1_P10;                   /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup1'
                                        */
  real_T Setup2_P1_Size[2];            /* Computed Parameter: Setup2_P1_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P1;                    /* Expression: slot
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P2_Size[2];            /* Computed Parameter: Setup2_P2_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P2;                    /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P3_Size[2];            /* Computed Parameter: Setup2_P3_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P3;                    /* Expression: port
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P4_Size[2];            /* Computed Parameter: Setup2_P4_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P4;                    /* Expression: baud
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P5_Size[2];            /* Computed Parameter: Setup2_P5_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P5;                    /* Expression: width
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P6_Size[2];            /* Computed Parameter: Setup2_P6_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P6;                    /* Expression: nstop
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P7_Size[2];            /* Computed Parameter: Setup2_P7_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P7;                    /* Expression: parity
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P8_Size[2];            /* Computed Parameter: Setup2_P8_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P8;                    /* Expression: fmode
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P9_Size[2];            /* Computed Parameter: Setup2_P9_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P9;                    /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P10_Size[2];           /* Computed Parameter: Setup2_P10_Size
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup2_P10;                   /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup2'
                                        */
  real_T Setup3_P1_Size[2];            /* Computed Parameter: Setup3_P1_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P1;                    /* Expression: slot
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P2_Size[2];            /* Computed Parameter: Setup3_P2_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P2;                    /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P3_Size[2];            /* Computed Parameter: Setup3_P3_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P3;                    /* Expression: port
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P4_Size[2];            /* Computed Parameter: Setup3_P4_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P4;                    /* Expression: baud
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P5_Size[2];            /* Computed Parameter: Setup3_P5_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P5;                    /* Expression: width
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P6_Size[2];            /* Computed Parameter: Setup3_P6_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P6;                    /* Expression: nstop
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P7_Size[2];            /* Computed Parameter: Setup3_P7_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P7;                    /* Expression: parity
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P8_Size[2];            /* Computed Parameter: Setup3_P8_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P8;                    /* Expression: fmode
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P9_Size[2];            /* Computed Parameter: Setup3_P9_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P9;                    /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P10_Size[2];           /* Computed Parameter: Setup3_P10_Size
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup3_P10;                   /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup3'
                                        */
  real_T Setup4_P1_Size[2];            /* Computed Parameter: Setup4_P1_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P1;                    /* Expression: slot
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P2_Size[2];            /* Computed Parameter: Setup4_P2_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P2;                    /* Expression: boardtype
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P3_Size[2];            /* Computed Parameter: Setup4_P3_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P3;                    /* Expression: port
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P4_Size[2];            /* Computed Parameter: Setup4_P4_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P4;                    /* Expression: baud
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P5_Size[2];            /* Computed Parameter: Setup4_P5_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P5;                    /* Expression: width
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P6_Size[2];            /* Computed Parameter: Setup4_P6_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P6;                    /* Expression: nstop
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P7_Size[2];            /* Computed Parameter: Setup4_P7_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P7;                    /* Expression: parity
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P8_Size[2];            /* Computed Parameter: Setup4_P8_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P8;                    /* Expression: fmode
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P9_Size[2];            /* Computed Parameter: Setup4_P9_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P9;                    /* Expression: ctsmode
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P10_Size[2];           /* Computed Parameter: Setup4_P10_Size
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Setup4_P10;                   /* Expression: rlevel
                                        * Referenced by: '<S22>/Setup4'
                                        */
  real_T Constant1_Value_b3;           /* Expression: 1
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Constant3_Value_n;            /* Expression: 1
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real_T PCI6221PFIDO_P1_Size[2];      /* Computed Parameter: PCI6221PFIDO_P1_Size
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P1;              /* Expression: device
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P2_Size[2];      /* Computed Parameter: PCI6221PFIDO_P2_Size
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P2[3];           /* Expression: channel
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P3_Size[2];      /* Computed Parameter: PCI6221PFIDO_P3_Size
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P3;              /* Expression: outmask
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P4_Size[2];      /* Computed Parameter: PCI6221PFIDO_P4_Size
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P4[3];           /* Expression: reset1
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P5_Size[2];      /* Computed Parameter: PCI6221PFIDO_P5_Size
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P5[3];           /* Expression: initial1
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P6_Size[2];      /* Computed Parameter: PCI6221PFIDO_P6_Size
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P6;              /* Expression: sampleTime
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P7_Size[2];      /* Computed Parameter: PCI6221PFIDO_P7_Size
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221PFIDO_P7;              /* Expression: slot
                                        * Referenced by: '<S6>/PCI 6221 PFI DO '
                                        */
  real_T PCI6221DA_P1_Size[2];         /* Computed Parameter: PCI6221DA_P1_Size
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P1[2];              /* Expression: channel
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P2_Size[2];         /* Computed Parameter: PCI6221DA_P2_Size
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P2[2];              /* Expression: range
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P3_Size[2];         /* Computed Parameter: PCI6221DA_P3_Size
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P3[2];              /* Expression: reset
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P4_Size[2];         /* Computed Parameter: PCI6221DA_P4_Size
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P4[2];              /* Expression: initValue
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P5_Size[2];         /* Computed Parameter: PCI6221DA_P5_Size
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P5;                 /* Expression: sampletime
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P6_Size[2];         /* Computed Parameter: PCI6221DA_P6_Size
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P6;                 /* Expression: slot
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P7_Size[2];         /* Computed Parameter: PCI6221DA_P7_Size
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DA_P7;                 /* Expression: boardType
                                        * Referenced by: '<S6>/PCI-6221 DA'
                                        */
  real_T PCI6221DO_P1_Size[2];         /* Computed Parameter: PCI6221DO_P1_Size
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P1;                 /* Expression: channel
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P2_Size[2];         /* Computed Parameter: PCI6221DO_P2_Size
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P2;                 /* Expression: reset
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P3_Size[2];         /* Computed Parameter: PCI6221DO_P3_Size
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P3;                 /* Expression: initValue
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P4_Size[2];         /* Computed Parameter: PCI6221DO_P4_Size
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P4;                 /* Expression: sampletime
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P5_Size[2];         /* Computed Parameter: PCI6221DO_P5_Size
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P5;                 /* Expression: slot
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P6_Size[2];         /* Computed Parameter: PCI6221DO_P6_Size
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P6;                 /* Expression: control
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P7_Size[2];         /* Computed Parameter: PCI6221DO_P7_Size
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  real_T PCI6221DO_P7;                 /* Expression: boardType
                                        * Referenced by: '<S6>/PCI-6221 DO'
                                        */
  uint32_T Constant1_Value_be;         /* Computed Parameter: Constant1_Value_be
                                        * Referenced by: '<S80>/Constant1'
                                        */
  uint32_T Constant2_Value_n;          /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S80>/Constant2'
                                        */
  uint32_T Constant3_Value_d;          /* Computed Parameter: Constant3_Value_d
                                        * Referenced by: '<S80>/Constant3'
                                        */
  uint32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S80>/Constant4'
                                        */
  uint32_T BitwiseLogicalOperator_BitMask;/* Expression: BitMask
                                           * Referenced by: '<S80>/Bitwise Logical Operator'
                                           */
  uint32_T Constant9_Value;            /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S80>/Constant9'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S12>/Delay'
                                        */
  uint32_T Delay_DelayLength_l;        /* Computed Parameter: Delay_DelayLength_l
                                        * Referenced by: '<S7>/Delay'
                                        */
  uint32_T Delay3_DelayLength;         /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<S90>/Delay3'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S90>/Delay1'
                                        */
  uint32_T Delay4_DelayLength;         /* Computed Parameter: Delay4_DelayLength
                                        * Referenced by: '<S90>/Delay4'
                                        */
  uint32_T Delay5_DelayLength;         /* Computed Parameter: Delay5_DelayLength
                                        * Referenced by: '<S90>/Delay5'
                                        */
  uint32_T Delay_DelayLength_lc;       /* Computed Parameter: Delay_DelayLength_lc
                                        * Referenced by: '<S92>/Delay'
                                        */
  uint32_T Delay_DelayLength_l4;       /* Computed Parameter: Delay_DelayLength_l4
                                        * Referenced by: '<S99>/Delay'
                                        */
  uint32_T Delay1_DelayLength_j;       /* Computed Parameter: Delay1_DelayLength_j
                                        * Referenced by: '<S99>/Delay1'
                                        */
  uint32_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S90>/Delay2'
                                        */
  uint32_T Delay_DelayLength_f;        /* Computed Parameter: Delay_DelayLength_f
                                        * Referenced by: '<S91>/Delay'
                                        */
  uint32_T Delay_DelayLength_p;        /* Computed Parameter: Delay_DelayLength_p
                                        * Referenced by: '<S95>/Delay'
                                        */
  uint32_T Delay1_DelayLength_g;       /* Computed Parameter: Delay1_DelayLength_g
                                        * Referenced by: '<S95>/Delay1'
                                        */
  uint32_T Delay_DelayLength_n;        /* Computed Parameter: Delay_DelayLength_n
                                        * Referenced by: '<S93>/Delay'
                                        */
  uint32_T Delay1_DelayLength_i;       /* Computed Parameter: Delay1_DelayLength_i
                                        * Referenced by: '<S93>/Delay1'
                                        */
  uint8_T Constant_Value_bd;           /* Computed Parameter: Constant_Value_bd
                                        * Referenced by: '<S18>/Constant'
                                        */
  uint8_T Constant1_Value_ce;          /* Computed Parameter: Constant1_Value_ce
                                        * Referenced by: '<S18>/Constant1'
                                        */
  uint8_T Constant2_Value_jf;          /* Computed Parameter: Constant2_Value_jf
                                        * Referenced by: '<S18>/Constant2'
                                        */
  uint8_T Constant3_Value_d2;          /* Computed Parameter: Constant3_Value_d2
                                        * Referenced by: '<S18>/Constant3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Control_software_v1_1_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[5];
    SimStruct childSFunctions[46];
    SimStruct *childSFunctionPtrs[46];
    struct _ssBlkInfo2 blkInfo2[46];
    struct _ssSFcnModelMethods2 methods2[46];
    struct _ssSFcnModelMethods3 methods3[46];
    struct _ssSFcnModelMethods4 methods4[46];
    struct _ssStatesInfo2 statesInfo2[46];
    ssPeriodicStatesInfo periodicStatesInfo[46];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[8];
      mxArray *params[8];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[5];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[7];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn37;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn38;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn39;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn40;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn41;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[10];
      mxArray *params[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn42;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn43;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn44;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn45;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    uint32_T clockTick4;
    uint32_T clockTickH4;
    time_T stepSize4;
    uint8_T rtmDbBufReadBuf4;
    uint8_T rtmDbBufWriteBuf4;
    boolean_T rtmDbBufLastBufWr4;
    uint32_T rtmDbBufClockTick4[2];
    uint32_T rtmDbBufClockTickH4[2];
    struct {
      uint16_T TID[4];
    } TaskCounters;

    struct {
      boolean_T TID0_1;
      boolean_T TID0_2;
      boolean_T TID0_3;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[5];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Control_software_v1_1_T Control_software_v1_1_P;

/* Block signals (auto storage) */
extern B_Control_software_v1_1_T Control_software_v1_1_B;

/* Block states (auto storage) */
extern DW_Control_software_v1_1_T Control_software_v1_1_DW;

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/*====================*
 * External functions *
 *====================*/
extern Control_software_v1_1_rtModel *Control_software_v1_1(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  Control_software_v1_1_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_Control_software_v1_1_T *const Control_software_v1_1_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Control_software_v1_1'
 * '<S1>'   : 'Control_software_v1_1/Auxiliary variables'
 * '<S2>'   : 'Control_software_v1_1/High-level control'
 * '<S3>'   : 'Control_software_v1_1/Input conditioning and estimators'
 * '<S4>'   : 'Control_software_v1_1/Inputs'
 * '<S5>'   : 'Control_software_v1_1/Logging'
 * '<S6>'   : 'Control_software_v1_1/Outputs'
 * '<S7>'   : 'Control_software_v1_1/Subsystem'
 * '<S8>'   : 'Control_software_v1_1/High-level control/HLC_Parameters'
 * '<S9>'   : 'Control_software_v1_1/High-level control/MATLAB Function'
 * '<S10>'  : 'Control_software_v1_1/Input conditioning and estimators/Subsystem'
 * '<S11>'  : 'Control_software_v1_1/Input conditioning and estimators/Subsystem1'
 * '<S12>'  : 'Control_software_v1_1/Input conditioning and estimators/Subsystem2'
 * '<S13>'  : 'Control_software_v1_1/Input conditioning and estimators/Subsystem1/Subsystem'
 * '<S14>'  : 'Control_software_v1_1/Input conditioning and estimators/Subsystem1/Subsystem1'
 * '<S15>'  : 'Control_software_v1_1/Input conditioning and estimators/Subsystem1/Subsystem2'
 * '<S16>'  : 'Control_software_v1_1/Inputs/Analog Inputs'
 * '<S17>'  : 'Control_software_v1_1/Inputs/Digital Inputs'
 * '<S18>'  : 'Control_software_v1_1/Inputs/RS232_read'
 * '<S19>'  : 'Control_software_v1_1/Inputs/RS232_read/Compass_read'
 * '<S20>'  : 'Control_software_v1_1/Inputs/RS232_read/GPS_read'
 * '<S21>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read'
 * '<S22>'  : 'Control_software_v1_1/Inputs/RS232_read/QSC-100 F'
 * '<S23>'  : 'Control_software_v1_1/Inputs/RS232_read/Compass_read/Embedded MATLAB Function'
 * '<S24>'  : 'Control_software_v1_1/Inputs/RS232_read/GPS_read/Embedded MATLAB Function'
 * '<S25>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/Data_Check_CRC'
 * '<S26>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/Data_validation'
 * '<S27>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert'
 * '<S28>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/Data_Check_CRC/Embedded MATLAB Function'
 * '<S29>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1'
 * '<S30>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10'
 * '<S31>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12'
 * '<S32>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14'
 * '<S33>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15'
 * '<S34>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16'
 * '<S35>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17'
 * '<S36>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18'
 * '<S37>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19'
 * '<S38>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6'
 * '<S39>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8'
 * '<S40>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9'
 * '<S41>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function'
 * '<S42>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function1'
 * '<S43>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem1/Embedded MATLAB Function2'
 * '<S44>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function'
 * '<S45>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function1'
 * '<S46>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem10/Embedded MATLAB Function3'
 * '<S47>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function'
 * '<S48>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function1'
 * '<S49>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function2'
 * '<S50>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function3'
 * '<S51>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function4'
 * '<S52>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function5'
 * '<S53>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem12/Embedded MATLAB Function6'
 * '<S54>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem14/Embedded MATLAB Function'
 * '<S55>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function1'
 * '<S56>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function2'
 * '<S57>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem15/Embedded MATLAB Function3'
 * '<S58>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function1'
 * '<S59>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function2'
 * '<S60>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function3'
 * '<S61>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem16/Embedded MATLAB Function4'
 * '<S62>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem17/Embedded MATLAB Function2'
 * '<S63>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function'
 * '<S64>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function1'
 * '<S65>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem18/Embedded MATLAB Function2'
 * '<S66>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function'
 * '<S67>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function1'
 * '<S68>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem19/Embedded MATLAB Function3'
 * '<S69>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function'
 * '<S70>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function1'
 * '<S71>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function3'
 * '<S72>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem6/Embedded MATLAB Function4'
 * '<S73>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function'
 * '<S74>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function1'
 * '<S75>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem8/Embedded MATLAB Function3'
 * '<S76>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function'
 * '<S77>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function1'
 * '<S78>'  : 'Control_software_v1_1/Inputs/RS232_read/IMU_read/IMU_data_convert/Subsystem9/Embedded MATLAB Function3'
 * '<S79>'  : 'Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR'
 * '<S80>'  : 'Control_software_v1_1/Inputs/RS232_read/QSC-100 F/RS232 ISR/While Iterator Subsystem'
 * '<S81>'  : 'Control_software_v1_1/Logging/Log_conditioning'
 * '<S82>'  : 'Control_software_v1_1/Logging/MavLink_log'
 * '<S83>'  : 'Control_software_v1_1/Logging/TS100_log'
 * '<S84>'  : 'Control_software_v1_1/Logging/TS1_log'
 * '<S85>'  : 'Control_software_v1_1/Logging/Time_Scope_trigger'
 * '<S86>'  : 'Control_software_v1_1/Logging/Time_log'
 * '<S87>'  : 'Control_software_v1_1/Outputs/Scope '
 * '<S88>'  : 'Control_software_v1_1/Subsystem/Emergency'
 * '<S89>'  : 'Control_software_v1_1/Subsystem/Scope '
 * '<S90>'  : 'Control_software_v1_1/Subsystem/Subsystem'
 * '<S91>'  : 'Control_software_v1_1/Subsystem/Takeoff'
 * '<S92>'  : 'Control_software_v1_1/Subsystem/Takeoff1'
 * '<S93>'  : 'Control_software_v1_1/Subsystem/damper'
 * '<S94>'  : 'Control_software_v1_1/Subsystem/Takeoff/Joystick-Steuerung'
 * '<S95>'  : 'Control_software_v1_1/Subsystem/Takeoff/damper'
 * '<S96>'  : 'Control_software_v1_1/Subsystem/Takeoff/damper/Compare To Zero'
 * '<S97>'  : 'Control_software_v1_1/Subsystem/Takeoff/damper/Compare To Zero1'
 * '<S98>'  : 'Control_software_v1_1/Subsystem/Takeoff1/Joystick-Steuerung'
 * '<S99>'  : 'Control_software_v1_1/Subsystem/Takeoff1/damper'
 * '<S100>' : 'Control_software_v1_1/Subsystem/Takeoff1/damper/Compare To Zero'
 * '<S101>' : 'Control_software_v1_1/Subsystem/Takeoff1/damper/Compare To Zero1'
 * '<S102>' : 'Control_software_v1_1/Subsystem/damper/Compare To Zero'
 * '<S103>' : 'Control_software_v1_1/Subsystem/damper/Compare To Zero1'
 */
#endif                                 /* RTW_HEADER_Control_software_v1_1_h_ */
