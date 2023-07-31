#include <stdio.h>

int main() {
    int array[10];
    int i;

    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    int min_value = array[0];
    for (i = 1; i < 10; i++) {
        if (array[i] < min_value) {
            min_value = array[i];
        }
    }

    int max_value = array[0];
    for (i = 1; i < 10; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    int sum = 0;
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }
    float average_value = (float)sum / 10;

    int reversed_array[10];
    for (i = 0; i < 10; i++) {
        reversed_array[i] = array[9 - i];
    }

    printf("Array values: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Minimum value: %d\n", min_value);
    printf("Maximum value: %d\n", max_value);
    printf("Average value: %.2f\n", average_value);

    printf("Array in reverse order: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", reversed_array[i]);
    }
    printf("\n");

    return 0;
}
