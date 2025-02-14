//70

#include <stdio.h>

// in ideal situation its fine,but when i comes to a huge n,
// the combination function won't work because up or down will exceed max(int) or max(long long)
int combination(int a, int b) {
    if (b < 0 || b > a) return 0;
    if (b == 0 || b == a) return 1;
    if (b > a - b) b = a - b;  // 利用對稱性減少計算量

    int up = 1, down = 1;
    for (int i = 0; i < b; i++) {
        up *= (a - i);
        down *= (i + 1);
    }
    return up / down;
}

int climbStairs(int n) {
    int result = 0;
    for (int k = 0; k <= n / 2; k++) {  // k 是 2 步的數量
        result += combination(n - k, k);
    }
    return result;
}

/*================================================================*/

// find pattern like fibonacci
int climbStairs(int n) {
    int a = 0, b = 1, c = 0;
    for (int i = 0;i < n;i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}