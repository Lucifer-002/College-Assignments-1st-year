#include<stdio.h>
int strong_num(int n)
{
	int i,d,sum=0,fact;
	int temp=n;
	while(n!=0)
	{
		d=n%10;
		fact=1;
	for(i=1;i<=d;i++)
	{
		fact=fact*i;
	}
	sum=sum+fact;
	n=n/10;
	}
	if(temp==sum)
	printf("Strong number");
	else
	printf("Not strong number");
	return 0;
}
int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	strong_num(a);
	return 0;
}
