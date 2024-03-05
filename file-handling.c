#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("demo.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n",ch);
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n",ch);
    fclose(fptr);
}