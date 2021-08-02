#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s;
	printf("Enter The 3 Sides of the Triangle : ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2.0;
	float area=(s*(s-a)*(s-b)*(s-c));
	if(area>0)
		printf("The Area of the triangle is %.2f",sqrt(area));
	else
	{
		printf("\nThe Triangle cannot be formed");
		return 0;
	}
	return 0;
}