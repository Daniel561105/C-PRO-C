//349

#include <stdio.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int n = (nums1Size > nums2Size)?nums1Size:nums2Size;
    int* result = (int*)malloc(n*sizeof(int));
    int t = 0;
    int hash[1001] = {0};
    for (int i = 0; i < nums1Size; i++) {
        if (hash[nums1[i]] == 0) {
            hash[nums1[i]] = 1;
        }
    }
    for (int i = 0; i < nums2Size; i++) {
        if (hash[nums2[i]] == 1) {
            result[t++] = nums2[i];
            hash[nums2[i]] = 0;
        }
    }
    *returnSize = t;
    return result;
}