#include<stdio.h>
void main()
{
    struct Employee
    {
        int id;
        long int sal;
        long int contact;
    };
    
    struct Employee e1;

    printf("\nenter id => ");
    scanf("%d",&e1.id);

    printf("\nenter salary => ");
    scanf("%ld",&e1.sal);

    printf("\nenter contact => ");
    scanf("%ld",&e1.contact);

    printf("The Employee id = %d, salary = %ld, contact = %ld ",e1.id,e1.sal,e1.contact);

}