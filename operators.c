#include <stdio.h>

int main() {
    int a = 10, b = 5, c;

    // Assignment operator
    c = a + b;  // c = 10 + 5
    printf("Assignment: c = a + b -> c = %d\n", c);

    // Relational operators
    printf("Relational: a > b -> %d\n", a > b); // 1 (true)
    printf("Relational: a == b -> %d\n", a == b); // 0 (false)

    // Logical operators
    printf("Logical: (a > b && b > 0) -> %d\n", (a > b && b < 0)); // 1 (true)
    printf("Logical: (a < b || b > 0) -> %d\n", (a < b || b > 0)); // 1 (true)

    // Increment/Decrement operators
    printf("Increment: a++ -> %d\n", a++); // prints 10, then a becomes 11
    printf("After Increment: a = %d\n", a); // 11
    printf("Decrement: --b -> %d\n", --b); // b becomes 4, prints 4

    // Conditional (ternary) operator
    int max = (a > b) ? a : b; // if a > b, max = a else max = b
    printf("Conditional: max of a and b -> %d\n", max);

    return 0;
}
 

// Explanation in simple terms:

// Assignment: c = a + b stores the sum in c.

// Relational: > and == check conditions and return 1 (true) or 0 (false).

// Logical: && and || combine conditions.

// Increment/Decrement: a++ increases after using, --b decreases before using.

// Conditional: ? : picks a value based on a condition.