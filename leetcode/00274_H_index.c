//274

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a); // depends on whether increase or decrease
}

int hIndex(int* citations, int citationsSize) {
    qsort(citations,citationsSize,sizeof(int),cmpfunc); // sort by big to small
    for (int i = 0; i < citationsSize; i++) {
        if (citations[i] < i+1) return i;
    }
    return citationsSize;
}

/*
[6,5,3,1,0]
[1,2,3,4,5] => h-index=3
*/

/*
[9,9,8,8,7,7,6,6,5]
[1,2,3,4,5,6,7,8,9] => h-index=6
*/

/*
[3,1,1]
[1,2,3] => h-index=2
*/