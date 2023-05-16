/*
 * Michael Dekoski
 * ECE 101
 * Arrays and Flow Control
 * 05-16-23
 */

#include <stdio.h>
#include <stdlib.h>

// Global Vars
//const char CELSIUS = 0;
//const char FAHRENHEIT = 1;
//
//char cel[] = "Celsius";
//char fah[] = "Fahrenheit";
//
//float temp;
//char scale;

//int squared = 24;
//int n = 0;
//int temp = 0;

//double numbers[] = {109.3, 73, 1, -9.6};
//int length = sizeof(numbers)/sizeof(double);

int main() {

    // If Statement
//    temp = 110;
//    //scale = FAHRENHEIT;
//    scale = CELSIUS;
//
//    if (scale == CELSIUS && temp < 0.0 || scale == FAHRENHEIT && temp < 32.0) {
//        printf("Water is ice");
//    } else if (scale == CELSIUS && temp > 100.0 || scale == FAHRENHEIT && temp > 212.0) {
//        printf("Water is steam");
//    } else {
//        printf("Water is liquid");
//    }
//    printf(" at %0.2f degrees %s\n", temp, scale == CELSIUS ? cel : fah);

    // While Loop
//    while (temp < squared) {
//        temp = temp + n + n + 1;
//        n++;
//    }
//    n--;
//    printf("The square root of %d is %d\n", squared, n);

    // For Loop
//    for (int i = 0; i<length; i++) {
//        printf("%5.2f\n", numbers[i]);
//    }

    // Switch Statement
    char myChar = 'M';
    switch (myChar) {
        case 'Y':
            printf("%c is sometimes a vowel\n", myChar);
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel\n", myChar);
            break;
        default:
            printf("%c is not a vowel\n", myChar);
            break;
    }

    return 0;
}
