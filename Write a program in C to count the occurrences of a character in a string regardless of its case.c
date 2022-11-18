#include<stdio.h>
int main()
{
    char a[1000];
    int count=0;
    gets(a);
    char x;
    printf("Enter the letter : ");
    scanf("%c",&x);
    if(x>='a'&&x<'z')
    {
        x=x-32;
    }
    int i=0;
    while(a[i]!='\0')
    {
        if(a[i]==x||a[i]==x+32)
            count++;
        i++;
    }
    printf("%d",count);





return 0;
}
