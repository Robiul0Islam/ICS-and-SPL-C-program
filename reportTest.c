#include<stdio.h>
struct dynesty
{
    char dynestyName[100];
    char bestKingName[100];
    float coverageArea;
    int timeOfRuling;
};
int main()
{
    FILE *fp;
    fp=fopen("LabProject.txt","a");
    struct dynesty s;
    fflush(stdin);
    gets(s.dynestyName);
    fputs(s.dynestyName,fp);
    fflush(stdin);
    fprintf(\n);
    gets(s.bestKingName);
    fputs(s.bestKingName,fp);
    scanf("%f",&s.coverageArea);
    fprintf(fp,"\n%f\n",s.coverageArea);
    scanf("%d",&s.timeOfRuling);
    fprintf(fp,"%d\n",s.timeOfRuling);


return 0;
}