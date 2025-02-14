//263

#include <stdio.h>
#include <stdbool.h>

// instead of finding the answer,it will be easier by operating the given n

// brutal force  (time limit exceed)
bool isUgly(int n) {
    if (n <= 0) return 0;
    int huge = 99;
    for (int i = 0;i < huge;i++) {
        for (int j = 0;j < huge;j++) {
            for (int k = 0;k < huge;k++) {
                if (n == pow(2,i) * pow(3,j) * pow(5,k)) return 1;
            }
        }
    }
    return 0;
}

// math 
bool isUgly(int n) {
    if (n <= 0) return 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            continue;
        }
        if (n % 3 == 0) {
            n = n / 3;
            continue;
        }
        if (n % 5 == 0) {
            n = n / 5;
            continue;
        }
        if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0) return 0;
    }
    return 1;
}