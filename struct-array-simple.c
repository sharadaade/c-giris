#include<stdio.h>
void main()
{
    struct student{
        int id, age, per;
        char name[10];
    };

    struct student s[2];

    int i;

    printf("Enter the id, age, percentage, name : \n");
    for(i = 0; i < 2 ; i++)
    {
        scanf("%d%d%d%s",&s[i].id,&s[i].age,&s[i].per,&s[i].name);
    }

    printf("Display : ");
    for (i = 0; i < 2; i++)
    {
        printf("\n%d %d %d %s",s[i].id,s[i].age,s[i].per,s[i].name);
    }
    
}