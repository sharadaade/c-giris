#include<stdio.h>
#include<conio.h>
main()
{
  int a[10],i,count=0,k,temp;
  clrscr();
    printf("\n Enter 10 elements in array");
    for(i=0;i<10;i++)
      scanf("%d",&a[i]);
  for(i=0;i<10-count;i++)
  {
     if(a[i]==0)
      {
	 temp=a[i];
	 count++;
	 for(k=i;k<10;k++)
	 {
	     a[k]=a[k+1];
	 }
	 i--;
	 a[9]=temp;
       }
   }
      printf("\n Array after shifting Zero's\n");
       for(i=0;i<10;i++)
	 printf("\t %d",a[i]);
getch();
}