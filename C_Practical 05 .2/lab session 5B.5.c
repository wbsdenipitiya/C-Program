#include <stdio.h>

int main() {
    int employeeNo;
    float hoursWorked, overtimePayment;
    int count = 0, countExceeding4000 = 0;

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &employeeNo);

    while (employeeNo != -999) {
        printf("Enter hours worked by employee %d: ", employeeNo);
        scanf("%f", &hoursWorked);

        if (hoursWorked > 40) {
            overtimePayment = (hoursWorked - 40) * 200 + 40 * 150;
        } else {
            overtimePayment = hoursWorked * 150;
        }

        printf("Employee Number: %d\n", employeeNo);
        printf("Overtime Payment: %.2f\n", overtimePayment);

        if (overtimePayment > 4000) {
            countExceeding4000++;
        }

        count++;

        printf("Enter employee number (-999 to end): ");
        scanf("%d", &employeeNo);
    }

    if (count > 0) {
        float percentageExceeding4000 = (float)countExceeding4000 / count * 100;

        printf("\nPercentage of employees whose overtime payment exceeds Rs. 4000: %.2f%%\n",
               percentageExceeding4000);
    } else {
        printf("No employee details entered.\n");
    }

    return 0;
}
