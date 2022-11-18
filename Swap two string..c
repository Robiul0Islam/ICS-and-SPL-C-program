#include<stdio.h>
int main()
{
    char a[1000],b[1000],c[1000];
    puts("Enter your text or word for first string: ");
    gets(a);
    puts("Enter your text or word for second string: ");
    gets(b);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    a[i]='\0';
    b[i]='\0';
    puts("After swapping the string.");
    puts("--------------------------");
    puts(" ");
    puts("First string.");
    puts(a);
    puts("--------------------------");
    puts("Second string.");
    puts(b);



return 0;
}
