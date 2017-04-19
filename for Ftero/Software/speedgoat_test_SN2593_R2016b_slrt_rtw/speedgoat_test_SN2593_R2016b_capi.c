/*
 * speedgoat_test_SN2593_R2016b_capi.c
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

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "speedgoat_test_SN2593_R2016b_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "speedgoat_test_SN2593_R2016b.h"
#include "speedgoat_test_SN2593_R2016b_capi.h"
#include "speedgoat_test_SN2593_R2016b_private.h"
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
  { 0, 0, TARGET_STRING("IO751/Byte Pack"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("IO751/Byte Unpack1"),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 2, 0, TARGET_STRING("IO751/PNM Receive"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("IO751/Counter Free-Running2/Output"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 4, 0, TARGET_STRING("IO751/Counter Free-Running3/Output"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 5, 0, TARGET_STRING("IO751/Counter Free-Running2/Increment Real World/FixPt Sum1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 6, 0, TARGET_STRING("IO751/Counter Free-Running2/Wrap To Zero/FixPt Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 7, 0, TARGET_STRING("IO751/Counter Free-Running3/Increment Real World/FixPt Sum1"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 8, 0, TARGET_STRING("IO751/Counter Free-Running3/Wrap To Zero/FixPt Switch"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 9, TARGET_STRING("IO751/Constant"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 10, TARGET_STRING("IO751/Constant1"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 11, TARGET_STRING("IO751/PNM Receive"),
    TARGET_STRING("P1"), 2, 1, 0 },

  { 12, TARGET_STRING("IO751/PNM Receive"),
    TARGET_STRING("P2"), 2, 1, 0 },

  { 13, TARGET_STRING("IO751/PNM Receive"),
    TARGET_STRING("P3"), 2, 1, 0 },

  { 14, TARGET_STRING("IO751/PNM Receive"),
    TARGET_STRING("P4"), 2, 1, 0 },

  { 15, TARGET_STRING("IO751/PNM Send1"),
    TARGET_STRING("P1"), 2, 1, 0 },

  { 16, TARGET_STRING("IO751/PNM Send1"),
    TARGET_STRING("P2"), 2, 1, 0 },

  { 17, TARGET_STRING("IO751/PNM Send1"),
    TARGET_STRING("P3"), 2, 1, 0 },

  { 18, TARGET_STRING("IO751/PNM Send1"),
    TARGET_STRING("P4"), 2, 1, 0 },

  { 19, TARGET_STRING("IO751/PNM Setup1"),
    TARGET_STRING("P1"), 2, 1, 0 },

  { 20, TARGET_STRING("IO751/PNM Setup1"),
    TARGET_STRING("P2"), 2, 1, 0 },

  { 21, TARGET_STRING("IO751/PNM Setup1"),
    TARGET_STRING("P3"), 2, 1, 0 },

  { 22, TARGET_STRING("IO751/PNM Setup1"),
    TARGET_STRING("P4"), 2, 1, 0 },

  { 23, TARGET_STRING("IO751/PNM Setup1"),
    TARGET_STRING("P5"), 2, 1, 0 },

  { 24, TARGET_STRING("IO751/PNM Setup1"),
    TARGET_STRING("P6"), 2, 2, 0 },

  { 25, TARGET_STRING("IO751/PNM Setup1"),
    TARGET_STRING("P7"), 2, 1, 0 },

  { 26, TARGET_STRING("IO751/Counter Free-Running2/Wrap To Zero"),
    TARGET_STRING("Threshold"), 0, 1, 0 },

  { 27, TARGET_STRING("IO751/Counter Free-Running2/Output"),
    TARGET_STRING("InitialCondition"), 0, 1, 0 },

  { 28, TARGET_STRING("IO751/Counter Free-Running3/Wrap To Zero"),
    TARGET_STRING("Threshold"), 0, 1, 0 },

  { 29, TARGET_STRING("IO751/Counter Free-Running3/Output"),
    TARGET_STRING("InitialCondition"), 0, 1, 0 },

  { 30, TARGET_STRING("IO751/Counter Free-Running2/Increment Real World/FixPt Constant"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 31, TARGET_STRING("IO751/Counter Free-Running2/Wrap To Zero/Constant"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 32, TARGET_STRING("IO751/Counter Free-Running3/Increment Real World/FixPt Constant"),
    TARGET_STRING("Value"), 0, 1, 0 },

  { 33, TARGET_STRING("IO751/Counter Free-Running3/Wrap To Zero/Constant"),
    TARGET_STRING("Value"), 0, 1, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &speedgoat_test_SN2593_R2016b_B.BytePack[0],/* 0: Signal */
  &speedgoat_test_SN2593_R2016b_B.ByteUnpack1,/* 1: Signal */
  &speedgoat_test_SN2593_R2016b_B.PNMReceive[0],/* 2: Signal */
  &speedgoat_test_SN2593_R2016b_B.Output,/* 3: Signal */
  &speedgoat_test_SN2593_R2016b_B.Output_f,/* 4: Signal */
  &speedgoat_test_SN2593_R2016b_B.FixPtSum1,/* 5: Signal */
  &speedgoat_test_SN2593_R2016b_B.FixPtSwitch,/* 6: Signal */
  &speedgoat_test_SN2593_R2016b_B.FixPtSum1_m,/* 7: Signal */
  &speedgoat_test_SN2593_R2016b_B.FixPtSwitch_j,/* 8: Signal */
  &speedgoat_test_SN2593_R2016b_P.Constant_Value,/* 9: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.Constant1_Value,/* 10: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMReceive_P1,/* 11: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMReceive_P2,/* 12: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMReceive_P3,/* 13: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMReceive_P4,/* 14: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSend1_P1,/* 15: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSend1_P2,/* 16: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSend1_P3,/* 17: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSend1_P4,/* 18: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSetup1_P1,/* 19: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSetup1_P2,/* 20: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSetup1_P3,/* 21: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSetup1_P4,/* 22: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSetup1_P5,/* 23: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSetup1_P6[0],/* 24: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.PNMSetup1_P7,/* 25: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.WrapToZero_Threshold,/* 26: Mask Parameter */
  &speedgoat_test_SN2593_R2016b_P.Output_InitialCondition,/* 27: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.WrapToZero_Threshold_c,/* 28: Mask Parameter */
  &speedgoat_test_SN2593_R2016b_P.Output_InitialCondition_n,/* 29: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.FixPtConstant_Value,/* 30: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.Constant_Value_f,/* 31: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.FixPtConstant_Value_k,/* 32: Block Parameter */
  &speedgoat_test_SN2593_R2016b_P.Constant_Value_e,/* 33: Block Parameter */
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
  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0 }
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
  { rtwCAPI_VECTOR, 0, 2, 0 },

  { rtwCAPI_SCALAR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  4,                                   /* 0 */
  1,                                   /* 1 */
  1,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  2                                    /* 5 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.01, 0.0
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
    1, 0 }
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
  { rtBlockSignals, 9,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 25,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 3903818357U,
    2150707290U,
    4211330095U,
    3733545109U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  speedgoat_test_SN2593_R2016b_GetCAPIStaticMap()
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void speedgoat_test_SN2593_R2016b_InitializeDataMapInfo
  (RT_MODEL_speedgoat_test_SN2593_R2016b_T *const speedgoat_test_SN2593_R2016b_M)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi,
                       &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi,
    (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(speedgoat_test_SN2593_R2016b_M);
  speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_speedgoat_test_SN2593_R2016b_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi,
    (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi,
    (NULL));
  rtwCAPI_SetChildMMIArrayLen(speedgoat_test_SN2593_R2016b_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void speedgoat_test_SN2593_R2016b_host_InitializeDataMapInfo
    (speedgoat_test_SN2593_R2016b_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: speedgoat_test_SN2593_R2016b_capi.c */
