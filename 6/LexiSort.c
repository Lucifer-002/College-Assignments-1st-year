#include <stdio.h>
#include<string.h>

int main()
{
	char str[100][100],s[100];
	int n,r;
	printf("\nEnter The Number of Input : ");
	scanf("%d",&n);
	fflush(stdin);
	for (int i = 0; i < n; ++i)
		gets(str[i]);
	for (int i = 1; i <=n-1; ++i)
	{
        for(int j=0;j<=n-1-i;j++)
        {
           r=strcmp(str[j],str[j+1]);
           if(r>0)
           {
           	strcpy(s,str[j]);
           	strcpy(str[j],str[j+1]);
           	strcpy(str[j+1],s);
           }
        }
    }
    printf("\nStrings in Sorted Order : ");
    for (int i = 0; i < n; ++i)
		printf("\n%s",str[i]);
	return 0;
}
