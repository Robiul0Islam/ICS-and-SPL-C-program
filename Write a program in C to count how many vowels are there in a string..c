#include<stdio.h>
int main()
{
    char a[1000];
    int count=0;
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        count++;
    }
    printf("%d",count);

return 0;
}
