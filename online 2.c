#include<stdio.h>
int main(){
    float a,b,sum,sub,mul,remin;
    int c,d;
    printf("Enter the first value: ");
    scanf("%f",&a);
    printf("Enter the second value: ");
    scanf("%f",&b);
    printf("Enter a number between 1 to 4: ");
    scanf("%d",&c);
    if(c==1)
    {
        sum=a+b;
        printf("%f",sum);
    }
    else if(c==2)
    {
        sub=a-b;
        printf("%f",sub);
    }
    else if(c==3)
    {
        mul=a*b;
        printf("%f",mul);
    }
    else if(c==4)
    {
         d=a/b;
        remin=a-d*b;
        printf("%f",remin);
    }









return 0;
}
