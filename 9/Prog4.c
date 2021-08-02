#include<stdio.h>
#include<string.h>
typedef union student
{
	char name[30];
	int rn;
	float m;
}stu;

int main()
{
	stu s1;
	printf("\nEnter The name : ");
	gets(s1.name);
	printf("\nName : %s",s1.name);
	printf("\nEnter The Roll No : ");
	scanf("%d",&s1.rn);
	printf("\nRoll No : %d",s1.rn);
	printf("\nEnter The Marks : ");
	scanf("%f",&s1.m);
	printf("\nMarks : %.2f",s1.m);
	return 0;
}