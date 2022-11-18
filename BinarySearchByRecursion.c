#include<stdio.h>

int binarySearch(int a[],int b)
{
    static int first=0;
    static int last=3;
    int middle=(first+last)/2;
    if(b==a[middle])
    return a[middle];
    else if(b<a[middle])
    {
        last=middle;
        return binarySearch(a,b);
    }
    else if(b>a[middle])
    {
        first=middle;
        return binarySearch(a,b);
    }
}
int main()
{
    int a[100],b;
    printf("Enter the number for search: ");
    scanf("%d",&b);
    
    printf("Enter the element of the array: ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=binarySearch(a,b);
    printf("The number that I search is %d",ans);


return 0;
}