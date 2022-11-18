#include <stdio.h>
int main(){
    int a,b,c,num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result=num/10;
    a=num%10;
    b=result%10;
    result=result/10;
    c=result%10;
    result=result/10;
    printf("The digits are\n\ta=%d\n\tb=%d\n\tc=%d",a,b,c);

return 0;
}
