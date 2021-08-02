#include <stdio.h>

typedef struct complex
{
	float r;
	float img;
}com;

com add(com a, com b)
{
	com c;
	c.r=a.r+b.r;
	c.img=a.img+b.img;

	return c;
}

int main()
{
	com n1,n2,sum;
    printf("\nEnter The Real Part of Num 1 : ");
    scanf("%f",&n1.r);
    printf("\nEnter The Imaginary Part of Num 1 : ");
    scanf("%f",&n1.img);
    printf("\nEnter The Real Part of Num 2 : ");
    scanf("%f",&n2.r);
    printf("\nEnter The Imaginary Part of Num 2 : ");
    scanf("%f",&n2.img);
    sum=add(n1,n2);
    printf("\nThe Sum of The Numbers is %.2f + i%.2f",sum.r,sum.img);
	return 0;
}