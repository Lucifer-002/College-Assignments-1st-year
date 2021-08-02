#include<stdio.h>
int freqof_array(int n,int a[])
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
		count=0;
		for(j=0;j<n;j++)//1,2,4,4,8,1,9
		{
		   if(b[i]==a[j])
		   count++;
		}
		printf("%d found in array %d time",b[i],count);
		if(count>1)
		printf("s");
		printf("\n");
	}	
}
int main()
{
	int n,i,j=0,k=0,count=0,b[100],storable;//1,2,4,4,8,1,9
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d numbers: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	freqof_array(n,a);
}
