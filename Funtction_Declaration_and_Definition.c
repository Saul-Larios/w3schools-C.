#include <stdio.h>

// You just learned from the previous chapters that you can create and call a function it the following way
// Function declaration
void myFunction();
int myFunction1(int, int);

// The main method
int main() {
    myFunction();// call the function
    int result = myFunction1(5, 3); // call the function
    printf("Result is = %d\n", result);
    return 0;
}

// Function definition
void myFunction() {
    printf("I just got executed!\n");
}

// Function definition
int myFunction1(int x, int y) {
    return x + y;
}