//swaping two number using Bitwise Operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Two numbers to be Swaped : ");
    scanf("%d",&a);
    scanf("%d",&b);
    a= a ^ b;
    b= a ^ b;
    a= a ^ b;
    printf("The numbers are a= %d  b= %d",a,b);
    return 0;
}
