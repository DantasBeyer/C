#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    char book_name[100];
    char author_name[100];
    float cost;
    int no_of_pages;
};

int main()
{
    struct library lib[100];
    char book_name[100];

    int i, j, count;
    i = 0;
    j = 0;
    count = 0;

    while (j != 6)
    {
        printf("\n\n1.Add Book details\n");
        printf("2.Display the list of the books and its details\n");
        printf("3.Display the total no. of books in the library\n");
        printf("4.Exit\n\n");
        printf("Enter the number: ");
        scanf("%d", &j);

        switch (j)
        {

        case 1:
            printf("\nYou can add the details of the book");
            printf("Enter the book name: ");
            scanf("%s", lib[i].book_name);
            printf("\nEnter the author name: ");
            scanf("%s", lib[i].author_name);
            printf("\nEnter the number of the pages: ");
            scanf("%s", &lib[i].no_of_pages);
            printf("\nEnter the cos of the book: ");
            scanf("%s", &lib[i].cost);

            count = count + 1;
            i = i + 1;

            break;
        case 2:
            if (count == 0)
            {
                printf("\nThere are no books stored!\n\n");
            }
            else
            {
                printf("\nYou can view the list of books");
                printf("\nThe list of books are: ");
                for (i = 0; i < count; i++)
                {
                    printf("\nThe name of the book is: %s", lib[i].book_name);
                    printf("\nThe number of pages are: %d", lib[i].no_of_pages);
                    printf("\nThe cost of the book is: %f\n\n", lib[i].cost);
                }
            }
        default:
            break;
        }
    }
}
