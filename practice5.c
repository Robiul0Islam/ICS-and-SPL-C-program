#include<stdio.h>
int main(){
    float i,n,sum=0;
    printf("Enter the limit : ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/(i+1));
    }
    printf("The sum is %f",sum);






return 0;
}
