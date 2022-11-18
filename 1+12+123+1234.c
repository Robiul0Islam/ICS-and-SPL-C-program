#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  limit : ");
    scanf("%d",&n);

    int x=1,i,a=1,y=1,sum=1;
    for(i=2;i<=n;i++)
    {
       
        a=a*10;
        y=y+a;
        x=x+y;
       sum=sum+x;
    }
    printf("The sum is %d",sum);



return 0;
}