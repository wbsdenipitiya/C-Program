#include <stdio.h>

int main() {
    int marks[10];
    int i, totMarks = 0, maxMarks, minMarks;

    printf("Enter marks of 10 students:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        totMarks += marks[i];

        if (i == 0) {
            maxMarks = marks[i];
            minMarks = marks[i];
        } else {
            if (marks[i] > maxMarks) {
                maxMarks = marks[i];
            }
            if (marks[i] < minMarks) {
                minMarks = marks[i];
            }
        }
    }

    double averageMarks = (double) totMarks / 10;

    printf("Maximum Marks: %d\n", maxMarks);
    printf("Minimum Marks: %d\n", minMarks);
    printf("Average Marks: %.2lf\n", averageMarks);

    return 0;
}

