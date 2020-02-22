//pe12-2b.c
//与pe12-2a.c一起编译
#include<stdio.h>
#include"pe12-2a.h"
int main(void)
{
	int mode;
	while(printf("Enter 0 for metric mode, 1 for US mode (-1 to quit): ")&&scanf("%d",&mode)&&mode>=0)
	{
		set_mode(mode);
		get_info();
		show_info();
	}
	printf("Done.\n");
	return 0;
}
