/*Write a C program to find the biggest of given three numbers.*/
#include<stdio.h>
int main(){
	float num1,num2,num3;
	printf("enter the three number");
	scanf("%f%f%f",&num1,&num2,&num3);
	if(num1>num2&&num1>num3)
	printf("%f is the biggest number",num1);
	else if(num2>num1&&num2>num3)
	printf("%f is the biggest number",num2);
	else if(num3>num1&&num3>num1)
	printf("%f is the biggest number",num3);
	printf("\nThank you");
}
