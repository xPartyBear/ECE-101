/*
 * Michael Dekoski
 * ECE 101
 * Assignment 9 - Stopwatch
 * 06/05/2023
 */

// Include Statements
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

// Function Prototypes
void stopwatch(int);

// Global Variables
clock_t startTime, stopTime;
int currentState = 1;
int initFirst, waitFirst, timeFirst, dispFirst = 0;
int totalTime, savedTime = -1;

int main() {
    while (1) {
        if (currentState == 0) { // Shutdown State
            printf("Quitting.\n");
            break;
        } else if (currentState == 1) { // Initial State
            if (!initFirst) { // First time in this state
                printf("I\n");
                startTime = clock();
                initFirst = 1;
            } else {
                stopTime = clock();
                totalTime = stopTime - startTime;
            }
            if (totalTime > 1000) {
                currentState = 2; // Goto Wait State
            }
        } else if (currentState == 2) { // Wait State
            if (!waitFirst) { // First time in this state
                printf("W\n");
                waitFirst = 1;
            }
            if (GetAsyncKeyState(VK_CONTROL)) {
                currentState = 3; // Goto Timing State
            } else if (GetAsyncKeyState(VK_ESCAPE)) {
                currentState = 0; // Goto Shutdown State
            } else if (GetAsyncKeyState('B')) { // B Shows the saved time
                if (savedTime == -1) {
                    printf("--\n");
                } else {
                    stopwatch(savedTime);
                }
            }
            getch();
        } else if (currentState == 3) { // Timing State
            if (!timeFirst) { // First time in this state
                printf("T\n");
                startTime = clock();
                timeFirst = 1;
            }
            if (GetAsyncKeyState(VK_CONTROL)) {
                currentState = 4; // Goto Disp State
                stopTime = clock();
                totalTime = stopTime - startTime;
            } else if (GetAsyncKeyState(VK_ESCAPE)) {
                currentState = 0; // Goto Shutdown State
            } else if (GetAsyncKeyState('B')) {
                if (savedTime == -1) {
                    printf("--\n");
                } else {
                    stopwatch(savedTime);
                }
            }
            getch();
        } else if (currentState == 4) { // Disp State
            if (!dispFirst) { // First time in this state
                stopwatch(totalTime);
                startTime = clock();
                dispFirst = 1;
            } else {
                stopTime = clock();
                totalTime = stopTime - startTime;
            }
            if (totalTime > 1000) {
                currentState = 2; // Goto Wait State
                waitFirst = 0;
                timeFirst = 0;
                dispFirst = 0;
            }
        }
        Sleep(100);
    }
    return 0;
}

void stopwatch(int totalTimeW) {
    // Calculate the time elapsed
    savedTime = totalTime;
    float totalTimeSec = (float)totalTimeW / 1000;

    // Convert totalTimeSec to seconds and minutes
    int minutes = (int)totalTimeSec / 60;
    float seconds = totalTimeSec;
    if (minutes > 1) {
        seconds  = totalTimeSec - (minutes * 60.0);
    }
    printf("Time Elapsed: %2d:%2.2f\n", minutes, seconds);

}
