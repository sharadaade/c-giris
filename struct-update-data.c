#include<stdio.h>
#include<string.h>
struct emp
{
    int id, sal;
    char name[9];
};

void main()
{
    struct emp e[2];
    int i, sid, uname;
    printf("\nEnter employee id, name, sal : ");
    for(i = 0; i < 2; i++)
    {
        scanf("%d %s %d",&e[i].id,e[i].name,&e[i].sal);
    }
    printf("\nDsplay Data : ");
    for(i = 0; i < 2; i++)
    {
        scanf("%d %s %d",&e[i].id,e[i].name,&e[i].sal);
    }

    // logic 
    printf("\nEnter search id : ");
    scanf("%d",&sid);
    printf("\nEnter update name : ");
    gets(uname);

    for(i=0;i<2;i++)
    {
        if(sid == e[i].id)
        {
            
        }
    }

}