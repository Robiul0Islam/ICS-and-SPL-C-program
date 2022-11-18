#include<stdio.h>
int main(){
    int n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    int num[1000];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int element,position;
    printf("Enter the new element: ");
    scanf("%d",&element);
    printf("Enter the position: ");
    scanf("%d",&position);
    int extra;
    for(i=(n-1);i>=position;i--)
    {
        num[i+1]=num[i];

    }
    num[position]=element;
    for(i=0;i<(n+1);i++)
    {
        printf("%d\t",num[i]);
    }

return 0;

}
