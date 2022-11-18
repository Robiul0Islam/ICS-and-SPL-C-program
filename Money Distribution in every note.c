#include <stdio.h>
int main (){
    int a,b,taka,akHajar,passho,aksho,ponchas,bish,dosh,pach,dui,ak;
    printf("Enter the amount of money: ");
    scanf("%d",&taka);
    if(taka>=1688)
    {
        a=taka-688;
        akHajar=a/1000;
        b=a%1000;
        taka=b+688;

        a=taka-188;
        passho=a/500;
        b=a%500;
        taka=b+188;

        a=taka-88;
        aksho=a/100;
        b=a%100;
        taka=b+88;

        a=taka-38;
        ponchas=a/50;
        b=a%50;
        taka=b+38;

        a=taka-18;
        bish=a/20;
        b=a%20;
        taka=b+18;

        a=taka-8;
        dosh=a/10;
        b=a%10;
        taka=b+8;

        a=taka-3;
        pach=a/5;
        b=a%5;
        taka=b+3;

        a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("One Hundred taka note=%d\nFive Hundred taka note=%d\nOne Hundred taka note=%d\nFifty taka note=%d\nTwenty taka note=%d\nTen taka note=%d\nFive taka note=%d\nTwo taka note=%d\nOne taka note=%d",akHajar,passho,aksho,ponchas,bish,dosh,pach,dui,ak);

    }
    else if(taka>=688)
    {
        a=taka-188;
        passho=a/500;
        b=a%500;
        taka=b+188;

        a=taka-88;
        aksho=a/100;
        b=a%100;
        taka=b+88;

        a=taka-38;
        ponchas=a/50;
        b=a%50;
        taka=b+38;

        a=taka-18;
        bish=a/20;
        b=a%20;
        taka=b+18;

        a=taka-8;
        dosh=a/10;
        b=a%10;
        taka=b+8;

        a=taka-3;
        pach=a/5;
        b=a%5;
        taka=b+3;

        a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("Five Hundred taka note=%d\nOne Hundred taka note=%d\nFifty taka note=%d\nTwenty taka note=%d\nTen taka note=%d\nFive taka note=%d\nTwo taka note=%d\nOne taka note=%d",passho,aksho,ponchas,bish,dosh,pach,dui,ak);

    }
    else if(taka>=188)
    {
        a=taka-88;
        aksho=a/100;
        b=a%100;
        taka=b+88;

        a=taka-38;
        ponchas=a/50;
        b=a%50;
        taka=b+38;

        a=taka-18;
        bish=a/20;
        b=a%20;
        taka=b+18;

        a=taka-8;
        dosh=a/10;
        b=a%10;
        taka=b+8;

        a=taka-3;
        pach=a/5;
        b=a%5;
        taka=b+3;

        a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("One Hundred taka note=%d\nFifty taka note=%d\nTwenty taka note=%d\nTen taka note=%d\nFive taka note=%d\nTwo taka note=%d\nOne taka note=%d",aksho,ponchas,bish,dosh,pach,dui,ak);

    }
    else if(taka>=88)
    {
        a=taka-38;
        ponchas=a/50;
        b=a%50;
        taka=b+38;

        a=taka-18;
        bish=a/20;
        b=a%20;
        taka=b+18;

        a=taka-8;
        dosh=a/10;
        b=a%10;
        taka=b+8;

        a=taka-3;
        pach=a/5;
        b=a%5;
        taka=b+3;

        a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("Fifty taka note=%d\nTwenty taka note=%d\nTen taka note=%d\nFive taka note=%d\nTwo taka note=%d\nOne taka note=%d",ponchas,bish,dosh,pach,dui,ak);

    }
    else if(taka>=38)
    {
        a=taka-18;
        bish=a/20;
        b=a%20;
        taka=b+18;

        a=taka-8;
        dosh=a/10;
        b=a%10;
        taka=b+8;

        a=taka-3;
        pach=a/5;
        b=a%5;
        taka=b+3;

        a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("Twenty taka note=%d\nTen taka note=%d\nFive taka note=%d\nTwo taka note=%d\nOne taka note=%d",bish,dosh,pach,dui,ak);

    }
    else if(taka>=18)
    {
       a=taka-8;
        dosh=a/10;
        b=a%10;
        taka=b+8;

        a=taka-3;
        pach=a/5;
        b=a%5;
        taka=b+3;

        a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("Ten taka note=%d\nFive taka note=%d\nTwo taka note=%d\nOne taka note=%d",dosh,pach,dui,ak);

    }
    else if(taka>=8)
    {
     a=taka-3;
        pach=a/5;
        b=a%5;
        taka=b+3;

        a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("Five taka note=%d\nTwo taka note=%d\nOne taka note=%d",pach,dui,ak);

    }
    else if(taka>=3)
    {
       a=taka-1;
        dui=a/2;
        b=a%2;
        taka=b+1;

        ak=b+1;
        printf("Two taka note=%d\nOne taka note=%d",dui,ak);

    }
return 0;
}
