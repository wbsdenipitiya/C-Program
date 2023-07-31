#include <stdio.h>

int main() {
    double prices[10];
    int i,avg, count = 0;
    double tot = 0.0;

    printf("Enter prices of 10 items:\n");

    for (i = 0; i < 10; i++) {
        scanf("%lf", &prices[i]);
        tot += prices[i];

        if (prices[i] > 200) {
            count++;
        }
    }

    double average = tot / 10;

    printf("Average value of an item: %.2lf\n", avg);
    printf("Number of items with price > 200: %d\n", count);

    return 0;
}

