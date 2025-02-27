//2600

#include <stdio.h>

// 4 interval to consider

int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    if (k <= numOnes) return k;
    if (k <= numOnes + numZeros) return numOnes;
    if (k < numOnes + numZeros + numNegOnes) {
        int temp = k - numOnes - numZeros;
        return numOnes - temp;
    }
    return numOnes - numNegOnes;
}