//1974

#include <stdio.h>

int minTimeToType(char* word) {
    int write = strlen(word);
    int result;
    if (abs('a' - word[0]) >= 13) {
        result = 26 - abs('a' - word[0]);
    }
    else {
        result = abs('a' - word[0]);
    }

    for (int i = 0; i < write-1; i++) {
        int temp = abs(word[i] - word[i+1]);
        if (temp >= 13) {
            temp = 26 - temp;
        }
        result += temp;
    }
    return result + write;
}