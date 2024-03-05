#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
   int id,sal;
   char name[10];
};
main()
{
  struct emp e[10];
  int i,count=0,z,nid,nsal,index;
  char nname[10];
  clrscr();
   printf("\n Enter id, name and salary for 5 employees");
   for(i=0;i<5;i++)
   {
     scanf("%d",&e[i].id);
     fflush(0);
     gets(e[i].name);
     fflush(0);
     scanf("%d",&e[i].sal);
     count++;
   }
do
{
   printf("\n Record");
   for(i=0;i<count;i++)
   {
       printf("\n %d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
   }
   if(count<10)
   {
   printf("\n Enter index");
   scanf("%d",&index);
   fflush(0);
   printf("\n Enter new id, name, salary to be inserted");
   scanf("%d",&nid);
   fflush(0);
   gets(nname);
   fflush(0);
   scanf("%d",&nsal);
   for(i=count-1;i>=index;i--)
   {
      e[i+1]=e[i];
   }
   e[index].id=nid;
   e[index].sal=nsal;
   strcpy(e[index].name,nname);
   count++;
   }
   else
   {
      printf("\n Cant insert record...");
   }
    printf("\n Record");
   for(i=0;i<count;i++)
   {
       printf("\n %d\t	%s\t%d",e[i].id,e[i].name,e[i].sal);
   }
 printf("\n Do you want to continue(yea-1/No-0)?");
 scanf("%d",&z);
 }while(z==1);

getch();
}