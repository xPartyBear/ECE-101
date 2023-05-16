/*
 * Michael Dekoski
 * ECE 101
 * Intro to C and Math
 * 05-12-23
 */

#include <stdio.h>

int num1;
float num2;
unsigned int num3;

int main() {
    num1 = 3+4;
    num2 = 4.0/3;
    num3 = -1000000;
    printf("The answer to 3 + 4 is: %d"
           "\nThe answer to 4 / 3 is: %0.2f\n", num1, num2);
    printf("The answer is: %u\n", num3);
    return 0;
}
