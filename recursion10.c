#include<stdio.h>
int mysum(int n)
{
    static int sum=0;
    if(n==0)
    return sum;
    sum=n+mysum(n-1);
    return sum;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=mysum(n);
    printf("The sum of first %d number is %d",n,sum);

return 0;
}