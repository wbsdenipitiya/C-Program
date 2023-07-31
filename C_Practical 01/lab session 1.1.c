 #include<stdio.h>
int main() {
 float no1, no2;
 printf("enter the first number here");
 scanf("%f", &no1);
 printf("enter the second number here");
 scanf("%f", &no2);
 if(no1>no2) {
 printf("The highest number is %f\n", no1);
 } else if (no2>no1) {
 printf("The highest number is %f\n", no2);
 }else {
 printf("no1 and no2 are equal\n");
 }
 return 0;
}
