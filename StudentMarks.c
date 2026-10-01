#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    float mrk;
};
int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
        {
            printf("\nenter roll");
            scanf("%d,&s[i].roll");

            printf("\nenter name");
            scanf("%d",&s[i].name);

            printf("\nenter mrk");
            scanf("%d,&s[i].mrk");

        }
    printf("\n****STUDENT DETAIL****");
    for(i=0;i<5;i++)
        {
    printf("\nroll:%d",s[i].roll);
    printf("\nname:%d",s[i].name);
    printf("\nmrk:%d",s[i].mrk);
    
        }
return 0;
}
