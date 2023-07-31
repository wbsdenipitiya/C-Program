#include <stdio.h>

int main() {
    int no, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &no);

    // Calculate the factorial
    for (i = 1; i <= no; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %llu\n", no, factorial);

    return 0;
}
