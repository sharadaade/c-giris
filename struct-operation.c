#include <stdio.h>
struct emp
{
    int id, sal;
    char name[10];
} e[3];

int count = 0;

void addEmp();
void delEmp();
void disEmp();

void main()
{
    int ch, z;
    do
    {
        printf("\n1.add emp\n2.delete emp\n3.show all emp");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            addEmp();
            break;

        case 2:
            delEmp();
            break;

        case 3:
            disEmp();
            break;

        default:
            printf("Invalid choice !!");
            break;
        }
        printf("\nDo you want to continue 1.Y/ 0.N ");
        scanf("%d", &z);
    } while(z == 1);
}
void disEmp()
{
    int i;
    if (count == 0)
        printf("\nNo Record ");
    else
    {
        printf("\nRecord is : ");
        for (i = 0; i < count; i++)
        {
            printf("\n%d \t%s \t %d", e[i].id, e[i].name, e[i].sal);
        }
    }
}

void addEmp()
{
    int i;
    if (count == 5)
        printf("\nfull");
    else
    {
        printf("\nEnter id : ");
        scanf("%d",&e[count].id);
        _flushall();
        printf("\nEnter name : ");
        gets(e[count].name);
        printf("\nEnter sal : ");
        scanf("%d",&e[count].sal);
        _flushall();
        //scanf("%d %s %d", &e[count].id, e[count].name, e[count].sal);
        count++;
    }
}

void delEmp()
{
    int searchid, i, k, flag = 0;
    if (count == 0)
        printf("\nEmpty");
    else
    {
        printf("\nEnter id to be deleted : ");
        scanf("%d", &searchid);

        for (i = 0; i < count; i++)
        {
            if (searchid == e[i].id)
            {
                count--;
                flag = 1;
                for (k = i; k < count; k++)
                {
                    e[k] = e[k + 1];
                }
                i--;
            }
        }
    }
    if(flag == 0)
        printf("\n Record not  found");
    else
        printf("\n Record dleted successfully");
}