#include <stdio.h>

struct book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void print_book_details(struct book *book) {
    printf("Book Details:\n");
    printf("ID: %d\n", book->id);
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Price: %.2f\n", book->price);
}

int main() {
    struct book books[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    for (i = 0; i < 10; i++) {
        printf("\nBook %d:\n", i + 1);
        print_book_details(&books[i]);
    }

    return 0;
}