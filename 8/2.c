#include<stdio.h>

int main()
{
 int x,y, *g,*xp,*yp;

printf("Enter the value of x and y : ");
scanf("%d%d",&x,&y);
xp=&x;
yp=&y;
if(*xp>*yp)
g=xp;
else
g=yp;
printf("The greater nmuber is : %d",*g);

return 0;
}
