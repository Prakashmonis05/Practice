#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[10];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter title: ");
        scanf("%s", b[i].title);

        printf("Enter author: ");
        scanf("%s", b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n===== BOOK DETAILS =====\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Title  : %s\n", b[i].title);
        printf("Author : %s\n", b[i].author);
        printf("Price  : %.2f\n", b[i].price);
    }

    return 0;
}