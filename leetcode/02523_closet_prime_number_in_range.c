//2523

#include <stdio.h>
#include <stdbool.h>

// figure whether is prime or not
bool isprime (int n) {
    if (n == 0 || n == 1) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int* collect_prime (int n, int m, int *prime_count) {
    // this will output a array of prime numbers in [n,m]
    int *result = (int*)malloc((m-n)*sizeof(int));
    int j = 0;
    for (int i = n; i <= m; i++) {
        if (isprime(i)) {
            result[j++] = i;
        }
    }
    *prime_count = j;
    return result;
}

int* closestPrimes(int left, int right, int* returnSize) {
    // int *nums = (int*)malloc((right-left+1)*sizeof(int));
    int count = 0;
    int *nums = collect_prime(left, right, &count); 
    // now nums has all prime number in [left, right]
    *returnSize = 2;
    
    if (count < 2) {
       free(nums);
        int* no = (int*)malloc(2 * sizeof(int));
        no[0] = -1;
        no[1] = -1;
        return no;
    }
    int min = 1000000-1;
    int record;
    for (int i = count-1; i >= 1; i--) {
        if (min >= nums[i] - nums[i-1]) {
            min = nums[i] - nums[i-1];
            record = i-1;
        }
    }
    int *result = (int*)malloc(2*sizeof(int));
    result[0] = nums[record];
    result[1] = nums[record+1];
    return result;
}