#include<stdio.h>
void main()
{
	int a=2,*ptr1,*ptr2;
	ptr1=&a;
	ptr2=&ptr1;
	printf("%d\n",*ptr1);	
	printf("%d\n",**ptr2);
}
