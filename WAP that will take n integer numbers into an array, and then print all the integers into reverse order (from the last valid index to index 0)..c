#include<stdio.h>
int main()
{
    int array[10000],b[10000];
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);

    int i=0,j=n-1;
    while(i<n)
    {
        scanf("%d",&array[i]);
        b[j]=array[i];
        i++;
        j--;

    }

    for(int j=0;j<n;j++)
    {
        printf("%d ",b[j]);
    }

return 0;
}
