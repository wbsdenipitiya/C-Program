#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], vector_sum[size];
    int scalar_sum = 0;
    int i;

    printf("Enter %d integer values for array1:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter %d integer values for array2:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < size; i++) {
        scalar_sum += array1[i];
    }

    for (i = 0; i < size; i++) {
        vector_sum[i] = array1[i] + array2[i];
    }

    printf("Scalar Sum: %d\n", scalar_sum);

    printf("Vector Sum:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", vector_sum[i]);
    }
    printf("\n");

    return 0;
}
