#include <stdio.h>
int main() 
{
    int n,arr[100];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
   
   for (int i = 0; i < (n - 1); i++) 
   {
      int p = i;
      for (int j = i + 1; j < n; j++) // finding the position of the min element
      {
         if (arr[p] > arr[j])
            p=j;
      }
      if (p!=i) 
      {
         int t = arr[i];
         arr[i] = arr[p];
         arr[p] = t;
      }
   }
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
   return 0;
}