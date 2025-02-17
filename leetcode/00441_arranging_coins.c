//441

#include <stdio.h>
#include <math.h>

// runtime error when n is huge
int arrangeCoins(int n) {
    if (n == 1) return 1;
    for (int i = 0;i < n;i++) {
        if (i*(i+1)/2 < n && (i+1)*(i+2)/2 > n) {
            return i;
        }
        if (i*(i+1)/2 == n) {
            return i;
        }
    }
    return 1;
}

// binary search
// find a pattern and hope to find the best one
int arrangeCoins(int n) {
    if (n == 1) return 1;
    int up = 0, down = n;
    int result;
    while (up != down-1) {
        int middle = (up+down)/2;
        long long sum = (long long)middle*(middle+1)/2;
        if (sum > n) {
            down = middle;
        }
        if (sum < n) {
            up = middle;
        }
        if (sum == n) {
            return middle;
        }
    }
    return up;
}