#include <stdio.h>

struct Book {
    int id;
    char title[30];
    char author[30];
};

int main() {
    struct Book b[5];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Title: ");
        scanf("%s", b[i].title);

        printf("Author Name: ");
        scanf("%s", b[i].author);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++) {
        printf("ID:%d  Title:%s  Author:%s\n",
               b[i].id, b[i].title, b[i].author);
    }

    return 0;
}