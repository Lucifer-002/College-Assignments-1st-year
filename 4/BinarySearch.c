#include<stdio.h>
int main()//Binary search
{
    int n,arr[100],num;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int key=-1;
    int start=0;
    int end=n-1;
    printf("Enter the number to be searched \n");
     scanf("%d",&num);

     while(start<=end)
     {
         int m=(start+end)/2;
         if(arr[m]==num)
         {
             key=m;
             break;
         }
         if(num>arr[m])
         {
            start=m+1;
         }
         else
         {
             end=m-1;
         }
     }
     if(key==-1)
        printf("The element is not present in the array");
     else
        printf("The number %d is present at position %d",num,key+1);
     return 0;
}
