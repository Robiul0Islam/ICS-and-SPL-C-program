#include<stdio.h>
struct student
    {
        char name[100];
        int id;
        float cgpa;


    }std;
int main()
{
    struct student std;
    printf("ID : ");
    scanf("%d",&std.id);
    printf("CGPA: ");
    scanf("%f",&std.cgpa);
    printf("Name: ");
    fflush(stdin);
    gets(std.name);

    printf("%s\t%d\t%f",std.name,std.id,std.cgpa);
    
    return 0;
}