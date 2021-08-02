#include<stdio.h>
int main()
{
    int ar[50];
    int n,i,oc=0,ec=0;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    printf("Enter the numbers : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        ec++;
        else
        oc++;
    }
    printf("odd = %d\n",oc);
    printf("even = %d\n",ec);
}
