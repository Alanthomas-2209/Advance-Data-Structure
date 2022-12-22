#include<stdio.h>
void area(float,float);
void main()
{
	float len,bre;
	printf("enter the length and breadth");
	scanf("%f %f",&len,&bre);
	area(len,bre);
}
void area(float a,float b)
{
	printf("Area =%f\n",a*b);
}


