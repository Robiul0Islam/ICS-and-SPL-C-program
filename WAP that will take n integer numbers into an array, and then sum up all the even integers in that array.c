#include<stdio.h>
int main()
{
    int arr[10000];
    int n,sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        sum+=arr[i];
    }
    printf("The sum is %d",sum);


    return 0;
}
