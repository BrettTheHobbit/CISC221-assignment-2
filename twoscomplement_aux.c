#include <stdio.h>
/*
Function will return 1 when the two's complement subtraction will not cause overflow
Will return 0 if there is overflow
*/
int subtract2sc_issafe(int x, int y) {
    int calculation  = x - y;//Gets the difference between the integers

    //We know that overflow will occur if y and the final number have different signs than x
    if (((x > 0) && (y < 0) && (calculation < 0)) || ((x < 0) && (y > 0) && (calculation > 0))) {
        return 1; //There is no overflow!
    } else {
        return 0; //There is overflow!
    }
}


