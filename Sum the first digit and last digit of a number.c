#include<stdio.h>
int main(){
    int i,a,b,num,count=0,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    b=num%10;
    num=num/10;
    for(i=1;;i++)
    {
        if(num<10)
    {
        a=num;
        break;
    }
    else
    {
        num=num/10;
        count=count+1;

    }
    }
    count=count+2;
    sum=a+b;
    printf("The firs number is %d\nThe last number is %d\nThe sum of these is %d+%d=%d\n",a,b,a,b,sum);
    printf("There are %d digits",count);


return 0;
}
