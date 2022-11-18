#include<stdio.h>
int main()
{
    int T;
    printf("Enter the number: ");
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        float r;
        scanf("%f",&r);
        float area=(((r*2)*(r*2))-(3.1416*r*r));
        printf("The area of shaded region is %f\n",area);
    }


return 0;
}