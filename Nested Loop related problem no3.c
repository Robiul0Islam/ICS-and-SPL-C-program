#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        j=1;
        k=i;
        while(j<=i)
            {
                printf("%d",k);
               j++;
               k++;
            }
            printf("\n");
    }

return 0;
}
