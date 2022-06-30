#include<stdio.h>
struct student
{
	char name[100];
	char branch[20];
	int rollno;
	int age;
}s1;
void readdis(struct student);
void update(struct student);
void serrol(struct student);
void serrln(struct student);
int main()
{
	int i,n,ch,ch1,flag,x;
	char sname[10];
	struct student s1;
	FILE *fp;
	do
	{
	printf("\n1.read and display");
	printf("\n2.update");
	printf("\n3.search with roll no");
	printf("\n4.search with roll no and name");
	printf("\nEnter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	{
	readdis(s1);
	break;
	}
	case 2:
	{
		update(s1);
		break;
	}
	case 3:
	{
		serrol(s1);
	break;
	}
	case 4:
	{
		serrln(s1);
	break;
	}
	}
	printf("\nEnter 1 to continue:");
	scanf("%d",&ch1);
	}while(ch1==1);
return 0;
}

void readdis(struct student s1)
{
	FILE *fp;
	fp=fopen("D:/c programs/files/studentpr.txt","r");
	while(fscanf(fp,"%s%s%d%d",s1.name,s1.branch,&s1.rollno,&s1.age)!=EOF)
	{
		fprintf(stdout,"\n%s\t%s\t%d\t%d",s1.name,s1.branch,s1.rollno,s1.age);
	}
	fclose(fp);
}
void update(struct student s1)
{
	FILE *fp;
	fp=fopen("D:/c programs/files/studentpr.txt","a");
		fscanf(stdin,"%s%s%d%d",s1.name,s1.branch,&s1.rollno,&s1.age);
		fprintf(fp,"\n%s\t%s\t%d\t%d",s1.name,s1.branch,s1.rollno,s1.age);
	fclose(fp);
}
void serrol(struct student s1)
{
	int n,flag=0;
	FILE *fp;
	fp=fopen("D:/c programs/files/studentpr.txt","r");
	printf("Enter the data to search:\n");
	scanf("%d",&n);
	while(fscanf(fp,"%s%s%d%d",s1.name,s1.branch,&s1.rollno,&s1.age)!=EOF)
	{
	if(n==s1.rollno)
	{
		fprintf(stdout,"\n%s\t%s\t%d\t%d",s1.name,s1.branch,s1.rollno,s1.age);
		flag=1;
	}
	}
	if(flag==1)
	{
		printf("record found\n");
	}
	else
	{
			printf("record not found\n");
	}
	fclose(fp);
}
void serrln(struct student s1)
{
	int n1,flag=0,x;
	char sname[20];
	FILE *fp;
	fp=fopen("D:/c programs/files/studentpr.txt","r");
	printf("Enter the data to search:\n");
	scanf("%d",&n1);
	printf("Enter the name to search:\n");
	scanf("%s",sname);
	while(fscanf(fp,"%s%s%d%d",s1.name,s1.branch,&s1.rollno,&s1.age)!=EOF)
	{
	x=strcmp(s1.name,sname);
	if(x==0&&n1==s1.rollno)
	{
		fprintf(stdout,"\n%s\t%s\t%d\t%d",s1.name,s1.branch,s1.rollno,s1.age);
		flag=1;
	}
	}
	if(flag==1)
	{
		printf("\n");
		printf("record found");
	}
	else
	{
			printf("\n");
			printf("record not found\n");
	}
	fclose(fp);
}