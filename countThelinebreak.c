#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("linebreak.txt","r");
    int count=0;
    int i=0;
    char a[1000];
    while(!feof(fp))
    {
        fscanf(fp,"%c",&a[i]);
        if(a[i]=='\n')
        count++;
        i++;
    }
    fclose(fp);
    printf("There are %d line break.",count+1);


return 0;
}