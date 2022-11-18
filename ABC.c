#include<stdio.h>
int main()
{
    FILE *fp;
    char a[100];
    fp=fopen("studentStructure.txt","r");
    int i=0;
    while(!feof(fp))
    {
        fscanf(fp,"%c",&a[i]);
        printf("%c",a[i]);
        i++;
    }
    fclose(fp);
return 0;
}

