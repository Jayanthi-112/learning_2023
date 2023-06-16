#include <stdio.h>

int find_SmallestDigit(int num) {
    int smallest = 9;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit<smallest)
            smallest = digit;
        num /= 10;
    }

    return smallest;
}

int find_LargestDigit(int num) {
    int largest = 0;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit>largest)
            largest = digit;
        num /= 10;
    }
    
    return largest;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }
    
    int i;
    int smallest,largest;
    int num;
    
    printf("Enter %d numbers:\n", n);
    
    for (i=1;i<=n;i++) {
        printf("n%d: ", i);
        scanf("%d", &num);
        
        if (i==1) {
            smallest = find_SmallestDigit(num);
            largest = find_LargestDigit(num);
        }else{
            int curr_Smallest = find_SmallestDigit(num);
            int curr_Largest = find_LargestDigit(num);
            
            if (curr_Smallest<smallest)
                smallest = curr_Smallest;
            
            if (curr_Largest>largest)
                largest = curr_Largest;
        }
    }
    
    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);
    
    return 0;
}
