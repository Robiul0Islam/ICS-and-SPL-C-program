#include<stdio.h>
int main()
{
    int a;
    int flag=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a==0)
        printf("The number is not valid.");
    else if(a<0)
        printf("The number is not valid.");
    else
    {
        int i;
    for(i=1;;i++)
    {
       if(a==2)
       {
           break;
       }
       if(a==1)
       {
           break;
       }
       else if(a%2==1)
        {
            flag=1;
            break;
        }
        else a=a/2;
        if(a==2)
        {
            break;
        }


    }
    if(flag==1)
        printf("The number is NOT a power of 2.");
    else  printf("The number is  a power of 2.");
    }

return 0;
}
