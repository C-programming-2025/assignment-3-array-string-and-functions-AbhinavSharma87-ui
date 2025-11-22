// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.
#include <stdio.h>
void convertTemperature(int ce){
    int f = (ce*9/5)+32;
    printf("%d\n",f); 
    
}

int main(){
    int ce;
    printf("Enter temp in celcicus\n"); 
    scanf("%d",&ce); 
    convertTemperature(ce);



    return 0;
}