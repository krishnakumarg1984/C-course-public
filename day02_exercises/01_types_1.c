#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float x  = 19.1f;
    float* y = &x;  // NOLINT
    printf("The size of x is: %zu bytes, and that of pointer to z is: %zu bytes\n", sizeof(x), sizeof(y));

    double z = 48.2;
    // y        = &z;  // compilation error
    printf("The size of z is: %zu bytes, and that of pointer to z is: %zu bytes\n", sizeof(z), sizeof(&z));

    return EXIT_SUCCESS;
}
