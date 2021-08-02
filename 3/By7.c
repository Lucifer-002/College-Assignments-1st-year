#include<stdio.h>
int main()
{
 int i,n;
 printf("Enter the number upto");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(i%7==0)
 {
 continue;
 }
 printf("%d\t",i);
 }
}
