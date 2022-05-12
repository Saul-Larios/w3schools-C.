#include <stdio.h>
#include <math.h>
/*There is also a list of math functions available, that allows you to perform mathematical tasks on numbers.

To use them, you must include the math.h header file in your program*/
void mathFunction();
int main() {
    mathFunction();
    return 0;
}
void mathFunction() {
    printf("%f\n", sqrt(16));
    printf("%f\n", ceil(1.4));
    printf("%f\n", floor(1.4));
    printf("%f\n", pow(4, 3));
}