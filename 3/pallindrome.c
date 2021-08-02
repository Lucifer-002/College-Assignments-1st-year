#include<stdio.h>  
 int main()    
{    
int n,yes=0,rem,temp; 
{  
printf("Enter a number: ");    
  scanf("%d", &n); 
  temp=n;   
  while(n!=0)    
  {    
   rem=n%10;    
     yes=yes*10+rem;    
     n/=10;    
  } 
  if(temp==yes)   
  printf("this is a pallindromic number");  
  else
  printf("this is not a pallindromic number"); 
} 
return 0;  
}   
