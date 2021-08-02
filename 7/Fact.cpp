#include<stdio.h>
int fact(int n)
{
	int facto=1;
	for(int i=1;i<=n;i++)
	{
	    	
		facto=facto*i;
		
	}
		return facto;
}
int main()
{
	int n;
	printf("ENTER THE NUMBER = ");
	scanf("%d",&n);
	printf("the factorial of %d is = %d ",n,fact(n));
}
