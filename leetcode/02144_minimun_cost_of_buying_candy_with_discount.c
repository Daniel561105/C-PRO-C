//2144

#include <stdio.h>

int cmp (const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int minimumCost(int* cost, int costSize) {
    qsort(cost,costSize,sizeof(int),cmp);
    int result = 0;
    for (int i = 0; i < costSize; i++) {
        if (i % 3 != 2) {
            result += cost[i];
        }
    }
    return result;
}