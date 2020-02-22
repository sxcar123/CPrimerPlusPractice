#include<stdio.h>
#include"pe12-2a.h"
void set_mode(int mode,int *lastmode)
{
	switch(mode)
	{
	case 0:*lastmode=0;break;
	case 1:*lastmode=1;break;
	default:
		switch(*lastmode)
		{
			case 0:printf("Invalid mode specified. Mode 0(metric) used\n");break;
			case 1:printf("Invalid mode specified. Mode 1(US) used\n");break;
    		default:;//default:
		}
	}
	return;
}
void get_info(int lastmode,float *distance,float *fuel)
{
	switch(lastmode)
	{
	case 0:printf("Enter distance traveled in kilometers: ");scanf("%f",distance);printf("Enter fuel consumed in liters: ");scanf("%f",fuel);break;
	case 1:printf("Enter distance traveled in miles: ");scanf("%f",distance);printf("Enter fuel consumed in gallons: ");scanf("%f",fuel);break;
	default:;
	}
}
void show_info(int lastmode,float distance,float fuel)
{
	switch(lastmode)
	{
	case 0:printf("Fuel consumption is %.2f liters per 100 km.\n",fuel/distance*100);break;
	case 1:printf("Fuel cunsumption is %.2f miles per gallon.\n",distance/fuel);break;
	}
}
