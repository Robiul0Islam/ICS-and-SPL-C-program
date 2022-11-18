#include<stdio.h>
int main()
{
  int x;
  printf("Enter the number : ");
  scanf("%d",&x);
  int n=(x/2)+1;
  int i,j,k,l,m,p;
  for(i=1;i<=n;i++)
  {
      if(i==n)
      {
          for(j=1;j<=x;j++)
          {
              printf("H ");
          }
          printf("\n");
      }
      else
      {
          printf("H ");
          for(k=1;k<=(x-2);k++)
          {
              printf("  ");
          }
          printf("H ");
          printf("\n");
      }
  }
  for(l=1;l<=(n-1);l++)
  {
      printf("H ");
      for(m=1;m<=(x-2);m++)
      {
          printf("  ");

      }
      printf("H ");
      printf("\n");
  }




return 0;
}
