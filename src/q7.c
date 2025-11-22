// Implement a C program to reverse a string.

#include <stdio.h>
#include <string.h>

int main(){
    int n,temp;
     char arr[30];
    printf("enter string\n"); 
    scanf("%s",arr);
     n=strlen(arr);
   
    
    for( int j=0;j<n/2;j++){
        temp=arr[j];
        arr[j]=arr[n-j-1];
        arr[n-j-1]=temp;

    }
    
        printf("%s\n",arr); 
    
    
    return 0;
}