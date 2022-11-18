#include <stdio.h>
int main(){
    char ch;
    printf("Enter the letter : ");
    scanf("%c",&ch);
    if(ch>'A'&&ch<'Z')
    {
        printf("The letter is upper case.");
    }
    else printf("The letter is lower case.");



return 0;
}
