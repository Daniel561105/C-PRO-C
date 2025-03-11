//1930

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// purpose is to find the format like 'a''b''a'

int countPalindromicSubsequence(char* s) {
    int first[26], last[26]; // to record the first appear and last appear index
    memset(first,-1,sizeof(first));
    memset(last,-1,sizeof(last));
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (first[s[i]-'a'] == -1) {
            first[s[i]-'a'] = i;
        }
        last[s[i]-'a'] = i;
    }
    for (int i = 0; i < 26; i++) {
        if (first[i] != -1 && last[i] != -1 && first[i] != last[i]) {
            int hash[26] = {0};
            for (int j = first[i]+1; j < last[i]; j++) {
                hash[s[j]-'a'] = 1;
            }
            for (int k = 0; k < 26; k++) {
                sum += hash[k];
            }
        }
    }
    return sum;
}