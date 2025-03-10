//2351

#include <stdio.h>

char repeatedCharacter(char* s) {
    int hash[26] = {0};
    char result;
    for (int i = 0; s[i] != '\0'; i++) {
        hash[s[i]-'a']++;
        if (hash[s[i]-'a'] > 1) {
            result = s[i];
            break;
        }
    }
    return result;
}