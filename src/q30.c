//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>

int countOccurrences(char* str, char ch) {

    if (*str == '\0') {
        return 0;
    }
    
   
    if (*str == ch) {
        return 1 + countOccurrences(str + 1, ch);
    } else {
        return countOccurrences(str + 1, ch);
    }
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Enter a character to count: ");
    scanf(" %c", &ch);
    
    int result = countOccurrences(str, ch);
    
    printf("The character '%c' appears %d time in \"%s\"\n", ch, result, str);
    
    return 0;
}