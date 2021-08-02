#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],R[50][50];
	int i,j,r,c,k;
	int sum=0;
	printf("Enter the number of rows & coloumns:\n");
	scanf("%d%d",&r,&c);
	printf("1st matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printf("2nd matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<r;k++)
		{
		sum=(sum+(a[i][k]*b[k][j]));
	    }
	    R[i][j]=sum;
	    sum=0;
	    }
	}
	printf("Multipication result is:\n");
	    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",R[i][j]);
		printf("\n");
	}
	    return 0;
}
