#include <stdio.h>
int main(){
int a,b,c;
printf("Enter first integer : ");
scanf("%d",&a );
printf("Enter second integer : ");
scanf("%d",&b);
c=a;
a=b;
b=c;


printf ("A = %d and B= %d",a,b);




return 0;
}
