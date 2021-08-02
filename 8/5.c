#include<stdio.h>
#include<string.h>

void Str_Bubble(char str[][100],int n)
{
	int i,j,r;
	char s[100];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			r=strcmp(str[i],str[j]);
			if(r>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}
	}
}
int main()
{
	char str[100][100],s[100];
	int i,n;
	printf("Enter the numbers of names:\t");
	scanf("%d",&n);
	printf("Enter the names:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	printf("After sorting :\n");
	Str_Bubble(str,n);
	for(i=0;i<n;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}

