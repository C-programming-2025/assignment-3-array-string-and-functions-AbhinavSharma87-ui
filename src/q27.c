// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.

#include <stdio.h>


void printChar(char ch, int count) {
    if(count == 0) {
        return;
    }
    printf("%c", ch);
    printChar(ch, count - 1);
}


void printTriangle(int n, int current) {

    if(current > n) {
        return;
    }
    

    printChar(' ', n - current);
    

    printChar('*', 2 * current - 1);
    

    printf("\n");
    
    // Recursive call for next row
    printTriangle(n, current + 1);
}

int main() {
    int num;
    
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    
    if(num > 0) {
        printf("\nCentered pyramid:\n");
        printTriangle(num, 1);
    } else {
        printf("Please enter a positive number.\n");
    }
    
    return 0;
}