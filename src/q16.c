// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.

#include <stdio.h>

void reverseArray(int n, int arr[]){
    int temp;
    for( int j=0;j<n/2;j++){
        temp=arr[j];
        arr[j]=arr[n-j-1];
        arr[n-j-1]=temp;
    }
    
}
int main(){
    int n;
    printf("number of element\n"); 
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Element %d\n",i+1); 
        scanf("%d",&arr[i]);
    }
    reverseArray(n, arr);
    for(int k=0; k<n;k++){
        printf("%d\n",arr[k]); 
    }
    
return 0;
    }
    
    
    
