#include <stdio.h>
int main ()
{
    int Second,sec,min,hour,day;
    printf("Enter the second value: ");
    scanf("%d",&Second);
    if(Second>60){
    {
        min=Second/60;
        sec=Second%60;
        if(min>60)
        {
            hour=min/60;
            min=min%60;
        }
        if(hour>24)
        {
            day=hour/24;
            hour=hour%24;
        }

    }
    printf("Day=%d\nHour=%d\nMinute=%d\nSecond=%d",day,hour,min,sec);
    }
    else printf("Second=%d",Second);




    return 0;
}
