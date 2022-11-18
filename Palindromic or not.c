#include<stdio.h>
int main()
{
    int num,i,c,count=0;
    int a[100000];
    int b[100000];
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=0;;i++)
    {
        c=num%10;
        num=num/10;
        a[i]=c;
        count=count+1;
        if(num<10)
        {
            a[i+1]=num;
            break;
        }
    }

    int n=count+1;


    i=(n-1);
    int j=0;
    while(j<n)
    {
        b[j]=a[i];
        i--;
        j++;
    }


    int flag=0;
    i=0;j=0;
    while(i<n)
    {
        if(a[i]!=b[j])
        {
            flag=1;
        }
        i++;
        j++;

    }
    if(flag==1)
    {
        printf("The number is not Palindromic");
    }
    else printf("The number is Palindromic");





return 0;
}
