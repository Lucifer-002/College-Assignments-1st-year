#include<stdio.h>    
int main()    
{    
 int x1=0,x2=1,x3,i,number;    
 printf("Enter the range of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",x1,x2);  
 for(i=2;i<number;++i)   
 {    
  x3=x1+x2;    
  printf(" %d",x3);    
  x1=x2;    
  x2=x3;    
 }  
  return 0;  
 }  
