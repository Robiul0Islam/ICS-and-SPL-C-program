#include<stdio.h>
int main()
{
    char ch;
    int max=0,sum=0,count=0;
    float ave;
    int b;
    int a[1000];
    puts("========BD Rainfall Record System========");
    printf("Enter your choice: ");
    int k=0;
    for(int i=0; ;i++)
    {

        scanf(" %c",&ch);
        if(ch=='q')
            break;


        switch(ch)
        {
        case 'a':
            {
                printf("Enter one rainfall amount in mm of a city: ");
                scanf("%d",&a[k]);
                k++;
                printf("Enter your choice again: ");
                break;

            }


        case 'b':
            {
                sum=0;
                ave=0;

                for(int j=0;j<k;j++)
                {
                    sum=sum+a[j];
                }
                ave=(float)sum/k;
                printf("The average is %f\n",ave);

                printf("Enter your choice again: ");
                break;

            }

        case 'c':
            {
                sum=0;
                ave=0;

                for(int j=0;j<k;j++)
                {
                    sum=sum+a[j];
                }
               int ave=(float)sum/k;


                for(int j=0;j<k;j++)
                {
                    if(ave<a[j])
                        {
                            printf("%d  ", a[j]);
                            count++;
                        }
                }
                printf("\n");
                printf("Total count %d\n",count);
                printf("Enter your choice again: ");
                break;

            }

            default:
                {

                    printf("Invalid input.\nEnter a,b,c or q: ");
                }

        }
    }


return 0;
}
