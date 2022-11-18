#include<stdio.h>
int main()
{
    int j,count=0;
    for(j=2;j<=100;j++)
    {

    int i,flag=0;
    for(i=2;i<=(j/2);i++)
    {
        if(j%i==0)
            flag=1;//not prime

    }
    if(flag!=1)
        count=count+1;

    }
    printf("There are %d prime numbers.",count);

return 0;
}
