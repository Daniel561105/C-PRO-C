//2259

#include <stdio.h>

char* removeDigit(char* number, char digit) {
    int n = strlen(number);
    int where;
    for (int i = 0; i < n; i++) {
        if (number[i] == digit) {
            where = i; // find the index of digit
            if (number[where] < number[where+1] || i == n-1) break; 
            // the first one means if the next number is bigger, then you should drop
            // the second one means there is no more element that matches digit
        }
    }
    for (int i = where; i < n; i++) number[i] = number[i+1]; 
    // replace former one including the last element of string
    return number;
}

/*
1234321 target=3
(1).124321 bigger because 4 > 3
(2).123421
*/