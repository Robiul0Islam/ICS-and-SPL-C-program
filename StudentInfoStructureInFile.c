#include<stdio.h>
struct student
{
    char name[100];
    char id[100];
    float cg;
};
int main()
{
   struct student s[100];
   int n;
   printf("Enter the number of student : ");
   scanf("%d",&n);
   FILE *fp;
   fp=fopen("studentStructure.txt","w");
   for(int i=0;i<n;i++)
   {
     printf("Enter the name of student: ");
     fflush(stdin);
     gets(s[i].name);
     fprintf(fp,"Student Name: %s\n",s[i].name);
     printf("Enter the ID: ");
     fflush(stdin);
     gets(s[i].id);
     fprintf(fp,"Student ID: %s\n",s[i].id);
     printf("Enter the CGPA: ");
     scanf("%f",&s[i].cg);
     fprintf(fp,"Student CGPA: %.2f\n",s[i].cg);
     fprintf(fp,"\n");


   } 
   fclose(fp);

return 0;
}