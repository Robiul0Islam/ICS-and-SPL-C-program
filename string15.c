#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    gets(a);
    int len=strlen(a);
    int start=len;
    int j,k=0;
    for(int i=len-1;i>=0;i--)
    {
        if(i==0)
        {
            for(j=i;j<start;j++)
            {
                b[k]=a[j];
                k++;
            }
        }
        
        if(a[i]==' ')
        {
            
            for(j=i+1;j<start;j++)
            {
                b[k]=a[j];
                k++;
            }
            b[k]=' ';
            k++;
            start=i;
        }
        
    }
    puts(b);

return 0;
}