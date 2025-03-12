//746

#include <stdio.h>

int min(int a, int b) {
    return (a>b)?b:a;
}

/*
from back get dp[i] which means the cost we start from ith staircase
1,100,1,1,1,100,1,1,100,1
dp[8] = 100, dp[9] = 1
dp[7] = 1 + min(dp[8],dp[9]) = 2
dp[6] = 1 + min(dp[7],dp[8]) = 3
dp[5] = 100 + min(dp[6],dp[7]) = 103
dp[4] = 1 + min(dp[5],dp[6]) = 4
dp[3] = 1 + min(dp[4],dp[5]) = 5
dp[2] = 1 + min(dp[3],dp[4]) = 5
dp[1] = 100 + min(dp[2],dp[3]) = 105
dp[0] = 1 + min(dp[1],dp[2]) = 6
*/

int minCostClimbingStairs(int* cost, int costSize) {
    for (int i = costSize-3; i >= 0; i--) {
        cost[i] += min(cost[i+2],cost[i+1]);
    }
    return (cost[0]>cost[1])?cost[1]:cost[0];
}