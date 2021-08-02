#include<stdio.h>
typedef struct timeperiod
{
    int hour;
    int minute;
    int second;
}tmp;

int main()
{
    tmp t1,t2,timediff;
    printf("Enter the 1st time period in hrs minute and seeconds\n");
    scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
    printf("Enter the 2nd time period in hrs minute and seeconds\n");
    scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);

    if(t1.second<t2.second)
    {
        t1.minute--;
        t1.second+=60;
    }
    if(t1.minute<t2.minute)
    {
        t1.hour--;
        t1.minute+=60;
    }
    timediff.second=t1.second-t2.second;
    timediff.minute=t1.minute-t2.minute;
    timediff.hour=t1.hour-t2.hour;

    printf("The difference in time period is %d:%d:%d",timediff.hour,timediff.minute,timediff.second);
    return 0;
}