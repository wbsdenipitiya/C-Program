#include <stdio.h>

int main() {
    int no, PositiveC = 0, NegativeC = 0, ZeroC = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &no);

        if (no > 0) {
            PositiveC++;
        } else if (no < 0) {
            NegativeC++;
        } else {
            ZeroC++;
        }
    }

    printf("Number of positive numbers: %d\n", PositiveC);
    printf("Number of negative numbers: %d\n", NegativeC);
    printf("Number of zeros: %d\n", ZeroC);

 return 0;
}
