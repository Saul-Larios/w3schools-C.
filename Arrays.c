#include <stdio.h>

//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
int main() {
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d\n", myNumbers[0]); // Outputs 25
//To change the value of a specific element, refer to the index numbe
    myNumbers[0] = 33;
    printf("%d\n", myNumbers[0]); // Now outputs 33 instead of 25
/*You can loop through the array elements with the for loop
The following example outputs all elements in the myNumbers array:*/
    int i;
     for(i = 0; i < 4; i++) {
         printf("%d\n", myNumbers[i]);
     }
/*Another common way to create arrays, is to specify the size of the array, 
and add elements later*/
    // Declare an array of four integers:
    int my_Numbers[4];
    // Add elements
    my_Numbers[0] = 25;
    my_Numbers[1] = 50;
    my_Numbers[2] = 75;
    my_Numbers[3] = 100;

    printf("%d\n", my_Numbers[0]);

    return 0;
}