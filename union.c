#include<stdio.h>
int main ()
{
    int a[1000],b[1000],x,y,flag=0;
    printf("Enter the limit for a: ");
    scanf("%d",&x);
    printf("Enter the element of a:\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the limit for b: ");
    scanf("%d",&y);
    printf("Enter the element for b:\n");
    for(int i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(int i=0;i<x;i++)
    {
        printf("%d\t",a[i]);
    }
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(b[i]==a[j])
            flag=1;
        }
        if(flag==0)
        printf("%d\t",b[i]);
        flag=0;
    }
    

return 0;
}