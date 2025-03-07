//1207

#include <stdio.h>
#include <stdbool.h>

// the appear time of each element has to be unique
int cmp (const void*a, const void*b) {
    return (*(int*)a - *(int*)b);
}
bool uniqueOccurrences(int* arr, int arrSize) {
    int hash[2001] = {0};
    for (int i = 0; i < arrSize; i++) {
        hash[arr[i]+1000]++;
    }
    int count = 0;
    for (int i = 0; i < 2001; i++) {
        if (hash[i] != 0) {
            count++;
        }    
    }
    int *check = (int*)malloc(count*sizeof(int));
    int t = 0;
    for (int i = 0; i < 2001; i++) {
        if (hash[i] != 0) {
            check[t++] = hash[i];
        }
    }
    qsort(check,count,sizeof(int),cmp);
    for (int i = 1; i < count; i++) {
        if (check[i]-check[i-1] == 0) return 0;
    }
    return 1;
}