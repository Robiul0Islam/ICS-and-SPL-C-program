#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        j=1;
        while(j<=n-i)
        {
            printf("_");
            j++;
        }
        k=1;
        while(k<=i)
        {
            printf("%d",i);
            k++;
        }
        printf("\n");

    }



return 0;
}
