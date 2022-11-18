#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            printf("%d",i);
        }
        else printf("%d,",i);
    }







return 0;
}
