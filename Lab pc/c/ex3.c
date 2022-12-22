#include<stdio.h>
void main()
{
	int a[5][5];
	int row,col,i,j;
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
	printf("Displaying the 2D array\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{	
			printf("Array[%d][%d]= %d\n",i,j,a[i][j]);
		}
	}
}
