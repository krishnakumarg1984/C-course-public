#include <stdio.h>
int main(void) {
    int a = 1;

    // add b and c here...
    int b = -4;
    int c = -12;

    printf("a=%d, b=%d, c=%d\n", a, b, c);

    // calculate disc here...
    double disc = b * b - 4.0 * a * c;
    printf("disc=%f\n", disc);

    return 0;
}
