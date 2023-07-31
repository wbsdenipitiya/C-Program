#include <stdio.h>

int main() {
    int no, reversedNo = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    do {
        int digit = no % 10;  // Extract the rightmost digit
        reversedNo = reversedNo * 10 + digit;  // Append the digit to the reversed number
        no /= 10;  // Remove the rightmost digit from the number
    } while (no!= 0);

    printf("The reversed number is: %d\n", reversedNo);

    return 0;
}
