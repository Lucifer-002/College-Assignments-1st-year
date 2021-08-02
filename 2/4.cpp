/*quadric Equation
(b)^2-4*a*c>0; roots are real & distinct.
(b)^2-4*a*c<0; the roots are imaginary.*/
#include<stdio.h>
#include<math.h>
int main ()
{
float a,b,c,x1,x2,quaed;
printf(" the equation is {a*pow(x,2)}+{b*x}+c=0\n enter thevalue of a,b,c\n",a,b,c);

scanf("%f%f%f",&a,&b,&c);
quaed=(pow(b,2)-4*a*c);
x1=(-b+sqrt(quaed))/2*a;
x2=(-b-sqrt(quaed))/2*a;
if(quaed==0)
printf(" roots are real and equal\n value of x1,x2 is %f%f",x1,x2 );
else if (quaed>0)
printf("roots are real and unequal \n value of x1,x2 is %f%f",x1,x2);
else if(quaed<0)
printf("roots are imaginary\n value of x1,x2 is%f%f",x1,x2);
return 0;
}
