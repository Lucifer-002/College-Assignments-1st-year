#include <stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr,*fptr1;
	char ch;
    fptr=fopen("Mythpat.txt","r");
    fptr1=fopen("Destination.txt","w");
    if(fptr==NULL)
    {
    	printf("File Cannot be opened or Created");
    	exit(1);
    }
    while((ch=getc(fptr))!=EOF) 
    	fputc(ch,fptr1);
    fclose(fptr);
    fclose(fptr1);
	return 0;
}