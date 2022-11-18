#include <stdio.h>
int main (){
     int a,b,c;
     printf("Enter an integer Number a = ");
     scanf("%d",&a);
     printf("Enter an integer Number b = ");
     scanf("%d",&b);
     c=a;
     a=b;
     b=c;
     printf("After swapping the numbers,");
     printf("\n");
     printf("\t");
     printf("The number a = %d",a);
     printf("\n");
     printf("\t");
     printf("The number b = %d",b);


return 0;
}
