#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    printf("Enter the elements : ");
    gets(a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                for(int m=j;m<=len;m++)
                {
                    a[m]=a[m+1];
                }
                len--;
            }
        }
    }
    puts(a);

return 0;
}