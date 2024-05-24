#include<stdio.h>

struct home {
    int room_quantity;
    int established_year;
    char city[10];
};

main() {
    int i, n;
    
    printf("Enter Number of Houses: ");
    scanf("%d", &n);

    struct home homes[n];

    for (i = 0; i < n; i++) {
        printf("House %d:\n", i + 1);
        printf("Room Quantity: ");
        scanf("%d", &homes[i].room_quantity);
        printf("Establishment Year: ");
        scanf("%d", &homes[i].established_year);
        printf("City: ");
        scanf("%s", homes[i].city);
    }

    printf("\nHouse Details:\n");
    for (i = 0; i < n; i++) {
        printf("House %d\n", i + 1);
        printf("Room Quantity: %d\n", homes[i].room_quantity);
        printf("Establishment Year: %d\n", homes[i].established_year);
        printf("City: %s\n", homes[i].city);
    }
}

