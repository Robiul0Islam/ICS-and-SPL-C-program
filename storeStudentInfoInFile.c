#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("studentInfo.txt","a");
    char name[100];
    char id[100];
    float cg;
    
    if(fp==NULL)
    printf("404 Not Found");

    printf("Enter the name of the student: ");
    gets(name);
    printf("Enter the ID: ");
    fflush(stdin);
    gets(id);
    printf("Enter CGPA: ");
    scanf("%f",&cg);

    fprintf(fp,"Student Name:%s\n",name);
    fprintf(fp,"Student ID:%s\n",id);
    fprintf(fp,"CGPA:%.2f\n",cg);
   




return 0;
}