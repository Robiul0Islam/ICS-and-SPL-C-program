#include<stdio.h>
int main(){
    float a,x,b,c,d,ans;
    printf("Enter the value of degree : ");
    scanf("%f",&a);
   // x=(a*3.1416)/180;
    x=a;

    b=x*x*x;
    c=x*x*x*x*x;
    d=x*x*x*x*x*x*x;
    int e,f,g,h;
    e=3*2;
    f=5*4*e;
    g=7*6*f;

    ans=x-(b/e)+(c/f)-(d/g);
    printf("sin x= %.4f",ans);

return 0;
}
