#include <stdio.h>
int main()
{
    int a,flag=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    int i;
    for(i=2;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            flag=1;
        }

    }
    if(flag==1)
    {
        printf("The number is not Prime");

    }
    else printf("The number is Prime");

return 0;
}
