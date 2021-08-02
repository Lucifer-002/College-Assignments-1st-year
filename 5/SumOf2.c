#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],R[50][50];
	int i,j,r,c;
	printf("Enter the no of rows and coloumns: ");
	scanf("%d%d",&r,&c);
	printf("Enter the 1st matrix elements: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter the 2nd matrix elements: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
	}
	printf("Sum of the matrixes: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		R[i][j]=a[i][j]+b[i][j];
		printf("%d\t",R[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
