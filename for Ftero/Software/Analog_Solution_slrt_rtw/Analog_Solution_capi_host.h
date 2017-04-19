#ifndef RTW_HEADER_Analog_Solution_cap_host_h_
#define RTW_HEADER_Analog_Solution_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} Analog_Solution_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void Analog_Solution_host_InitializeDataMapInfo
    (Analog_Solution_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_Analog_Solution_cap_host_h_ */

/* EOF: Analog_Solution_capi_host.h */
