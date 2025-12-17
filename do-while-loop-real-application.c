#include <stdio.h>
int main() {
    int choice;
    do {
        printf("1. Add\n2. Delete\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        printf("You chose: %d\n", choice);
    } while (choice != 3);
    return 0;
}


/*
Real-world scenario:

Menu-driven programs or apps

ATM transaction menu (you must show options at least once)

Asking a user to retry a failed operation at least once


*/
