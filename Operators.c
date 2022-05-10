#include <stdio.h>

int main(){
    //In the example below, we use the + operator to add together two values
    int myNum = 100 + 50;
    printf("%d\n",myNum);
    /*Although the + operator is often used to add together two values, like in
    the example above, it can also be used to add together a variable and a 
    value, or a variable and another variable*/
    int sum1 = 100 + 50; //150(100 + 50)
    int sum2 = sum1 + 250; //400 (150 + 250)
    int sum3 = sum2 + sum2; //800 (400 + 400)

    printf("%d\n",sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);

    //The addition assignment operator (+=) adds a value to a variable:
    int x = 10;
    x += 5;
    printf("%d\n", x);

    //The return value of a comparison is either true (1) or false (0)
    int x1 = 5;
    int y1 = 3;
    printf("%d\n", x1 > y1); //return 1 (true) because 5 is greater than 3
    
    //The memory size (in bytes) of a data type or a variable can be found with the sizeof operator
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu bytes\n", sizeof(myInt));
    printf("%lu bytes\n", sizeof(myFloat));
    printf("%lu bytes\n", sizeof(myDouble));
    printf("%lu bytes\n", sizeof(myChar));
    return 0;
}