#include<stdio.h>
int gcd(int a,int b,int c)
{
	int gcd0,i;
	for(i=1; i <= a && i <= b && i<=c ; ++i)
    {
        
        if(a%i==0 && b%i==0 && c%i==0)
            gcd0 = i;
    }

    

    return gcd0;
}
int main()

{
    int a, b,c, i;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("gcd of %d , %d and %d is %d", a, b,c, gcd(a,b,c));
}

