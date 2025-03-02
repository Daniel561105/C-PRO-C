//2000

#include <stdio.h>

char* reversePrefix(char* word, char ch) {
    int n = strlen(word);
    int place = -1;
    for (int i = 0; i < n; i++) {
        if (word[i] == ch) {
            place = i;
            break;
        }
    }
    if (place == -1) return word;
    for (int i = 0, j = place; i < j; i++, j--) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    return word;
}