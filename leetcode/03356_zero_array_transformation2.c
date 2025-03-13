//3356

#include <stdio.h>
#include <stdbool.h>

// queries[i][0] means start of index, queries[i][1] means end of index
// queries[i][2] means the most value it can minus

// my solution is kind of brute force but optimize by difference array
// unfortunately it still reach tle, after 3 hours of attemp, I give up and find a solution

bool iszero(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) return false;
    }
    return true;
}

int minZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    // purpose is to make it a zero array or return -1 if can't
    if (iszero(nums, numsSize)) return 0;
    int* diff = (int*)calloc(numsSize+1,sizeof(int));
    int count = 0;
    for (int i = 0; i < queriesSize; i++) {
        int L = queries[i][0], R = queries[i][1], val = queries[i][2];

        diff[L] -= val; // make the beginning minus val
        if (R + 1 < numsSize) {
            diff[R + 1] += val;
        } // make the next of end to original

        
        // Difference array
        // give a array like [3,0,0,-3,0,0]
        // which means the first three element is going to add 3
        // while the last three are going to minus 3
        // sum += diff[j] makes it [3,3,3,0,0,0]

        int sum = 0;
        bool isZeroArray = true;
        for (int j = 0; j < numsSize; j++) {
            sum += diff[j]; 
            if (nums[j] + sum > 0) { 
                isZeroArray = false;
                break;
            }
        }

        if (isZeroArray) {
            free(diff);
            return i + 1;
        }
    }    
    free(diff);
    return -1;
}

// just to mentioned that this is not my solution

int minZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* aa) {
    // Line Sweep
    // TC: O(n + q), SC: O(n)
    int n = numsSize;
    int q = queriesSize;
    
    int k = 0;
    int decrementSum = 0;
    int* decrement = (int*)calloc(n + 1, sizeof(int)); // make a all 0 array of size numsSize+1

    for (int i = 0; i < n; ++i) {
        // Use up queries until nums[i] is 0
        while (decrementSum + decrement[i] < nums[i]) {
            // No more remaining queries
            if (k == q) // have finish every operations
                return -1;
            
            int l = queries[k][0];
            int r = queries[k][1];
            int val = queries[k][2];
            k++;

            if (l < i && i <= r + 1) {
                decrementSum += val;
            } else {
                decrement[l] += val;
            }
            decrement[r + 1] -= val;
        }

        decrementSum += decrement[i];
    }

    free(decrement);  // Free dynamically allocated memory
    return k;
}