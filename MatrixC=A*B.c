#include<stdio.h>
int main()
{
    int A[3][3];
    int B[3][3];
    int C[3][3];
    int i,j,sum=0;
    puts("Enter the elements of A: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    puts("Enter the elements of B: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+A[i][j]*B[j][i];
            
        }
        for(int j=0;j<3;j++)
        {
            C[i][j]=sum;
        }
    }
    puts("After Multiplication: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",C[i][j]);
            if(j==3)
            {
                printf("\n");
            }
        }

    }



    return 0;
}