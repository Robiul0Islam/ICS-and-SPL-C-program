#include<stdio.h>
int main()
{
    int n,a[1000],b[10000],c[1000];
    printf("Enter the limit: ");
    scanf("%d",&n);
    puts("Enter the numbers for first array.");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    puts("Enter the number for second array.");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    int i=0,j=0,k=0;
    while(i<n)
    {
        c[k]=a[i]+b[j];
        i++;
        j++;
        k++;
    }
    for(int k=0;k<n;k++)
    {
        printf("%d ",c[k]);
    }


return 0;
}
