#include <stdio.h>

//You learned from the previous chapter, that we can get the memory address of a variable with the reference operator &
int main() {
    int myAge = 43; // an int variable

    printf("%d\n", myAge); // Outputs the value of myAge (43)
    printf("%p\n", myAge); // Outputs the memory address of myAge (000000000000002B)
    //A pointer variable points to a data type (like int) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer
    int* ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

    printf("%d\n", myAge); // Output the value of myAge (43)

    printf("%p\n", &myAge); // Output the memory address of myAge (000000000061FE14)

    printf("%p\n", ptr); // Output the memory address of myAge with the pointer (000000000061FE14)
    // In the example above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).
    printf("%p\n", ptr); // Reference: Output the memory address of myAge with the pointer (000000000061FE14)

    printf("%d\n", *ptr); // Dereference: Output the value of myAge with the pointer (43)
/* Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (int* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.   
Why Should I Learn About Pointers? Pointers are important in C, because they give you the ability to manipulate the data in the computer's memory - this can reduce the code and improve the performance.
Good To Know: There are three ways to declare pointer variables, but the first way is mostly used*/
    return 0;
}