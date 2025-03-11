//500

#include <stdio.h>
#include <stdbool.h>

// find the words that every letter is in the same row
// 'A' is 65, 'a' is 97, 97-65=32
char** findWords(char** words, int wordsSize, int* returnSize) {
    int hash[26] = {2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
    bool sameline = true;
    char** result = (char**)malloc(sizeof(char*)*wordsSize);
    int t = 0;
    for (int i = 0; i < wordsSize; i++) {
        sameline = true;
        for (int j = 0; j < strlen(words[i])-1; j++) {
            if (hash[(words[i][j]-'A')%32] != hash[(words[i][j+1]-'A')%32]) {
                sameline = false;
                break;
            }
        }
        if (sameline) {
            result[t++] = words[i];
        }
    }
    *returnSize = t;
    return result;
}