/*Write a C program to find the value of y using
y=1+x2;n=1
y=1+x/n;n=2
y=1+2x,n=3
y=1+xn,else;	*/
#include<stdio.h>
int main(){
	float x,n,y;
	printf("Value of x is:\t");
	scanf("%f",&x);
	printf("Value of n is:\t");
	scanf("%f",&n);
	if(n==1.0)
	y=1+x*x;
	else if(n==2.0)
	y=1+x/n;
	else if(n==3.0)
	y=1+2*x;
	else{
	y=1+x*n;}
	printf("\nY=\t%f",y);
}

