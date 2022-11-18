#include<stdio.h>
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0&&j==0)
    {
        sum=(a[0][0])*(((a[1][1])*(a[2][2]))-((a[2][1])*(a[1][2])));
    }
    if(i==0&&j==1)
    {
        sum=sum-(a[0][1])*(((a[1][0])*(a[2][2]))-((a[2][0])*(a[1][2])));
    }
    if(i==0&&j==2)
    {
        sum=sum+(a[0][1])*(((a[1][0])*(a[2][1]))-((a[2][0])*(a[1][1])));
    }
        }
    }
    printf("The sum is %d",sum);

return 0;
}