#include<stdio.h>
main()
{
	char c;
	FILE *f1;
	FILE *f2;
	FILE *f3;
	f1=fopen("D:/c programs/files/merged.txt","w");
	printf("\nEnter the data:");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	f2=fopen("D:/c programs/files/merged1.txt","w");
	while((c=getchar())!=EOF)
	{
		putc(c,f2);
	}
	fclose(f2);
	f1=fopen("D:/c programs/files/merged.txt","r");
	f2=fopen("D:/c programs/files/merged1.txt","r");
	f3=fopen("D:/c programs/files/merged2.txt","w");
	while((c=getc(f1))!=EOF)
	{
		putc(c,f3);
	}
	while((c=getc(f2))!=EOF)
	{
		putc(c,f3);
	}
	fclose(f3);
	fclose(f2);
	fclose(f1);
	f3=fopen("D:/c programs/files/merged2.txt","r");
 	 while(c=getc(f3)!=EOF)
 	 {
  	 putchar(getc(f3));
  	}
  	 fclose(f3);
}