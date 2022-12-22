#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter variable A,B and C \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A is greater \n");
        }
        else
        {
            printf("c is greater \n");
        }
    }
    else if(b>c)
    {
            printf("B is greater \n");
    }
    else
    {
       printf("c is greater \n");
    }
}
