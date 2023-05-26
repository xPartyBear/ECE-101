/*
 * Michael Dekoski
 * ECE 101
 * Functions
 * 05-26-23
 */


#include <stdio.h>
//#include "Week8_Day2_Functions_Part1.h"
#include "Week8_Day2_myFunctions_Part1.c"

// Function Prototypes
//int simpleMath(int, int, int);


int main() {
    // Local Variables
    int var1 = 3, var2 = 4;
    int ans;

    // This function passes data by value
    ans = simpleMath(var1, var2, 5);

    printf("The answer is: %d\n", ans);
}

// Function Definitions
//int simpleMath(int input1, int input2, int input3) {
//    return input1 * input2 + input3;
//}