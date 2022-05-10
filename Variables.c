#include <stdio.h>

int main(){
    int myNum = 15; //myNum is 15
    myNum = 10; // Now myNum is 10
    printf("%d\n", myNum); // Outputs 10
    

    // Create variables
    int myNum2 = 5;  //Integer(whole number)
    float myFloatNum = 5.99; //Floating point nnumber
    char myLetter = 'D'; //Character

    // Print variables
    printf("%d\n", myNum2);  // Outputs 5
    printf("%f\n", myFloatNum); // Outputs 5.99
    printf("%c\n", myLetter); // Outputs D
    printf("My favorite number is: %d \n", myNum2); // Outputs My favorite number is: 5
    printf("My number is %d and my letter is %c \n", myNum2, myLetter); // Outputs My number is 5 and my letter is D

    //To add a variable to another variable, you can use the + operator
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);

    //To declare more than one variable of the same type, use a comma-separated list
    int x1 = 5, y1 = 6, z = 50;
    printf("%d\n",x1 + y1 + z);

    //You can also assign the same value to multiple variables of the same type
    int x2, y2, z2;
    x2 = y2 = z2 = 50;
    printf("%d\n", x2 + y2 + z2);
    return 0;
}