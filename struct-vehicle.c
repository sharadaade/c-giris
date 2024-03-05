#include<stdio.h>
void main()
{
    struct Vehicle{
        int id;
        int regno;
        double speed;
        char model[10];
    };

    struct Vehicle v;
    printf("\nEnter id ");
    scanf("%d",&v.id);

    printf("\nEnter regno ");
    scanf("%d",&v.regno);

    printf("\nEnter speed ");
    scanf("%f",&v.speed);

    printf("\nEnter model ");
    scanf("%s",&v.model);

    printf("\nDisplay : ");
    printf("\nid : %d",v.id);
    printf("\nreg no : %d",v.regno);
    printf("\nspeed : %f",v.speed);
    printf("\nmodel : %s",v.model);

}