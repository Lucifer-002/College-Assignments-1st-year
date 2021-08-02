#include<stdio.h>
int main()
{
	int a1[50][50],a2[50][50],mat[50][50],m,n,k;
	int *ptr1,*ptr2;
	
	
	printf("Enter no. of rows & columns:");
	scanf("%d%d",&m,&n);
	
	int i,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a1[i][j]);
			
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	

	
	for(i=0;i<m;i++)    
	{    
		for(j=0;j<n;j++)    
		{    
			mat[i][j]=0;
			
			for(k=0;k<n;k++)    
			{   
				ptr1=&a1[i][k];   
				ptr2=&a2[k][j];  
				mat[i][j]+=*ptr1 * *ptr2;
			}    
		}		    
	}	    
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}

