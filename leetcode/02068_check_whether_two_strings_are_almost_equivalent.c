//2068

#include <stdio.h>
#include <stdbool.h>

bool checkAlmostEquivalent(char* word1, char* word2) {
    int hash1[26] = {0};
    int hash2[26] = {0};
    for (int i = 0; word1[i] != '\0'; i++) {
        hash1[word1[i]-'a']++;
    }
    for (int i = 0; word2[i] != '\0'; i++) {
        hash2[word2[i]-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (abs(hash1[i] - hash2[i]) > 3) {
            return 0;
        }
    }
    return 1;
}