#include <stdio.h>
int main (){
    int year1,year2,year3,month1,month2,month3,day1,day2,day3,m,y;
    printf("Enter the first age.\n");
    printf("Year= ");
    scanf("%d",&year1);
    printf("Month= ");
    scanf("%d",&month1);
    printf("Day= ");
    scanf("%d",&day1);
    printf("Enter the second age.\n");
    printf("Year= ");
    scanf("%d",&year2);
    printf("Month= ");
    scanf("%d",&month2);
    printf("Day= ");
    scanf("%d",&day2);

    day3=day1+day2;
    if(day3>30)
    {
        m=day3/30;
        day3=day3%30;
    }
    month3=month1+month2+m;
    if(month3>12)
    {
        y=month3/12;
        month3=month3%12;
    }
    year3=year1+year2+y;

    printf("After summation of the two ages\n\tYear=%d\n\tMonth=%d\n\tDay=%d",year3,month3,day3);




return 0;
}
