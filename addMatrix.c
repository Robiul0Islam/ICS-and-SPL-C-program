#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d\t",c[i][j]);
           if(j==2)
           printf("\n");
        }
    }

return 0;
}