#include<stdio.h>
#include <stdlib.h>

struct student
{
	int rn;
	char name[30];
	int marks;
};

 int main()
{
	FILE *fp;
	struct student s;
	int n;
	fp=fopen("STUDENT.dat","r");
	fscanf(fp,"%d",&n);
	printf("Students Getting above 75 : ");
    for (int i = 0; i < n; ++i)
    {
    	fscanf(fp,"%d %s %d",&s.rn,s.name,&s.marks);
    	if(s.marks>75)
    		printf("\n%s",s.name );
    }
    fclose(fp);
	return 0;
}