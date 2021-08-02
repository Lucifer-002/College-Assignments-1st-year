#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    FILE *fptr;
    int vc=0;
    fptr=fopen("Mythpat.txt","r");

    if(fptr==NULL)
    {
        printf("\nNo such file exists!!!");
        exit(1);
    }

    while((ch=fgetc(fptr))!=EOF)//---> End of file (Ascii value 26)---->//Character extraction in File
    {
        putc(ch,stdout);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vc++;
    }

    printf("\nThe Number of Vowels is : %d",vc);

    fclose(fptr);

    return 0;
}
