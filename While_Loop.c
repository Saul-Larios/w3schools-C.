#include <stdio.h>

//The while loop loops through a block of code as long as a specified condition is true
int main() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
/*The do/while loop is a variant of the while loop. This loop will execute 
the code block once, before checking if the condition is true, then it will 
repeat the loop as long as the condition is true.*/
    i = 0;
    do{
        printf("%d\n", i);
        i++;
    }
    while (i < 5);
    return 0;
}