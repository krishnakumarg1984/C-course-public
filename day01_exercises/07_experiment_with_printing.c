// https://stackoverflow.com/a/39014121

#include <stdio.h>

int main(void) {
    printf("hello");
    fprintf(stderr, "HELP!");
    printf(" world\n");

    return 0;
}
