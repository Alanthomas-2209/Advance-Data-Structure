#include<stdio.h>
float area(float);
void main()
{
	float r;
	printf("Enter the radius");
	scanf("%f",&r);
	printf("Area =%f\n",area(r));
}
float area(float a)
{
	return(3.14*a*a);
}


