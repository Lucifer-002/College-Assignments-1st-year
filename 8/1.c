#include<stdio.h>
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a,b;
    printf("Enter 2 nos. : ");
    scanf("%d%d",&a,&b);
    
    swap(&a,&b);
    printf("The swapped nos is %d and %d",a,b);
}
