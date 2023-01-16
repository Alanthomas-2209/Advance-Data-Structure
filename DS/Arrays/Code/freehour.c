#include<stdio.h>
int i,j,s,n,a;
int count=0;
float pavg;
int mark[20][5];
void main()
{
	printf("How many student\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("student No:%d",(i+1));
		for(j=0;j<5;j++)
		{
			printf("Enter the marks\n");
			scanf("%d",&mark[i][j]);
			s+=mark[i][j];
		}
	}
do{
	printf("OPTION \n1:avg mark in each subject\n2:average mark by every student\n3:No. of student who passed the subject by thier subject\n4:display the marks\n0: exit\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:for(i=0;i<n;i++)
	{
		int sum=0;
		for(j=0;j<5;j++)
		{
			sum+=mark[i][j];
		}
		pavg=(float)sum/5;
		printf("avg mark of student %d is=%f\n",(i+1),pavg);
		if(50<pavg)
		{
			count++;			
		}
	}
		break; 
	case 2:printf("average marks obtained by every student is %f\n",(float)s/(n*5));
		break;
	case 3:printf("No. of student who passed by their subject %d\n",count);
		break;
	case 4:for(i=0;i<n;i++)
		{
			printf("studnet No:%d",(i+1));
			for(j=0;j<5;j++)
			{
				printf("subject %d mark=%d\n",j+1,mark[i][j]);
			}
		}
		break;
	case 0:printf("Exit");
		break;
	default:printf("invalid option..!\n");
		break;
	}
}while(a!=0);
}




