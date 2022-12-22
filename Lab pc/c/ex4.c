#include<stdio.h>
void main()
{
	int a[10];
	int n,i,big;
	printf("How many numbers do you want to inserted\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	printf("the biggest number is %d\n",big);
}
