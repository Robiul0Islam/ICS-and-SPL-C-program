#include<stdio.h>
int main()
{
    int x,y,a[1000],b[1000],c[1000];
    printf("Enter the limit for array a: ");
    scanf("%d",&x);
    puts("Enter the numbers for array a.");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the limit for array b: ");
    scanf("%d",&y);
    puts("Enter the numbers for array b");
    for(int i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }

    int j=0;
    for(int i=0;i<x;i++)
    {
        c[j]=a[i];
        j++;

    }
     j=0;
    for(int i=0;i<y;i++)
    {
        a[i]=b[j];
        j++;
    }
     j=0;
    for(int i=0;i<x;i++)
    {
        b[i]=c[j];
        j++;
    }

    puts("After swapping the first array a is,");
    for(int i=0;i<y;i++)
    {
        printf("%d ",a[i]);
    }
    puts("\nAfter swapping the second array b is,");
    for(int i=0;i<x;i++)
    {
        printf("%d ",b[i]);
    }
return 0;
}
