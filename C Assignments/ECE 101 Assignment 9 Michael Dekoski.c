/*
 * Michael Dekoski
 * ECE 101
 * Assignment 9 - Stopwatch
 * 06/05/2023
 */

// Include Statements
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

void stopwatch(clock_t msec_start, clock_t msec_end) {
    // Calculate the time elapsed
    clock_t msec = msec_end - msec_start;

    // Convert msec to seconds and minutes
    float seconds = (float)msec / CLOCKS_PER_SEC;
    float minutes = seconds / 60;


    // Print the time elapsed
    printf("Time Elapsed: %2.0f:%2.2f\n", minutes, seconds);
}

int main() {

    clock_t msec_start, msec_end;
    int timing_start = 0, timed = 0;

    printf("I\n");
    Sleep(1000);

    do {
        if (GetAsyncKeyState(VK_CONTROL)) {
            if (!timing_start) {
                printf("T\n");
                msec_start = clock();
                timing_start = 1;
                timed = 0;
            } else {
                msec_end = clock();
                stopwatch(msec_start, msec_end);
                timing_start = 0;
                timed = 1;
            }
        }
        else if (GetAsyncKeyState(VK_ESCAPE)) {
            printf("Shutting Down\n");
            break;
        }
        else if (GetAsyncKeyState('B')) {
            if (timed) {
                stopwatch(msec_start, msec_end);
            }
            else {
                printf("--\n");
            }
        }
        else {
            Sleep(100);
        }
        getch();
    } while(1);
}