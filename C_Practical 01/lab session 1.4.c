#include <stdio.h>
#define PI 3.14159
int main() {
 float radius, diameter, circumference, area;
 printf("Enter the radius of the circle here: ");
 scanf("%f", &radius);
 diameter = 2 * radius;
 circumference = 2 * PI * radius;
 area = PI * radius * radius;
 printf("Diameter: %.2f\n", diameter);
 printf("Circumference: %.2f\n", circumference);
 printf("Area: %.2f\n", area);
 return 0;
}
