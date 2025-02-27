//860

#include <stdio.h>
#include <stdbool.h>

bool lemonadeChange(int* bills, int billsSize) {
    int count5 = 0, count10 = 0;
    int i = 0;
    int n = billsSize;
    while (i < n) {
        if (bills[i] == 5) {
            count5 += 1;
        }
        if (bills[i] == 10) {
            count5 -= 1;
            count10 += 1;
        }
        if (bills[i] == 20) {
            if (count10 >= 1) {
                count5 -= 1;
                count10 -= 1;
            }
            else {
                count5 -= 3;
            }
        }
        if (count5 < 0 || count10 < 0) return false;
        i++;
    }
    return true;
}