#include <stdio.h>

#define M_PI 3.14159
int main() {
    int choice;
    float radius, result;

    printf("Menu:\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%f", &radius);

    if (choice >= 1 && choice <= 3) {
        switch (choice) {
            case 1:
                result = 2 * M_PI * radius;
                printf("Circumference of the circle: %.2f\n", result);
                break;
            case 2:
                result = M_PI * radius * radius;
                printf("Area of the circle: %.2f\n", result);
                break;
            case 3:
                result = (4.0 / 3.0) * M_PI * pow(radius, 3);
                printf("Volume of the sphere: %.2f\n", result);
                break;
        }
    } else {
        printf("Invalid choice. Please select a valid option (1-3).\n");
    }

    return 0;
}
