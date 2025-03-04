//1780

#include <stdio.h>
#include <stdbool.h>

bool checkPowersOfThree(int n) {
    int num1;
    while (n > 2) {
        for (int i = 1; i < 17; i++) {
            if (pow(3,i) > n) {
                num1 = i-1;
                n = n - pow(3,num1);
                if (n >= pow(3,num1)) return 0;
                break;    
            }
        }
    }    
    if (n == 2) return 0;
    else if (n == 1) return 1;
    else return 1;
}