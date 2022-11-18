#include<stdio.h>
int main(){
     float i,n,a,sum=0,ave=0;
        printf("Enter the limit : ");
        scanf("%f",&n);
     for(i=1;i<=n;i++)

     {
        printf("Enter the number : ");
        scanf("%f",&a);
        sum=sum+a;
        ave=sum/i;

     }
     printf("The average is %f",ave);









return 0;
}
