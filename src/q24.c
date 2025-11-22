// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h>


int calculatePower(int base, int exponent) {
    // Base case: any number to power 0 is 1
    if(exponent == 0) {
        return 1;
    }
    

    return base * calculatePower(base, exponent - 1);
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