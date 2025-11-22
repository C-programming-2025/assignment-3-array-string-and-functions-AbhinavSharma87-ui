// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.
#include <stdio.h>


void findPrimeNumbers(int n) {
    int i, j, isPrime;
    
    printf("Prime numbers from 1 to %d are:\n", n);
    
    // Loop through numbers from 2 to n
    for(i = 2; i <= n; i++) {
        isPrime = 1; 
        
       
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        
       
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("There are no prime numbers less than 2.\n");
    } else {
        // Call the function
        findPrimeNumbers(n);
    }
    
    return 0;
}
