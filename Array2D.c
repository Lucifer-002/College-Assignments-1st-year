#include<stdio.h>
int main()
{
    int s1,s2,i,j;
    printf("The coloum of the matrix is:\n");
    scanf("%d",&s1);
    printf("The Row of the matrix is:\n");
    scanf("%d",&s2);
   int Rangu[s1][s2];
    printf("the array element are :\n");
    for(i=0;i<s1;i++)
    { for(j=0;j<s2;j++)
    {
        scanf("%d",&Rangu[i][j]);
    }
    }
    for(i=0;i<s1;i++) 
     {
         for(j=0;j<s2;j++)
         {
             printf("\t%d",Rangu[i][j]);
         }
      printf("\n");
     }  
   float arr[3][3]={{2,4,5},
                    {3,4,5},
                    {4,4,4}};
    printf("The first array elements are :\n");
     for(i=0;i<3;i++) 
     {
         for(j=0;j<3;j++)
         {
             printf("\t%f",arr[i][j]);
         }
      printf("\n");
     }  
     float but[3][3]={{3,4,5},
                      {5,9,59},
                      {69,95,49}};
    printf("The second array elements are\n");    
     for(i=0;i<3;i++) 
     {
         for(j=0;j<3;j++)
         {
             printf("\t%f",but[i][j]);
         }
      printf("\n");
     }  
     float mult[3][3];

      for(i=0;i<3;i++) 
     {
         for(j=0;j<3;j++)
         {
             mult[i][j]=arr[i][j]*but[i][j];
         }
      printf("\n");
     }  
    printf("The the multipication of the array element is:\n");  
    for(i=0;i<3;i++) 
     {
         for(j=0;j<3;j++)
         {
             printf("\t%f",mult[i][j]);
         }
      printf("\n");
     }                  
    
}