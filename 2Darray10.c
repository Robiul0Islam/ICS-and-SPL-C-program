#include<stdio.h>
int main()
{
    int a[100][100],n,sum=0;
    printf("Enter the array size : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int j=n/2;
        sum=sum+a[i][j];
    }
    for(int j=0;j<n;j++)
    {
        int i=n/2;
        if(i!=j)
        sum=sum+a[i][j];
    }
    for(int j=0;j<(n/2);j++)
    {
        int i=0;
        sum=sum+a[i][j];
    }
    for(int j=(n/2)+1;j<n;j++)
    {
        int i=n-1;
        sum=sum+a[i][j];
    }
    for(int i=(n/2)+1;i<n;i++)
    {
        int j=0;
        sum=sum+a[i][j];
    }
    for(int i=0;i<(n/2);i++)
    {
        int j=n-1;
        sum=sum+a[i][j];
    }
    printf("The sum is %d",sum);


return 0;
}