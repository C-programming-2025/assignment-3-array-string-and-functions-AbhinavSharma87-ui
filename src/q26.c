// Write a recursive function named reverseString that takes a string as input and returns the reversed string.

#include <stdio.h>
#include <string.h>


void reverseString(char str[], int start, int end) {
    char temp;
    

    if(start >= end) {
        return;
    }
    

    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    

    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    

    str[strcspn(str, "\n")] = '\0';
    
    int length = strlen(str);
    
    printf("\nOriginal string: %s\n", str);
    

    reverseString(str, 0, length - 1);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}