#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i,j,k,l;
    for(j=1;j<=n;j++)
        {
            printf("Z");
        }
        printf("\n");

    for(i=1;i<=(n-2);i++)
    {
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        printf("Z");
        printf("\n");
    }
    for(l=1;l<=n;l++)
        {
            printf("Z");
        }
        printf("\n");



return 0;
}
