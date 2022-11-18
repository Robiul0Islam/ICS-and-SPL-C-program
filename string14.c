#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int len=strlen(a);
    int b[100];
    int count=0;
    for(int i=0;i<len;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                if((a[i]==a[j])||(a[i]==a[j]-32))
                {
                    count++;
                }
            }
            if(a[i]>='a'&&a[i]<='z')
            {
                if((a[i]==a[j])||(a[i]==a[j]+32))
                {
                    count++;
                }
            }
        }
        b[i]=count;
        count=0;
    }
    int max=b[0],maxIndex;
    for(int i=0;i<len;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            maxIndex=i;
        }
    }
    printf("The maximum occurring character is %c\nAnd the character is %d times.",a[maxIndex],max+1);

return 0;
}