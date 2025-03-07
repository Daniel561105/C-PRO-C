//2103

#include <stdio.h>

int countPoints(char* rings) {
    int hash[30] = {0};
    for (int i = 0; rings[i] != '\0'; i += 2) {
        if (rings[i] == 'R') {
            hash[rings[i+1]-'0'] += 1;
        }
        else if (rings[i] == 'B') {
            hash[rings[i+1]-'0'+10] += 1;
        }
        else if (rings[i] == 'G') {
            hash[rings[i+1]-'0'+20] += 1;
        }
    }
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (hash[i] > 0 && hash[i+10] > 0 && hash[i+20] > 0) {
            count += 1;
        }
    }
    return count;
}