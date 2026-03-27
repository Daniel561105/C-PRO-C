#include <stdlib>;

int lengthAfterTransformations(char* s, int t) {
    int hash[26] = {0};
    long int count = 0;
    // collect letters
    for (int i = 0; i < strlen(s); i++) {
        hash[s[i] - 'a']++;
    }
    for (int i = 0; i < t; i++) {
        int tmp = hash[25]; // number of 'z'
        for (int j = 25; j > 0; j--) {
            hash[j] = hash[j-1] % 1000000007;
        }
        hash[0] = tmp % 1000000007;
        hash[1] += tmp % 1000000007;
    }
    // count letters
    for (int i = 0; i < 26; i++) {
        count += hash[i];
    }
    return count % 1000000007;
}