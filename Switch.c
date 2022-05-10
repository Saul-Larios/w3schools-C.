#include <stdio.h>

int main(){
    int day = 4;
    switch (day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
    }
    //Outputs "Thursday" (day 4)
    switch (day){
        case 6:
            printf("Today is Saturday\n");
            break;
        case 7:
            printf("Today is Sunday\n");
        default:
            printf("Looking forward to the Weekend\n");
    }
    // Outputs "Looking forward to the Weekend"
}