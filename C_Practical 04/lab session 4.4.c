#include <stdio.h>

int main() {
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    // Using if-else statement
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        printf("%c is a vowel.\n", letter);
    } else {
        printf("%c is not a vowel.\n", letter);
    }

    // Using switch statement (with default case)
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", letter);
            break;
        default:
            printf("%c is not a vowel.\n", letter);
            break;
    }

    return 0;
}
