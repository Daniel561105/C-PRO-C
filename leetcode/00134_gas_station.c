//134

#include <stdio.h>

int canCompleteCircuit(int* gas, int n, int* cost, int m) {
    //make gas and cost into a line instead of a cycle
    //purpose is to get back to the same gas station
    int gas_n[2*n-1];
    int cost_n[2*m-1];
    for (int i = 0; i < 2*n-1; i++) {
        gas_n[i] = gas[i%n];
    }
    for (int i = 0; i < 2*m-1; i++) {
        cost_n[i] = cost[i%m];
    }
    int subtract[2*n-1];
    for (int i = 0; i < 2*n-1; i++) {
        subtract[i] = gas_n[i]-cost_n[i];
    }
    //sum it from a point for n elements and it can't be smaller than 0 for once
    int total = 0,sum = 0,start = 0;
    for (int i = 0; i < n; i++) {
        total += subtract[i];
        sum += subtract[i];
        if (sum <0) {
            start = i+1;
            sum = 0;
        }
    }
    if (total < 0) return -1;
    return start;
}