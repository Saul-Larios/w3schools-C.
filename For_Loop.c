#include <stdio.h>

//When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop
int main() {
    int i;

    for(i = 0; i < 5; i++) {
        printf("%d\n", i); //The example below will print the numbers 0 to 
    }
    
    for(i = 0; i <= 10; i = i  +2){
        printf("%d\n", i);// The example below will print the numbers 0 to 
    }

    return 0;
}