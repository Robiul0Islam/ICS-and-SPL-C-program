#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }




return 0;
}
