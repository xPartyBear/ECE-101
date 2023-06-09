/*
 * Michael Dekoski
 * ECE 101
 * Stopwatch
 * 06-06-23
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

clock_t msec, startTime, stopTime;
int currentState = 1;
int initFirst, waitFirst, timeFirst, dispFirst, totalTime = 0;
float totalTimeSec = -1;

int main() {
    while (1) {
        switch (currentState) {
            case 0: // Shutdown State
                printf("Quitting.\n");
                Sleep(2000);
                return 0;
            case 1: // Initial State
                if (!initFirst) { // First time in this state
                    printf("I\n");
                    startTime = clock();
                    initFirst = 1;
                } else {
                    stopTime = clock();
                    totalTime = stopTime - startTime;

                    if (totalTime >= 1000) {
                        currentState = 2; // Goto Wait State
                    }
                }
                break;
            case 2: // Wait State
                if (!waitFirst) { // First time in this state
                    printf("W\n");
                    waitFirst = 1;
                } else {
                    if (GetAsyncKeyState(VK_CONTROL)) {
                        currentState = 3; // Goto Timing State
                    } else if (GetAsyncKeyState('B')) {
//                    currentState = 5; // Goto Show State
                    } else if (GetAsyncKeyState(VK_ESCAPE)) {
                        currentState = 0; // Goto Shutdown State
                    }
                    getch();
                }
                break;
            case 3: // Timing State
                if (!timeFirst) { // First time in this state
                    printf("T\n");
                    startTime = clock();
                    timeFirst = 1;
                } else {
                    if (GetAsyncKeyState(VK_CONTROL)) {
                        currentState = 4; // Goto Disp State
                        stopTime = clock();
                        totalTime = stopTime - startTime;
                    } else if (GetAsyncKeyState('B')) {
//                    currentState = 5; // Goto Show State
                    } else if (GetAsyncKeyState(VK_ESCAPE)) {
                        currentState = 0; // Goto Shutdown State
                    }
                    getch();
                }
                break;
            case 4: // Disp State
                if (!dispFirst) { // First time in this state
                    totalTimeSec = (float)totalTime / 1000;
                    printf("Total time: %5.2f\n", totalTimeSec);
                    startTime = clock();
                    dispFirst = 1;
                } else {
                    stopTime = clock();
                    totalTime = stopTime - startTime;

                    if (totalTime >= 1000) {
                        currentState = 2; // Goto Wait State
                        waitFirst = 0;
                    }
                }
                break;
        }
        Sleep(100);
    }
}