//1402

#include <stdio.h>

int cmp (const void*a, const void*b) {
    return (*(int*)a - *(int*)b);
}

int maxSatisfaction(int* nums, int n) {
    qsort(nums,n,sizeof(int),cmp);
    int i = 0;
    int max = 0;
    while (i != n) {
        int sum = 0; 
        for (int j = i; j < n; j++) {
            sum += nums[j]*(j-i+1);
        }
        if (sum >= max) {
            max = sum;
        }
        i++;
    }
    return max;
}