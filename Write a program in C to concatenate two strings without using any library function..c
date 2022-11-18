#include<stdio.h>
int main(){
    char a[1000];
    int j=0;
    puts("Enter first name");
    gets(a);
    char b[1000];
    puts("Enter second name");
    gets(b);
    char c[1000];
    int i=0;
    while(a[i]!='\0')
    {
        c[j]=a[i];
        j++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        c[j]=b[i];
        j++;
        i++;
    }
    c[j]='\0';

    printf("\nConcatenated string: %s",c);






return 0;
}
