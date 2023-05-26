/*
 * Michael Dekoski
 * ECE 101
 * Functions
 * 05-26-23
 */

#include <stdio.h>

// Function Prototypes
float findMax(float*, int);

int main() {

    float fArray[] = {3.14, 4.567, 1.552, 2.781, 500.2};
    int length = sizeof(fArray)/sizeof(float);
    float max;

    max = findMax(fArray, length);

    printf("The max value is %5.2f\n", max);
}

// Function Definitions

// Returns the max value in an array
float findMax(float* fArray, int length) {
    float fMax = fArray[0];
    for (int i = 1; i < length; i++) {
        fMax = fArray[i] > fMax ? fArray[i] : fMax;
    }
    return fMax;
}