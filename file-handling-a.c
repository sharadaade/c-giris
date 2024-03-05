#include<stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("01_ok.pdf","w");
    char ch;
    printf("Enter the data : ");
    do{
        scanf("%d",&ch);
        if(ch=='$')
            break;
        fputc(ch, fptr);
    }while (1);
    fclose(fptr);
    printf("File saved");
    
}