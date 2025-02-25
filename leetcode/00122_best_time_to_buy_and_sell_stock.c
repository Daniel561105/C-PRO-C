//122

#include <stdio.h>

// classic problem of greedy

int maxProfit(int* prices, int pricesSize) {
    int temp = prices[0];
    int n = pricesSize;
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (temp < prices[i]) {
            profit += prices[i] - temp;
        }
        temp =  prices[i];
    }
    return profit;
}

/*
[7,1,5,3,6,4]
temp = 7
temp = 1
profit = 4, temp = 5
profit = 4, temp = 3
profit = 7, temp = 6
profit = 7, temp = 4
*/