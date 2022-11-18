#include<stdio.h>
int main(){
    int num,a;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("The reverse digits are :");
    while(1)
    {
        if(num>=10);
        {
            a=num%10;
            num=num/10;
            printf("%d",a);
        }
        if(num<10)
        {
            printf("%d",num);
            break;
        }
    }










return 0;
}
