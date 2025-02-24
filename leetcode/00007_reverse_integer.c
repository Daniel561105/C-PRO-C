//7

#include <stdio.h>
#include <math.h>

// 2^31 = 2147483648
// a smart way to reverse integer instead of getting digits

int reverse(int x){
    long int reverse = 0;
    long int result = 0;
    if (x < 10 && x > -10) return x;
    while (x != 0) {
        reverse = x % 10;
        result = 10 * result + reverse;
        x = x / 10;
        if (result < -2147483648 || result > 2147483648) return 0;
    }
    return result;
}

/*
123 % 10 = 3
12 % 10 = 2
1 % 10 = 1
10*(3*10 + 2)+1
*/