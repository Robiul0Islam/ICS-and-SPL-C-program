#include<stdio.h>


int main (){
    int n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    float num[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&num[i]);

    }
    int j;
    float c;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-1;j++)
       {
           if(num[i]>num[j])
        {
            c=num[i];
            num[i]=num[j];
            num[j]=c;

        }
       }



    }
    for (i=0;i<n;i++)
    {
        printf("%f\t",num[i]);
    }

return 0;
}
