#include<stdio.h>
int main ()
{
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    int n=(x/2)+1;
    int i,j,k,l,m,count=0;
    for(i=1;i<=n;i++)
            {
              if(i==1)
              {
                  printf("*");
                  for(j=1;j<=(x-2);j++)
                  {
                      printf(" ");
                  }
                  printf("*");
                  printf("\n");

              }

            else
            {
                for(k=1;k<=(i-1);k++)
                {
                    printf(" ");
                }
                printf("*");
                for(l=1;l<=(x-((i-1)+1)*2);l++)
                {
                    printf(" ");
                }
                if((x-((i-1)+1)*2)!=-1)
                {
                    printf("*");
                }
                printf("\n");
            }

            }

    int a,b,c,d;
     for(a=1;a<=(n-1);a++)
     {
         if(a==(n-1))
         {
                  printf("*");
                  for(b=1;b<=(x-2);b++)
                  {
                      printf(" ");
                  }
                  printf("*");
                  printf("\n");
         }
         else
         {
             for(c=(n-2);c>=a;c--)
             {
                 printf(" ");
                 count++;
             }
             printf("*");
             for(d=1;d<=(x-2-(count*2));d++)
             {
                 printf(" ");

             }
             count=0;
             printf("*");
             printf("\n");
         }
     }


return 0;
}

