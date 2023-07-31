#include<stdio.h>
int main() {

char e_name[50];
    float basicSalary, newSalary;

    printf("Enter the employee name: ");
    scanf("%s", e_name);

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary < 5000) {
        newSalary = basicSalary + (basicSalary * 0.05);
    } else if (basicSalary >= 5000 && basicSalary < 10000) {
        newSalary = basicSalary + (basicSalary * 0.10);
    } else {
        newSalary = basicSalary + (basicSalary * 0.15);
    }

    printf("Employee name: %s\n", e_name);
    printf("New salary: %.2f\n", newSalary);
 return 0;
}

