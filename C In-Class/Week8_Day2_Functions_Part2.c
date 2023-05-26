/*
 * Michael Dekoski
 * ECE 101
 * Functions
 * 05-26-23
 */

#include <stdio.h>

// Global Variables
int iGlobal = 27;

// Function Prototypes
void mySub(void);

int main() {
    // Local Variables
    int iMain = 36;
    printf("main1: The value of iGlobal is: %d\n", iGlobal);
    printf("main2: The value of iMain is: %d\n\n", iMain);

    mySub();

    {
        int iMain = 45, iGlobal = 54;
        printf("sub1: The value of iGlobal is: %d\n", iGlobal);
        printf("sub2: The value of iMain is: %d\n\n", iMain);
        mySub();
    }

    printf("main3: The value of iGlobal is: %d\n", iGlobal);
    printf("main4: The value of iMain is: %d\n\n", iMain);
}

// Function Definitions
void mySub() {
//    int iMain = 102;
    printf("mySub1: The value of iGlobal is: %d\n", iGlobal);
//    printf("mySub2: The value of iMain is: %d\n\n", iMain);
}