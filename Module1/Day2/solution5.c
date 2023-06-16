#include <stdio.h>

// Function to count the number of set bits in a number
int count_SetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%x", &array[i]);
    }

    int total_SetBits = 0;
    for (int i = 0; i < size; i++) {
        int num = array[i];
        int count = 0;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        total_SetBits += count;
    }

    printf("Total number of set bits in the array: %d\n", total_SetBits);

    return 0;
}