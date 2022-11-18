#include<stdio.h>
int main (){
    float x,y;
    printf("Enter the value of X : ");
    scanf("%f",&x);
    printf("Enter the value of Y : ");
    scanf("%f",&y);
    if(x>0&&y>0)
    {
        printf("Q1");
    }
    else if(x<0&&y>0)
    {
        printf("Q2");
    }
    else if(x<0&&y<0)
    {
        printf("Q3");
    }
    else if(x>0&&y<0)
    {
        printf("Q4");
    }
    else if(x==0&&y!=0)
    {
        printf("Eixo Y");
    }
    else if(y==0&&x!=0)
    {
        printf("Eixo X");
    }
    else if(x==0&&y==0)
    {
        printf("Origem");
    }







return 0;
}
