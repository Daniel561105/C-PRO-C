//1768

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
w1 = "aabbc"
w2 = "ppppp"
=> "apapbpbpcp"
*/

// try two pointer

char * mergeAlternately(char * word1, char * word2) {
    int len1 = strlen(word1),len2 = strlen(word2);
    int i = 0,j = 0,k = 0;
    int maxlen = len1 + len2;
    char *result = (char *)malloc((maxlen+1)*sizeof(char));
    // put word1[i] and word2[j] into result by order
    while (i < len1 || j < len2) {
        if (i < len1) result[k++] = word1[i++];
        if (j < len2) result[k++] = word2[j++];
    }
    result[k] = '\0';
    return result;
}

int main() {
    char *a = "aaaaa";
    char *b = "bbccddee";
    char *answer = mergeAlternately(a,b);
    printf("%s",answer);
    return 0;
}
    