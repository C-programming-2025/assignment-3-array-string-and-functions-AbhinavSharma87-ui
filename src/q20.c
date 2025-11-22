// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).

#include <stdio.h>

int calculateGCD(int a, int b) {
    int gcd, i;
    
    // Find the smaller number
    int smaller = (a < b) ? a : b;
    
    for(i = smaller; i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }
    
    return gcd;
}

int main() {
    int num1, num2, gcd;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Call the function
    gcd = calculateGCD(num1, num2);
    
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    
    return 0;
}