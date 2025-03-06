//205

#include <stdio.h>
#include <stdbool.h>

// isomorphism is means two graph has the same structure
// if it is not coding i will give a function which is 1-1 to solve it
bool isIsomorphic(char* s, char* t) {
    int map1[256] = {0};
    int map2[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (map1[s[i]] != map2[t[i]]) {
            return 0;
        }
        map1[s[i]] = i+1;
        map2[t[i]] = i+1;
    }
    return 1;
}