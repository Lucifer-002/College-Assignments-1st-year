#include<stdio.h>
int main()
{
    int size,i,k,pos;
    scanf("%d",&size);
    int arr[size];
    printf("the array element are :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to incert");
    scanf("%d",&k);
    printf("enter the position you want to incert");
    scanf("%d",&pos);
    arr[pos-1]=k;
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

}