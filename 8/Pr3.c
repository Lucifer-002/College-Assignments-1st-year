#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],x=0;
    
    printf("Enter a string :");
    scanf("%s",s);
    

	int i,l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
        {
        	x=1;
		}
    }
    if(x==1)
    printf("Not Palindrome");
    else
    printf("Palindrome");
    
    return 0;
}
