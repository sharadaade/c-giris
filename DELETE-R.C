#include<stdio.h>
#include<conio.h>
struct emp
{
   int id,sal;
   char name[10];
};
main()
{
  struct emp e[5];
  int x,i,flag=0,sid,k,z;
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
   for(i=0;i<5-flag;i++)
   {
       printf("\n %d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
   }
   printf("\n Enter id to be deleted");
   scanf("%d",&sid);
   x=0;
   for(i=0;i<5;i++)
   {
      if(sid==e[i].id)
      {
	  flag++;
	  x=1;
	   for(k=i;k<4;k++)
	   {
	      e[k]=e[k+1];
	   }

       }
   }
    if(x==0)
	printf("\n Record not found");
    else
	printf("\n Deleted successfully");
    printf("\n Record");
   for(i=0;i<5-flag;i++)
   {
       printf("\n %d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
   }
 printf("\n Do you want to continue(yea-1/No-0)?");
 scanf("%d",&z);
 }while(z==1);

getch();
}