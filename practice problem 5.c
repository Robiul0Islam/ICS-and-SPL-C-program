#include<stdio.h>
int main(){
    int i,a,b,n,x=0,y=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    for(i=1;;i++)
    {
        if(a==b)
        {
            printf("Reached.");
            break;
        }

         else if(a>b)
        {
            printf("%d,",a*a);
            a=a-1;

        }
        else if(a<b)
        {   printf("%d,",a*a);
            a=a+1;
        }

    }












return 0;
}
