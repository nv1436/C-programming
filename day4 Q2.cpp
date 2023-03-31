#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct book books[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter information for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    
    for (i = 0; i < 5; i++) {
        printf("\nInformation for book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
