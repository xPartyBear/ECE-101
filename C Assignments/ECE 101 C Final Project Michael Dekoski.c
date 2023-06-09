/*
 * Michael Dekoski
 * ECE 101
 * Final Project - Traffic Light
 * 06/09/23
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

// Global Variables
int currentState = 1;
clock_t startTime, totalTime;
int stateFirst = 0;

int main() {
    while(1) {
        switch(currentState) {
            case 0: // Shutdown State
                printf("Shutdown\n");
                Sleep(2000);
                return 0;
            case 1: // Initial State
                if(!stateFirst) {
                    printf("I\n");
                    startTime = clock();
                    stateFirst = 1;
                } else {
                    totalTime = clock() - startTime;
                }
                if(totalTime > 1000) { // Goto R-G State
                    currentState = 2;
                    stateFirst = 0;
                } else if(GetAsyncKeyState(VK_ESCAPE)) { // Goto Shutdown State
                    currentState = 0;
                }
                break;
            case 2: // R-G State
                if(!stateFirst) {
                    printf("R-G\n");
                    startTime = clock();
                    stateFirst = 1;
                    totalTime = 0;
                } else {
                    totalTime = clock() - startTime;
                }
                if(totalTime > 4000) { // Goto R-Y State
                    currentState = 3;
                    stateFirst = 0;
                } else if(GetAsyncKeyState(VK_ESCAPE)) { // Goto Shutdown State
                    currentState = 0;
                } else if(GetAsyncKeyState(VK_CONTROL)) {
                    currentState = 6;
                    stateFirst = 0;
                }
                break;
            case 3: // R-Y State
                if(!stateFirst) {
                    printf("R-Y\n");
                    startTime = clock();
                    stateFirst = 1;
                    totalTime = 0;
                } else {
                    totalTime = clock() - startTime;
                }
                if(totalTime > 2000) { // Goto R-Y State
                    currentState = 4;
                    stateFirst = 0;
                } else if(GetAsyncKeyState(VK_ESCAPE)) { // Goto Shutdown State
                    currentState = 0;
                } else if(GetAsyncKeyState(VK_CONTROL)) {
                    currentState = 6;
                    stateFirst = 0;
                }
                break;
            case 4: // G-R State
                if(!stateFirst) {
                    printf("G-R\n");
                    startTime = clock();
                    stateFirst = 1;
                    totalTime = 0;
                } else {
                    totalTime = clock() - startTime;
                }
                if(totalTime > 4000) { // Goto Y-R State
                    currentState = 5;
                    stateFirst = 0;
                } else if(GetAsyncKeyState(VK_ESCAPE)) { // Goto Shutdown State
                    currentState = 0;
                } else if(GetAsyncKeyState(VK_CONTROL)) {
                    currentState = 6;
                    stateFirst = 0;
                }
                break;
            case 5: // Y-R State
                if(!stateFirst) {
                    printf("Y-R\n");
                    startTime = clock();
                    stateFirst = 1;
                    totalTime = 0;
                } else {
                    totalTime = clock() - startTime;
                }
                if(totalTime > 2000) { // Goto Initial State
                    currentState = 2;
                    stateFirst = 0;
                } else if(GetAsyncKeyState(VK_ESCAPE)) { // Goto Shutdown State
                    currentState = 0;
                } else if(GetAsyncKeyState(VK_CONTROL)) { // Goto R-R State
                    currentState = 6;
                    stateFirst = 0;
                }
                break;
            case 6: // R-R State
                if(!stateFirst) {
                    printf("R-R\n");
                    startTime = clock();
                    stateFirst = 1;
                    totalTime = 0;
                } else {
                    totalTime = clock() - startTime;
                }
                if(totalTime > 1500) { // Goto Off-Off State
                    currentState = 7;
                    stateFirst = 0;
                } else if(GetAsyncKeyState(VK_ESCAPE)) { // Goto Shutdown State
                    currentState = 0;
                } else if(GetAsyncKeyState(VK_CONTROL)) { // Goto R-G State
                    currentState = 2;
                    stateFirst = 0;
                }
                break;
            case 7: // Off-Off State
                if(!stateFirst) {
                    printf("O-O\n");
                    startTime = clock();
                    stateFirst = 1;
                    totalTime = 0;
                } else {
                    totalTime = clock() - startTime;
                }
                if(totalTime > 1500) { // Goto R-R State
                    currentState = 6;
                    stateFirst = 0;
                } else if(GetAsyncKeyState(VK_ESCAPE)) { // Goto Shutdown State
                    currentState = 0;
                } else if(GetAsyncKeyState(VK_CONTROL)) { // Goto R-G State
                    currentState = 2;
                    stateFirst = 0;
                }
                break;
        }
        Sleep(100);
    }

}