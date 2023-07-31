#include <stdio.h>

int main() {
    int no, i, Prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &no);

    if (no == 0 || no == 1) {
        Prime = 0;
    } else {
        for (i = 2; i <= no / 2; ++i) {
            if (no % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime) {
        printf("%d is a prime number.\n", no);
    } else {
        printf("%d is not a prime number.\n", no);
    }

    return 0;
}




