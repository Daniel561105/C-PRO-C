#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// give [1,2,3] output 6 kinds of permutations

int main() {
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            for (int k = 1; k < 4; k++) {
                if (i != j && i != k && j != k) {
                    printf("[%d%d%d]\n",i,j,k);
                }
            }
        }
    }
    return 0;
}