#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter A and B \n");
	scanf("%d%d",&a,&b);
	printf("before swapping A= %d and B =%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping A= %d and B =%d\n",a,b);
}
