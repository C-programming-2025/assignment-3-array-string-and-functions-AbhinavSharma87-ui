//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.
#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    int i;
    

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            return 0;  
        }
    }
    
    return 1;  
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    

    if(isPalindrome(str) == 1) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    
    return 0;
}