#include<stdio.h>
int main()
{
    float crr,pvr,cu;
    printf("Enter the previous reading: ");
    scanf("%f",&pvr);
    printf("Enter the current metre reading: ");
    scanf("%f",&crr);
    cu=3.75*(crr-pvr);
    printf("The Electricity Bill is : %f",cu);
    return 0;
}
