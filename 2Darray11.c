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
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            {
                if(j%2!=0)
                {
                    sum=sum+a[i][j];
                }
            }
            else
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("The sum is %d",sum);

return 0;
}