#include<stdio.h>
 
 struct match
 {
    int run,wct,point;
 };
 struct player
 {
    char name[100],country[100];
    struct match m[100];
    
 };
 
 int main()
 {
    int n;
    struct player p[100];
    
    printf("Enter the number of match: ");
    scanf("%d",&n);
    for(int i=0;i<2;i++)
    {
        printf("Enter the name of the player: ");
        fflush(stdin);
        gets(p[i].name);
        printf("Enter the name of the country: ");
        fflush(stdin);
        gets(p[i].country);
        for(int j=0;j<n;j++)
        {
            printf("Enter the run in match %d: \n",j+1);
            scanf("%d",&p[i].m[j].run);

        }
        for(int j=0;j<n;j++)
        {
            printf("Enter the number of wicket in match %d: \n",j+1);
            scanf("%d",&p[i].m[j].wct);
        }
    }
    for(int i=0;i<2;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            int sum=0;
            sum=p[i].m[j].wct*12;
            if(p[i].m[j].run<=25)
             sum=sum+5;
          else if(p[i].m[j].run<=50)
            sum=sum+10;
         else if(p[i].m[j].run<=75)
             sum=sum+15;
         else if(p[i].m[j].run>75)
             sum=sum+20;

             p[i].m[j].point=sum;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        printf("\n\n******* Match %d ********\n",i+1);
        for(int j=0;j<2;j++)
        {
            printf("%s = points: %d\n",p[j].name,p[j].m[i].point);
        }

    }

return 0;
 }