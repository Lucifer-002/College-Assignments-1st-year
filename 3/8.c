#include <stdio.h>  
int main()  
{  
      int i, j, rowcount, k;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rowcount);   
    printf("\n");  
    for (i = 1; i <= rowcount; i++)   
    {  
        for (j = i; j < rowcount; j++)  
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); 
        }  
        printf ("\n");   
    }  
       
}  