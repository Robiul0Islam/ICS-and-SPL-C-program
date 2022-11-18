#include<stdio.h>
int main()
{
    int a,b,lcd;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int max=-999;
    if(a>b)
    max=a;
    else
    max=b;
    for(int i=0;;i++)
    {
       if(max%a==0&&max%b==0)
       {
        lcd=max;
        break;
       } 
       max++;
    }
    printf("LCD is %d",lcd);

return 0;
}