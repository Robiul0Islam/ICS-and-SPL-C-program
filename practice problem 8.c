#include<stdio.h>
int main(){
    float a,hw,ct,mt,ft,t;
    int i,n;
    printf("Enter the students number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Attendance Mark=");
        scanf("%f",&a);
        printf("Assignments Mark=");
        scanf("%f",&hw);
        printf("Class Tests Mark=");
        scanf("%f",&ct);
        printf("Midterm Mark=");
        scanf("%f",&mt);
        printf("Final Mark=");
        scanf("%f",&ft);
        a=((a*100)/5)*0.05;
        hw=((hw*100)/10)*0.10;
        ct=((ct*100)/15)*0.15;
        mt=((mt*100)/50)*0.30;
        ft=((ft*100)/100)*0.40;
        t=a+hw+ct+mt+ft;
        if(t>=90&&t<=100)
        {
            printf("Student %d : A\n",i);
        }
        else if(t>=86&&t<=89)
        {
            printf("Student %d : A-\n",i);
        }
        else if(t>=82&&t<=85)
        {
            printf("Student %d : B+\n",i);
        }
        else if(t>=78&&t<=81)
        {
            printf("Student %d : B\n",i);
        }
        else if(t>=74&&t<=77)
        {
            printf("Student %d : B-\n",i);
        }
        else if(t>=70&&t<=73)
        {
            printf("Student %d : C+\n",i);
        }
        else if(t>=66&&t<=69)
        {
            printf("Student %d : C\n",i);
        }
        else if (t>=62&&t<=65)
        {
            printf("Student %d : C-\n",i);
        }
        else if(t>=58&&t<=61)
        {
            printf("Student %d : D+\n",i);
        }
        else if(t>=55&&t<=57)
        {
            printf("Student %d : D\n",i);
        }
        else if(t<55)
        {
            printf("Student %d : F\n",i);
        }
    }

return 0;
}
