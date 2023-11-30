#include<stdio.h>
int main(void)
{
    float m1,m2,m3,m4,m5;
    printf("Enter Oxygen level first student : ");
    scanf("%f",&m1);
    printf("Enter Oxygen level second student : ");
    scanf("%f",&m2);
    printf("Enter Oxygen level third student : ");
    scanf("%f",&m3);
    printf("Enter Oxygen level forth student : ");
    scanf("%f",&m4);
    printf("Enter Oxygen level fifth student : ");
    scanf("%f",&m5);

    printf("Oxygen level greater is : ");
    
    m1 > m2 && m1 > m3 && m1 > m4 && m1 > m5 ? printf("%f",m1) : (
        m2 > m3 && m2 > m4 && m2 > m5 ? printf("%f",m2) : (
            m3 > m4 && m3 > m5 ? printf("%f",m3) :(
                m4 > m5 ? printf("%f",m4) : printf("%f",m5)
            )
        )
    );
}