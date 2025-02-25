//409

#include <stdio.h>

// palindrome => "jhgfdfghj", "rotator", "mom"

int longestPalindrome(char* s) {
    int n = strlen(s);
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j] && s[i] != '0') {
                s[j] = '0';
                s[i] = '0';
                count += 2;
            }
        }
    }
    if (count == n) return count;
    return count + 1;
}