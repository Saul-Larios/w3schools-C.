#include <stdio.h>

//Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma
void myFunction(char name[]) {
    printf("Hello %s\n", name);
}
//The following function that takes a string of characters with name as parameter. When the function is called, we pass along a name, which is used inside the function to print "Hello" and the name of each person
void MyFunction(char name[], int age){
    printf("Hello %s. You are %d years old. \n", name, age);
}
//The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int or float, etc.) instead of void, and use the return keyword inside the function
int MyFunctioN(int x) {
    return 5 + x ;
}
// This example returns the sum of a function with two parameters
int myFunction1(int x, int y){
    return x + y;
}
// You can also store the result in a variable
int myFunction2(int x, int y) {
    return x + y;
}
int main() {
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    MyFunction("Liam", 14);
    MyFunction("Jenny", 3);
    MyFunction("Anja", 30);
    printf("Result is: %d\n", MyFunctioN(3));
    printf("Result is: %d\n", myFunction1(5, 3));
    int result = myFunction2(5, 3);
    printf("Result is = %d\n", result);

    return 0;
}