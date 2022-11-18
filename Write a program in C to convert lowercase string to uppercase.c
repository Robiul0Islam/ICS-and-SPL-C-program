#include<stdio.h>
int main()
{
    char a[1000];
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;

        }
        i++;
    }
    puts(a);


return 0;
}
