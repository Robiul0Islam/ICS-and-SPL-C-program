#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i,k,l,m;
    for(i=1;i<=n;i++)
    {


            for(k=1;k<=i;k++)
            {
                printf("%d",k);
            }
            for(l=1;l<=((n+(n-1))-(2*i));l++)
            {
                printf("_");
            }
            if(((n+(n-1))-(2*i))==-1)
            {
                for(m=(n-1);m>=1;m--)
                {
                    printf("%d",m);
                }
            }
            else
            {
                for(m=i;m>=1;m--)
                 {
                   printf("%d",m);
                 }

            }
             printf("\n");


    }



return 0;
}
