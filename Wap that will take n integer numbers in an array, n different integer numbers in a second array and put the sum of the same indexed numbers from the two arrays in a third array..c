#include<stdio.h>
int main()
{
    int n,arr[1000],sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
            sum=sum+arr[i];
    }
    printf("the sum is %d",sum);

return 0;
}
