#include<stdio.h>
int main()
{
    int a[100][100],m,n;
    printf("Enter the array size: \n");
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int b=0;b<m;b++)
            {
                for(int c=0;c<n;c++)
                {
                    if(a[i][j]==a[b][c]&&(i!=b||j!=c))
                    {
                        a[b][c]=-1;
                    }
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==n-1)
            printf("\n");
        }
    }

return 0;
}