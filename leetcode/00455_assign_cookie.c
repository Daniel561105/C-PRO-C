//455

#include <stdio.h>

int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// this is relative to greedy because after sorting two arrays,
// cookies will always fit the child which has less requirements

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    // sort g and s
    qsort(g,gSize,sizeof(int),cmpfunc);
    qsort(s,sSize,sizeof(int),cmpfunc);
    int count = 0;
    int ptg = 0, pts = 0; 
    while (ptg < gSize && pts < sSize) {
        if (g[ptg] <= s[pts]) {
            count += 1;
            ptg++;
            pts++;
        }
        else if (g[ptg] > s[pts]) {
            pts++;
        }
    }
    return count;
}