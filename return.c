#include <stdio.h>
int add(int a, int b) {
    return a + b;   // sends back 15 to main()
}

int main() {
    int x = add(10, 5);  // receives 15
    printf("%d\n", x);

    return 0;   // program ends here
}
