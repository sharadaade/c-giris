#include<stdio.h>
struct emp{
    int id, sal;
    char name[20];
};
void main()
{
    struct emp e[2];

    int i;
    printf("Enter the employee id, name, sal : ");
    for(i = 0; i < 2; i++)
    {
        scanf("%d %s %d",&e[i].id,e[i].name,&e[i].sal);
    }
    printf("Display data : ");
    for(i = 0; i < 2; i++)
    {
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
    }
    // logic delete record data

    
}