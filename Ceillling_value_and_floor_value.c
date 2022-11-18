#include<stdio.h>
int main()
{
    float a;
    int b,c;

    printf("Enter a number: ");
    scanf("%f",&a);
    int i;
    if(a>0)
    {
        
    for(i=1;i<=a;i++)
    {
        b=i;
    }
    c=b+1;

    printf("The ceilling value is %d\nThe floor value is %d",c,b);
    }
    else if (a<0)
    {
        for (int i=1;i>=a;i--)
        {
            b=i;
        }
        c=b-1;
        printf("The ceilling value is %d\nThe floor value is %d",b,c);
    }
return 0;
}
