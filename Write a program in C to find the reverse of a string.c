#include<stdio.h>
int main()
{
    char a[1000];
    gets(a);
    char b[1000];
    int i=0;
    int count=0;

    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    //printf("%d",count);
    int j=count-1,k=0;
    while(j>=0)
    {
        b[k]=a[j];
        j--;
        k++;
    }
    b[k]='\0';
    puts(b);

return 0;
}
