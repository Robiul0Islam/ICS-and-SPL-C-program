#include<stdio.h>

struct student
{
    char name[1000],id[100];
    float cg;

};
int bestStudent(struct student s[],int n);
int main()
{
    struct student s[100];
    int n;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Entert the student name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the student id: ");
        fflush(stdin);
        gets(s[i].id);
        printf("Enter the CGPA: ");
        scanf("%f",&s[i].cg);
    }
    int maxIndex=bestStudent(s,n);
    
    printf("The name of the highest CGPA holder is\n%s\n%s\n%0.2f\n",s[maxIndex].name,s[maxIndex].id,s[maxIndex].cg);
return 0;
}
int bestStudent(struct student s[],int n)
{
    int max=s[0].cg;
    int maxIndex;
    for(int i=0;i<n;i++)
    {
        if(max<s[i].cg)
        {
            max=s[i].cg;
            maxIndex=i;
        }
    }
    return maxIndex;
}