#include<stdio.h>
int main()
{
    int a[100][100],n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    int sum=0;
    for(int j=0;j<n;j++)
    {
        int i=0;
        sum=sum+a[i][j];
    }
    for(int j=0;j<n;j++)
    {
        int i=(n-1);
        sum=sum+a[i][j];
    }
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=0&&j!=0&&i!=(n-1)&&j!=(n-1)&&i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j&&i!=0&&j!=0&&(i+j==(n-1)))
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("The sum is %d\n",sum);

return 0;
}