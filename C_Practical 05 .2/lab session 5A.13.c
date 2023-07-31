#include <stdio.h>

int main() {
    int no;
    int sum = 0;

    printf("Enter numbers to be added (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &no);

        if (no == -1) {
            break;
        }

        sum += no;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}


