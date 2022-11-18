#include <stdio.h>
int main (){
         int a,b;
         printf("enter an integer number: ");
         scanf("%d",&a);
         printf("\nenter an integer number: ");
         scanf("%d",&b);
         if(a>b)
            printf("%d is grater than %d",a,b);
         else if(b>a)
            printf("%d is grater than %d",b,a);
         else printf("these are equal.");


return 0;
}
