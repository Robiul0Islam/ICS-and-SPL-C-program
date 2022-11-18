#include<stdio.h>
int main (){
    int i,n;
    printf("Enter the limit :  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(i!=n&&i%2!=0)
        {
            printf("1,");
        }
        else if(i!=n&&i%2==0)
        {
            printf("0,");
        }
        else if(i==n&&i%2!=0)
        {
            printf("1");
        }
        else if(i==n&&i%2==0)
        {
            printf("0");
        }


return 0;
}
