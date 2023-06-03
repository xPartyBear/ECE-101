/*
 * Michael Dekoski
 * ECE 101
 * Assignment 8 Program 1 - Math and Flow Control
 * 06/03/2023
 */

// Include Statements
#include <stdio.h>

int main() {
    // Variables for Equation 1: BMI = weight(kg) / (height(m))^2
    float weight = 70; // in kg
    float height = 1.75; // in meters
    float bmi;

    // Equation 1 Calculation
    bmi = weight / (height * height);

    // Print the result of Equation 1
    printf("The calculated Body Mass Index (BMI) is: %.2f\n", bmi);

    // Variables for Equation 2: C = (F - 32) * 5/9
    float fahrenheit = 98; // in degrees Fahrenheit
    float celsius;

    // Equation 2 Calculation
    celsius = (fahrenheit - 32) / 1.8000;

    // Print the result of Equation 2
    printf("The converted temperature in Celsius is: %.2f degrees.\n", celsius);

    return 0;
}