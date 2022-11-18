#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=n;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
       j=i;
       while(j<=a)
       {
           printf("%d",j);
           j++;
       }
       printf("\n");
       ++a;


    }



return 0;
}
