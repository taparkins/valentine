#include <stdio.h>
int main() {
    int upper_bits[] = {
        10,10,12,10,10,
        7,16,6,16,7,
        5,4,12,4,2,4,12,4,5,
        4,3,4,8,4,6,4,8,4,3,4,
        3,3,3,12,3,4,3,12,3,3,3,
        2,3,3,14,3,2,3,14,3,3,2,
        2,3,3,15,6,15,3,3,2,
        1,3,3,17,4,17,3,3,1,
        1,3,3,18,2,18,3,3,1,
    };
    int a = 0;
    int i = 0;
    while (i < sizeof(upper_bits)/sizeof(int)) {
        int j = 0;
        while (j < 52) {
            int k = 0;
            while (k < upper_bits[i]) {
                if (!a) {
                    printf(" ");
                } else {
                    printf("#");
                }
                k++;
                j++;
            }
            a = !a;
            i++;
        }
        printf("\n");
        a = 0;
    }
    int lower_starts[] = { 1,2,2,3,4,5,6,8,9,11,12,14,15,17,18,19,21,22,24,25 };
    for (int ib = 0; ib < sizeof(lower_starts)/sizeof(int); ib++) {
        int jb = 0;
        while (jb < 52) {
            int start_spaces = lower_starts[ib];
            if (jb < start_spaces) {
                printf(" ");
            } else if (jb < start_spaces+3 && jb < 26) {
                printf("#");
            } else if (jb < start_spaces+6 && jb < 26) {
                printf(" ");
            } else if (jb < 26) {
                printf("#");
            } else if (jb < 46-start_spaces) {
                printf("#");
            } else if (jb < 49-start_spaces) {
                printf(" ");
            } else if (jb < 52-start_spaces) {
                printf("#");
            } else {
                printf(" ");
            }
           jb++;
        }
        printf("\n");
    }
    return 0;
}
