/*
 * Michael Dekoski
 * ECE 101
 * I/O
 * 05-23-23
 */

#include <stdio.h>

// Write to a file
//FILE *myFile;

// Read from a file
//FILE *inFile;

//int count;
//char buffer[32];

// Finding Red, Blue, and Green Circles
FILE *inFile;

unsigned int dim;

double redX, redY, bluX, bluY;
float redR, bluR;

double *pgrnX, *pgrnY;
float *pgrnR;

double grnX, grnY;
float grnR;

int count;

int main() {
    // Write to a file
//    myFile = fopen("logfile.txt", "w");
//    fprintf(myFile, "This is my log file\n");
//    fclose(myFile);

    // Read from a file
//    inFile = fopen("logfile.txt", "r");
//
//    while (count = fscanf(inFile, "%s", buffer)) {
//        if (count > 0) {
//            printf("%s", buffer);
//        }
//        if (feof(inFile)) {
//            break;
//        }
//    }
//    fclose(inFile);

    // Finding Red, Blue, and Green Circles
    char buffer[32];

    inFile = fopen("prob_in.txt","r");
    fscanf(inFile, "Dim: %u\n", &dim);
    printf("The dimension is %u\n", dim);

    fscanf(inFile, "Red XY: %lf %lf\n", &redX, &redY);
    printf("The red sphere is located at (%lf, %lf)", redX, redY);
    fscanf(inFile, "Red Radius: %f\n", &redR);
    printf(" with a radius of %f\n", redR);

    pgrnX = &grnX;
    pgrnY = &grnY;
    pgrnR = &grnR;

    fscanf(inFile, "Green XY: %lf %lf\n", pgrnX, pgrnY);
    printf("The green sphere is located at (%lf, %lf)", *pgrnX, *pgrnY);
    fscanf(inFile, "Green Radius: %f\n", pgrnR);
    printf(" with a radius of %f\n", *pgrnR);

    fgets(buffer, 32, inFile);
    sscanf(buffer, "Blue XY: %lf %lf\n", &bluX, &bluY);
    printf("The blue sphere is located at (%lf, %lf)", bluX, bluY);
    fgets(buffer, 32, inFile);
    sscanf(buffer, "Blue Radius: %f\n", &bluR);
    printf(" with a radius of %f\n", bluR);
}