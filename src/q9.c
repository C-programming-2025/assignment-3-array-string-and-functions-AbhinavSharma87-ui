// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int i, count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to count: ");
    scanf("%c", &ch);
    
    for(i = 0; i < strlen(str); i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    
    printf("The character '%c' occurs %d time(s) in the string.\n", ch, count);
    
    return 0;
}