#include <stdio.h>

int main() {
    int m;

    printf("Enter the month number (1-12): ");
    scanf("%d", &m);

    // Using if-else statement
    if (m == 2) {
        printf("Total number of days in February: 28\n");
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("Total number of days in the month: 30\n");
    } else {
        printf("Total number of days in the month: 31\n");
    }

    // Using switch statement
    switch (m) {
        case 2:
            printf("Total number of days in February: 28\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Total number of days in the month: 30\n");
            break;
        default:
            printf("Total number of days in the month: 31\n");
            break;
    }

    return 0;
}

