#include<stdio.h>
void robi(int n)
{   
    if(n==11)
    return ;
    printf("%d  ",n);
    robi(n+1);
}
int main()
{
    robi(1);


return 0;
}