#include<stdio.h>
struct student
{
	char name[100];
	char branch[20];
	int age;
};
main()
{
	int i,n,ch,ch1;
	struct student *s1[100],e[100];
	FILE *fp;
	printf("\n Enter the no. of records");
	scanf("%d",&n);
	do
	{
	printf("\n1.read");
	printf("\n2.display");
	for(i=0;i<n;i++)
	{
	s1[i]=&e[i];	
	}
	printf("\nEnter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	{
	fp=fopen("D:/c programs/files/student.txt","w");
	for(i=0;i<n;i++)
	{
		fscanf(stdin,"%s%s%d",s1[i]->name,s1[i]->branch,&s1[i]->age);
		fprintf(fp,"\n%s\t%s\t%d",s1[i]->name,s1[i]->branch,s1[i]->age);
	}
	fclose(fp);
	}
	break;
	case 2:
	{
	fp=fopen("D:/c programs/files/student.txt","r");
	printf("\n---------------student details----------");
	printf("\nname\tbranch\tage");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%s%s%d",s1[i]->name,s1[i]->branch,&s1[i]->age);
		fprintf(stdout,"\n%s\t%s\t%d",s1[i]->name,s1[i]->branch,s1[i]->age);
	}
	printf("\n---------------thank you----------");
	fclose(fp);
	}
	break;
	}
	printf("\nEnter 1 to continue:");
	scanf("%d",&ch1);
	}while(ch1==1);
}