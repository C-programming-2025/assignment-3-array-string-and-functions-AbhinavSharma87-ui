// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.

#include <stdio.h>
#include <string.h>

void calculateBinary(int n, char* result) {
   
    if (n == 0) {
        strcpy(result, "0");
        return;
    }
    if (n == 1) {
        strcpy(result, "1");
        return;
    }
    
   
    char temp[65]; 
    calculateBinary(n / 2, temp);
    sprintf(result, "%s%d", temp, n % 2);
}

int main() {
    int n;
    char binary[65]; 
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    
    calculateBinary(n, binary);
    printf("Binary representation of %d is: %s\n", n, binary);
    
    return 0;
}