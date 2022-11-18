#include<stdio.h>
    int printsum(int a,int b);
    int printsum(int a,int b)
    {
        return a+b;
    }
int main(){
    int a,b,sum;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second value: ");
    scanf("%d",&b);
    sum=printsum(a,b);
    printf("The sum is %d",sum);
return 0;

}
