#include<stdio.h>
int main ()
{
    int a[1000],x,flag=0,count=0;
    printf("Enter the limit for a: ");
    scanf("%d",&x);
    printf("Enter the element of a:\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<x-1;k++)
                {
                    a[k]=a[k+1];
                }
                x--;
                j--;
            }
            
        }
        
    }
    for(int i=0;i<x;i++)
    {
        printf("%d\t",a[i]);
    }


return 0;
}