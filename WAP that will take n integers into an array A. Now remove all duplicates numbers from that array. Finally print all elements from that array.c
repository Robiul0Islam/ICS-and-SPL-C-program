#include<stdio.h>
int main()
{
    int n,a[1000],count=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    puts("Enter the numbers for array.");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            {
                printf("%d ",a[i]);
            }

    }






return 0;
}
