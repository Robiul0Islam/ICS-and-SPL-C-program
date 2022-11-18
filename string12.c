#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    int count=0,flag=0;
    int lena=strlen(a);
    int lenb=strlen(b);
    int j=0;
    for(int i=0;i<lena;i++)
    {
        if(a[i]==b[0])
        {
            
            for(int k=0;k<lenb;k++)
            {
                if(a[i]!=b[k])
                {
                    flag=1;
                }
                i++;
            }
            i--;
            if(flag==0&& (a[i+1]<'A'||a[i+1]>'Z')&& (a[i+1]<'a'||a[i+1]>'z'))
            {
                count++;
                
            }
            flag=0;
        }
    }
    printf("%d",count);
return 0;
}