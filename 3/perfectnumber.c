#include<stdio.h>  
int main()  
{  
int num, remaining, sum = 0, i;  
printf("Enter the number\n");  
scanf("%d", &num);      
for(i = 1; i < num; i++)  
 {  
     remaining = num % i;  
     if ( remaining == 0)  
  {  
      sum = sum + i;  
  }  
 }  
if (sum == num)  
     printf(" %d is a Perfect Number",num);  
 else  
     printf("\n %d is not a Perfect Number",num);   
}  
