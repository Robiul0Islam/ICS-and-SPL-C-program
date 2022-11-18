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
                if(j%2!=0)
                    printf("1");
                else printf("0");
            }
            printf("\n");
        }
        else
            {
                for(k=1;k<=n;k++)
                   {
                    if(k%2!=0)
                        printf("0");
                    else printf("1");
                   }
        printf("\n");
            }
    }



return 0;
}
