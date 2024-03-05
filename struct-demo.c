#include<stdio.h>
void main()
{
    struct demo
    {
        int id;
        char name[9];
        int fnum;
    };
    
    struct demo d;

    printf("\nEnter the id name fav. name");
    scanf("%d %s %d",&d.id,&d.name,&d.fnum);

    printf("\nDisplay :");
    printf("%d %s %d",d.id,d.name,d.fnum);
}