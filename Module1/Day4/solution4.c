#include <stdio.h>

int main() {
    int size, i;
    int sumof_even = 0, sumof_odd = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for (i=0;i<size;i++){
        if (arr[i]%2 == 0) {
            sumof_even+= arr[i];
        }
        else{
            sumof_odd+= arr[i];
        }
    }

    printf("Sum of even elements: %d\n", sumof_even);
    printf("Sum of odd elements: %d\n", sumof_odd);
    printf("Difference: %d\n", sumof_even - sumof_odd);

    return 0;
}
