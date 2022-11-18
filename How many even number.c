#include<stdio.h>
int main(){
    int a,b,c,d,e,count=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter a number : ");
    scanf("%d",&b);
    printf("Enter a number : ");
    scanf("%d",&c);
    printf("Enter a number : ");
    scanf("%d",&d);
    printf("Enter a number : ");
    scanf("%d",&e);
    if(a%2==0)
        count=count+1;
    else count=count;
    if(b%2==0)
        count=count+1;
    else count=count;
    if(c%2==0)
        count=count+1;
    else count=count;
    if(d%2==0)
        count=count+1;
    else count=count;
    if(e%2==0)
        count=count+1;
    else count=count;
    printf("%d valores pares",count);








return 0;
}
