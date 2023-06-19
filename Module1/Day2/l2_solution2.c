#include <stdio.h>

int compare_Boxes(int box_A[], int box_B[], int size) {
    int i,j,found;

    // Check for one-to-one mapping of items
    for (i=0;i<size;i++) {
        found = 0;
        for (j=0;j<size;j++) {
            if (box_A[i] == box_B[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            return 0; // Mapping not found
        }
    }
    return 1; // One-to-one mapping found
}

int main() {
    int size;

    printf("Enter the size of the boxes: ");
    scanf("%d",&size);

    int box_A[size], box_B[size];

    printf("Enter the items of Box A: ");
    for (int i=0;i<size;i++) {
        scanf("%d",&box_A[i]);
    }

    printf("Enter the items of Box B: ");
    for (int i=0;i<size;i++) {
        scanf("%d",&box_B[i]);
    }

    int result = compare_Boxes(box_A, box_B, size);

    if (result == 1) {
        printf("Boxes have one-to-one mapping of items.\n");
    }
    else {
        printf("Boxes do not have one-to-one mapping of items.\n");
    }

    return 0;
}