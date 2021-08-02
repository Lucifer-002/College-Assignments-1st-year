#include <stdio.h>
int main()
{
    int n,arr[100];
    int s=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    printf("The Sum of Array elements is : %d",s);
    return 0;
}
