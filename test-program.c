#include <stdio.h>
struct book
{
    int bid;
    char bname[10], bauthor[10], bpub[10], bcat[10];
    int price;
};
struct book b[2];
void searchBook()
{
    int searchid, flag, i,z=1;
    char c;
    printf("\na.id\nb.name\nc.author\nd.category\ne.price\n");
    do
    {
        printf("\nEnter the choice : \n");
        _flushall();
        scanf("%c", &c);
        switch (c)
        {
        case 'a':
            {
            printf("Enter id : ");
            scanf("%d", &searchid);

            for (i = 0; i < 2; i++)
            {
                if (searchid == b[i].bid)
                {
                    flag = 1;
                    printf("\n%d\t%s\t%s\t%s\t%s\t%d", b[i].bid, b[i].bname, b[i].bauthor, b[i].bpub, b[i].bcat, b[i].price);
                }
            }

            break;
            }
        case 'b':
            break;

        case 'c':
            break;

        case 'd':
            break;

        case 'e':
            break;

        default:
            printf("\nInvalid choice!\n");break;
        }
    } while (z==1);
}
void main()
{
    searchBook();
}