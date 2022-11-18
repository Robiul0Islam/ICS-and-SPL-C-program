#include<stdio.h>
int main (){
    int i;
    //print 1 to 10 except for 7
    for(i=1;i<=10;i++)
    {
        if(i==7)
        {
            continue;
        }
        printf("%d\n",i);
    }




return 0;
}
