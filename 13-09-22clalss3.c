#include<stdio.h>
int main()
{
    
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int n;
        scanf("%d",&n);
        char a[100];
        gets(a);
        if(a="Alice"&&n%2!=0)
        {
            printf("Case %d: Alice",i+1);
        }
        else printf("Case %d: Bob",i+1);
        else if(a="Bob"&&n%2!=0)
        {
            printf("Case %d: Alice",i+1);
        }
        else printf("Case %d: Bob",i+1);
    }


return 0;
}