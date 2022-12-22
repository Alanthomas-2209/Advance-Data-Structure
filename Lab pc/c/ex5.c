#include<stdio.h>
void main()
{
	int a[5][5];
	int row,col,i,j;
	int sum;
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
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{	
			sum+=a[i][j];
		}
	}
	printf("The sum =%d\n",sum);
}
