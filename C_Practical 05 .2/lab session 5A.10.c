#include <stdio.h>

int main() {
    int rows = 5;  // number of rows in the pattern
    int i, j;

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
