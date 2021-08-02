#include<stdio.h>
#include<string.h>
struct student
{
	char name[30];
	int rn;
	float m;
};

int main()
{
	struct student s[50];
	int n;
	printf("\nEnter the Number of Students : ");
	scanf("%d",&n);
	fflush(stdin);
	for (int i = 0; i < n; ++i)
	{
		
		printf("\nEnter The name : ");
	    gets(s[i].name);
	    printf("\nEnter The Roll No : ");
	    scanf("%d",&s[i].rn);
	    printf("\nEnter The Marks : ");
	    scanf("%f",&s[i].m);
	    fflush(stdin);
	}
	printf("\nThe Students getting above 75 % : ");
	for (int i = 0; i < n; ++i)
	{
		if(s[i].m>75)
			printf("\n%s",s[i].name);
	}
	return 0;
}
