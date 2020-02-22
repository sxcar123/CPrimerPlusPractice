#include<stdio.h>
#include"pe12-2a.h"
int main(void)
{
	int mode,lastmode=0;
    float distance,fuel;
	while(printf("Enter 0 for metric mode, 1 for US mode (-1 to quit): ")&&scanf("%d",&mode)&&mode>=0)
	{
		set_mode(mode,&lastmode);
		get_info(lastmode,&distance,&fuel);
		show_info(lastmode,distance,fuel);
	}
	printf("Done.\n");
	return 0;
}
