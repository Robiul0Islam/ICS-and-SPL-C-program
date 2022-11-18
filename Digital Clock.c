#include<stdio.h>
#include<unistd.h>
#include<windows.h>

int main()
{
    int h,m,s;
    char a;
    printf("Please set a right time on your watch.\n");
    printf("Enter A for AM or P for PM: ");
    scanf("%c",&a);
    printf("Hour: ");
    scanf("%d",&h);
    printf("Minute: ");
    scanf("%d",&m);
    printf("Second: ");
    scanf("%d",&s);

    int i;
    for(i=1;;i++)
    {

        s=s+1;
        if(s>59)
        {
            m=m+1;
            s=0;
        }
        if(m>59)
        {
            h=h+1;
               if(h==12)
                {
                  if(a=='A')
                     {
                      a='P';
                     }
                  else if(a=='P')
                     {
                     a='A';
                     }
               }
            m=0;
        }

        if(h>12)
        {
            h=1;

        }




        printf("***********Digital Clock************\n\t   %.2d:%.2d:%.2d %cM",h,m,s,a);
        sleep(1);
        system("cls");

        }

return 0;
}
