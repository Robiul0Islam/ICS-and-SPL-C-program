#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int n=(x/2)+1;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i+(i-1);k++)
        {
            printf("*");

        }
        printf("\n");
    }
    int a,b,c;
    for(a=1;a<=(n-1);a++)
    {
        for(b=1;b<=a;b++)
        {
            printf(" ");
        }
        for(c=1;c<=(x-(a*2));c++)
        {
            printf("*");

        }
        printf("\n");

    }




return 0;
}

