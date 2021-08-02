#include <stdio.h>
int main()
{
    char s[100];
    char *ptr;
    int  c=0;

    printf("Enter any string: ");
    gets(s);
    ptr=s;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U'
        		||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            c++;
       ptr++;
    }

    printf("Number of Vowels in String: %d\n",c);

    return 0;
}
