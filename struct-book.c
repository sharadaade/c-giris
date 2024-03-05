#include <stdio.h>
#include <string.h>

struct book
{
    int bid;
    char bname[10], bauthor[10], bpub[10], bcat[10];
    int price;
};
struct book b[2];

void displayDetail();
void searchBook();
void updateBook();
void deleteBook();
void sortAllRecord();

int flag = 0, i;

void main()
{
    int i, ch;
    printf("\nEnter the record of five book bid, bname, bauthor, bpub, bcat, bprice respectively: \n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d %s  %s %s %s %d", &b[i].bid, &b[i].bname, &b[i].bauthor, &b[i].bpub, &b[i].bcat, &b[i].price);
    }

    do
    {
        printf("\n1.Display detail\n2.Seach books by\n3.Update book detail by id\n4.delete specific book by\n5.Sort all record\n");
        printf("Enter the choice : ");
        _flushall();
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            displayDetail();
            break;

        case 2:
            searchBook();
            break;

        case 3:
            updateBook();
            break;

        case 4:

            break;

        case 5:

            break;

        default:
            printf("Invalid choice !");
            break;
        }
    } while (ch != 0);
}

void displayDetail()
{
    printf("bid   bname   bauthor   bpub   bcat   bprice ");
    for (i = 0; i < 2; i++)
    {
        printf("\n%d\t%s\t%s\t%s\t%s\t%d", b[i].bid, b[i].bname, b[i].bauthor, b[i].bpub, b[i].bcat, b[i].price);
    }
}
void searchBook()
{
    char c;
    int searchid, searchPrice;
    char searchName[10], searchAuthor[10], searchCategory[10];
    do
    {
        printf("\na.id\nb.name\nc.author\nd.category\ne.price\n");
        printf("Enter the choice : ");
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
        {
            printf("Enter Name : ");
            _flushall();
            gets(searchName);

            for (i = 0; i < 2; i++)
            {
                if (strcmp(searchName, b[i].bname) == 0)
                {
                    // flag = 1;
                    printf("\n%d\t%s\t%s\t%s\t%s\t%d", b[i].bid, b[i].bname, b[i].bauthor, b[i].bpub, b[i].bcat, b[i].price);
                }
            }
            break;
        }
        case 'c':
        {
            printf("Enter Author : ");
            _flushall();
            gets(searchAuthor);

            for (i = 0; i < 2; i++)
            {
                if (strcmp(searchAuthor, b[i].bauthor) == 0)
                {
                    // flag = 1;
                    printf("\n%d\t%s\t%s\t%s\t%s\t%d", b[i].bid, b[i].bname, b[i].bauthor, b[i].bpub, b[i].bcat, b[i].price);
                }
            }
            break;
        }

        case 'd':
        {
            printf("Enter Category : ");
            _flushall();
            gets(searchCategory);

            for (i = 0; i < 2; i++)
            {
                if (strcmp(searchCategory, b[i].bcat) == 0)
                {
                    // flag = 1;
                    printf("\n%d\t%s\t%s\t%s\t%s\t%d", b[i].bid, b[i].bname, b[i].bauthor, b[i].bpub, b[i].bcat, b[i].price);
                }
            }
            break;
        }

        case 'e':
        {
            printf("Enter Price : ");
            _flushall();
            scanf("%d",&searchPrice);

            for (i = 0; i < 2; i++)
            {
                if (searchPrice == b[i].price)
                {
                    // flag = 1;
                    printf("\n%d\t%s\t%s\t%s\t%s\t%d", b[i].bid, b[i].bname, b[i].bauthor, b[i].bpub, b[i].bcat, b[i].price);
                }
            }
            break;
        }

        default:
            printf("Invalid choice!");
            break;
        }
    } while (c != 0);
}
void updateBook()
{

}

void deleteBook()
{

}

void sortAllRecord()
{

}