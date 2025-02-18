//121

#include <stdio.h>

// brutal force
int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    for (int i = 0; i < pricesSize; i++) {
        for (int j = 0; j < i; j++) {
            if (prices[i] - prices[j] > profit) {
                profit = prices[i] - prices[j];
            }
        }
    }
    return profit;
}

// dp
int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int min = 2147483647;
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
        }
        else if (prices[i] - min > profit) {
            profit = prices[i] - min;
        }
    }
    return profit;
}
