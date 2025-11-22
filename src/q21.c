// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.

#include <stdio.h>


long long calculateFactorial(int n) {

    if(n == 0 || n == 1) {
        return 1;
    }
    
  
    return n * calculateFactorial(n - 1);
}

int main() {
    int num;
    long long result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        result = calculateFactorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }
    
    return 0;
}