#include<stdio.h>
void main()
{
    int a[3][3], i, j, value, flag = 0, skey, temp;

    printf("1.Insert\n");
    printf("2.Display\n");
    printf("3.Search\n");
    printf("4.Delete\n");
    printf("5.Insert at specific index\n");
    printf("6.Sort Ascending\n");
    printf("7.Sort Descending\n");
    printf("8.Find Max\n");
    printf("9.Find Min\n");
    printf("10.Display all even\n");
    printf("11.Display all odd\n");
    printf("12.Dispay sum of all element\n");

    printf("\nEnter the choice :");
    scanf("%d",&value);

    switch(value)
    {
        case 1:
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            break;
    
        case 2:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

            printf("Display the matrix :\n");

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf(" %d ",a[i][j]);
                }
                printf("\n");
            }
            break;
        
        case 3:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

            printf("\nEnter the searching element : ");
            scanf("%d",&skey);

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(a[i][j] == skey)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag)
            {
                printf("Element found");
            }
            else
            {
                printf("Element not found");
            }
            break;

        case 4:
            printf("Enter the element in matrix :\n");
            
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
        
            break;


        case 5:
            printf("Enter the element in matrix :\n");
            
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

            break;

        case 6:
            printf("Enter the element in matrix :\n");
            
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

            printf("Dispaly after ascending ");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    if(a[i][j] > (a[i][j] + 1))
                    {
                        temp = a[i][j];
                        a[i][j] = j;
                        break;
                    }
                }
            }
            break;

        case 7:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

        case 8:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

            int max = a[0][0];
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if(a[i][j])
                    {

                    }
                }
                
            }
            

        case 9:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

        case 10:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

        case 11:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

        case 12:
            printf("Enter the element in matrix :\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }

        default:
            printf("Choice not match");
    }
    
}