#include <stdio.h>

int main() {
    int no1 = 0, no2 = 1, nextTerm;
    int count;

    printf("Fibonacci Sequence: ");

    // Print the first two numbers
    printf("%d %d ", no1, no2);

    // Generate and print the next 8 numbers
    for (count = 3; count <= 10; ++count) {
        nextTerm = no1 + no2;
        printf("%d ", nextTerm);
        no1 = no2;
        no2 = nextTerm;
    }

    return 0;
}
