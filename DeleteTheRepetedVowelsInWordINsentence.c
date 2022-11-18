#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        for(int j =0;j<len;j++)
        {
            if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
                if(a[i]==a[i+1])
                {
                    for(int k=i;k<len;k++)
                    {
                        a[k+1]=a[k+2];
                    }
                    len--;
                }
            }
        }
    }
    puts(a);
    


return 0;
}