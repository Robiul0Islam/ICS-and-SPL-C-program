#include <stdio.h>
int main (){
    int unit;
    float taka;
    printf("Enter the unit value : ");
    scanf("%d",&unit);
    if (unit<=100)
    {
        taka=unit*0.50;
        printf("Total bill is=%f",taka);

    }
    else if(unit<=200)
    {
        taka=(unit-100)*0.75+(100*0.50);
        printf("Total bill is=%f",taka);
    }
    else if(unit<=350)
    {
        taka=(unit-200)*1.25+(100*0.75)+(100*0.50);
        printf("Total bill is=%f",taka);
    }
    else if(unit<=500)
    {
        taka=(unit-350)*2.0+(150*1.25)+(100*0.75)+(100*0.50);
        printf("Total bill is=%f",taka);
    }
    else if(unit>500)
    {
        taka=(unit-500)*3.5+(150*2.0)+(150*1.25)+(100*0.75)+(100*0.50);
        printf("Total bill is=%f",taka);
    }







return 0;
}
