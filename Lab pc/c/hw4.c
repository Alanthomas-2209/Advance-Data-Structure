#include<stdio.h>
int check(int,int);
void main()
{
	int a,b;
	printf("Enter two variables");
	scanf("%d%d",&a,&b);
	printf("biggest value :%d\n",check(a,b));
}
int check(int p,int q)
{
	if(p<q)
	{
	return(q);
	}
	else
	{
	return(p);	
	}
}


