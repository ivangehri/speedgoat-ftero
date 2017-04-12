#include "slrtappmapping.h"
#include "./maps/Control_software_v1_1.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <Control_software_v1_1> */
		{ /* SignalMapInfo */
			Control_software_v1_1_BIOMAP,
			Control_software_v1_1_LBLMAP,
			Control_software_v1_1_SIDMAP,
			Control_software_v1_1_SBIO,
			Control_software_v1_1_SLBL,
			{0,1971},
			244,
		},
		{ /* ParamMapInfo */
			Control_software_v1_1_PTIDSMAP,
			Control_software_v1_1_PTNAMESMAP,
			Control_software_v1_1_SPTMAP,
			{0,398},
			399,
		},
		"Control_software_v1_1",
		"",
		"Control_software_v1_1",
		6,
		Control_software_v1_1_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}