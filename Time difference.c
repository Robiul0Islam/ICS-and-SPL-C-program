#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter the starting time : ");
    scanf("%d",&a);
    printf("Enter the last time : ");
    scanf("%d",&b);
    if(a>b)
    {
        n=(24-a)+b;
        printf("The game lasted %d hours",n);
    }
    else if(b>a)
    {
        n=b-a;
        printf("The game lasted %d hours",n);
    }
    else if(a==b)
    {
        printf("The game lasted 24 hours");
    }









return 0;
}
