#include<stdio.h>
int main()
{
    int a[100][100];
    int m,n;
    printf("Enter the array size m x n : ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int temp;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            temp=a[i][j];
            a[i][j]=a[i][n-1-j];
            a[i][n-1-j]=temp;
           
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==n-1)
            {
                printf("\n");
            }
        }
    }


return 0;
}