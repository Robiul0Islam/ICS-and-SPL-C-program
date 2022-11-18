#include<stdio.h>
struct student
{
    char name[1000],id[1000];
    float cgpa;

};

int main()
{
    struct student s[1000];
    printf("Enter the number of students: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Student number [%d]\n",i+1);
        printf("Enter the student name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the id: ");
        fflush(stdin);
        gets(s[i].id);
        printf("Enter the cgpa: ");
        scanf("%f",&s[i].cgpa);
    }
    printf("\n\nINFORMATION\n");
    for(int i=0;i<n;i++)
    {
        printf("Student number [%d]\n",i+1);
        printf("student name: ");
        puts(s[i].name);
        printf("id: ");
        puts(s[i].id);
        printf("cgpa: ");
        printf("%0.2f",s[i].cgpa);
        printf("\n");

    }
    
return 0;
}