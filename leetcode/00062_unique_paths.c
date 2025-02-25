//62

// combinations will cause runtime error
// so recommend to use dynamic programming

// runtime error version
/*int combination(int a, int b) {
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
*/
/*==============================================*/

// dynamic programming version (by chatgpt)
long long dp[100][100];

void compute_combinations(int max_n) {
    for (int i = 0; i <= max_n; i++) {
        dp[i][0] = dp[i][i] = 1;  
        for (int j = 1; j < i; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];  
        }
    }
}

long long count_paths(int m, int n) {
    return dp[m+n-2][n-1];
}

int uniquePaths(int m, int n) {
    compute_combinations(m + n - 2);
    return count_paths(m,n);
}
 
// by leetcode solution

int uniquePaths(int m, int n) {
    int dp[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(i == 0 || j == 0)
                dp[i][j] = 1; // up and left are all one in the beginning
    for(int i = 1; i < m; i++)
        for(int j = 1; j < n; j++)
            dp[i][j] = dp[i-1][j] + dp[i][j-1]; // pascal triangle
    return dp[m-1][n-1];    
}