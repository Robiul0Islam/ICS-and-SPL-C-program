#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter an integer number: ");
    scanf("%d",&a);
    printf("\nEnter an integer number: ");
    scanf("%d",&b);
    sum=a+b;
    if(sum%2==0)
        printf("The sum is even.");
    else printf("The sum is odd.");


return 0;
}
