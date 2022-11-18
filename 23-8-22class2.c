#include<stdio.h>
struct superHero
{
    char name[100];
    int power;


}sup;
int main()
{
    struct superHero std [10];
    int n,sum=0,index;
    float ave=0;
    printf("Eneter the limit: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Super hero serial %d\n",i+1);
        printf("Name: ");
        fflush(stdin);
        gets(std[i].name);
        printf("Enter the power: ");
        scanf("%d",&std[i].power);
        printf("\n");
    }
    int max=std[0].power;
    for(int i=0;i<n;i++)
    {
        sum=sum+std[i].power;
        if(std[i].power>max)
        {
            max=std[i].power;
            index=i;

        }

    }
    ave=(float)sum/n;
    printf("Combined power =%d\nAverage power =%f\n Boss is %s",sum,ave,std[index].name);



    return 0;
}
