#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=((i*i)*(i+1))+sum;
    }
    printf("The sum is %d",sum);










return 0;
}
