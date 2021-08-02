#include <stdio.h>


int main()
{
	char s1[100];
	char p;
	printf("Enter a String \n");
	gets(s1);

	int c=0;
	while(s1[c]!='\0')
	{
		c=c+1;
	}
  
	for(int i=0;i<=c-1;i++)
	{
	     printf("%c",s1[c-1-i]);
	}
	return 0;
} 
