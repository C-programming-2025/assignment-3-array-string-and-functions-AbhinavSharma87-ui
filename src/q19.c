//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>


void calculateFactorialSeries(int n) {
    int i, j;
    long long factorial;
    
    printf("Factorial series up to %d:\n", n);
    
    for(i = 1; i <= n; i++) {
        factorial = 1;
        
    
        for(j = 1; j <= i; j++) {
            factorial *= j;
        }
        
        printf("%d! = %lld\n", i, factorial);
    }
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n < 1) {
        printf("Please enter a positive number.\n");
    } else {
      
        calculateFactorialSeries(n);
    }
    
    return 0;
}