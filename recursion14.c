#include<stdio.h>
int max(int a[],int n)
{
    static int Max=-9999;
    static int i=0;
    if(i<n)
    {
        if(a[i]>Max)
        {
          Max=a[i];
        }
        i++;
        max(a,n);
    }
    return Max;

}
int main()
{
    int a[100];
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int maxx=max(a,n);
    printf("The max is %d\n",maxx);


return 0;
}