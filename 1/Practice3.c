#include<stdio.h>
#define PI 3.14
int main()
{
    float length,breadth,radius;
    float area;


    printf(" Enter the Length of a Rectangle : ");
    scanf("%f",&length);

    printf("\n Enter the Breadth of a Rectangle : ");
    scanf("%f",&breadth);

    printf("\n Enter the Radius of The  Circle : ");
    scanf("%f",&radius);

    area = length * breadth;

    printf("\nArea of Rectangle is : %.2f",area);
     printf("\nArea of Circle is : %.2f",PI*radius*radius);
    return 0;
}
