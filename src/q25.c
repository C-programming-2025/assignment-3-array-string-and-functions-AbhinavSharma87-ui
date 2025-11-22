// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.

#include <stdio.h>


#include <stdio.h>
#include <stdlib.h>

int digitCount = 0;

// Recursive function that also counts digits
int calculateSumOfDigits(int n) {
    n = abs(n);
    
    if(n == 0) {
        return 0;
    }
    
    digitCount++;
    return (n % 10) + calculateSumOfDigits(n / 10);
}

int main() {
    int num, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    digitCount = 0;
    sum = calculateSumOfDigits(num);
    
    printf("Number: %d\n", num);
    printf("Number of digits: %d\n", digitCount);
    printf("Sum of digits: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / digitCount);
    
    return 0;
}