#include<stdio.h>
main()
{
	char c;
	FILE *f1;
	FILE *f2;
	f1=fopen("D:/c programs/files/biodata1.txt","w");
	printf("\nEnter the data:");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f1=fopen("D:/c programs/files/biodata1.txt","r");
	f2=fopen("D:/c programs/files/biodata28.txt","w");
	while((c=getc(f1))!=EOF)
	{
		putc(c,f2);
	}
	fclose(f1);
	fclose(f2);
	f2=fopen("D:/c programs/files/biodata28.txt","r");
	while((c=getc(f1))!=EOF)
	{
		printf("\n%c",c);
	}
	fclose(f2);
	
}