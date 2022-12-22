#include<stdio.h>
void main()
{
	int a[5][5];
	int row,col,i,j;
	int big;
	printf("How many rows and columns\n");
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{	
		printf("Enter the number\n");
		scanf("%d",&a[i][j]);
		}
	}
	big==a[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{	
			if(big<a[i][j])
			{
				big=a[i][j];
			}
		}
	}
	printf("The biggest number in an array =%d\n",big);
}
