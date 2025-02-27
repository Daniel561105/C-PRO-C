//680

#include <stdio.h>
#include <stdbool.h>

// because it gives one extra chances, so do it two times

bool ispalindrome (char* s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

bool validPalindrome(char* s) {
    int n = strlen(s);
    int left = 0, right = n-1;
    while (left < right) {
        if (s[left] != s[right]) {
            return ispalindrome(s, left+1, right) || ispalindrome(s, left, right-1);
        }
        left++;
        right--;
    }
    return true;
}