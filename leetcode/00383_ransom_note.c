//383

#include <stdio.h>
#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int hash[26] = {0};
    for (int i = 0; magazine[i] != '\0'; i++) {
        hash[magazine[i]-'a']++;
    }
    for (int i = 0; ransomNote[i] != '\0'; i++) {
        hash[ransomNote[i]-'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (hash[i] < 0) return 0;
    }
    return 1;
}