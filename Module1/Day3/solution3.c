#include <stdio.h>

// Function to find the largest number by deleting a single digit
int find_LargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    
    while (divisor <= num) {
        int truncated_Num = (num / (divisor * 10)) * divisor + (num % divisor);
        
        if (truncated_Num > largest) {
            largest = truncated_Num;
        }
        
        divisor *= 10;
    }
    
    return largest;
}

// Main function
int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    if (num >= 1000 && num <= 9999) {
        int largest_Number = find_LargestNumber(num);
        printf("The largest number after deleting a single digit: %d\n", largest_Number);
    } else {
        printf("Invalid input! Please enter a 4-digit number.\n");
    }
    
    return 0;
}
