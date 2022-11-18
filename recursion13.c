#include<stdio.h>
int robi(int num)
{
    static int count=0;
    if(num!=0)
    {
        count++;
        num=num/10;
        robi(num);
    }
    return count;
    

}
int main()
{
     int num;
     scanf("%d",&num);
     int count=robi(num);
     printf("%d",count);

return 0;
}