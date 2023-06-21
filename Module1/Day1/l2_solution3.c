#include <stdio.h>

int isVowel(char c) {
    int isVowel = 0; // By default not a vowel

    switch (c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            isVowel = 1;
            break;
    }

    return isVowel;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    int result = isVowel(c);

    if (result == 1) {
        printf("%c is vowel\n",c);
    }
    else {
        printf("%c is not vowel\n",c);
    }

    return 0;
}