#include<stdio.h>
#include<string.h>
struct dynesty
{
    char dynestyName[100];
    char bestKingName[100];
    float coverageArea;
    int timeOfRuling;
};
int main()
{
    printf("=================Menu============\n");
    printf("1.View all records.\n2.Insert a new record.\n3.Search.\n4.Update.\n5.Delete.\n6.Sort all data.\n0.Exit.\n");
    printf("=================================\nSelect from the menu: ");
    FILE *fp;
    struct dynesty s[1000];
    int a;
    
    
    for(int i=0;;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
             break;
        }
        switch(a)
        {
        case 1:
            {
                int j=0;
                fp=fopen("LabProject.txt","r");
                while(!feof(fp))
                {
                    fscanf(fp,"%s",s[j].dynestyName);
                    fscanf(fp,"%s",s[j].bestKingName);
                    /*fgets(s[j].dynestyName,sizeof(s[j].dynestyName),fp);
                    fgets(s[j].bestKingName,sizeof(s[j].bestKingName),fp);*/
                    fscanf(fp,"%f",&s[j].coverageArea);
                    fscanf(fp,"%d",&s[j].timeOfRuling);
                    
                    j++;
                   
                }
                
                for(int k=0;k<j;k++)
                {
                    printf("\n\nDynesty Name: %s\n",s[k].dynestyName);
                    printf("Best king name: %s\n",s[k].bestKingName);
                    printf("Coverage Area(square km): %.2f\n",s[k].coverageArea);
                    printf("Time of Ruling(year): %d\n",s[k].timeOfRuling);
                }
                fclose(fp);
                printf("\nSelect from the menu:");
                break;

            }
            case 2:
            {
                fp=fopen("LabProject.txt","a");
                printf("Enter the Dynesty name: ");
                fflush(stdin);
                scanf("%s",s[0].dynestyName);
                fprintf(fp,"\n%s",s[0].dynestyName);
                printf("Enter the Best king name: ");
                fflush(stdin);
                scanf("%s",s[0].bestKingName);
                fprintf(fp,"\n%s",s[0].bestKingName);
                printf("Enter the Coverage area: ");
                scanf("%f",&s[0].coverageArea);
                fprintf(fp,"\n%f",s[0].coverageArea);
                printf("Enter the time of ruling: ");
                scanf("%d",&s[0].timeOfRuling);
                fprintf(fp,"\n%d",s[0].timeOfRuling);
                fclose(fp);
                printf("\nSelect from the menu:");
                break; 
                
            }
            case 3:
            
            {
                fp=fopen("LabProject.txt","r");
                int i=0;
                char searchFor[100];
                printf("Enter the dynesty name to search: ");
                scanf("%s",searchFor);
                int result=1;
                while(!feof(fp))
                {
                    fscanf(fp,"%s",s[i].dynestyName);
                    fscanf(fp,"%s",s[i].bestKingName);
                    fscanf(fp,"%f",&s[i].coverageArea);
                    fscanf(fp,"%d",&s[i].timeOfRuling);
                    
                    
                    result=strcmp(s[i].dynestyName,searchFor);
                    if(result==0)
                    {
                        printf("\n\nSearch Information.\n\nDynesty name: %s",s[i].dynestyName);
                        printf("\nBest king name: %s",s[i].bestKingName);
                        printf("\nCoverage Area(square km): %.2f",s[i].coverageArea);
                        printf("\nTime of Ruling(year): %d\n",s[i].timeOfRuling);
                        break;
        
                        
                    }
                    
                    i++;
                }
                if(result!=0)
                {
                    printf("\n\n*** There is no Matching.***\n");
                }
                fclose(fp);
                printf("\nSelect from the menu: ");
                break;
            }
            case 4:
            {
                fp=fopen("LabProject.txt","r");
                int i=0;
                printf("Enter the dynesty name for which you want to update: ");
                char updateFor[100];
                int result=1;
                scanf("%s",updateFor);
                while (!feof(fp))
                {
                    fscanf(fp,"%s",s[i].dynestyName);
                    fscanf(fp,"%s",s[i].bestKingName);
                    fscanf(fp,"%f",&s[i].coverageArea);
                    fscanf(fp,"%d",&s[i].timeOfRuling);

                    result=strcmp(s[i].dynestyName,updateFor);
                    if(result==0)
                    {
                        printf("Enter the Updated Dynesy Name: ");
                        scanf("%s",s[i].dynestyName);
                        printf("Enter the Updated Best king Name: ");
                        scanf("%s",s[i].bestKingName);
                        printf("Enter the Updated Coverage area: ");
                        scanf("%f",&s[i].coverageArea);
                        printf("Enter the Updated time of ruling: ");
                        scanf("%d",&s[i].timeOfRuling);
                    
                    }

                    i++;
                }
                
                fclose(fp);
                fp=fopen("LabProject.txt","w");
                for(int k=0;k<i;k++)
                {
                    if(k==i-1)
                    {
                        fprintf(fp,"%s\n",s[k].dynestyName);
                        fprintf(fp,"%s\n",s[k].bestKingName); 
                        fprintf(fp,"%f\n",s[k].coverageArea);
                        fprintf(fp,"%d",s[k].timeOfRuling);
                    }
                    else
                    {
                        fprintf(fp,"%s\n",s[k].dynestyName);
                        fprintf(fp,"%s\n",s[k].bestKingName); 
                        fprintf(fp,"%f\n",s[k].coverageArea);
                        fprintf(fp,"%d\n",s[k].timeOfRuling);
                    }

                }
                fclose(fp);
                printf("\nSelect from the menu:");
                break;

                


            }
            case 5:
            {
                fp=fopen("LabProject.txt","r");
                int i=0;
                while(!feof(fp))
                {
                    fscanf(fp,"%s",s[i].dynestyName);
                    fscanf(fp,"%s",s[i].bestKingName);
                    fscanf(fp,"%f",&s[i].coverageArea);
                    fscanf(fp,"%d",&s[i].timeOfRuling);
                    i++;
                }
                fclose(fp);
                fp=fopen("LabProject.txt","w");
                printf("Enter the dynesty name that you want to delete: ");
                char deleteFor[100];
                int result;
                scanf("%s",deleteFor);
                for(int k=0;k<i;k++)
                {
                    
                    result=strcmp(s[k].dynestyName,deleteFor);
                    if(result==0)
                    {
                        
                        for(int j=k;j<i-1;j++)
                        {
                            strcpy(s[j].dynestyName,s[j+1].dynestyName);
                            strcpy(s[j].bestKingName,s[j+1].bestKingName);
                            s[j].coverageArea=s[j+1].coverageArea;
                            s[j].timeOfRuling=s[j+1].timeOfRuling;
                            
                        }
                        for(int l=0;l<i-1;l++)
                        {
                         if(l==i-2)
                            {
                              fprintf(fp,"%s\n",s[l].dynestyName);
                              fprintf(fp,"%s\n",s[l].bestKingName); 
                              fprintf(fp,"%f\n",s[l].coverageArea);
                              fprintf(fp,"%d",s[l].timeOfRuling);
                             }
                         else
                             {
                              fprintf(fp,"%s\n",s[l].dynestyName);
                              fprintf(fp,"%s\n",s[l].bestKingName); 
                              fprintf(fp,"%f\n",s[l].coverageArea);
                              fprintf(fp,"%d\n",s[l].timeOfRuling);
                             }

                        }
                        printf("\n***Successfully Deleted***\n");

                    }
                
                }
                
            
                fclose(fp);
                printf("\nSelect from the menu:");
                break;

            }




            case 6:
            {
                fp=fopen("LabProject.txt","r");
                int i=0;
                while(!feof(fp))
                {
                    fscanf(fp,"%s",s[i].dynestyName);
                    fscanf(fp,"%s",s[i].bestKingName);
                    fscanf(fp,"%f",&s[i].coverageArea);
                    fscanf(fp,"%d",&s[i].timeOfRuling);
                    
                    i++;
                }
                int temp;
                float tempArea;
                char tempDN[100];
                char tempBKN[100];
                for(int j=0;j<i;j++)
                {
                    for(int m=0;m<i-1;m++)
                    {
                        if(s[j].timeOfRuling>s[m].timeOfRuling)
                        {
                            temp=s[j].timeOfRuling;
                            s[j].timeOfRuling=s[m].timeOfRuling;
                            s[m].timeOfRuling=temp;

                            strcpy(tempDN,s[j].dynestyName);
                            strcpy(s[j].dynestyName,s[m].dynestyName);
                            strcpy(s[m].dynestyName,tempDN);

                            strcpy(tempBKN,s[j].bestKingName);
                            strcpy(s[j].bestKingName,s[m].bestKingName);
                            strcpy(s[m].bestKingName,tempBKN);

                            tempArea=s[j].coverageArea;
                            s[j].coverageArea=s[m].coverageArea;
                            s[m].coverageArea=tempArea;
                        }
                    }
                }
                fclose(fp);
                fp=fopen("LabProject.txt","w");
                for(int k=0;k<i;k++)
                {
                    if(k==i-1)
                    {
                        fprintf(fp,"%s\n",s[k].dynestyName);
                        fprintf(fp,"%s\n",s[k].bestKingName); 
                        fprintf(fp,"%f\n",s[k].coverageArea);
                        fprintf(fp,"%d",s[k].timeOfRuling);
                    }
                    else
                    {
                        fprintf(fp,"%s\n",s[k].dynestyName);
                        fprintf(fp,"%s\n",s[k].bestKingName); 
                        fprintf(fp,"%f\n",s[k].coverageArea);
                        fprintf(fp,"%d\n",s[k].timeOfRuling);
                    }
                   
                }
                fclose(fp);
                printf("\n***Sorting is Successfully done***\n");
                printf("\nSelect from the menu: ");
                break;

            }
            default:
            {
                printf("Invalid Selection.Select from the menu: ");
                break;
            }
            
        }
        
    } 
    
return 0;
}