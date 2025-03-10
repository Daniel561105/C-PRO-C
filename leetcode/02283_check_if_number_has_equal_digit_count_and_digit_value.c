//2283

#include <stdio.h>
#include <stdbool.h>

bool digitCount(char* num) {
    // there is only going to be at most 10 elements
    int hash[10] = {0};
    for (int i = 0; num[i] != '\0'; i++) {
        hash[i] = num[i]-'0';
    }
    // now hash[i] means how many time i should appear in num
    for (int i = 0; num[i] != '\0'; i++) {
        hash[num[i]-'0']--;
    }
    for (int i = 0; i < 10; i++) {
        if (hash[i] != 0) return 0;
    }
    return 1;
}