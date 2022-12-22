#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,ans1,ans2;
	printf("Enter the values ax^2+bx+c=0\n");
	printf("Enter the values a\n");
	scanf("%f",&a);
	printf("Enter the values b\n");
	scanf("%f",&b);
	printf("Enter the values c\n");
   	scanf("%f",&c);
	if(((b*b)-(4*a*c))>0)
	{
		ans1=(-b+sqrt(b*b-4*a*c))/2*a;
		ans2=(-b-sqrt(b*b-4*a*c))/2*a;	
		printf("solution number one is %f\nsolution number two is %f",ans1,ans2);
	}
    	else
	{
		printf("The root is not real\n");
	}
}
