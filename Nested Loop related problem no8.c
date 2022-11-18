#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=a;j++)
        {
            printf("*");

        }
        a--;
        printf("\n");
    }



return 0;
}
