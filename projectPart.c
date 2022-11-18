#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    float cg;
};
int main()
{
    int n;
    struct student s[100];
    printf("Enter the number for student: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the name: ");
        fflush(stdin);
        scanf("%s",s[i].name);
        printf("Enter the cgpa: ");
        fflush(stdin);
        scanf("%f",&s[i].cg);
    }
    float temp;
    char tem[100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[i].cg>s[j].cg)
            {
                temp=s[i].cg;
                s[i].cg=s[j].cg;
                s[j].cg=temp;

                strcpy(tem,s[i].name);
                strcpy(s[i].name,s[j].name);
                strcpy(s[j].name,tem);

                
            }
        }
    }
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        printf("Student name is: %s\n",s[i].name);
        printf("CGPA: %.2f\n",s[i].cg);

    }




return 0;
}