#include<stdio.h>
void main()
{
	int a[10];
	int n,i;
	printf("How many numbers do you want to inserted\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&a[i]);
	}
	printf("Displaying the numbers\n");
	for(i=0;i<n;i++)
	{
		printf("value is %d\n",a[i]);
	}
}
