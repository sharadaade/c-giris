#include<stdio.h>
#include<math.h>
void main()
{
    void reverse(int);
    void palindrome(int);
    void amstrong(int);
    void squareroot(int);
    void power(int, int);


    int n, p;
    int ch;
    printf("\n1.Reveser\n2.Palindrome\n3.Amstrong\n4.Square root\n5.Power");
    printf("\nEnter the choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        
        break;

    case 2:
        
        break;

    case 3:
        
        break;

    case 4:
        printf("Enter the number : ");
        scanf("%d",&n);
        squareroot(n);
        break;

    case 5:
        printf("Enter the number and it's power : ");
        scanf("%d%d",&n,&p);
        power(n, p);
        break;
    
    default:
        printf("Wrong choice !!");
        break;
    }
}

void squareroot(int n)
{
    int Sq = sqrt(n);
    printf("Square root is => %d",Sq);
}

void power(int n, int p)
{
    int pRel = pow(n, p);
    printf("Result => %d",pRel);
}