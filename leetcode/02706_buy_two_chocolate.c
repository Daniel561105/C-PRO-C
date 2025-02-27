//2706

#include <stdio.h>

// the easiest i saw so far
int cmp (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int buyChoco(int* prices, int pricesSize, int money) {
    qsort(prices,pricesSize,sizeof(int),cmp);
    int cost = prices[0] + prices[1];
    if (money >= cost) return money-cost;
    else return money;
}