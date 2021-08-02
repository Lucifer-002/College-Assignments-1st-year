#include<stdio.h>
int main()
{
	int i,j,count=0;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		count++;
	}
	printf("Total vowels in %s string is: %d",str,count);
	return 0;
}
