//605

#include <stdio.h>
#include <stdbool.h>

// if there is flower, go two step
// if +1 has flower, go three step
// if no flower, plant a flower and go two step

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int len = flowerbedSize;
    int i = 0;
    int before = 0;
    for (int k = 0; k < len; k++) {
        if (flowerbed[k] == 1) {
            before += 1;
        }
    }
    int count = 0;
    while (i < len) {
        if (flowerbed[i] == 1) {
            i += 2;
        }

        else if (i+1 < len && flowerbed[i+1] == 1) { 
        // because i+1 will out of bounds if pointer is at the last element, so we give a constraint
            i += 3;
        }
        else if (flowerbed[i] == 0) {
            flowerbed[i] = 1;
            i += 2;
        }
        count += 1;
    }
    return (count - before >= n) ? 1 : 0;
}