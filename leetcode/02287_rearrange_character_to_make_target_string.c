//2287

#include <stdio.h>

// at first i thought about making two hashmap, and everytime subtract the first one
// but then i find that it will ignore the duplicates
// so traverse target will be the easier way to think

int rearrangeCharacters(char* s, char* target) {
    // collect letters count in s
    int hash1[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        hash1[s[i]-'a']++;
    }
    // plus two array together, if a negative number appears, return time-1
    int count = 0;
    while (1) {
        for (int i = 0; target[i] != '\0'; i++) {
            hash1[target[i]-'a']--;
        }
        count++;
        for (int i = 0; i < 26; i++) {
            if (hash1[i] < 0) {
                return count-1;
            }
        }
    }
    return 0;
}