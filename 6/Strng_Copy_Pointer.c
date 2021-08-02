#include<stdio.h>
void copy(char*, char*);

void copy(char *str1,char *str)
{
    while(*str)
    {
        *str1=*str;        
        str++;        
        str1++;
    }    
    *str1='\0';
}

int main()
{
    char str[100],str1[100];    
    printf("Enter string: ");    
    gets(str);    
    copy(str1,str);    
    printf("After copying string is: %s",str);    
    return 0;
}
