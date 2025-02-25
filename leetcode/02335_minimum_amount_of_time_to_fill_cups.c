//2335

#include <stdio.h>

// amount = [1,4,2] means we need 1 cold, 4 warm, 2 hot
int cmp (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

//always pick the most two and minus one as one move
int fillCups(int* amount, int amountSize) {
    int count = 0;
    qsort(amount,amountSize,sizeof(int),cmp);
    while (amount[1] != 0) {
        if (amount[2] > 0 && amount[1] > 0) {
            amount[1] = amount[1] - 1;
            amount[2] = amount[2] - 1;
        }
        count++;
        qsort(amount,amountSize,sizeof(int),cmp);
    }
    return count + amount[2];
}

/*
[5,4,4]
[4,3,4]
[3,3,3]
[2,2,3]
[1,2,2]
[1,1,1]
[0,0,1]
[0,0,0]
*/