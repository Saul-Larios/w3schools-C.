#include <stdio.h>

//The break statement can also be used to jump out of a loop
int main() {
    int i;

    for (i = 0; i < 10; i++) {
        if(i == 4) {
            break;
        }
        printf("%d\n", i); //This example jumps out of the loop when i is equal to 4
    }
    printf("\n");
//The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d\n", i);//This example skips the value of 4
    }
    printf("\n");
    //You can also use break and continue in while loops
    i = 0;
    while (i < 10) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    printf("\n");
    i = 0;
    while (i < 10) {
        i++;
        if (i == 4) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
    
}