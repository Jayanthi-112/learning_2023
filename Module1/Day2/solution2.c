#include <stdio.h>
#include <string.h>

// Function to swap two values of any type
void swap(void* a, void* b, size_t size) {
    
    char temp[size];
    
    // Copy the value of 'a' to the temp value
    memcpy(temp, a, size);
    
    // Copy the value of 'b' to 'a'
    memcpy(a, b, size);
    
    // Copy the value from the temp value to 'b'
    memcpy(b, temp, size);
}

int main() {
    // Declare variables of different types
    int a, b;
    float x, y;
    char c, d;

    // Read the values 
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    
    printf("Enter two floats: ");
    scanf("%f%f", &x, &y);
    
    printf("Enter two characters: ");
    scanf("%c %c", &c, &d);

     // Display the original values
    printf("\nOriginal values:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %.2f, y = %.2f\n", x, y);
    printf("c = %c, d = %c\n", c, d);

    // Swap the values using the swap function
    swap(&a, &b, sizeof(int));
    swap(&x, &y, sizeof(float));
    swap(&c, &d, sizeof(char));

    // Display the swapped values
    printf("\nSwapped values:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %.2f, y = %.2f\n", x, y);
    printf("c = %c, d = %c\n", c, d);

    return 0;
}