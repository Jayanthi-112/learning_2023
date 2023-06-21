#include <stdio.h>

int main() {
    int size, i;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    for (i=0;i<size;i++) {
        if (i % 2 == 0) {
            even_sum+= arr[i];
        }
        else{
            odd_sum+= arr[i];
        }
    }

    printf("Sum of even-indexed elements: %d\n", even_sum);
    printf("Sum of odd-indexed elements: %d\n", odd_sum);
    printf("Difference: %d\n", even_sum - odd_sum);

    return 0;
}