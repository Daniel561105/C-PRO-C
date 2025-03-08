//2379

#include <stdio.h>
#include <string.h>

int minimumRecolors(char* blocks, int k) {
    int n = strlen(blocks) - k + 1; // how many ways will there be
    int min = 999;
    while (n > 0) {
        int count = 0;
        int i = n-1;
        int j = n-1+k;
        for (i; i < j; i++) {
            if (blocks[i] == 'W') {
                count += 1;
            }
        }
        if (count < min) {
            min = count;
        }
        n--;
    }
    return min;
}