//Minimum Distance between given two elements of array
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  int a[10],i,j,min=10,z,x,y;
  clrscr();
     printf("\n ENter 10 elements in array");
     for(i=0;i<10;i++)
     {
	 scanf("%d",&a[i]);
     }
      printf("\n Enter two numbers");
      scanf("%d%d",&x,&y);
   for(i=0;i<10;i++)
   {
     if(a[i]==x)
      {
	  for(j=0;j<10;j++)
	  {
	     if(a[j]==y)
	     {
		 z=abs(i-j);
		 if(z<min)
		 {
		     min=z;
		 }
	      }
	   }
       }
    }
   printf("\n Distance is %d",min);
 getch();
   }