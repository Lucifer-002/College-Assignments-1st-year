#include<stdio.h>  
int main()   
    { 
        float f, c;  
        printf("\nEnter the Temparature : ");
        scanf("%f",&f);  
        c=((f-32)*5)/9;  
        printf("\nTemperature in Celsius is : %.2f",c);  
        return 0;  
    }  