#include<stdio.h>
#include<conio.h>
main()
{
  int a[10],i,j,k,size=10;
  clrscr();
     printf("\n Enter 10 elements in array");
    for(i=0;i<10;i++)
	scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
	for(j=i+1;j<size;j++)
	{
	   if(a[i]==a[j])
	   {
		for(k=j;k<size;k++)
		{
		   a[k]=a[k+1];
		   size--;
		   j--;
		}
	   }
	}
    }
    printf("\n Array after removal of duplicate elements\n");
    for(i=0;i<size;i++)
       printf("\t %d",a[i]);
  getch();
}