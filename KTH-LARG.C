//write a c program to find the kth largest element from an array
#include<stdio.h>
#include<conio.h>
main()
{
   int count=1,a[5],i,j,temp,pos,flag=0;
   clrscr();
      printf("\n Enter 5 elements in an array");
      for(i=0;i<5;i++)
	scanf("%d",&a[i]);
   printf("\n Enter rank of number from array");
   scanf("%d",&pos);
   for(i=0;i<5;i++)
   {
      for(j=i+1;j<5;j++)
      {
	 if(a[i]<a[j])
	 {
	    temp=a[j];
	    a[j]=a[i];
	    a[i]=temp;
	 }
      }
   }

   for(i=0;i<4;i++)
   {
     if(a[i]!=a[i+1])
	  count++;
     if(count==pos)
      {
	printf("\n %d Largest Element is %d",pos,a[i+1]);
	flag=1;
	break;
      }
   }
   if(flag==0)
     printf("\n There is no %d largest element",pos);
getch();
}