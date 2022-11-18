#include<stdio.h>
int main()
{
int a=0;
int sum=0;
int b=1;
int n;

printf("Eneter the length: ");

scanf("%d",&n);
printf("0 & 1 # ");
for(int i=1;i<=n-2;i++)
{
    if(i==n-2)
    {
        sum=a+b;
        printf("%d",sum);
        
    }
    else
    {
        sum=a+b;
        printf("%d ",sum);
        if(sum==0)
        printf("& ");
        else if(sum%2==0)
        printf("$ ");
        else if(sum%2!=0)
        printf("# ");
        a=b;
        b=sum;
    }
}


return 0;
}