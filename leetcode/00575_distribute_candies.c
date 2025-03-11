//575

#include <stdio.h>
#include <stdlib.h>

int cmp (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int distributeCandies(int* candyType, int candyTypeSize) {
    int max = candyTypeSize/2;
    int dis = 1;
    qsort(candyType,candyTypeSize,sizeof(int),cmp);
    for (int i = 1; i < candyTypeSize; i++) {
        if (candyType[i] != candyType[i-1]) {
            dis++;
        }
    }
    return (max>dis)?dis:max;
}