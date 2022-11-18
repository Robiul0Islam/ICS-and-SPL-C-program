#include <stdio.h>
int main (){
    int a,b,c,d;
    printf("Player 1,Enter a number: ");
    scanf("%d",&a);
    printf("Player 2,Enter a number that you guess: ");
    scanf("%d",&b);
    if(b==a)
    {
         printf("Right,Player 2 wins.");
    }

    else
    {
        printf("Wrong, 2 chance(s) left.");
    printf("\nPlayer 2,Enter a number that you guess: ");
    scanf("%d",&c);
    if(c==a)
    {
        printf("Right,Player 2 wins.");
    }
    else
    {
        printf("Wrong, 1 chance(s) left.");
    printf("\nPlayer 2,Enter a number that you guess: ");
    scanf("%d",&d);
    if(d==a)
    {
        printf("Right,Player 2 wins.");
    }
    else printf("Player 1 wins.");
    }

    }





return 0;
}
