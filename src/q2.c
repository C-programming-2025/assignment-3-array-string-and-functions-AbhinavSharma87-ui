// Implement a C program to reverse the elements of an array.

#include <stdio.h>

int main(){
    int n,temp;
    printf("number of element\n"); 
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Element %d\n",i+1); 
        scanf("%d",&arr[i]);
    }
    for( int j=0;j<n/2;j++){
        temp=arr[j];
        arr[j]=arr[n-j-1];
        arr[n-j-1]=temp;

    }
    for(int k=0; k<n;k++){
        printf("%d\n",arr[k]); 
    }
    
    return 0;
}