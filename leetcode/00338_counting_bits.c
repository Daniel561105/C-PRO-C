//338

#include <stdio.h>
#include <stdlib.h>

int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int *ans = (int *)malloc((n+1)*sizeof(int));
    int k;
    ans[0] = 0;
    for (int i = 1; i < n+1; i++) {
        ans[i] = ans[i/2] + (i % 2);
    }
    return ans;
}

/*
main idea is the pattern of
0
0,1
0,1,1,2
0,1,1,2,1,2,2,3
0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4
*/