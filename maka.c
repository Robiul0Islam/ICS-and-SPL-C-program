#include<stdio.h>
int main()
{
    int a[100][100];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            a[i][j]=1;
            else
            a[i][j]=0;
        }
    }
    
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==2)
            printf("\n");
        }
    }

return 0;
}