#include<stdio.h>
main()
{
   int n,rem,flag=0,sum=0;

      printf("\n Enter a number : ");
      scanf("%d",&n);

   while(sum!=1 && sum!=4)
   {
      sum=0;
         while(n>0)
         {
	         rem=n%10;
	         sum=sum+rem*rem;
	         n=n/10;
	      }
	      if(sum==1)
	      {
	         flag=1;
	      }
	      n=sum;
   }
   if(flag==1)
      printf("\n Number is Happy number");
   else
      printf("\n Not a happy number");
}