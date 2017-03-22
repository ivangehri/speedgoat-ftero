#ifndef __Control_software_v1_1_XPCOPTIONS_H___
#define __Control_software_v1_1_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "Control_software_v1_1.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_Control_software_v1_1_T))
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
void Control_software_v1_1_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_Control_software_v1_1_T *const Control_software_v1_1_M)
{
  real_T ratio = newBaseRateStepSize / 0.001;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  Control_software_v1_1_M->Timing.stepSize0 =
    Control_software_v1_1_M->Timing.stepSize0 * ratio;
  Control_software_v1_1_M->Timing.stepSize1 =
    Control_software_v1_1_M->Timing.stepSize1 * ratio;
  Control_software_v1_1_M->Timing.stepSize2 =
    Control_software_v1_1_M->Timing.stepSize2 * ratio;
  Control_software_v1_1_M->Timing.stepSize3 =
    Control_software_v1_1_M->Timing.stepSize3 * ratio;
  Control_software_v1_1_M->Timing.stepSize =
    Control_software_v1_1_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  Control_software_v1_1_ChangeStepSize(stepSize, Control_software_v1_1_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(Control_software_v1_1_M, errMsg);
}

#endif                                 /* __Control_software_v1_1_XPCOPTIONS_H___ */
