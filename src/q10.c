// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i, j;
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    // Find the end of first string
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    
    // Copy second string to the end of first string
    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
    // Add null terminator
    str1[i] = '\0';
    
    printf("\nConcatenated string: %s\n", str1);
    
    return 0;
}