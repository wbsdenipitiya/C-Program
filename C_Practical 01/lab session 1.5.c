
 #include<stdio.h>
int main() {
 int no1, no2;
 printf("Enter 1st number: ");
 scanf("%d", &no1);
 printf("Enter 2nd number: ");
 scanf("%d", &no2);
 if (no1 % no2 == 0 && no1 > no2)
 printf("%d is a multiple of %d", no1, no2);
 else if (no1 % no2 == 0 && no1 < no2)
 printf("%d is a multiple of %d", no2, no1);
 else if (no2 % no1 == 0 && no2 > no1)
 printf("%d is a multiple of %d", no2, no1);
 else if (no2 % no1 == 0 && no1 > no2)
 printf("%d is a multiple of %d", no1, no2);
 else
 printf("%d and %d are not multiples of each other", no1, no2);
 return 0;
}
