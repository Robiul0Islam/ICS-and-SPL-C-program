//using function.
#include<stdio.h>
int countVowels(char a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
            count++;
    }
    return count;
}

int main()
{
    int n;
    char a[1000];
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    int count=countVowels(a,n);
    printf("%d",count);



return 0;
}
