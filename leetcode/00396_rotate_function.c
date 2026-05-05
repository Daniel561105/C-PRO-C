//396

#include <stdio.h>

int value_function(int* nums, int n) {
    int value = 0;
    for (int i = 0; i < n; i++) {
        value += nums[i]*i;
    }
    return value;
}

int maxRotateFunction(int* nums, int n) {
    int first = value_function(nums,n);
    int sum,max = -2147483648;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    for (int i = 0; i < n; i++) {
        first = first-sum+n*nums[i];
        if (max < first) {
            max = first;
        }
    }
    return max;
}