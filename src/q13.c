// Write a function named findFactorial that takes an integer as input and returns its factorial.
#include <stdio.h>


long long findFactorial(int n) {
    long long factorial = 1;
    int i;
    
 
    for(i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int num;
    long long result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        result = findFactorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }
    
    return 0;
}