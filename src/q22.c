// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.

#include <stdio.h>


int calculateFibonacci(int n) {

    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    

    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
}

int main() {
    int num, result;
    
    printf("Enter the position in Fibonacci sequence: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        result = calculateFibonacci(num);
        printf("Fibonacci number at position %d is: %d\n", num, result);
    }
    
    return 0;
}