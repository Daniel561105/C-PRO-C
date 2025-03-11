//3330

#include <stdio.h>

int possibleStringCount(char* word) {
    int start = 1;
    int count = 1;
    while (start < strlen(word)) {
        if (word[start] == word[start-1]) {
            count++;
        }
        start++;
    }
    return count;
}