// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>
#include <ctype.h>


int countOccurrences(char str[], char ch) {
    int count = 0;
    int i = 0;
    
    
    ch = tolower(ch);
    
    while(str[i] != '\0') {
        if(tolower(str[i]) == ch) {
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    char str[100];
    char ch;
    int occurrences;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to count: ");
    scanf("%c", &ch);
    
    occurrences = countOccurrences(str, ch);
    
    printf("The character '%c' appears %d times in the string .\n", ch, occurrences);
    
    return 0;
}