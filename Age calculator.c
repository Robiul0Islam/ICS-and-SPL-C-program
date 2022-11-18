#include<stdio.h>
int main(){
    int year1,year2,year3,month1,month2,month3,day1,day2,day3;
    printf("Enter the Date of Birth.\n");
    printf("Year= ");
    scanf("%d",&year1);
    printf("Month= ");
    scanf("%d",&month1);
    printf("Day= ");
    scanf("%d",&day1);
    printf("Enter the current date.\n");
    printf("Year= ");
    scanf("%d",&year2);
    printf("Month= ");
    scanf("%d",&month2);
    printf("Day= ");
    scanf("%d",&day2);
    if(day2<day1)
    {
        day2=day2+30;
        day3=day2-day1;
        month1=month1+1;
    }
    else
    {
        day3=day2-day1;
    }
     if(month2<month1)
     {
         month2=month2+12;
         month3=month2-month1;
         year1=year1+1;
     }
    else
    {
        month3=month2-month1;
    }
    year3=year2-year1;
    day3=day3+1;
    if(day3==30)
    {
        month3=month3+1;


    if(month3==12)
    {
        year3=year3+1;
        printf("The age is\n\tYear=%d\n\tMonth=0\n\tDay=0",year3);
    }
    else
    {
         printf("The age is\n\tYear=%d\n\tMonth=%d\n\tDay=0",year3,month3);
    }
    }

    else
    {
        printf("The age is\n\tYear=%d\n\tMonth=%d\n\tDay=%d",year3,month3,day3);
    }
return 0;
}
