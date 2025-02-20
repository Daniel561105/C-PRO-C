//541

#include <stdio.h>

char* reverseStr(char* s, int k) {
    int n = strlen(s);
    for (int i = 0; i < n; i += 2*k) {
        int left = i;
        int right = (i+k-1 >= n) ? n-1 : i+k-1;
        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
    return s;
}


/*
abcdefg, k=8
right = 0+8-1
*/