// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.
#include <stdio.h>

int calculatePower(int base, int exponent) {
    int result = 1;
    int i;
    
    // Multiply base, exponent times
    for(i = 0; i < exponent; i++) {
        result = base*result;
    }
    
    return result;
}

int main() {
    int base, exponent, result;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
   
    result = calculatePower(base, exponent);
    
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}