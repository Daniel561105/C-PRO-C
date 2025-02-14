//258

#include <stdio.h>

// add_every_digit(5678) => 5+6+7+8 = 26 
int add_every_digit(int num) {
    int a = 0;
    while (num > 0) {
        a += num % 10;
        num /= 10;
    }
    return a;
}

int addDigits(int num) {
    
    while (num > 9) {
        num = add_every_digit(num);
    }
    return num;
}