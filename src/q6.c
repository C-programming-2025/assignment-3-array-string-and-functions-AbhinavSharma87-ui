// Write a C program to find the length of a string without using the built-in string functions.

#include <stdio.h>

int main(){
    char text[20];
    int i;
    printf("Enter text\n"); 
    fgets(text, sizeof(text), stdin);

    for(i=0;i<20;i++){
        if (text[i]=='\0'){
            break;
        }
    }
    printf("length %d\n",i-1); 

    return 0;
}