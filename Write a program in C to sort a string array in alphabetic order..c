#include<stdio.h>
int main()
{
    char a[1000];
    gets(a);

    int i=0;
    char b;
    while(a[i]!='\0')
    {
        for(int j=i+1;a[j]!='\0';j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
        i++;

    }

    puts(a);



return 0;
}
