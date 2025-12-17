#include <stdio.h>
int main() {
    int num;
    
    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);       // first input before loop

    while (num != 0) {       // condition checked before each iteration
        printf("You entered: %d\n", num);   // runs inside loop
        scanf("%d", &num);                   // input again inside loop
    }

    printf("Loop ended, num = %d\n", num);  // runs outside loop
    return 0;
}
