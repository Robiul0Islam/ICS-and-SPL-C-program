#include<stdio.h>
struct triangle
{
    int base,id,height;
    float area;
};

int maxAreaTriangle(struct triangle s[],int n);
int main()
{
    int n;
    struct triangle s[1000];
    printf("Enter the number of Triangle: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the triangle ID and base and height: ");
        scanf("%d",&s[i].id);
        scanf("%d",&s[i].base);
        scanf("%d",&s[i].height);

    }
    int maxIndex=maxAreaTriangle(s,n);
    printf("The max Triangle number is %d\nArea is %.2f",maxIndex,s[maxIndex].area);


return 0;
}
int maxAreaTriangle(struct triangle s[],int n)
{
    float max=0,area;
    int maxIndex;

    for(int i=0;i<n;i++)
    {
    
         area=(float)(s[i].base*s[i].height)/2;
         if(max<area)
         {
            max=area;
            maxIndex=s[i].id;

         }
         

    }
    s[maxIndex].area=max;
    return maxIndex;


}
