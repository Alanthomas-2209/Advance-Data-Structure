#include<stdio.h>
void main()
{
	int a=2,b=4,*ptr1,*ptr2;
	int c;
	ptr1=&a;
	ptr2=&b;
	c=*ptr1+*ptr2;	
	printf("%d\n",c);
}
