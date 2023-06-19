#include <stdio.h>

void swap_AlternateElements(int arr[], int size) {
    for (int i=0;i<size-1;i+=2) {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }

    swap_AlternateElements(arr,size);

    printf("Array after swapping alternate elements: ");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
