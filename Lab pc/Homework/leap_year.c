#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year to be checked \n");
    	scanf("%d",&year);
    	if(year%4==0)
    	{
        	printf("%d is leap year\n",year);
    	}
    	else
    	{
    	   	printf("%d is not a leap year\n",year);
    	}
}
