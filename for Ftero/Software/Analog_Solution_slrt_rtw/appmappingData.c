#include "slrtappmapping.h"
#include "./maps/Analog_Solution.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <Analog_Solution> */
		{ /* SignalMapInfo */
			Analog_Solution_BIOMAP,
			Analog_Solution_LBLMAP,
			Analog_Solution_SIDMAP,
			Analog_Solution_SBIO,
			Analog_Solution_SLBL,
			{0,1977},
			249,
		},
		{ /* ParamMapInfo */
			Analog_Solution_PTIDSMAP,
			Analog_Solution_PTNAMESMAP,
			Analog_Solution_SPTMAP,
			{0,387},
			388,
		},
		"Analog_Solution",
		"",
		"Analog_Solution",
		6,
		Analog_Solution_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}