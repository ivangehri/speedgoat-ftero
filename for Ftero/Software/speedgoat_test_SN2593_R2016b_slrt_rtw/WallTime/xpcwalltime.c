/*
 * xpcwalltime.c - xPC Target, non-inlined S-function driver to output current wall time.
 *
 *    CurrentWallTime = BlockStartWallTime + (CurrentUpTime - BlockStartUpTime)
 *                        {coarse clock}                {fine timer}
 *
 *    EpochSource  - MATLAB: Use MATLAB default of the day before [0 1 1 0 0 0]
 *                   Start : Use Block Start Time
 *                   Other : Use EpochVector
 *    EpochVector  - [Year Month Day Hour Minute Second]
 *    TimeFormat   - Days   : Days since Epoch (MATLAB default)     double
 *                   Seconds: Seconds since Epoch                   double
 *                   xpcTime: Nanoseconds since Epoch               uint32[2]
 *                   Date   : [Year Month Day Hour Minute Second]   uint16[6]
 *    InputTrigger - Place ASAP after preceding block
 *    SampleTime   - Sample Time or -1 for Inherited
 *
 *    Notes: No checking is performed for overflow (especially with nanoseconds).
 *           Reading the real time AT clock during mdlOutputs can take a long time.
 *           The xpcTime struct is not fully supported in simulation.
 *
 * Copyright 2009 The MathWorks, Inc.
*/


#define S_FUNCTION_LEVEL   2
#undef  S_FUNCTION_NAME
#define S_FUNCTION_NAME    xpcwalltime


#include <stddef.h>
#include <stdlib.h>
#include "simstruc.h"

#ifdef MATLAB_MEX_FILE
#include "mex.h"
#else
#include <windows.h>
#include "xpctarget.h"
#endif   // matlab_mex_file


typedef enum {
    S_EPOCH_SOURCE = 0,
    S_EPOCH_VECTOR,
    S_TIME_FORMAT,
    S_INPUT_TRIGGER,
    S_SAMPLE_TIME,
    NUM_S_PARAMS
} Params;


typedef enum {
   EPOCH_SOURCE_MATLAB = 1,
   EPOCH_SOURCE_START,
   EPOCH_SOURCE_OTHER,
   NUM_EPOCH_SOURCES
} EpochSource;


typedef enum {
   TIME_FORMAT_DAYS = 1,
   TIME_FORMAT_SECONDS,
   TIME_FORMAT_XPC_TIME,
   TIME_FORMAT_DATE,
   NUM_TIME_FORMATS
} TimeFormat;


#include "time_utils.c"


#ifdef MATLAB_MEX_FILE
#include <time.h>
#else
#include "rt_at_clk.c"
#endif   // matlab_mex_file


#ifdef MATLAB_MEX_FILE
#define T_YEAR_OFFSET 1900
#define T_MONTH_OFFSET   1
#endif   // matlab_mex_file


#ifndef MAX_LO_NANO
#define MAX_LO_NANO       (4.294967296)
#endif   // max_lo_nano
#ifndef NANO_PER_SECOND
#define NANO_PER_SECOND   (1e9)
#endif   // nano_per_second


static char_T   msg[256];
static int_T    j;


static void mdlInitializeSizes(SimStruct *S)
{
   DTypeId port_type;
   int_T   port_width;
   int_T   num_i_works, num_r_works;

   ssSetNumSFcnParams(S, NUM_S_PARAMS);
   if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
      sprintf(msg, "%d input args expected, %d passed",
              NUM_S_PARAMS, ssGetSFcnParamsCount(S));
      ssSetErrorStatus(S, msg);
      return;
   }

   switch ( (uint16_T)mxGetPr(ssGetSFcnParam(S,S_TIME_FORMAT))[0] ) {
      case TIME_FORMAT_DATE:
         port_type  = SS_UINT16;
         port_width = DATE_VECTOR_LENGTH;
         num_i_works = 0;
         num_r_works = 0;
         break;
      case TIME_FORMAT_XPC_TIME:
         port_type  = SS_UINT32;
         port_width = 2;
#ifdef MATLAB_MEX_FILE
         num_i_works = 0;
         num_r_works = 1;
#else
         num_i_works = 2;
         num_r_works = 0;
#endif   // matlab_mex_file
         break;
      case TIME_FORMAT_DAYS:
      case TIME_FORMAT_SECONDS:
      default:
         port_type  = SS_DOUBLE;
         port_width = 1;
         num_i_works = 0;
         num_r_works = 1;
         break;
   }

   ssSetNumContStates(S, 0);
   ssSetNumDiscStates(S, 0);

   if ( (uint8_T)mxGetPr(ssGetSFcnParam(S,S_INPUT_TRIGGER))[0] ) {
      ssSetNumInputPorts(S, 1);
      ssSetInputPortDataType(S, 0, DYNAMICALLY_TYPED);
      ssSetInputPortDimensionInfo(S, 0, DYNAMIC_DIMENSION);
      ssSetInputPortRequiredContiguous(S, 0, 0);
      ssSetInputPortDirectFeedThrough(S, 0, 1);
   } else {
      ssSetNumInputPorts(S, 0);
   }

   ssSetNumOutputPorts(S, 1);
   ssSetOutputPortDataType(S, 0, port_type);
   ssSetOutputPortWidth(S, 0, port_width);

   ssSetNumSampleTimes(S, 1);
   ssSetNumIWork(S, num_i_works);
   ssSetNumRWork(S, num_r_works);
   ssSetNumPWork(S, 0);
   ssSetNumModes(S, 0);
   ssSetNumNonsampledZCs(S, 0);

   for ( j = 0 ; j < NUM_S_PARAMS ; j++ )
      ssSetSFcnParamTunable(S, j, SS_PRM_NOT_TUNABLE);

   if ( (uint8_T)mxGetPr(ssGetSFcnParam(S,S_INPUT_TRIGGER))[0] )
      ssSetOptions(S, SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                      SS_OPTION_PLACE_ASAP);
   else
      ssSetOptions(S, SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE);
}


static void mdlInitializeSampleTimes(SimStruct *S)
{
   if ( ((time_T)mxGetPr(ssGetSFcnParam(S,S_SAMPLE_TIME))[0] == -1.0) ||
        ((uint8_T)mxGetPr(ssGetSFcnParam(S,S_INPUT_TRIGGER))[0]) ) {
      ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
      ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);
   } else {
      ssSetSampleTime(S, 0,
                      (time_T)mxGetPr(ssGetSFcnParam(S,S_SAMPLE_TIME))[0]);
      ssSetOffsetTime(S, 0, 0.0);
   }
}


#define MDL_SET_INPUT_PORT_DIMENSION_INFO
static void mdlSetInputPortDimensionInfo(SimStruct  *S,
                                         int_T       portIndex,
                                         DimsInfo_T *dimsInfo)
{
   ssSetInputPortDimensionInfo(S, portIndex, dimsInfo);
}

#define MDL_SET_OUTPUT_PORT_DIMENSION_INFO
static void mdlSetOutputPortDimensionInfo(SimStruct  *S,
                                          int_T       portIndex,
                                          DimsInfo_T *dimsInfo)
{
   ssSetOutputPortDimensionInfo(S, portIndex, dimsInfo);
}

#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S,
                                    int_T      portIndex,
                                    DTypeId    dType)
{
   ssSetInputPortDataType(S, portIndex, dType);
}

#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S,
                                     int_T      portIndex,
                                     DTypeId    dType)
{
   ssSetOutputPortDataType(S, portIndex, dType);
}

#define MDL_SET_DEFAULT_PORT_DIMENSION_INFO
static void mdlSetDefaultPortDimensionInfo(SimStruct *S)
{
   ssSetInputPortVectorDimension(S, 0, 1);

   switch ( (uint16_T)mxGetPr(ssGetSFcnParam(S,S_TIME_FORMAT))[0] ) {
      case TIME_FORMAT_DATE:
         ssSetOutputPortVectorDimension(S, 0, DATE_VECTOR_LENGTH);
         break;
      case TIME_FORMAT_XPC_TIME:
         ssSetOutputPortVectorDimension(S, 0, 2);
         break;
      case TIME_FORMAT_DAYS:
      case TIME_FORMAT_SECONDS:
      default:
         ssSetOutputPortVectorDimension(S, 0, 1);
         break;
   }
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
   ssSetInputPortDataType(S, 0, SS_DOUBLE);

   switch ( (uint16_T)mxGetPr(ssGetSFcnParam(S,S_TIME_FORMAT))[0] ) {
      case TIME_FORMAT_DATE:
         ssSetOutputPortDataType(S, 0, SS_UINT16);
         break;
      case TIME_FORMAT_XPC_TIME:
         ssSetOutputPortDataType(S, 0, SS_UINT32);
         break;
      case TIME_FORMAT_DAYS:
      case TIME_FORMAT_SECONDS:
      default:
         ssSetOutputPortDataType(S, 0, SS_DOUBLE);
         break;
   }
}


#define MDL_START
static void mdlStart(SimStruct *S)
{
   uint16_T   epoch[DATE_VECTOR_LENGTH] = {0, 1, 1, 0, 0, 0};
   uint16_T   date[DATE_VECTOR_LENGTH];
   real_T     seconds_since_epoch, uptime_seconds;
#ifdef MATLAB_MEX_FILE
   time_t     t;
   struct tm *tp;
#else
   xpcTime    uptime_nano, nano_since_epoch, nano;
#endif   // matlab_mex_file

#ifndef MATLAB_MEX_FILE
   if ( ! xpcIsModelInit() ) {
#endif   // matlab_mex_file

#ifdef MATLAB_MEX_FILE
      t = time((time_t*)NULL);
      tp = localtime(&t);
      date[T_YEAR]  = tp->tm_year + T_YEAR_OFFSET;
      date[T_MONTH] = tp->tm_mon  + T_MONTH_OFFSET;
      date[T_DAY]   = tp->tm_mday;
      date[T_HOUR]  = tp->tm_hour;
      date[T_MIN]   = tp->tm_min;
      date[T_SEC]   = tp->tm_sec;
      uptime_seconds = clock() / CLK_TCK;
#else
      rt_at_clk_read_date(date);
      uptime_seconds = xpcGetElapsedTime(&uptime_nano);
#endif   // matlab_mex_file

      switch ( (uint16_T)mxGetPr(ssGetSFcnParam(S,S_EPOCH_SOURCE))[0] ) {
         case EPOCH_SOURCE_OTHER:
            for ( j = 0 ; j < DATE_VECTOR_LENGTH ; j++ )
               epoch[j] =
                  (uint16_T)mxGetPr(ssGetSFcnParam(S,S_EPOCH_VECTOR))[j];
            seconds_since_epoch = TimeDelta(date, epoch);
            break;
         case EPOCH_SOURCE_START:
            seconds_since_epoch = 0.0;
            break;
         case EPOCH_SOURCE_MATLAB:
         default:
            seconds_since_epoch = TimeDelta(date, epoch) + SECONDS_PER_DAY;
            break;
      }

      switch ( (uint16_T)mxGetPr(ssGetSFcnParam(S,S_TIME_FORMAT))[0] ) {
         case TIME_FORMAT_DATE:
            break;
         case TIME_FORMAT_XPC_TIME:
#ifdef MATLAB_MEX_FILE
            ssSetRWorkValue(S, 0, seconds_since_epoch - uptime_seconds);
#else
            nano_since_epoch.U64.NanoSecondsHi = seconds_since_epoch /
                                                 MAX_LO_NANO;
            nano_since_epoch.U64.NanoSecondsLo =
               (seconds_since_epoch - nano_since_epoch.U64.NanoSecondsHi) *
               NANO_PER_SECOND;
            xpcSubtractTime(&nano, &nano_since_epoch, &uptime_nano);
            ssSetIWorkValue(S, 0, nano.U64.NanoSecondsLo);
            ssSetIWorkValue(S, 1, nano.U64.NanoSecondsHi);
#endif   // matlab_mex_file
            break;
         case TIME_FORMAT_SECONDS:
            ssSetRWorkValue(S, 0, seconds_since_epoch - uptime_seconds);
            break;
         case TIME_FORMAT_DAYS:
         default:
            ssSetRWorkValue(S, 0, (seconds_since_epoch - uptime_seconds) /
                                  SECONDS_PER_DAY);
            break;
      }
#ifndef MATLAB_MEX_FILE
   }
#endif   // matlab_mex_file
}


static void mdlOutputs(SimStruct *S,
                       int_T      tid)
{
   uint16_T   date[DATE_VECTOR_LENGTH];
   real_T     uptime_seconds;
   real_T    *real_output;
   uint32_T  *u32_output;
   uint16_T  *u16_output;
#ifdef MATLAB_MEX_FILE
   uint32_T   nano_lo, nano_hi;
   time_t     t;
   struct tm *tp;
#else
   xpcTime    uptime_nano, nano, current_time_nano;
#endif   // matlab_mex_file

#ifdef MATLAB_MEX_FILE
   uptime_seconds = clock() / CLK_TCK;
#else
   uptime_seconds = xpcGetElapsedTime(&uptime_nano);
#endif   // matlab_mex_file

   switch ( (uint16_T)mxGetPr(ssGetSFcnParam(S,S_TIME_FORMAT))[0] ) {
      case TIME_FORMAT_DATE:
#ifdef MATLAB_MEX_FILE
         t = time((time_t*)NULL);
         tp = localtime(&t);
         date[T_YEAR]  = tp->tm_year + T_YEAR_OFFSET;
         date[T_MONTH] = tp->tm_mon  + T_MONTH_OFFSET;
         date[T_DAY]   = tp->tm_mday;
         date[T_HOUR]  = tp->tm_hour;
         date[T_MIN]   = tp->tm_min;
         date[T_SEC]   = tp->tm_sec;
#else
         rt_at_clk_read_date(date);
#endif   // matlab_mex_file
         u16_output = (uint16_T*)ssGetOutputPortSignal(S, 0);
         for ( j = 0 ; j < DATE_VECTOR_LENGTH ; j++ )
            u16_output[j] = date[j];
         break;
      case TIME_FORMAT_XPC_TIME:
         u32_output = (uint32_T*)ssGetOutputPortSignal(S, 0);
#ifdef MATLAB_MEX_FILE
         nano_hi = (ssGetRWorkValue(S, 0) + uptime_seconds) / MAX_LO_NANO;
         nano_lo = (ssGetRWorkValue(S, 0) + uptime_seconds - nano_hi) *
                   NANO_PER_SECOND;
         u32_output[0] = nano_lo;
         u32_output[1] = nano_hi;
#else
         nano.U64.NanoSecondsLo = ssGetIWorkValue(S, 0);
         nano.U64.NanoSecondsHi = ssGetIWorkValue(S, 1);
         current_time_nano.U64.NanoSecondsLo =
            nano.U64.NanoSecondsLo + uptime_nano.U64.NanoSecondsLo;
         current_time_nano.U64.NanoSecondsHi =
            nano.U64.NanoSecondsHi + uptime_nano.U64.NanoSecondsHi;
         if ( (current_time_nano.U64.NanoSecondsLo <
               nano.U64.NanoSecondsLo) ||
              (current_time_nano.U64.NanoSecondsLo <
               uptime_nano.U64.NanoSecondsLo) )
            current_time_nano.U64.NanoSecondsHi++;
         u32_output[0] = current_time_nano.U64.NanoSecondsLo;
         u32_output[1] = current_time_nano.U64.NanoSecondsHi;
#endif   // matlab_mex_file
         break;
      case TIME_FORMAT_SECONDS:
         real_output = ssGetOutputPortRealSignal(S, 0);
         real_output[0] = ssGetRWorkValue(S, 0) + uptime_seconds;
         break;
      case TIME_FORMAT_DAYS:
      default:
         real_output = ssGetOutputPortRealSignal(S, 0);
         real_output[0] = ssGetRWorkValue(S, 0) +
                          (uptime_seconds / SECONDS_PER_DAY);
         break;
   }
}
   

static void mdlTerminate(SimStruct *S)
{
}


#ifdef MATLAB_MEX_FILE
#include "simulink.c"
#else
#include "cg_sfun.h"
#endif   // matlab_mex_file
