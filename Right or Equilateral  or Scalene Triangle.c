#include <stdio.h>
int main (){
    int a,b,c,A,B,C;
    printf("Enter the arm value: ");
    scanf("%d",&a);
    printf("Enter the arm value: ");
    scanf("%d",&b);
    printf("Enter the arm value: ");
    scanf("%d",&c);
    printf("Enter the angle value: ");
    scanf("%d",&A);
    printf("Enter the angle value: ");
    scanf("%d",&B);
    printf("Enter the angle value: ");
    scanf("%d",&C);
    if(a+b>c&&b+c>a&&c+a>b&&A,B,C>0&&A,B,C<180&&A+B+C==180)
    {
        if((A!=B!=C)&&(a==b||b==c||c==a||a==b==c))
        {
            printf("This is not a valid Triangle.");
        }
        else if((a!=b!=c)&&(A==B||B==C||C==A||A==B==C))
        {
            printf("This is not a valid Triangle.");
        }

       else if((a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)&&((A==90&&B+C==90)||(B==90&&C+A==90)||(C==90&&A+B==90)))
        {
            printf("This is a Right Triangle.");
        }
        else if((A>90||B>90||C>90)&&(a*a!=b*b+c*c||b*b!=a*a+c*c||c*c!=a*a+b*b))
        {
            printf("This is an Obtuse Triangle.");
        }
        else if((A<90&&B<90&&C<90)&&(a*a!=b*b+c*c||b*b!=a*a+c*c||c*c!=a*a+b*b))
        {
            printf("This is an Fine-angled Triangle.");
        }
        else if((a==b==c)&&(A==B==C==60))
        {
            printf("This is an Equilateral Triangle.");
        }
        else if((a==b||b==c||c==a)&&(A==B||B==C||C==A))
        {
            printf("This is a Isosceles Triangle.");
        }
        else if((a!=b!=c)&&(A!=B&&B!=C&&C!=A&&A!=B!=C))
        {
            printf("This is a Scalene Triangle.");
        }
        else printf("This is not a valid Triangle.");
    }
    else printf("This is not a valid Triangle.");



return 0;
}
