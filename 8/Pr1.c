#include<stdio.h>
int main()
{
	int a[50],n,i;
	
	printf("Enter n : ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			printf("%d is not in correct position",a[i]);
			break;
		}
	}
}
