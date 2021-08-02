#include<stdio.h>
int bubble(int n,int a[])
{
	int i,j;
	for(int i=0;i<n;i++)
{
for(i=0;i<n;i++)
	{
	int temp=0;
	for(j=0;j<n-1;j++)
	{
		
		if(a[j]>a[j+1])
		{
		temp=a[j];
	 	a[j]=a[j+1];
	 	a[j+1]=temp;
	 }
}
}
     printf("the sorted array is=\n ");
	 for(int i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
}
}
int main()
{

	int i,a[34],n;

	printf("enter the size of array= \n");
	scanf("%d",&n);
	printf("enter the numbers= \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
	bubble(n,a);
	
	
}
