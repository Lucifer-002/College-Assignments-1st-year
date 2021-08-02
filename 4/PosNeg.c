#include<stdio.h>
int main()
{
    int n;
    int pc=0;
    int nc=0;
    int a[100];
    int i;
    printf("Enter the no of elements in the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     {
        if(a[i]>0)
        pc=pc+a[i];
        else
        nc=nc+a[i];
     }
    printf("%d is the total sum off all positive value present in the array\n",pc);
    printf("%d is the total sum off all negative value present in the array\n",nc);
    if(pc+pc>0)
    	printf("%d is the difference in the magnitude\n",(pc+nc));
    else
        printf("%d is the difference in the magnitude\n",(-(pc+nc)));
    return 0;
}