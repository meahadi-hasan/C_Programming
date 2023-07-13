#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {
    struct Books book1;
    struct Books book2;

    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Herbert Schildt");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 0256546210;

    strcpy(book2.title, "Discrete Math");
    strcpy(book2.author, "Kenneth H. Rosen");
    strcpy(book2.subject, "Mathematics");
    book2.book_id = 0256554520;

    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);

    printf("\n");

    printf("Book 2 title : %s\n", book2.title);
    printf("Book 2 author : %s\n", book2.author);
    printf("Book 2 subject : %s\n", book2.subject);
    printf("Book 2 book_id : %d\n", book2.book_id);

    return 0;
}
