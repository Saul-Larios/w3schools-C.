#include <stdio.h>
#include <string.h>

//You can create a structure by using the struct keyword and declare each of its members inside curly braces:
/*To access the structure, you must create a variable of it.

Use the struct keyword inside the main() method, followed by the name of the structure and then the name of the structure variable:*/
// To access members of a structure, use the dot syntax (.)
// Create a structure called myStructure
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30]; //String
};
// Use a structure to store different information about Cars
struct Car 
{
    char brand[50];
    char model[50];
    int year;
};

int main() {
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    // Now you can easily create multiple structure variables with different values, using just one structure
    struct myStructure s2;
    /*You can also assign values to members of a structure variable at declaration time, in a single line.

Just insert the values in a comma-separated list inside curly braces {}. Note that you don't have to use the strcpy() function for string values with this technique*/
    struct myStructure s3 = {14, 'D', "some text"};
    //! Car Struct
    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};
    
    
    
    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    strcpy(s1.myString, "Some text");
    // Assign values to different struct variables
    //You can also assign one structure to another
    s2 = s1;
    /*If you want to change/modify a value, you can use the dot syntax (.).

And to modify a string value, the strcpy() function is useful again
    // Modify values*/
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");

    //Print values
    printf("s1 number: %d\n", s1.myNum);
    printf("s1 letter: %c\n", s1.myLetter);
    printf("My string: %s\n", s1.myString);
    printf("%d %c %s \n", s2.myNum, s2.myLetter, s2.myString);
    
    printf("%d %c %s\n", s3.myNum, s3.myLetter, s3.myString);
    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    return 0;
}