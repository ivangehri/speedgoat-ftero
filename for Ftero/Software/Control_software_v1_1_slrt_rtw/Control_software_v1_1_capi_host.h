#ifndef RTW_HEADER_Control_software_v1_1_cap_host_h_
#define RTW_HEADER_Control_software_v1_1_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"

typedef struct {
  rtwCAPI_ModelMappingInfo mmi;
} Control_software_v1_1_host_DataMapInfo_T;

#ifdef __cplusplus

extern "C" {

#endif

  void Control_software_v1_1_host_InitializeDataMapInfo
    (Control_software_v1_1_host_DataMapInfo_T *dataMap, const char *path);

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */
#endif                                 /* RTW_HEADER_Control_software_v1_1_cap_host_h_ */

/* EOF: Control_software_v1_1_capi_host.h */
