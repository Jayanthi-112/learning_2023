#include <stdio.h>

int findBiggest_UsingIfElse(int n1, int n2) {
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int findBiggest_UsingTernaryOperator(int n1, int n2) {
    return (n1 > n2) ? n1 : n2;
}

int main() {
    int n1, n2;

    printf("Enter the 1st number: ");
    scanf("%d", &n1);

    printf("Enter the 2nd number: ");
    scanf("%d", &n2);

    int biggest_IfElse = findBiggest_UsingIfElse(n1,n2);
    int biggest_Ternary = findBiggest_UsingTernaryOperator(n1,n2);

    printf("Using if-else, the biggest number is: %d\n", biggest_IfElse);
    printf("Using ternary operator, the biggest number is: %d\n", biggest_Ternary);

    return 0;
}
