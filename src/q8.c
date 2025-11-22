// Write a C program to check if a given string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i, isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    

    length = strlen(str);
    

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
  
    if(isPalindrome == 1) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    
    return 0;
}