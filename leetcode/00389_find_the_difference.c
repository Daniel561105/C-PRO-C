//389

#include <stdio.h>

char findTheDifference(char* s, char* t) {
    int hash1[26] = {0};
    int hash2[26] = {0};
    // t is the string with the extra one
    for (int i = 0; s[i] != '\0'; i++) {
        hash1[s[i]-'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        hash2[t[i]-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (hash1[i] != hash2[i]) {
            return i+'a';
        }
    }
    return 0;
}