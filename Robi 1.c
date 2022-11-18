#include<stdio.h>
int main(){
    int n,c;
    printf("Enter the limit : ");
    scanf("%d",&n);
    int a[1000];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

return 0;

}
