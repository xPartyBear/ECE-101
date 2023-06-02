/*
 * Michael Dekoski
 * ECE 101
 * Pulling Stopwatch
 * 06-02-23
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

clock_t msec;

int main() {
    while (1) {
        if (GetAsyncKeyState(VK_CONTROL)) {
            printf("Control Pressed\n");
            msec = clock();
            printf("Time: %ld\n", msec);
        }
        else if (GetAsyncKeyState(VK_ESCAPE)) {
            break;
        }
        else {
            Sleep(100);
        }
        getch();
    }
}