// Implement a C program to find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i, j, key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
    
  
   printf("the second largest element in array is %d\n",arr[n-2]); 
    
    return 0;
}