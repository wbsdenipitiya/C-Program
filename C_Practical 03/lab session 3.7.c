#include<stdio.h>

int main() {
    float bsalary, ts, fs, es;
    char c;
    int m;

    printf("Enter your basic salary: ");
    scanf("%f", &bsalary);

    if (bsalary >= 50000)
        ts = bsalary + bsalary * 0.15;
    else if (bsalary < 25000)
        ts = bsalary + bsalary * 0.12;
    else
        ts = bsalary + bsalary * 0.1;

    printf("Enter your number of service years: ");
    scanf("%d", &m);

    if (m >= 5)
        es = ts + bsalary * 0.1;
    else
        es = ts;

    printf("Enter 'C' if you live in Colombo, otherwise enter 'n': ");
    scanf(" %c", &c);

    if (c == 'C')
        fs = es + bsalary * 0.1;
    else
        fs = es;

    printf("Your final salary is %.2f\n", fs);

    return 0;
}
