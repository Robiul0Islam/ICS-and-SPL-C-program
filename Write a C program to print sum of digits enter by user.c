#include <stdio.h>
int main (){
    int sum=0,num,a;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(1)
    {
        a=num%10;
        num=num/10;
        sum=sum+a;
        if(num<10)
        {
            printf("The sum is %d",sum=sum+num);
            break;
        }

    }





return 0;
}
