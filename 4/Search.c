#include<stdio.h>
  
int main()
{
    int n,arr[100],x,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
     
    printf("\nEnter element to search: ");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
    {
        if(arr[i]==x)
            break;
    }
     
    if(i<n)
        printf("Element found at index %d",i+1);
    else
        printf("Element not found");
  
    return 0;
}