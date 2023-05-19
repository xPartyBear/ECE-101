/*
 * Michael Dekoski
 * ECE 101
 * Pointeres
 * 05-19-23
 */

#include <stdio.h>
#include <stdlib.h>

// Global Vars

int main() {
//    int var1 = 27;
//    int var2 = 36;
//    int var3 = 45;
//    int* ptr;
//
//    ptr = &var1;
//
//    printf("ptr value: %p\n", ptr);
//    printf("&ptr address: %p\n", &ptr);
//    printf("*ptr value: %d\n", *ptr);
//
//    ptr = &var2;
//
//    printf("ptr value: %p\n", ptr);
//    printf("&ptr address: %p\n", &ptr);
//    printf("*ptr value: %d\n", *ptr);
//
//    ptr = &var3;
//
//    printf("ptr value: %p\n", ptr);
//    printf("&ptr address: %p\n", &ptr);
//    printf("*ptr value: %d\n", *ptr);

    int arr[] = {2,4,6,8,10};
    int* ptr;
    int i;
    int length;

    length = sizeof(arr)/sizeof(int);

    ptr = &arr[0];

    printf("Int is %d bytes\n", sizeof(int));

    for (i=0; i<length; i++) {
        printf("address of arr[%d] is %p\n", i, &arr[i]);
        printf("ptr has value %p\n", ptr);
        printf("arr[%d] has value %d and *ptr points to %d\n", i, arr[i], *ptr);
        ptr++;
    }
}