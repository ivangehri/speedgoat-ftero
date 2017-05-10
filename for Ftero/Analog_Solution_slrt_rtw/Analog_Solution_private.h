/*
 * Analog_Solution_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Analog_Solution".
 *
 * Model version              : 1.1800
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Apr 19 14:40:00 2017
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Analog_Solution_private_h_
#define RTW_HEADER_Analog_Solution_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Analog_Solution.h"

/* Define interrupt functions for board 1 */
xpcPCIDevice xpcDev_1;

/* Done with interrupt functions for board 1 */
extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void iqueryqua(SimStruct *rts);
extern void filterqua(SimStruct *rts);
extern void fiforead(SimStruct *rts);
extern void serwritequa(SimStruct *rts);
extern void serreadqua(SimStruct *rts);
extern void fifowrite(SimStruct *rts);
extern void xpcwalltime(SimStruct *rts);
extern void adnipcim(SimStruct *rts);
extern void dinipcim(SimStruct *rts);
extern void pfidinipcim(SimStruct *rts);
extern void fiforeadhdr(SimStruct *rts);
extern void sertxenable(SimStruct *rts);
extern void setupqua(SimStruct *rts);
extern void pfidonipcim(SimStruct *rts);
extern void danipcim(SimStruct *rts);
extern void donipcim(SimStruct *rts);
extern void Anal_EmbeddedMATLABFunction(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction_Anal_T *localB);
extern void Ana_EmbeddedMATLABFunction1(uint8_T rtu_in,
  B_EmbeddedMATLABFunction1_Ana_T *localB);
extern void An_EmbeddedMATLABFunction_b(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction_An_o_T *localB);
extern void A_EmbeddedMATLABFunction1_g(const uint8_T rtu_in[4],
  B_EmbeddedMATLABFunction1_A_k_T *localB);
extern void An_EmbeddedMATLABFunction_k(const uint8_T rtu_in[8],
  B_EmbeddedMATLABFunction_An_l_T *localB);
extern void Analog_Solut_RS232ISR_Start(void);
extern void Analog_Solution_RS232ISR(void);
extern void Analog_Soluti_RS232ISR_Term(void);

#endif                                 /* RTW_HEADER_Analog_Solution_private_h_ */
