#include<stdio.h>
int main()
{
    int n,a[10000],max,min,indexForMax=0,indexForMin=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    max=a[0];
    for(int i=0;i<n;i++)
    {

        if(a[i]>max)
            {
                max=a[i];
                indexForMax=i;
            }

    }
    min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)

             {
                 min=a[i];
                 indexForMin=i;
             }

    }
    printf("The max is %d at index[%d]\nThe min is %d at index[%d]",max,indexForMax,min,indexForMin);


return 0;
}
