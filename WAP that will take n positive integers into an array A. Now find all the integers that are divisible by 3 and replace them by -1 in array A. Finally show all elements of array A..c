#include<stdio.h>
int main()
{
    int n,a[1000];
    puts("Enter the limit: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            a[i]=-1;
        }
        printf("%d ",a[i]);
    }


return 0;
}
