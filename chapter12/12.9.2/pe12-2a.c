#include<stdio.h>
#include"pe12-2a.h"
static int mode=1;
static float distance=0,fuel=0;
void set_mode(int parameter)
{
	extern int mode;
	switch(parameter)
	{
	case 0:mode=0;break;
	case 1:mode=1;break;
	default:
		switch(mode)
		{
			case 0:printf("Invalid mode specified. Mode 0(metric) used\n");break;
			case 1:printf("Invalid mode specified. Mode 1(US) used\n");break;
			default:;//default:
		}
	}
	return;
}
void get_info(void)
{
	extern int mode;
	extern float distance,fuel;
	switch(mode)
	{
	case 0:printf("Enter distance traveled in kilometers: ");scanf("%f",&distance);printf("Enter fuel consumed in liters: ");scanf("%f",&fuel);break;
	case 1:printf("Enter distance traveled in miles: ");scanf("%f",&distance);printf("Enter fuel consumed in gallons: ");scanf("%f",&fuel);break;
	default:;
	}
}
void show_info(void)
{
	switch(mode)
	{
	case 0:printf("Fuel consumption is %.2f liters per 100 km.\n",fuel/distance*100);break;
	case 1:printf("Fuel cunsumption is %.2f miles per gallon.\n",distance/fuel);break;
	}
}
