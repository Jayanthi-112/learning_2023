#include <stdio.h>

int main() {
    char str[100];
    int i=0;
    int result=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        int a = str[i] - '0';
        result = result * 10 + a;
        i++;
    }

    printf("Converted integer value: %d\n", result);

    return 0;
}