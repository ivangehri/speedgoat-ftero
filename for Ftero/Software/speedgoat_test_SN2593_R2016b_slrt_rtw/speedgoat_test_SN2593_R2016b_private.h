/*
 * speedgoat_test_SN2593_R2016b_private.h
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

#ifndef RTW_HEADER_speedgoat_test_SN2593_R2016b_private_h_
#define RTW_HEADER_speedgoat_test_SN2593_R2016b_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void sg_IO751_setup_s(SimStruct *rts);
extern void sg_IO751_send_s(SimStruct *rts);
extern void sg_IO751_receive_s(SimStruct *rts);

#endif                                 /* RTW_HEADER_speedgoat_test_SN2593_R2016b_private_h_ */
