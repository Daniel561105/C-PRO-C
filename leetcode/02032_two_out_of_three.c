//2032

#include <stdio.h>

// because the range is 1 ~ 100 so use hash[101] to collect 0~100 appear times

int* twoOutOfThree(int* nums1, int nums1Size, int* nums2, int nums2Size, int* nums3, int nums3Size, int* returnSize) {
    int hash1[101] = {0};
    int hash2[101] = {0};
    int hash3[101] = {0};
    for (int i = 0; i < nums1Size; i++) {
        hash1[nums1[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        if (hash1[i] > 0) {
            hash1[i] = 1;
        }
    }
    for (int i = 0; i < nums2Size; i++) {
        hash2[nums2[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        if (hash2[i] > 0) {
            hash2[i] = 1;
        }
    }
    for (int i = 0; i < nums3Size; i++) {
        hash3[nums3[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        if (hash3[i] > 0) {
            hash3[i] = 1;
        }
    }
    int hash[101] = {0};
    for (int i = 0; i < 101; i++) {
        hash[i] = hash1[i]+hash2[i]+hash3[i];
    }
    int count = 0;
    for (int i = 0; i < 101; i++) {
        if (hash[i] >= 2) {
            count += 1;
        }
    }
    int t = 0;
    int *result = (int*)malloc(count*sizeof(int));
    for (int i = 0; i < 101; i++) {
        if (hash[i] >= 2) {
            result[t++] = i;
        }
    }
    *returnSize = t;
    return result;
}