
/*
Function will return 1 when the two's complement subtraction will not cause overflow
Will return 0 if there is overflow
*/
int subtract2sc_issafe(int x, int y) {
    int calculation  = x - y;

    //We know that overflow will occur if y and the final number have different signs than x
    if (((x > 0) && (y < 0) && (calculation < 0)) || ((x < 0) && (y > 0) && (calculation > 0))) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, int argv[]) {
    printf("%d\n%d",subtract2sc_issafe(-2147483648, 1), subtract2sc_issafe(-2147483648, -1));

}