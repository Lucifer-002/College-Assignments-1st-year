#include<stdio.h>
int main()
{
	char s[50],p[50];
	printf("Enter 1st string: ");
	gets(s);
	printf("Enter 2nd string: ");
	gets(p);
	int i,len=0;
	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;p[i]!='\0';i++)
	{
		s[len+i]=p[i];
	}
	s[len+i]='\0';
	printf("String is: %s",s);
	return 0;
}
