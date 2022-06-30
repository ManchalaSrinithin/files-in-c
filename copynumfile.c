#include<stdio.h>
main()
{
	int n;
	FILE *f1;
	FILE *f2;
	f1=fopen("D:/c programs/files/copynum.txt","w");
	printf("\nEnter the data:");
	while(1)
	{
	scanf("%d",&n);
	if(n==0)
	break;
	putw(n,f1);
	}
	fclose(f1);
	f1=fopen("D:/c programs/files/copynum.txt","r");
	f2=fopen("D:/c programs/files/copynum1.txt","w");
	while((n=getw(f1))!=EOF)
	{
		putw(n,f2);
	}           
	fclose(f1);
	fclose(f2);
	f2=fopen("D:/c programs/files/copynum1.txt","r");
	while((n=getw(f1))!=EOF)
	{
		printf("\n%d",n);
	}           
	fclose(f2);
}           