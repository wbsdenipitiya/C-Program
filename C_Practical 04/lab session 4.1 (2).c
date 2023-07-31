#include <stdio.h>

int main() {
    int no;

    printf("Enter an integer: ");
    scanf("%d", &no);

    switch (no % 2) {
        case 0:
            printf("%d is even.\n", no);
            break;
        case 1:
            printf("%d is odd.\n", no);
            break;
    }

    return 0;
}
