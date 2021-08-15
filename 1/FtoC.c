/*farenheit to celcius temperature convertion using function
Timecomplexity : O(1); */
#include<stdio.h> 
float Func(float s){
    float z=((s-32)*5)/9;
    return z;
}
int main()   
    { 
        float f, c;  
        printf("\nEnter the Temparature : ");
        scanf("%f",&f);   
        printf("\nTemperature in Celsius is : %.2f",Func(f));  
        return 0;  
    }  
