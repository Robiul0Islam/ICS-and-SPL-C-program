#include<stdio.h>
int main (){
    int i,a,fac=1;
     printf("Enter the number : ");
     scanf("%d",&a);
     printf("%d! = ",a);
    for(i=a;i>=1;i--)
    {
        if(i==1)
       {
           printf("%d = %d",i,fac);
           break;
       }
       printf("%d x ",i);
       fac=fac*i;

    }






return 0;
}
