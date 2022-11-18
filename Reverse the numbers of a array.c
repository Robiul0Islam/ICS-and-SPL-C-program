#include<stdio.h>
int main (){
    int n;

    printf("Enter numbers limit : ");
    scanf("%d",&n);
    int num[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);

    }
    printf("After reverse\n");
    for(i=(n-1);i>=0;i--)
    {

        printf("%d\t",num[i]);
    }


return 0;
}
