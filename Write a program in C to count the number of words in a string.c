#include<stdio.h>
int main()
{
    char a[1000];
    int count=0;
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]==' ')
            count++;
            i++;
    }
    printf("%d",count+1);


return 0;
}
