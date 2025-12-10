#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    // stdio.h
    printf("Hello Students!\n");

    // math.h
    int num = 16;
    printf("Square root of %d is %.2f\n", num, sqrt(num));

    // string.h
    char name[20] = "Prithvi";
    printf("Length of name: %lu\n", strlen(name));

    // stdlib.h
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 50;
    printf("Value from malloc: %d\n", *ptr);
    free(ptr);

    return 0;
}



/*Explanation:

stdio.h → input/output

math.h → math operations

string.h → string operations

stdlib.h → memory allocation  */