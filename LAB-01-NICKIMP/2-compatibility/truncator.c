// PID: 730528815
// I pledge the COMP 211 honor code.
#include <stdio.h>


int main(){
    // Max characters in a line allowed
    int max = 50;
    // Var to hold input character
    char c;
    // Count of words
    int count = 0;
    // Current Line
    int curr_line = 0;
    // Total lines over 50
    int total_over_50 = 0;
    int offending_lines[100];
    // Counter for array
    int x= 0;
    // Boolean helper to mark if a line is a repeat
    int repeat = 0;


    while ((c=getchar()) != EOF) {
        if (c == '\n') {
            count = 0;
            putchar(c);
            curr_line += 1;
            repeat = 0;
        }
        else if (count < max) {
            putchar(c);
            count += 1;
        }
        else {
            if (repeat == 0 ) {
                putchar('\n');
                putchar(c);
                count = 1;
                total_over_50 += 1;
                offending_lines[x] = curr_line;
                x += 1;
                repeat = 1;
            }
            else {
                putchar('\n');
                putchar(c);
                count = 1;
            }
        }
    }

    printf("\nTotal lines over 50 chars: %d\n", total_over_50);
    printf("Offending lines: ");
        for (int i =0; i < x; i++) {
            printf("%d, ", offending_lines[i]);
        }
    
    return 0;
}