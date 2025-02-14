//62

// combinations will cause runtime error
// so recommend to use dynamic programming

// runtime error version
int combination(int a, int b) {
    if (b == 0) return 1;
    int up = 1, down = 1;
    for (int i = 0;i < b;i++) {
        up *= (a - i);
        down *= (b - i);
    }
    return up / down;
}

int uniquePaths(int m, int n) {
    int a = m + n - 2;
    int b = n - 1;
    int result = combination(a,b);
    return result;
}

/*==============================================*/

// dynamic programming version
int uniquePaths(int m, int n) {
    
}