#include <stdio.h>

int main(){


const int myNum = 15; //myNum will always be 15
    /*myNum = 10; // error: assigment of read-only variable 'myNum'*/

    printf("%d\n", myNum);
    // You should always declare the variable as constant when you have values that are unlikely to change
    const int minutesPerHour = 60;
    const float PI =3.14;

    printf("%d\n", minutesPerHour);
    printf("%f\n",PI);
    /*This however, will not work:
    const int minutesPerHour;
    minutesPerHour = 60; // error*/
    // Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers:
    const int BIRTHYEAR = 1980;

    printf("%d", BIRTHYEAR);
    return 0;
}