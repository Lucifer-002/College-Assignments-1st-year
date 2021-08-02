#include<stdio.h>
int main()
{
	int a[60][60],trans[60][60];
	int r,c,i,j;
	printf("Enter the number of row & coloumns:\n");
	scanf("%d%d",&r,&c);
	printf("Enter the elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		trans[j][i]=a[i][j];
	}
	printf("Transpose matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",trans[i][j]);
		printf("\n");
	}	
	return 0;
}
