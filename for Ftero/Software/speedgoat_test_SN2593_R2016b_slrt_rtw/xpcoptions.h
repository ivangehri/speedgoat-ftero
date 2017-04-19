#ifndef __speedgoat_test_SN2593_R2016b_XPCOPTIONS_H___
#define __speedgoat_test_SN2593_R2016b_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "speedgoat_test_SN2593_R2016b.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_speedgoat_test_SN2593_R2016b_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  0
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            2048
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void speedgoat_test_SN2593_R2016b_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_speedgoat_test_SN2593_R2016b_T *const speedgoat_test_SN2593_R2016b_M)
{
  real_T ratio = newBaseRateStepSize / 0.01;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  speedgoat_test_SN2593_R2016b_M->Timing.stepSize0 =
    speedgoat_test_SN2593_R2016b_M->Timing.stepSize0 * ratio;
  speedgoat_test_SN2593_R2016b_M->Timing.stepSize1 =
    speedgoat_test_SN2593_R2016b_M->Timing.stepSize1 * ratio;
  speedgoat_test_SN2593_R2016b_M->Timing.stepSize =
    speedgoat_test_SN2593_R2016b_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  speedgoat_test_SN2593_R2016b_ChangeStepSize(stepSize,
    speedgoat_test_SN2593_R2016b_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(speedgoat_test_SN2593_R2016b_M, errMsg);
}

#endif                                 /* __speedgoat_test_SN2593_R2016b_XPCOPTIONS_H___ */
