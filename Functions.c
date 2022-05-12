#include <stdio.h>

// For example, main() is a function, which is used to execute code, and printf() is a function; used to output/print text to the screen
// In the following example, myFunction() is used to print a text (the action), when it is called
//Create a function
void myFunction(){
    printf("I just got executed!\n");
}

int main(){
    myFunction();// call the function
    myFunction();// call the function
    myFunction();// call the function
    return 0;  
}