#include<stdio.h>
#include<stdlib.h>

struct student
{
    int roll_no;
    char name[100];
    int  marks;
}a;

int main()
{
       FILE *fp,*fp1;
  
        fp=fopen("STUDENT.dat","w");
        int n;
        if(fp==NULL)
        {
            printf("\nFile Not Created !!!");
            exit(1);
        }
        printf("\nEnter The Number Of Students : ");
        scanf("%d",&n);
        fprintf(fp,"%d\n",n);
        
        printf("\nEnetr Details : \n");

        for (int i=0;i<n;i++)
        {
            scanf("%d %s %d",&a.roll_no,a.name,&a.marks);
            fprintf(fp," %d %s %d \n",a.roll_no,a.name,a.marks); 
         
        }
     
        fclose(fp);
        return 0;
    }
