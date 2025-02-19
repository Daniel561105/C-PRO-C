//238

#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int n = numsSize;
    int *answer = (int *)malloc(n*sizeof(int));
    int ldp[n], rdp[n]; // prefix and suffix product (by hint)
    ldp[0] = nums[0], rdp[0] = nums[n-1];
    for (int i = 1; i < n; i++) {
        ldp[i] = ldp[i-1] * nums[i];
    }
    for (int j = 1; j < n; j++) {
        rdp[j] = rdp[j-1] * nums[n-j-1];
    }
    // assume there is 10 numbers, answer[5] = nums[0x1x2x3x4]*nums[6x7x8x9] = ldp[4]*rdp[3]
    answer[0] = rdp[n-2];
    answer[n-1] = ldp[n-2];
    for (int k = 1; k < n-1; k++) { 
        answer[k] = ldp[k-1] * rdp[n-1-k-1];
    }
    *returnSize = n; // always forgot this
    return answer;
}

// as long as there is not morethan two nest loop, time complexity will be n
// [1,2,3,4]
// ldp[0]=1
// ldp[1]=2
// ldp[2]=6
// ldp[3]=24
// rdp[0]=4
// rdp[1]=12
// rdp[2]=24
// rdp[3]=24