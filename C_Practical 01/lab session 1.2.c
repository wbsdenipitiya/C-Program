#include<stdio.h>
int main() {
 int no1 , no2 ,no3;
 printf("Enter the first number here");
 scanf("%d", &no1);
 printf("Enter the second number here");
 scanf("%d", &no2);
 printf("enter the third number here");
 scanf("%d", &no3);
 int max = no1, min = no1;
 if (no2 > max) {
 max = no2;
 }
 if (no3 > max) {
 max = no3;
 }
 if (no2 < min) {
 min = no2;
 }
 if (no3 < min) {
 min = no3;
 }
 printf("the largest value is %d\n", max);
 printf("the smallest value is %d\n", min);
 return 0;
}

