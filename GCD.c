#include<stdio.h>
int main()
{
    int a,b,mcd;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    
    for(int i=0;i<=a&&i<=b;i++)
    {
       if(a%i==0&&b%i==0)
       {
        mcd=i;
        
       } 
       
    }
    printf("GCD is %d",mcd);

return 0;
}