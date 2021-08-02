#include <stdio.h>
#include<math.h>
int main()
{
    int n,arr[100];
    float s=0.0;
    float st;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    float mean=s/n;
     for(int i=0;i<n;i++)
     {
        st+=(arr[i]-mean)*(arr[i]-mean);
     }

    float var=sqrt(st); 
    printf("\nThe Mean of Array elements is : %.2f",mean);
    printf("\nThe Standard Deviation of Array elements is : %.2f",st);
    printf("\nThe Variance of Array elements is : %.2f",var);
    return 0;
}
