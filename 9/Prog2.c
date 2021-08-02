#include<stdio.h>

struct Employee
{
	int no;
	char name[30];
	float pay;
};
float ipay(float e1)
{
	if(e1>5000)
		e1+=0;
	else if(e1>2000)
		e1+=(0.1*e1);
	else
		e1+=(0.15*e1);

	return e1;
}
int main()
{
	
	struct Employee e1;
	printf("\nEnter The name : ");
	gets(e1.name);
	printf("\nEnter The Employee No : ");
	scanf("%d",&e1.no);
	printf("\nEnter The Pay of the Employee : ");
	scanf("%f",&e1.pay);
	
	printf("\nSalary after the increase : %.2f",ipay(e1.pay));
	return 0;
}

