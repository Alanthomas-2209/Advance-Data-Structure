#include<stdio.h>
void main()
{
	int n,i=1,sum1=0,sum2=0;
	printf("Enter the number\n");
	scanf("%d",&n);	
	while(i<=n)
	{
	if(i%2==0)
	{
		sum1+=i;
	}
	else
	{
		sum2+=i;
	}
	i++;
	}
	printf("The sum of even number= %d \nThe sum of odd number= %d\n",sum1,sum2);
	if(sum1>sum2)
	{
		printf("even sum is greater\n");
	}
	else
	{
		printf("odd sum is greater\n");
	}
}

