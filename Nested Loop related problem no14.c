#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=n;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("*");
            for(k=1;k<=(n-2);k++)
            {
                printf("_");
            }
            printf("*");
            printf("\n");
        }
    }
return 0;
}
