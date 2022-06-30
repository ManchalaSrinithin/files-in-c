#include<stdio.h>
main()
{
	int n;
	FILE *f1;
	FILE *f2;
	FILE *f3;
	f1=fopen("D:/c programs/files/number.txt","w");
	printf("\nEnter the data:");
	while(1)
	{
	scanf("%d",&n);
	if(n==0)
	break;
	putw(n,f1);
	}
	fclose(f1);
	f1=fopen("D:/c programs/files/number.txt","r");
	f2=fopen("D:/c programs/files/number2.txt","w");
	f3=fopen("D:/c programs/files/number3.txt","w");
	while((n=getw(f1))!=EOF)
	{
		if(n%2==0)
		{
		putw(n,f2);
		}
		else
		{
		putw(n,f3); 
		}
	}
	fclose(f3);
	fclose(f2);
	fclose(f1);
	printf("Even numbers are:\n");
	f2=fopen("D:/c programs/files/number2.txt","r");
	while((n=getw(f1))!=EOF)
	{
		if(n%2==0)
		{
		printf("\n%d",n);
		}
	}
	fclose(f2);
	printf("\n");
	printf("Odd numbers are:\n");
	f3=fopen("D:/c programs/files/number3.txt","r");
	while((n=getw(f1))!=EOF)
	{
		if(n%2!=0)
		{
		printf("\n%d",n);
		}
	}
		fclose(f3);
	
}
    