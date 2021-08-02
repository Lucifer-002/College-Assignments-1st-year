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
     
	 for(int i=0;i<n;i++)
	 {
	 	return a[i];
	 }
}
}
int KTHELEMENT(int n,int a[],int v)
{
	int i,j=0,k=0,count=0,b[100],storable;
for(i=0;i<n;i++)//i=1//i=2//i=3
	{
		storable=1;
		for(j=0;j<k;j++)
		{
			if(b[j]==a[i])//b[0]==a[1](i bere geche)//b[0]==a[2]//b[1]==a[2]//b[2]==a[3](matched)
			storable=0;
		}
		if(storable==1)
		{
			b[k]=a[i];//b[o]=1,b[1]=2,b[2]=4
			k++;//1//2//3
		}
	}
	for(i=0;i<k;i++)//1,2,4,8,9
	{
		printf(" %d ",b[i]);	
	}
	bubble(k,b);
		printf("\n The %d th number of element is = %d",v,b[k-v]);
}
int main()
{
	int n,i,j=0,k=0,v,count=0,b[100],storable;//1,2,4,4,8,1,9
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the n th largest number=");
	scanf("%d",&v);
	KTHELEMENT(n,a,v);
}
