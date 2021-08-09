#include <stdio.h>
#include	"api_manager.h"

#include	"app_manager.h"
#include	"api_manager.h"

int main(void)
{
	printf("Hello world\n") ;
	API_MANAGER_PowerOnInit() ;
	APP_MANAGER_PowerOnInit() ;
	APP_MANAGER_Init() ;
	APP_MANAGER_Deinit() ;
	return 0;
}