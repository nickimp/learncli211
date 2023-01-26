#include <stdio.h>

int main (){
    int max = 50;
    char c;
    int count = 0;

    while ((c=getchar()) != EOF) {
        if (c=='\n') {
            count = 0;
            putchar(c);
        }
        else if (count < max) {
            putchar(c);
            count++;
        }
        else {
            putchar('\n');
            putchar(c);
            count = 1;
        }

    }
    return 0;

}