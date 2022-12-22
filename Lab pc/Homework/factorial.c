#include<stdio.h>
void main()
{
	int n,i,fact=1,sum=0;
	printf("Enter the number \n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
    {
        fact*=i;
	sum+=i;
    }
    printf("factorial of the number %d\n",fact);
	printf("Sum of the number %d\n",sum);
	
}
