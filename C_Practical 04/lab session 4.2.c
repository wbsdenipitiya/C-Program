#include <stdio.h>

int main() {
    int choice;
    float no1, no2, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &no1, &no2);

    if (choice >= 1 && choice <= 4) {
        switch (choice) {
            case 1:
                result = no1 + no2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = no1 - no2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = no1 * no2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (no2 != 0) {
                    result = no1 / no2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
        }
    } else {
        printf("Invalid choice. Please select a valid option (1-4).\n");
    }

    return 0;
}
