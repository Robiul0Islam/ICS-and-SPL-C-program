#include<stdio.h>
int main (){
    int a,taka,F,O,Fi,T,pa;
    printf("Enter the money value: ");
    scanf("%d",&a);
    if(taka>=500)
    {
        F=a/500;
        taka=a%500;
        printf("Five hundred=%d\n",F);
    }
    else
    {
        printf("Five hundred=0\n");
    }
    if(taka>=100)
    {
        O=taka/100;
        taka=taka%100;
        printf("One hundred=%d\n",O);
    }
    else
    {
        printf("One hundred=0\n");
    }
    if(taka>=50)
    {
        Fi=taka/50;
        taka=taka%50;
        printf("Fifty=%d\n",Fi);
    }
    else
    {
        printf("Fifty=0\n");
    }
    if(taka>=10)
    {
        T=taka/10;
        taka=taka%10;
        printf("Ten=%d\n",T);
    }
    else
    {
        printf("Ten=0\n");
    }
    if(taka>=5)
    {
        pa=taka/5;
        taka=taka%5;
        printf("Five=%d\n",pa);
    }
    else
    {
        printf("Five=0\n");
    }

    printf("One=%d",taka);



return 0;
}
