#include <stdio.h>

int main() {
    int array[10];
    int i, count = 0;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) {
            count++;
        }
    }

    printf("The array elements are: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    printf("The count of even numbers in the array is: %d\n", count);

    return 0;
}



