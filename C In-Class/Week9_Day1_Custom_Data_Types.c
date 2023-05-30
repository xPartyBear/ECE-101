/*
 * Michael Dekoski
 * ECE 101
 * Custom Data Types
 * 05-30-23
 */

#include <stdio.h>

// Global Variables
// Defining a Struct
//struct pointCharge{
//    int xCoord;
//    int yCoord;
//    float charge;
//    unsigned char rgb[3];
//};

struct mapPoint {
    float longitude;
    float latitude;
    float elevation;
};

struct mapPoint michigan[10];
struct mapPoint *current;

int main() {
    // Single Struct
//    struct pointCharge myPoint;
//    myPoint.xCoord = 200;
//    myPoint.yCoord = 300; // This is some map Coords
//    myPoint.charge = 55.6; // In Kilowatts
//    printf("The charge was %5.2f\n", myPoint.charge);

    // Array of Struct
//    struct pointCharge myPoint[3];
//    myPoint[0].xCoord = 200;
//    myPoint[0].yCoord = 300; // This is some map Coords
//    myPoint[0].charge = 55.6; // In Kilowatts
//    printf("The charge was %5.2f\n", myPoint[0].charge);

    // Struct with Pointers
    current = &michigan[0];
    michigan[0].longitude = 260.2f;
    michigan[0].latitude = 45.2f;

    michigan[1].longitude = 270.3f;
    michigan[1].latitude = 47.1f;

    printf("Current Position: %f, %f\n", (*current).longitude, current->latitude);
    current++;
    printf("Current Position: %f, %f\n", (*current).longitude, current->latitude);
}