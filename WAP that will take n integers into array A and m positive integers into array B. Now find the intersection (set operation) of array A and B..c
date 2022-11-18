#include<stdio.h>
int main()
{
    int m,a[1000],flag=0;
    puts("first array");
    printf("Limit : ");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    int n,b[1000];
    printf("Limit : ");
    scanf("%d",&n);
    puts("second array");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }



        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                    printf("%d",a[i]);
                    flag=1;
                }

            }

        }
        if(flag==0)
            puts("Empty set");





return 0;
}
