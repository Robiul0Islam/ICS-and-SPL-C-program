#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],sum=0,k=0;
    printf("Enter the elements of array A:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of array B: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int m=0;m<3;m++)
      {
            for(int j=0;j<3;j++)
            {
                sum=sum+(a[i][j])*(b[j][k]);

            }
             c[i][k]=sum;
             sum=0;
             k++;

      }
      k=0;
    }
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
            printf("%d\t",c[i][k]);
            if(k==2)
            printf("\n");
        }
    }

return 0;
}