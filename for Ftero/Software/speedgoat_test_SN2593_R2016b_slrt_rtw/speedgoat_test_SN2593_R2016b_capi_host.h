#ifndef RTW_HEADER_speedgoat_test_SN2593_R2016b_cap_host_h_
#define RTW_HEADER_speedgoat_test_SN2593_R2016b_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} speedgoat_test_SN2593_R2016b_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void speedgoat_test_SN2593_R2016b_host_InitializeDataMapInfo
    (speedgoat_test_SN2593_R2016b_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_speedgoat_test_SN2593_R2016b_cap_host_h_ */

/* EOF: speedgoat_test_SN2593_R2016b_capi_host.h */
