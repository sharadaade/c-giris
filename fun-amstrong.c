// This program Not run on MinnGW compile 
// It runs on Online compiler
#include<stdio.h>
#include<math.h>
void main()
{
    int amstrong(int); // declaration
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int result=amstrong(n); //function calling
    if(result==1)
    {
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong number");
    }

}

int rem, count = 0, orgnum,x,sum,i;
int amstrong(int n) //Defination
{ 
    orgnum=n;
    x=n;
    while (x!= 0)
    {
    
        x=x/10;
        count++;
    
    }

    i,sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    printf("%d",sum);
    if(sum==orgnum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}