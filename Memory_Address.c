#include <stdio.h>

/*When a variable is created in C, a memory address is assigned to the variable.

The memory address is the location of where the variable is stored on the computer.

When we assign a value to the variable, it is stored in this memory address.

To access it, use the reference operator (&), and the result will represent where the variable is stored*/
int main() {
    int myAge = 43;
    printf("%p", &myAge);
    return 0;
}
/*Why is it useful to know the memory address?
Pointers are important in C, because they give you the ability to manipulate the data in the computer's memory - this can reduce the code and improve the performance.

Pointers are one of the things that make C stand out from other programming languages, like Python and Java.*/