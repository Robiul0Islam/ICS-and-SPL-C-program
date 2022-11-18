#include<stdio.h>
int main()
{
    char a[1000];
    int count=0;
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {

        i++;
        count++;
    }
    printf("The length of the string %s is %d",a,count);


return 0;
}
