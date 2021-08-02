//Gradation Calulator if else 
#include<stdio.h>
int main(){
	int marks;
	printf("The obtaning marks of the student is:\t");
	scanf("%d",&marks);
	printf("\n your grade is:\t");
	if(marks<=100&&marks>=90)
	printf("O");
	else if(marks<90&&marks>=80)
	printf("E");
	else if(marks<80&&marks>=70)
	printf("A");
	else if(marks<70&&marks>=60)
	printf("B");
	else if(marks<60&&marks>=50)
	printf("C");
	else if(marks<90&&marks>=80)
	printf("D");
	else if(marks<90&&marks>=80)
	printf("Fail");
	else
	printf("invalid");
	
}
