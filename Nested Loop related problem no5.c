#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        k=n;
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k--;
        }
        printf("\n");

        //using while loop.This one is also right code here.
        /*j=1;
        k=n;
        while(j<=i)
        {
            printf("%d",k);
            j++;
            k--;
        }
        printf("\n");*/
    }




return 0;
}
