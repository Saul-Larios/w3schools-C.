#include <stdio.h>

/*Strings are used for storing text/characters.

For example, "Hello World" is a string of characters.

Unlike many other programming languages, C does not have a String 
type to easily create string variables. However, you can use the char 
type and create an array of characters to make a string in C*/
int main() {
    //To output the string, you can use the printf() function together with the format specifier %s to tell C that we are now working with strings
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);

    //To change the value of a specific character in a string, refer to the index number, and use single quotes
    greetings[0] = 'J';
    printf("%s\n", greetings);
    // Outputs Jello World! instead of Hello World!

    //You should also note that you can to create a string with a set of characters. This example will produce the same result as the one above
    char greetings1[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings1);
    //Why do we include the \0 character at the end? This is known as the "null termininating character", and must be included when creating strings using this method. It tells C that this is the end of the string.
    char greetings2[] = "Hello World!";
    printf("%lu\n", sizeof(greetings1)); //Outputs 13
    printf("%lu\n", sizeof(greetings2)); //Outputs 13
    return 0;
}