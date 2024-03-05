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
  struct emp e[5];
  int i,flag=0,z,sid;
  char uname[10];
  clrscr();
   printf("\n Enter id, name and salary for 5 employees");
   for(i=0;i<5;i++)
   {
     scanf("%d",&e[i].id);
     fflush(0);
     gets(e[i].name);
     fflush(0);
     scanf("%d",&e[i].sal);
   }
do
{
   printf("\n Record");
   for(i=0;i<5;i++)
   {
       printf("\n %d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
   }
   printf("\n Enter id");
   scanf("%d",&sid);
   fflush(0);
   printf("\n Enter name to be udpated");
   gets(uname);
   flag=0;
   for(i=0;i<5;i++)
   {
      if(sid==e[i].id)
      {
	  flag=1;
	  strcpy(e[i].name,uname);

       }
   }
    if(flag==0)
	printf("\n Record not found");
    else
	printf("\n updated successfully");
    printf("\n Record");
   for(i=0;i<5;i++)
   {
       printf("\n %d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
   }
 printf("\n Do you want to continue(yea-1/No-0)?");
 scanf("%d",&z);
 }while(z==1);

getch();
}