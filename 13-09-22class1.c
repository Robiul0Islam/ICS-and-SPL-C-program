#include<stdio.h>
#include<math.h>
int main()
{
    int testcase;
    double r;
    scanf("%d",&testcase);
    const double pi=2*acos(0.0);
    for(int i=0;i<testcase;i++)
    {
        scanf("%lf",&r);
        double area=(((r*2)*(r*2))-(pi*r*r));
        printf("Case %d: %.2lf\n",i+1,area);
    }



return 0;
}