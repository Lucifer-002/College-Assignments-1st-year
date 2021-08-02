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
	struct student s1,s2;
	printf("\nEnter The name : ");
	gets(s1.name);
	printf("\nEnter The Roll No : ");
	scanf("%d",&s1.rn);
	printf("\nEnter The Marks : ");
	scanf("%f",&s1.m);
	printf("\nName : %s",s1.name);
    printf("\nMarks : %.2f",s1.m);
    printf("\nRoll No : %d",s1.rn);
    return 0;

}