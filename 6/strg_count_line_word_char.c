#include<stdio.h>
#include<string.h>

int main()
{
	char str[128], c;
    int i = 0;
    printf("Enter a multi line string( press '.' to end input)\n");
   while((c = getchar()) != '.')
   {
      str[i++] = c;
   }
   str[i] = '\0';

   int j=0;
   int nl=0;int charac=0;
   int words=0;
   while(str[j]!='\0')
   {
      charac++;
      if(str[j]==' ')
      	words++;
      if(str[j]=='\n')
      {
      	nl++;
      	words++;
      }
      j+=1;
   }

   printf("\n%s",str);
   printf("\n%d\n%d\n%d",charac-1,words+1,nl+1);
   return 0;
}