#include<stdio.h>
void main()
{
	int a[10];
	int n,i,sum=0;
	printf("How many numbers do you want to inserted\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("The sum is %d\n",sum);
}
