#include <stdio.h>

int main(){
    // In the example below, we test two values to find out if 20 is greater than 18. If the condition is true, print some text
    if(20 > 18) {
        printf("20 is greater than 18\n");
    }
    
    // We can also test variables
    int x = 20;
    int y = 18;
    if (x > y) {
        printf("x is greater than y\n");
    }
    
    // Use the else statement to specify a block of code to be executed if the condition is false
    int time = 20;
    if (time > 18) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }
    //You can simply write
    (time < 18) ? printf("Good day.\n") : printf("Good evening.\n");
    // Use the else if statement to specify a new condition if the first condition is false.
    time = 22;
    if (time < 10) {
        printf("Good morning.\n");
    } else if (time < 20) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }
    // Outputs "Good evening"

    //This example shows how you can use if..else if to find out if a number is positive or negative
    int myNum = 10;

    if(myNum > 0)
    printf("the value is a positive number.\n");
    else if (myNum < 0)
    printf("The value is a negative number.");
    else
    printf("The value is 0.");
    return 0;
}