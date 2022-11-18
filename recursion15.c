#include<stdio.h>
void oddEven(int n,int a)
{
    if(a>n)
    return;
    printf("%d  ",a);
    oddEven(n,a+2);
}
int main()
{
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("The even number of this range is :");
    oddEven(n,2);
    printf("\nThe odd number of this range is : ");
    oddEven(n,1);


return 0;
}
