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
    while(1) {
        switch(currentState) {
            case 0:
                printf("Shutting Down\n");
                Sleep(2000);
                return 0;
            case 1:
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
                break;
            case 2:
                if (!waitFirst) { // First time in this state
                    printf("W\n");
                    waitFirst = 1;
                }
                if (GetAsyncKeyState(VK_CONTROL)) {
                    getch();
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
                break;
            case 3:
                if (!timeFirst) { // First time in this state
                    printf("T\n");
                    startTime = clock();
                    timeFirst = 1;
                }
                if (GetAsyncKeyState(VK_CONTROL)) {
                    getch();
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
                break;
            case 4:
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
                break;
        }
        Sleep(100);
    }
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
