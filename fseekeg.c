#include<stdio.h>
main()
{
	char data[70];
	FILE *fp;
	fp=fopen("D:/c programs/files/fseekeg.txt","w");
	fputs("Sr University in ananthasagar hanamkonda with lots of facilites","fp");
	fclose(fp);
	fp=fopen("D:/c programs/files/fseekeg.txt","r");
	fgets(data,60,fp);
	printf("\nThe data Before seek-%s",data);
	fseek(fp,10,0);
	printf("\nThe data after 10 seek-%s",data);
	fseek(fp,-20,1);
	printf("\nThe data after 20 in backwards seek-%s",data);
	fseek(fp,-15,2);
	printf("\nThe data after -15 in backwards seek",data);
	fclose(fp);	
}