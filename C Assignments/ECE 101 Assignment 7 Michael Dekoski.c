/*
 * Michael Dekoski
 * ECE 101
 * Assignment 7 - Compilers and Math
 * 05/28/2023
 */

// Include Statements
#include <stdio.h>

int main() {
    // Part 4a
    printf("Part 4a\n");
    printf("The unsigned int format character is '%%u'.\n\n");
    // %% is the escape sequence for % in printf, instead of using \%


    // Part 7 - Surface Area of a Sphere
    float radius = 5.96; // Radius in inches
    float surfaceArea; // Surface Area in square inches

    // Calculate the Surface Area of a Sphere
    // Surface Area = 4 * pi * r^2
    surfaceArea = 4 * 3.14 * radius * radius;

    // Print the Surface Area of a Sphere
    printf("Part 7\n");
    printf("The Surface Area of a Sphere with a radius of %0.2f is %0.2f.\n", radius, surfaceArea);
    return 0;
}
