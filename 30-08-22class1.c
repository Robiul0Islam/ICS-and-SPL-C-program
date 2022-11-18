#include<stdio.h>
 int swapNumber(int *a,int *b);
 int main()
 {
    int *a,*b;
    printf("Entert the first number: ");
    scanf("%d",&a);
    printf("Entert the second number: ");
    scanf("%d",&b);
    int x=&a;
    int y=&b;
    printf("After swaping\nFirst number is %d\nSecond number is %d",x,y);

    


return 0;
 }
 int swapNumber(int *a,int *b)
 {
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

 }