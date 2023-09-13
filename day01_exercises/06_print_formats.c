#include <stdio.h>

int main(void) {
    double x = 1234.0123456789;

    printf("%11.2f\n", x);   // in decimal notation, right-justified with a field width of 11 and 2 decimal places.
    printf("%-9.3f\n", x);   // in decimal notation, right-justified with a field width of 11 and 2 decimal places.
    printf("%16.4e\n", x);   // in scientific notation, right-justified with a field width of 16 and 4 decimal places.
    printf("%012.2e\n", x);  // in scientific notation, right-justified with a field width of 12, 2 decimal places & padded with leading zeros.

    return 0;
}
