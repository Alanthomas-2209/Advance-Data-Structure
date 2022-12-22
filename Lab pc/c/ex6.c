#include<stdio.h>
struct stud
{
	int roll;
	char *name[10];
	float phy,che,bio,tot,avg;
};
void main()
{
	struct stud s;
	printf("Enter the roll number \n");
	scanf("%d",&s.roll);
	printf("Enter the name \n");
	fgets(s.name,10,stdin);
	printf("Enter the mark of physics \n");
	scanf("%f",&s.phy);
	printf("Enter the mark of chemistry\n");
	scanf("%f",&s.che);
	printf("Enter the mark of biology\n");
	scanf("%f",&s.bio);
	printf("roll number:%d\n",s.roll);
	printf("name : %s\n",s.name);
	s.tot=s.phy+s.che+s.bio;
	s.avg=s.tot/3;
	if(s.avg>40)
	{
		printf("pass\n");
	}
	else
	{
		printf("failed\n");
	}
}
