//387

#include <stdio.h>

int firstUniqChar(char* s) {
    int hash[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        hash[s[i]-'a']++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (hash[s[i]-'a'] == 1) {
            return i;
        }
    }
    return -1;
}