// PID: 730528815
// I pledge the COMP 211 honor code.

#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if ((int) c >= 65 && (int) c <= 90) {
        putchar(c+32);
    }
    else {
        putchar(c);
    }
}
return 0;
}
