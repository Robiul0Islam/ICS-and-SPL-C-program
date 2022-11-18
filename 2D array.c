#include<stdio.h>
int main()
{
    int a[100][100];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter the number for[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
            if(j==3)
            printf("\n");

        }
    }


return 0;
}
