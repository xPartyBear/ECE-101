/*
 * Michael Dekoski
 * ECE 101
 * Assignment 8 Program 2 - Math and Flow Control
 * 05/30/2023
 */

// Include Statements
#include <stdio.h>

// Global Variables
int picture0[5][5] = { {0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0},
                       {0,0,0,0,0}};
int picture1[5][5] = {{1,1,1,1,1},
                       {1,1,1,1,1},
                       {1,1,1,1,1},
                       {1,1,1,1,1},
                       {1,1,1,1,1}};

int main() {

    int input;
    do {
        // Prompt User for Input
        printf("Enter 0 or 1 for a picture, or 2 to quit: ");
        scanf("%d", &input);

        switch(input){
            case 0: // Print Picture 0
                for(int i = 0; i < 5; i++) {
                    for(int j = 0; j < 5; j++) {
                        printf("%d", picture0[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 1: // Print Picture 1
                for(int i = 0; i < 5; i++) {
                    for(int j = 0; j < 5; j++) {
                        printf("%d", picture1[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2: // Quit Program
                return 0;
            default: // Invalid Input
                printf("Option not valid.\n");
        }
    } while(1);

}