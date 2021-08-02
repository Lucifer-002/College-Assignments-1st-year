#include<stdio.h>
int main()
{
	char name[100];
	printf("Enter string: ");
	scanf("%s",name);
	printf("Length: ");
	int i=0;
	while(name[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
	return 0;
}
