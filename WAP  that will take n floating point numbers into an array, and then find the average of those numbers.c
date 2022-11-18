#include<stdio.h>
int main()
{
    int n;
    float arr[1000];
    float sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    float avg=sum/n;
    printf("The average is %0.2f",avg);


return 0;
}
