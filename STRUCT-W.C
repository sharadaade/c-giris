#include <stdio.h>
#include <conio.h>
struct emp
{
   int id;
   char name[10];
   int sal;
};
struct emp e[5];
int count = 0;

void dispEmp();
void addEmp();
void delEmp();
main()
{
   int z, choice;
   do
   {
      printf("\n1. Add Employee\n");
      printf("2.Delete Employee\n3. Display all employee");
      fflush(0);
      printf("\n ENtre choice");
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
         addEmp();
         break;
      case 2:
         delEmp();
         break;
      case 3:
         dispEmp();
         break;
      default:
         printf("\n Invalid Choice");
      }
      printf("\n Do you want to continue(Yes-1/No-0)?");
      scanf("%d", &z);
   } while (z == 1);
   getch();
}
void addEmp()
{
   if (count == 5)
      printf("\n Full,,,,cant add");
   else
   {
      printf("\nenter id, name and salary");
      scanf("%d", &e[count].id);
      fflush(0);
      gets(e[count].name);
      fflush(0);
      scanf("%d", &e[count].sal);
      count++;
   }
}
void delEmp()
{
   int sid, flag = 0, i, k;
   if (count == 0)
      printf("\n No record to delete");
   else
   {
      printf("\n Enter id to be deleted");
      scanf("%d", &sid);
      for (i = 0; i < count; i++)
      {
         if (sid == e[i].id)
         {
            count--;
            flag = 1;
            for(k = i; k < count; k++)
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
void dispEmp()
{
   int i;
   if (count == 0)
      printf("\n No record available");
   else
   {
      printf("\n Record is\n");
      for (i = 0; i < count; i++)
         printf("\n%d\t%s\t%d", e[i].id, e[i].name, e[i].sal);
   }
}
