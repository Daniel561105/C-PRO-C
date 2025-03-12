//8

#include <stdio.h>
#include <limits.h> 
// limit.h is the library of INT_MAX and INT_MIN which won't overflow

// 2^31-1 = 2147483647
// atoi is to turn string into integer
// ignore spaces

int myAtoi(char* s) {
    // remove leading zero
    while (*s == ' ') s++;
    // get sign
    int neg = 0;
    int i = 0;
    if (s[0] == '-') {
        neg = 1;
        i = 1;
        if (s[1] != '0' && s[1] != '1' && s[1] != '2' && s[1] != '3' 
            && s[1] != '4' && s[1] != '5' && s[1] != '6' && s[1] != '7' 
            && s[1] != '8' && s[1] != '9') {
                return 0;
            }
    }
    if (s[0] == '+') {
        neg = 0;
        i = 1;
        if (s[1] != '0' && s[1] != '1' && s[1] != '2' && s[1] != '3' 
            && s[1] != '4' && s[1] != '5' && s[1] != '6' && s[1] != '7' 
            && s[1] != '8' && s[1] != '9') {
                return 0;
            }
    }
    int result = 0;
    while (isdigit(s[i])) {
        int temp = s[i]-'0';
        if (result > (INT_MAX - temp) / 10) {
            return (neg) ? INT_MIN : INT_MAX;
        }
        result = 10*result + temp;
        i++;
    }
    return (neg)?-result:result;
}