#include<stdio.h>
int main()
{
    int n,j;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
             printf("1\t");
            if(i!=j)
              printf("0\t");
              if(j==n-1)
             printf("\n");
        }
        
    }

return 0;
}