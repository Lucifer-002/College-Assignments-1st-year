#include<stdio.h>
#include<limits.h>


int main()
{
       FILE *fp;
        
        fp=fopen("Array.txt","r");

        int n,num,max=INT_MIN,min=INT_MAX;
        fscanf(fp,"%d",&n);

      
        for (int i=0;i<n;i++)
        {
            fscanf(fp,"%d",&num);

            if(max<num)
            {
                max=num;
            }
            if(min>num)
            {
                min=num;           
            }
        }
        
        printf("%d %d",max,min);

        fclose(fp);
        
}