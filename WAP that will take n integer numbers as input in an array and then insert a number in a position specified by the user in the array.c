#include<stdio.h>
int main()
{
    int n,a[1000],b,c;
    printf("Enter the limit: ");
    scanf("%d",&n);

    puts("Enter numbers for the array.");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the prefer position : ");
    scanf("%d",&b);
    printf("Enter the number to insert : ");
    scanf("%d",&c);
    for(int i=0;i<n;i++)
    {
        if(i==b)
        {
            for(int j=n;j>b;j--)
            a[j]=a[j-1];
        }
    }
    a[b]=c;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }


return 0;
}
