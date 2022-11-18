#include<stdio.h>
int main()
{
    int a[100][100],n,flag=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((a[i][j])!=(a[j][i]))
            flag=1;
        }
    }
    if(flag==1)
    printf("The matrix is not symmetric.");
    else printf("The matix is symmetric.");


return 0;
}