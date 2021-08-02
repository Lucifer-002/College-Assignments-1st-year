#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fptr;
    char name[100];

    printf("Enter file name to create :");
    scanf("%s",name);
    fptr=fopen(name,"w");
    if(fptr==NULL)
    {
        printf("File is not created!!!");
        exit(0); /*exit from program*/
    }

    printf("File created successfully.");
    return 0;
}
