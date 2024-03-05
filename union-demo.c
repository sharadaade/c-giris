#include<stdio.h>
union student
{
    int exp;
    float per;
};
union student s1;
void main()
{
    s1.per = 30.06;
    s1.exp = 5;
    printf("%f",s1.per); // Note => formate specifier %f
    printf("%d",s1.exp);
}