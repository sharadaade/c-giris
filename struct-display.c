#include<stdio.h>
struct book{
    int id;
    char name[20];
    int price;
};
void main()
{
    struct book b1, b2;
    int ch;


    printf("Enter first book id, name, price : ");
    scanf("%d %s %d",&b1.id,b1.name,&b1.price);
    printf("Enter second book id, name, price : ");
    scanf("%d %s %d",&b2.id,b2.name,&b2.price);

do{ 
    printf("\n1.Display data\n2.Maximum price\n3.Lowest price");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("\nAll book :");
            printf("\n1.ID-%d Name-%s Price-%d",b1.id,b1.name,b1.price);
            printf("\n2.ID-%d Name-%s Price-%d",b2.id,b2.name,b2.price);
            break;
        case 2:
            if(b1.price > b2.price)
            {
                printf("%d is max price",b1.price);
            }else if (b2.price > b1.price)
            {
                printf("%d is max price",b2.price);
            }else{
                printf("Both are equal price");
            }
            break;
        case 3:
            if(b1.price > b2.price)
            {
                printf("%d is min price",b2.price);
            }else if (b2.price > b1.price)
            {
                printf("%d is min price",b1.price);
            }else{
                printf("Both are equal price");
            }
            break;
        default:
            printf("Invalid choice");
    }
}while(ch != 0);
}