#include <stdio.h>
#include <math.h>

int main() {
    int no, originalNo, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &no);

    originalNo = no;

    // Calculate the number of digits
    while (originalNo != 0) {
        originalNo /= 10;
        ++n;
    }

    originalNo = no;

    // Calculate the Armstrong number
    while (originalNo!= 0) {
        remainder = originalNo % 10;
        result += pow(remainder, n);
        originalNo /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == no) {
        printf("%d is an Armstrong number.\n", no);
    } else {
        printf("%d is not an Armstrong number.\n", no);
    }

    return 0;
}
