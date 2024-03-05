#include<stdio.h>
void main(){
    // Duck number or not 
    int n, flag = 0, rem;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n != 0)
    {
        rem = n % 10;
        n = n / 10;

        if(rem == 0){
        flag = 1;
        break;
        }
    }

    if(flag){
        printf("This is duck number ");
    }else{
        printf("This is Not duck number ");
    }

}