#include "common.h"

#include "hal_init.h"
#include "rled.h"

int main(void)
{
	Hal_Init();
	
	while(1)
	{
		Sys_Rled_On(MACR_SYS_STATUS_LED);
	}

	return 0;
}
