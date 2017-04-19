#include "slrtappmapping.h"
#include "./maps/speedgoat_test_SN2593_R2016b.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <speedgoat_test_SN2593_R2016b> */
		{ /* SignalMapInfo */
			speedgoat_test_SN2593_R2016b_BIOMAP,
			speedgoat_test_SN2593_R2016b_LBLMAP,
			speedgoat_test_SN2593_R2016b_SIDMAP,
			speedgoat_test_SN2593_R2016b_SBIO,
			speedgoat_test_SN2593_R2016b_SLBL,
			{0,14},
			9,
		},
		{ /* ParamMapInfo */
			speedgoat_test_SN2593_R2016b_PTIDSMAP,
			speedgoat_test_SN2593_R2016b_PTNAMESMAP,
			speedgoat_test_SN2593_R2016b_SPTMAP,
			{0,24},
			25,
		},
		"speedgoat_test_SN2593_R2016b",
		"",
		"speedgoat_test_SN2593_R2016b",
		3,
		speedgoat_test_SN2593_R2016b_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}