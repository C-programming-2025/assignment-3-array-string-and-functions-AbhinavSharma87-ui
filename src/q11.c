// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
  
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    
  
    average = (float)sum / n;
    
    printf("\nThe average of the numbers is: %.2f\n", average);
    
    return 0;
}
