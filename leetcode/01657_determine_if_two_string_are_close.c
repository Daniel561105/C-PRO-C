//1657

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cmp (const void*a, const void*b) {
    return (*(int*)a - *(int*)b);
}

bool closeStrings(char* word1, char* word2) {
    int hash1[26] = {0};
    int hash2[26] = {0};
    for (int i = 0; word1[i] != '\0'; i++) {
        hash1[word1[i]-'a']++;
    }
    for (int i = 0; word2[i] != '\0'; i++) {
        hash2[word2[i]-'a']++;
    }
    // check if they have the same elements
    for (int i = 0; i < 26; i++) {
        if (hash1[i] > 0 && hash2[i] == 0) {
            return 0;
        }
        else if (hash2[i] > 0 && hash1[i] == 0) {
            return 0;
        }
    }
    qsort(hash1,26,sizeof(int),cmp);
    qsort(hash2,26,sizeof(int),cmp);
    for (int i = 0; i < 26; i++) {
        if (hash1[i] != hash2[i]) {
            return 0;
        }
    }    
    return 1;
}