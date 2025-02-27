//2697

#include <stdio.h>

char* makeSmallestPalindrome(char* s) {
    int n = strlen(s);
    int left = 0, right = n-1;
    while (left < right) {
        if (s[left] > s[right]) {
            s[left] = s[right];
        }
        else {
            s[right] = s[left];
        }
        left++;
        right--;
    }
    return s;
}