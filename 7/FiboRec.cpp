#include<stdio.h>

long long int sum(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;

	else
		return sum(n-1)+sum(n-2);

}


int main()
{
	int n;

	printf("Enter The N th Term Of the series : ");

	scanf("%d",&n);

    printf("The sum up to the %d  Terms is : %lld",n,sum(n));

    return 0;
}
