#include <stdio.h>
int main() {
 char characters[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
 int length = sizeof(characters) / sizeof(char);
 printf("Character\tInteger Equivalent\n");
 printf("----------------------------\n");
 for (int i = 0; i < length; i++) {
 printf("%c\t\t%d\n", characters[i], characters[i]);
 }
 return 0;
}

