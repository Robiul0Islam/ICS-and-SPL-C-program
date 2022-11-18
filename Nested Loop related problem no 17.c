#include<stdio.h>
int main()
{
  int x;
  printf("Enter the number : ");
  scanf("%d",&x);
  int n=(x/2)+1;
  int i,j,k,l,m,p;
  for(l=1;l<=(x/2);l++)
  {
      printf(" ");
  }
  printf("$");
  printf("\n");
  for(i=2;i<=n;i++)
  {
     if(i==n)
      {
          for(p=1;p<=x;p++)
          {
              printf("$");
          }
          printf("\n");
      }
      else
      {
          for(j=(x/2);j>=i;j--)
      {
          printf(" ");
      }
      printf("$");
      for(k=1;k<=(i-2);k++)
      {
          printf(" ");
      }
      printf("$");
      for(m=1;m<=(i-2);m++)
      {
          printf(" ");
      }
      printf("$");
      printf("\n");
      }
  }

  int a,b,c,d,e;
  for(a=1;a<=(x/2);a++)
  {
      if(a==(x/2))
      {
          for(b=1;b<=(x/2);b++)
          {
              printf(" ");
          }
          printf("$");
          printf("\n");
      }
      else
      {
          for(c=1;c<=a;c++)
          {
              printf(" ");
          }
          printf("$");
          for(d=(x-(a*2)-3)/2;d>=1;d--)
          {
              printf(" ");
          }
          printf("$");
          for(e=(x-(a*2)-3)/2;e>=1;e--)
          {
              printf(" ");
          }
          printf("$");
          printf("\n");
      }
  }




return 0;
}
