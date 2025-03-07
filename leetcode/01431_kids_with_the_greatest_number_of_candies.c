//1431

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* result = (bool*)malloc(candiesSize*sizeof(bool));
    *returnSize = candiesSize;
    int max = -1;
    for (int i = 0; i < candiesSize; i++) {
        if (max < candies[i]) {
            max = candies[i];
        }
    }
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i]+extraCandies >= max) {
            result[i] = 1;
        }
        else {
            result[i] = 0;
        }
    }
    return result;
}