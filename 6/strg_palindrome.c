#include<stdio.h>
int main()
{
	char str[500];
	int i,len=0;
	printf("Enter the string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
		printf("Not Palindrome ");
		break;
	    }
	}
	if(i==len/2)
	printf("Palindrome");
	return 0;
}
