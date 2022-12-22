#include<stdio.h>
void main()
{
	int a[10],b[10],sum[10];
	int n,i;
	printf("How many numbers do you want to inserted\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number in first array\n");
		scanf("%d",&a[i]);
		printf("Enter the number in second array\n");
		scanf("%d",&b[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum[i]=a[i]+b[i];
		printf("%d \n",sum[i]);
	}
}
