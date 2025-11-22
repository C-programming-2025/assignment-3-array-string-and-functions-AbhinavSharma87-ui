// Write a C program to find the maximum and minimum elements in an array.

#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements\n"); 
    scanf("%d",&n); 
    int arr[n];
    

    for(int i=0; i<n; i++){
        printf("Element %d\n",i+1); 
        scanf("%d",&arr[i]); 
    }
    int max=arr[0],min=arr[0];
    for(int j=0; j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }

    }
    printf("Maximum :%d\n",max); 
    printf("Minimum :%d\n",min); 
    

    return 0;
}