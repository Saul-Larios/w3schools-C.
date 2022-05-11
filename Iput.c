#include <stdio.h>

// To get user input, you can use the scanf() function
int main() {
    // To get user input, you can use the scanf() function
    int myNum;

    // Ask the user to type a number
    printf("Type a number and press enter: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d\n", myNum);

    //You can also get a string entered by the user
    // Create a string
    char firstName[30];

    //Ask the user to input some text
    printf("Enter your first name: \n");

    //Get and save the text
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s.\n", firstName);
    //Note that you must specify the size of the string/array (we used a very high number, 30, but atleast then we are certain it will store enough characters for the first name), and you don't have to specify the reference operator (&) when working with strings in scanf()
    system("pause");
    return 0;

}