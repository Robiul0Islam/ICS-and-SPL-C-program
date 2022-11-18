#include<stdio.h>
int main ()
{
    char a[1000];
    char b,c,d;
    printf("Enter the sentence: ");
    gets(a);
    printf("Enter the three charater: ");
    scanf("%c %c %c",&b,&c,&d);
    if(b>='a'&&b<='z')
    {
        b=b-32;
    }
    int countb=0,countc=0,countd=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(b==a[i]||(b+32)==a[i])
        {
            countb++;
        }
    }
    if(c>='a'&&c<='z')
    {
        c=c-32;
    }
    
    for(int i=0;a[i]!='\0';i++)
    {
        if(c==a[i]||(c+32)==a[i])
        {
            countc++;
        }
    }if(d>='a'&&d<='z')
    {
        d=d-32;
    }
    
    for(int i=0;a[i]!='\0';i++)
    {
        if(d==a[i]||(d+32)==a[i])
        {
            countd++;
        }
    }
    printf("%c: %d\n%c: %d\n%c: %d",b,countb,c,countc,d,countd);
return 0;
}