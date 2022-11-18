#include<stdio.h>
void arr(int a[],int n,int m)
{
   if(n==m)
   return;
   printf("%d  ",a[m]);
   arr(a,n,m+1);


}
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    arr(a,n,0);
    

return 0;
}