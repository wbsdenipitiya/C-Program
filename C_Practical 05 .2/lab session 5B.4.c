#include <stdio.h>

int main() {
    int employeeNo;
    float bSalary;
    int count = 0;

    printf("Enter the Employee Number (-999 to end): ");
    scanf("%d", &employeeNo);

    while (employeeNo != -999) {
        printf("Enter the Basic Salary for Employee %d: ", employeeNo);
        scanf("%f", &bSalary);

        if (bSalary >= 5000) {
            count++;
        }

        printf("Enter the Employee Number (-999 to end): ");
        scanf("%d", &employeeNo);
    }

    printf("Number of Employees with Basic Salary >= 5000: %d\n", count);

    return 0;
}
