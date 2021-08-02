#include<stdio.h>
int main()
{
    float basic,gross;
    printf("Enter the basic Salary: ");
    scanf("%f",&basic);
    gross=(0.74*basic)+(0.15*basic)+basic;
    printf("The Gross Salary Of Mr.Suman is: %.2f",gross);
    return 0;
}
