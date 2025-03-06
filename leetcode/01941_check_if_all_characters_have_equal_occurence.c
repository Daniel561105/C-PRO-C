//1941

#include <stdio.h>
#include <stdbool.h>

bool areOccurrencesEqual(char* s) {
    // there are 26 letters in the whole alphebet
    int hash[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        hash[s[i]-'a']++;
    }
    int freq;
    for (int i = 0; i < 26; i++) {
        if (hash[i] != 0) {
            freq = hash[i];
            break;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (hash[i] != 0 || hash[i] != freq) {
            return 0;
        }
    }
    return 1;
}