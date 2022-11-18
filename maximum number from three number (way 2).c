#include <stdio.h>
int main (){
     int a,b,c;
     printf("Enter an integer number: ");
     scanf("%d",&a);
     printf("\nEnter an integer number: ");
     scanf("%d",&b);
     printf("\nEnter an integer number: ");
     scanf("%d",&c);
  if(a>b&&a>c)
        printf("%d is grater.",a);
     else if(b>c&&b>a)
        printf("%d is grater.",b);
     else printf("%d is grater.",c);


return 0;
}
