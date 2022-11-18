#include<stdio.h>

int main()
{
    FILE *fp;
    
    fp=fopen("robi.txt","r");
    int a;
    if(fp==NULL)

    {
        printf("404 NOT Found");
    }
    else 
    {
        
       fscanf(fp,"%d",&a);
       printf("%d",a);
        
        
    }
    fclose(fp);



return 0;
}