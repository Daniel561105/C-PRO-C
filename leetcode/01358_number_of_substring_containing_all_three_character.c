//1358

#include <stdio.h>

// every substring must at least contains a b c once

// this is a brute force of O(n^2) time

int numberOfSubstrings(char* s) {
    int start = 0;
    int count = 0;
    int n = strlen(s);
    // start has to move one by one
    // find the first end for each start that contains all a,b,c
    while (start < strlen(s)-2) {
        int hash[3] = {0};
        int end = start;
        hash[s[start]-'a'] = 1;
        while (1) {
            end++;
            hash[s[end]-'a'] = 1;
            if (hash[0]+hash[1]+hash[2] == 3) {
                break;
            }
            if (end == n-1) {
                return count;
            }
        }
        count += n - end;
        start++;    
    }
    return count;
}


int numberOfSubstrings(char* s) {
    // try to use sliding window for a O(n) time
    int start = 0, end = 0, n = strlen(s), count = 0;
    int hash[3] = {0};
    while (end < n) {
        hash[s[end]-'a']++;
        while (hash[0]>0 && hash[1]>0 && hash[2]>0) {
            count += n-end;
            hash[s[start]-'a']--;
            start++;
        }
        end++;
    }
    return count;
}