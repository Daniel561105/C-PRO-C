//13

#include <stdio.h>

// brute force

int romanToInt(char* s) {
    int i = strlen(s) - 1;
    int sum = 0;
    while (i >= 0) {
        int temp = 0;
        if (s[i] == 'I') {
            temp += 1;
            i -= 1;
        }
        else if (s[i] == 'V') {
            if (i-1 >= 0 && s[i-1] == 'I') {
                temp += 4;
                i -= 2;
            }
            else {
                temp += 5;
                i -= 1;
            }
        }
        else if (s[i] == 'X') {
            if (i-1 >= 0 && s[i-1] == 'I') {
                temp += 9;
                i -= 2;
            }
            else {
                temp += 10;
                i -= 1;
            }
        }
        else if (s[i] == 'L') {
            if (i-1 >= 0 && s[i-1] == 'X') {
                temp += 40;
                i -= 2;
            }
            else {
                temp += 50;
                i -= 1;
            }
        }
        else if (s[i] == 'C') {
            if (i-1 >= 0 && s[i-1] == 'X') {
                temp += 90;
                i -= 2;
            }
            else {
                temp += 100;
                i -= 1;
            }
        }
        else if (s[i] == 'D') {
            if (i-1 >= 0 && s[i-1] == 'C') {
                temp += 400;
                i -= 2;
            }
            else {
                temp += 500;
                i -= 1;
            }
        }
        else if (s[i] == 'M') {
            if (i-1 >= 0 && s[i-1] == 'C') {
                temp += 900;
                i -= 2;
            }
            else {
                temp += 1000;
                i -= 1;
            }
        }
        sum += temp;
    }
    return sum;
}

// hashmap solution

int romanToInt(char* s) {
    // try using hashmap to beat 1ms and 10.4mb
    // unfortunately it doesn't beat brute force, but it is much more readable
    int hash[26];
    hash['I'-'A'] = 1;
    hash['V'-'A'] = 5;
    hash['X'-'A'] = 10;
    hash['L'-'A'] = 50;
    hash['C'-'A'] = 100;
    hash['D'-'A'] = 500;
    hash['M'-'A'] = 1000;
    // because roman number has a rule that such as "IL" won't occur
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i+1] != '\0' && hash[s[i]-'A'] < hash[s[i+1]-'A']) {
            sum -= hash[s[i]-'A'];
        }
        else {
            sum += hash[s[i]-'A'];
        }
    }
    return sum;
}